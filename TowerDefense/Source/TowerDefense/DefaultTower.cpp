// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultTower.h"
#include "Components/SphereComponent.h"
#include "DefaultEnemy.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "DefaultProjectile.h"
#include "TimerManager.h"


// Sets default values
ADefaultTower::ADefaultTower()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	RootComponent = TowerMesh;
	TowerRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TowerRangeSphere"));
	TowerRangeSphere->SetupAttachment(GetRootComponent());
	FiringLocation = CreateDefaultSubobject<USphereComponent>(TEXT("FiringLocation"));
	FiringLocation->SetupAttachment(GetRootComponent());

	TowerDamage = 1;
	TowerRangeValue = 0.f;
	TowerFireDelay = 2.f;

	bNoOverlappingEnemies = false;
	bReloading = false;

}

// Called when the game starts or when spawned
void ADefaultTower::BeginPlay()
{
	Super::BeginPlay();
	AActor::SetFolderPath("Towers");

	TowerRangeSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapBegin);
	TowerRangeSphere->OnComponentEndOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapEnd);

}

// Called every frame
void ADefaultTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentTargetEnemy)
	{
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
		ADefaultEnemy* NewTargetEnemy = Cast<ADefaultEnemy>(OtherActor);
		if (NewTargetEnemy)
		{
			switch (TowerTargeting)
			{
			case ETowerPositionTargeting::TPT_Strongest:
				if (NewTargetEnemy->EnemyMaxHealth > CurrentTargetEnemy->EnemyMaxHealth)
				{
					CurrentTargetEnemy = NewTargetEnemy;
				}
				break;
			case ETowerPositionTargeting::TPT_Weakest:
				if (NewTargetEnemy->EnemyMaxHealth < CurrentTargetEnemy->EnemyMaxHealth)
				{
					CurrentTargetEnemy = NewTargetEnemy;
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
			}
		}
	}

}

void ADefaultTower::GetNewTarget()
{
	UE_LOG(LogTemp, Warning, TEXT("Looking for target in GetNewTarget()"));
	TArray<AActor*> OverlappingEnemies;
	GetOverlappingActors(OverlappingEnemies, ADefaultEnemy::StaticClass());

	if (OverlappingEnemies.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("There are no enemies overlapping"));
		bNoOverlappingEnemies = true;
	}
	else if (OverlappingEnemies.Num() == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("There is one enemy overlapping"));
		ADefaultEnemy* NewTargetEnemy = Cast<ADefaultEnemy>(OverlappingEnemies[0]);
		if (NewTargetEnemy)
		{
			CurrentTargetEnemy = NewTargetEnemy;
		}
	}
	else if (OverlappingEnemies.Num() > 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("There are multiple enemies overlapping"));
		ADefaultEnemy* NewTargetEnemy = Cast<ADefaultEnemy>(OverlappingEnemies[0]);
		for (int i = 1; i < OverlappingEnemies.Num(); i++)
		{
			ADefaultEnemy* PotentialTargetEnemy = Cast<ADefaultEnemy>(OverlappingEnemies[i]);

			switch (TowerTargeting)
			{/*
			case ETowerPositionTargeting::TPT_First:
				if ()
				{
					
				}
				break;
			case ETowerPositionTargeting::TPT_Last:
				if ()
				{
					
				}
				break;*/
			case ETowerPositionTargeting::TPT_Strongest:
				if (PotentialTargetEnemy->EnemyMaxHealth > NewTargetEnemy->EnemyMaxHealth)
				{
					NewTargetEnemy = PotentialTargetEnemy;
				}
				break;
			case ETowerPositionTargeting::TPT_Weakest:
				if (PotentialTargetEnemy->EnemyMaxHealth < NewTargetEnemy->EnemyMaxHealth)
				{
					NewTargetEnemy = PotentialTargetEnemy;
				}
				break;
			default:
				break;
			}
		}
		CurrentTargetEnemy = NewTargetEnemy;
	}
}

void ADefaultTower::Shoot()
{
	if (Projectile)
	{
		bReloading = true;
		ADefaultProjectile* SpawnedProjectile = GetWorld()->SpawnActor<ADefaultProjectile>(Projectile, FiringLocation->GetComponentLocation(), FRotator(0.f));
		SpawnedProjectile->EnemyLocation = CurrentTargetEnemy->EnemyBodyCollision->GetComponentLocation();
		SpawnedProjectile->Damage = TowerDamage;

		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ADefaultTower::ReloadingDone, TowerFireDelay, false, -1.f);
	}
}
