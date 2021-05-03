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

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>("TowerMesh");
	RootComponent = TowerMesh;

	TowerRangeSphere = CreateDefaultSubobject<USphereComponent>("TowerRangeSphere");
	TowerRangeSphere->SetupAttachment(GetRootComponent());

	FiringLocation = CreateDefaultSubobject<USphereComponent>("FiringLocation");
	FiringLocation->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ADefaultTower::BeginPlay()
{
	Super::BeginPlay();

	AActor::SetFolderPath("Towers");

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();

	TowerRangeSphere->SetSphereRadius(Range);
	TowerRangeSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapBegin);
	TowerRangeSphere->OnComponentEndOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapEnd);
	OnClicked.AddDynamic(this, &ADefaultTower::TowerSelected);

	TowerTargeting = ETowerPositionTargeting::TPT_First;
	bMoreThanOneOverlappingEnemy = false;
	bNoOverlappingEnemies = true;
	bReloading = false;
}

// Called every frame
void ADefaultTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentTargetEnemy)
	{
		if (TowerTargeting == ETowerPositionTargeting::TPT_First || TowerTargeting == ETowerPositionTargeting::TPT_Last)
		{
			// Constantly check to see if the targeted enemy needs to change
			GetNewTarget();
		}

		FRotator LookAtRotation = FRotator(0.f, UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTargetEnemy->GetActorLocation()).Yaw - 90.f, 0.f);
		SetActorRotation(LookAtRotation, ETeleportType::None);

		if (!bReloading)
		{
			// If the timer has expired, the tower can shoot at the target enemy
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

		if (NewTargetEnemy)// Make sure the entered actor is of class ADefaultEnemy
		{
			CurrentTargetEnemy = NewTargetEnemy;
		}
	}
	else
	{
		ADefaultEnemy* PossibleNewTarget = Cast<ADefaultEnemy>(OtherActor);

		if (PossibleNewTarget) // Make sure the entered actor is of class ADefaultEnemy
		{
			switch (TowerTargeting)
			{
			case ETowerPositionTargeting::TPT_Strongest:
				if (PossibleNewTarget->EnemyMaxHealth > CurrentTargetEnemy->EnemyMaxHealth)
				{
					// Set new target if the entered enemy has a higher max health and targeting type is strongest
					CurrentTargetEnemy = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Weakest:
				if (PossibleNewTarget->EnemyMaxHealth < CurrentTargetEnemy->EnemyMaxHealth)
				{
					// Set new target if the entered enemy has a lower max health and targeting type is weakest
					CurrentTargetEnemy = PossibleNewTarget;
				}
				break;
			default: // If targeting type is not strongest or weakest, nothing will happen
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
	// Get all overlapping actors of class ADefaultEnemy
	TArray<AActor*> OverlappingEnemies;
	GetOverlappingActors(OverlappingEnemies, ADefaultEnemy::StaticClass());

	if (OverlappingEnemies.Num() == 0)
	{
		// If no overlapping enemies, set boolean to stop checking for enemies
		bNoOverlappingEnemies = true;
	}
	else if (OverlappingEnemies.Num() == 1)
	{
		// If only one overlapping enemy, set it as the target
		ADefaultEnemy* NewTargetEnemy = Cast<ADefaultEnemy>(OverlappingEnemies[0]);
		if (NewTargetEnemy)
		{
			CurrentTargetEnemy = NewTargetEnemy;
		}
	}
	else if (OverlappingEnemies.Num() > 1)
	{
		// If more than one overlapping enemy, detmine which enemy to set as the target
		ADefaultEnemy* NewTarget = Cast<ADefaultEnemy>(OverlappingEnemies[0]);
		for (int i = 1; i < OverlappingEnemies.Num(); i++)
		{
			ADefaultEnemy* PossibleNewTarget = Cast<ADefaultEnemy>(OverlappingEnemies[i]);

			switch (TowerTargeting)
			{
			case ETowerPositionTargeting::TPT_First:
				if (PossibleNewTarget->EnemyAIController->Distance > NewTarget->EnemyAIController->Distance)
				{
					// Set target if furthest along the path and targeting type is first
					NewTarget = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Last:
				if (PossibleNewTarget->EnemyAIController->Distance < NewTarget->EnemyAIController->Distance)
				{
					// Set target if least furthest along the path and targeting type is last
					NewTarget = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Strongest:
				if (PossibleNewTarget->EnemyMaxHealth > NewTarget->EnemyMaxHealth)
				{
					// Set target max health is higher than the current target and targeting type is strongest
					NewTarget = PossibleNewTarget;
				}
				break;
			case ETowerPositionTargeting::TPT_Weakest:
				if (PossibleNewTarget->EnemyMaxHealth < NewTarget->EnemyMaxHealth)
				{
					// Set target if max health is lower than the current target and targeting type is weakest
					NewTarget = PossibleNewTarget;
				}
				break;
			default: // Default should never execute
				break;
			}
		}
		CurrentTargetEnemy = NewTarget;
	}
}

void ADefaultTower::Shoot()
{
	if (Projectile) // Check if projectile is valid
	{
		if (ShootingSound)
		{
			// If the tower has a shooting sound, play the shooting sound
			UGameplayStatics::PlaySound2D(this, ShootingSound);
		}
		bReloading = true;

		bool bApplyFireDamage = false;
		if (FMath::RandRange(0, 100) >= 100 - FireChance) bApplyFireDamage = true; // Generate a random number to determine if fire damage should be applied

		FTransform SpawnLocation = FTransform(FiringLocation->GetComponentLocation());
		ADefaultProjectile* SpawnedProjectile = GetWorld()->SpawnActorDeferred<ADefaultProjectile>(Projectile, SpawnLocation);

		// Pass in values to the projectile before finishing the spawn
		SpawnedProjectile->Initialize(Damage, CurrentTargetEnemy->EnemyBodyCollision->GetComponentLocation(), bApplyFireDamage);
		SpawnedProjectile->FinishSpawning(SpawnLocation);

		// Set delay before the tower is able to fire again
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ADefaultTower::ReloadingDone, float(200 / FireRate), false, -1.f);
	}
}

void ADefaultTower::TowerSelected(AActor* TouchedActor, FKey ButtonPressed)
{
	// If tower is selected, setup the tower details panel and hide the purchase panel
	UScreenOverlay* ScreenOverlay = GameMode->ScreenOverlay;
	ScreenOverlay->PurchasePanel->SetVisibility(ESlateVisibility::Hidden);
	ScreenOverlay->TowerPanel->SetupTowerWidgetInformation(this);
	ScreenOverlay->TowerPanel->SetVisibility(ESlateVisibility::Visible);
}
