// Fill out your copyright notice in the Description page of Project Settings.


#include "Path.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "Engine/World.h"
#include "TowerDefenseGameMode.h"

// Sets default values
APath::APath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
	RootComponent = SplinePath;

	static ConstructorHelpers::FObjectFinder<UDataTable> RoundDataObject(TEXT("DataTable'/Game/Enemies/Spawning/RoundDataTable.RoundDataTable'"));
	if (RoundDataObject.Succeeded())
	{
		RoundDataTable = RoundDataObject.Object;
	}
}

// Called when the game starts or when spawned
void APath::BeginPlay()
{
	Super::BeginPlay();

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		GameMode->StartNextRound.AddDynamic(this, &APath::StartRound);
		GameMode->EndRound.AddDynamic(this, &APath::PreloadNextRound);
	}

	// Get spline path to pass to enemy
	int32 NumberOfSplinePoints = SplinePath->GetNumberOfSplinePoints();

	for (int i = 0; i < NumberOfSplinePoints; i++)
	{
		PathPoints.Add(SplinePath->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World));
	}

	PreloadNextRound(1);
}

// Called every frame
void APath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APath::PreloadNextRound(int32 Round)
{
	if (RoundDataTable)
	{
		static const FString ContextString(TEXT("Round Data Table"));
		FRoundInformation* RoundInfo = RoundDataTable->FindRow<FRoundInformation>(FName(FString::FromInt(Round)), ContextString, true);
		if (RoundInfo)
		{
			TotalToSpawnThisRound = 0;
			Enemy1.AmountToSpawn = RoundInfo->Enemy1;
			TotalToSpawnThisRound += Enemy1.AmountToSpawn;
			Enemy2.AmountToSpawn = RoundInfo->Enemy2;
			TotalToSpawnThisRound += Enemy2.AmountToSpawn;
			Enemy3.AmountToSpawn = RoundInfo->Enemy3;
			TotalToSpawnThisRound += Enemy3.AmountToSpawn;
			Enemy4.AmountToSpawn = RoundInfo->Enemy4;
			TotalToSpawnThisRound += Enemy4.AmountToSpawn;
		}
	}
}

void APath::StartRound()
{
	if (GameMode->bActiveRound)
	{
		if (Enemy1.AmountToSpawn > 0 && Enemy1.ClassToSpawn != nullptr)
		{
			CallSpawner(Enemy1);
		}
		if (Enemy2.AmountToSpawn > 0 && Enemy2.ClassToSpawn != nullptr)
		{
			CallSpawner(Enemy2);
		}
		if (Enemy3.AmountToSpawn > 0 && Enemy3.ClassToSpawn != nullptr)
		{
			CallSpawner(Enemy3);
		}
		if (Enemy4.AmountToSpawn > 0 && Enemy4.ClassToSpawn != nullptr)
		{
			CallSpawner(Enemy4);
		}
	}
}

void APath::CallSpawner(FEnemyData EnemySpawningData)
{
	float Delay = 1.f;
	FTimerDelegate TDelegate;
	TDelegate.BindUFunction(this, FName("SpawnEnemy"), EnemySpawningData);

	for (int i = 1; i < EnemySpawningData.AmountToSpawn + 1; i++)
	{
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, TDelegate, EnemySpawningData.SpawnDelay * i, false);
	}

	return;
}

void APath::SpawnEnemy(FEnemyData EnemySpawningData)
{
	if (EnemySpawningData.ClassToSpawn)
	{
		UWorld* World = GetWorld();
		FActorSpawnParameters SpawnParams;

		if (World)
		{
			ADefaultEnemy* EnemySpawned = World->SpawnActor<ADefaultEnemy>(EnemySpawningData.ClassToSpawn,
				SplinePath->GetLocationAtSplinePoint(0, ESplineCoordinateSpace::World), FRotator(0.f), SpawnParams);
			EnemySpawned->EnemyAIController->PathPoints = PathPoints;
			GameMode->EnemiesSpawnedThisRound.Add(EnemySpawned);
			TotalToSpawnThisRound--;
			if (TotalToSpawnThisRound <= 0)
			{
				GameMode->bDoneSpawning = true;
			}
		}
	}
}