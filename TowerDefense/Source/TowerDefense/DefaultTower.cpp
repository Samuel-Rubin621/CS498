// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultTower.h"
#include "Components/SphereComponent.h"
#include "DefaultEnemy.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "DefaultProjectile.h"
#include "TimerManager.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "TowerDefenseGameMode.h"
#include "UI/ScreenOverlay.h"


// Sets default values
ADefaultTower::ADefaultTower()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	RootComponent = TowerMesh;
	TowerRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TowerRangeSphere"));
	TowerRangeSphere->SetupAttachment(GetRootComponent());
	TowerRangeSphere->SetSphereRadius(1000.f);
	FiringLocation = CreateDefaultSubobject<USphereComponent>(TEXT("FiringLocation"));
	FiringLocation->SetupAttachment(GetRootComponent());

	Damage = 100;
	FireDamageChance = 0;
	FireRate = 100.f;

	bNoOverlappingEnemies = true;
	bReloading = false;
}

// Called when the game starts or when spawned
void ADefaultTower::BeginPlay()
{
	Super::BeginPlay();

	AActor::SetFolderPath("Towers");

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();

	TowerRangeSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapBegin);
	TowerRangeSphere->OnComponentEndOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapEnd);
	OnClicked.AddDynamic(this, &ADefaultTower::TowerSelected);

	TowerTargeting = ETowerPositionTargeting::TPT_First;
	bMoreThanOneOverlappingEnemy = false;
}

// Called every frame
void ADefaultTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentTargetEnemy)
	{
		if (TowerTargeting == ETowerPositionTargeting::TPT_First || TowerTargeting == ETowerPositionTargeting::TPT_Last)
		{
			GetNewTarget();
		}

		FRotator LookAtRotation = FRotator(0.f, UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTargetEnemy->GetActorLocation()).Yaw - 90.f, 0.f);
		SetActorRotation(LookAtRotation, ETeleportType::None);

		if (!bReloading)
		{
			Shoot();
		}
	}
	else if (!bNoOverlappingEnemies)
	{
		GetNewTarget();
	}
}

void ADefaultTower::OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!CurrentTargetEnemy)
	{
		ADefaultEnemy* NewTargetEnemy = Cast<ADefaultEnemy>(OtherActor);
		if (NewTargetEnemy)
		{
			CurrentTargetEnemy = NewTargetEnemy;
		}
	}
	else
	{
		ADefaultEnemy* PossibleNewTarget = Cast<ADefaultEnemy>(OtherActor);
		if (PossibleNewTarget)
		{
			switch (TowerTargeting)
			{
			case ETowerPositionTargeting::TPT_Strongest:
				if (PossibleNewTarget->EnemyMaxHealth > CurrentTargetEnemy->EnemyMaxHealth)
				{
					CurrentTargetEnemy = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Weakest:
				if (PossibleNewTarget->EnemyMaxHealth < CurrentTargetEnemy->EnemyMaxHealth)
				{
					CurrentTargetEnemy = PossibleNewTarget;
				}
				break;
			default:
				;
			}
		}
	}
	bNoOverlappingEnemies = false;
}

void ADefaultTower::OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (CurrentTargetEnemy)
	{
		ADefaultEnemy* ExitingEnemy = Cast<ADefaultEnemy>(OtherActor);
		if (ExitingEnemy)
		{
			if (ExitingEnemy == CurrentTargetEnemy)
			{
				CurrentTargetEnemy = nullptr;
				GetNewTarget();
			}
		}
	}

}

void ADefaultTower::GetNewTarget()
{
	TArray<AActor*> OverlappingEnemies;
	GetOverlappingActors(OverlappingEnemies, ADefaultEnemy::StaticClass());

	if (OverlappingEnemies.Num() == 0)
	{
		bNoOverlappingEnemies = true;
	}
	else if (OverlappingEnemies.Num() == 1)
	{
		ADefaultEnemy* NewTargetEnemy = Cast<ADefaultEnemy>(OverlappingEnemies[0]);
		if (NewTargetEnemy)
		{
			CurrentTargetEnemy = NewTargetEnemy;
		}
	}
	else if (OverlappingEnemies.Num() > 1)
	{
		ADefaultEnemy* NewTarget = Cast<ADefaultEnemy>(OverlappingEnemies[0]);
		for (int i = 1; i < OverlappingEnemies.Num(); i++)
		{
			ADefaultEnemy* PossibleNewTarget = Cast<ADefaultEnemy>(OverlappingEnemies[i]);

			switch (TowerTargeting)
			{
			case ETowerPositionTargeting::TPT_First:
				if (PossibleNewTarget->EnemyAIController->Distance > NewTarget->EnemyAIController->Distance)
				{
					NewTarget = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Last:
				if (PossibleNewTarget->EnemyAIController->Distance < NewTarget->EnemyAIController->Distance)
				{
					NewTarget = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Strongest:
				if (PossibleNewTarget->EnemyMaxHealth > NewTarget->EnemyMaxHealth)
				{
					NewTarget = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Weakest:
				if (PossibleNewTarget->EnemyMaxHealth < NewTarget->EnemyMaxHealth)
				{
					NewTarget = PossibleNewTarget;
				}
				break;
			default:
				break;
			}
		}
		CurrentTargetEnemy = NewTarget;
	}
}

void ADefaultTower::Shoot()
{
	if (Projectile)
	{
		if (ShootingSound)
		{
			UGameplayStatics::PlaySound2D(this, ShootingSound);
		}
		bReloading = true;

		bool bApplyFireDamage = false;
		if (FMath::RandRange(0, 100) >= 100 - FireDamageChance) bApplyFireDamage = true;

		

		FTransform SpawnLocation = FTransform(FiringLocation->GetComponentLocation());
		ADefaultProjectile* SpawnedProjectile = GetWorld()->SpawnActorDeferred<ADefaultProjectile>(Projectile, SpawnLocation);
		SpawnedProjectile->Initialize(Damage, CurrentTargetEnemy->EnemyBodyCollision->GetComponentLocation(), bApplyFireDamage);
		SpawnedProjectile->FinishSpawning(SpawnLocation);

		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ADefaultTower::ReloadingDone, float(200 / FireRate), false, -1.f);
	}
}

void ADefaultTower::TowerSelected(AActor* TouchedActor, FKey ButtonPressed)
{
	UScreenOverlay* ScreenOverlay = GameMode->ScreenOverlay;
	ScreenOverlay->PurchasePanel->SetVisibility(ESlateVisibility::Hidden);
	ScreenOverlay->TowerPanel->SetupTowerWidgetInformation(this);
	ScreenOverlay->TowerPanel->SetVisibility(ESlateVisibility::Visible);
}
