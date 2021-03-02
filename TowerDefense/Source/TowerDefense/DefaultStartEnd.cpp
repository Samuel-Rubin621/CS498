// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultStartEnd.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

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

	PreloadNextRound();

	StartRound();
	
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
			Enemy1.AmountToSpawn = RoundInfo->Enemy1;
			Enemy2.AmountToSpawn = RoundInfo->Enemy2;
			Enemy3.AmountToSpawn = RoundInfo->Enemy3;
			Enemy4.AmountToSpawn = RoundInfo->Enemy4;
			UE_LOG(LogTemp, Warning, TEXT("Set the amount to spawn"));
		}
	}
}

void ADefaultStartEnd::StartRound()
{
	if (bInRound)
	{
		bInRound = true;
		if (Enemy1.AmountToSpawn > 0 && Enemy1.ClassToSpawn != nullptr)
		{
			SpawnEnemy(Enemy1);
		}
		if (Enemy2.AmountToSpawn > 0 && Enemy2.ClassToSpawn != nullptr)
		{
			SpawnEnemy(Enemy2);
		}
		if (Enemy3.AmountToSpawn > 0 && Enemy3.ClassToSpawn != nullptr)
		{
			SpawnEnemy(Enemy3);
		}
		if (Enemy4.AmountToSpawn > 0 && Enemy4.ClassToSpawn != nullptr)
		{
			SpawnEnemy(Enemy4);
		}
	}
}

void ADefaultStartEnd::SpawnEnemy(FEnemyData EnemySpawningData)
{
	/*
	FTimerHandle UnusedHandle;

	for (int i = 1; i < EnemySpawningData.AmountToSpawn; i++)
	{
		if (GetWorldTimerManager().IsTimerActive(UnusedHandle))
		{

		}


		

	}

	*/


}








