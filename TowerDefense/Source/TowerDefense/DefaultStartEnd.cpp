// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultStartEnd.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "TowerDefenseGameMode.h"

// Sets default values
ADefaultStartEnd::ADefaultStartEnd()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;
	StartPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("StartPoint"));
	StartPoint->SetupAttachment(GetRootComponent());
	EndPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("EndPoint"));
	EndPoint->SetupAttachment(GetRootComponent());

	static ConstructorHelpers::FObjectFinder<UDataTable> RoundDataObject(TEXT("DataTable'/Game/Enemies/Spawning/RoundDataTable.RoundDataTable'"));
	if (RoundDataObject.Succeeded())
	{
		RoundDataTable = RoundDataObject.Object;
	}

	bInRound = false;
	Round = 1;
}

// Called when the game starts or when spawned
void ADefaultStartEnd::BeginPlay()
{
	Super::BeginPlay();

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();

	PreloadNextRound();
	
}

// Called every frame
void ADefaultStartEnd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultStartEnd::PreloadNextRound()
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

void ADefaultStartEnd::StartRound()
{
	UE_LOG(LogTemp, Warning, TEXT("Entering StartRound!"));
	if (!bInRound)
	{
		bInRound = true;
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

void ADefaultStartEnd::CallSpawner(FEnemyData EnemySpawningData)
{
	float Delay = 1.f;
	FTimerDelegate TDelegate;
	TDelegate.BindUFunction(this, FName("SpawnEnemy"), EnemySpawningData);

	for (int i = 1; i < EnemySpawningData.AmountToSpawn + 1; i++)
	{
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, TDelegate, EnemySpawningData.SpawnDelay * i, false);
	}
}

void ADefaultStartEnd::SpawnEnemy(FEnemyData EnemySpawningData)
{
	if (EnemySpawningData.ClassToSpawn)
	{
		UWorld* World = GetWorld();
		FActorSpawnParameters SpawnParams;

		if (World)
		{
			ADefaultEnemy* EnemySpawned = World->SpawnActor<ADefaultEnemy>(EnemySpawningData.ClassToSpawn, StartPoint->GetComponentLocation(), FRotator(0.f), SpawnParams);
			EnemySpawned->EndPoint = EndPoint->GetComponentLocation();
			GameMode->EnemiesSpawnedThisRound.Add(EnemySpawned);
			TotalToSpawnThisRound--;
			if (TotalToSpawnThisRound <= 0)
			{
				GameMode->bDoneSpawning = true;
				Round++;
				PreloadNextRound();
			}
		}
	}
}

