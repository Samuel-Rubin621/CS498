// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultTower.h"
#include "Components/SphereComponent.h"
#include "DefaultEnemy.h"
#include "GameFramework/Actor.h"


// Sets default values
ADefaultTower::ADefaultTower()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	RootComponent = TowerMesh;

	TowerRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TowerRangeSphere"));
	TowerRangeSphere->SetupAttachment(GetRootComponent());

	TowerDamage = 0;
	TowerRangeValue = 0.f;
	TowerFireDelay = 0.f;

	NoOverlappingEnemies = true;

}

// Called when the game starts or when spawned
void ADefaultTower::BeginPlay()
{
	Super::BeginPlay();

	TowerRangeSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapBegin);
	TowerRangeSphere->OnComponentEndOverlap.AddDynamic(this, &ADefaultTower::OnRangeOverlapEnd);

}

// Called every frame
void ADefaultTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!NoOverlappingEnemies)
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
	TArray<AActor*> OverlappingEnemies;
	GetOverlappingActors(OverlappingEnemies, EnemyFilter);

	if (OverlappingEnemies.Num() == 0)
	{
		NoOverlappingEnemies = true;
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






