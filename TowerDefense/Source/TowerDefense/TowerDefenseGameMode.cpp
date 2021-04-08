// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerDefenseGameMode.h"
#include "TowerDefensePlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "DefaultStartEnd.h"

ATowerDefenseGameMode::ATowerDefenseGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATowerDefensePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Gameplay/BP_TowerDefensePlayerPawn"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	Lives = 100;
	Money = 1000;

	bDoneSpawning = false;
	bInRound = false;
}

// Called when the game starts or when spawned
void ATowerDefenseGameMode::BeginPlay()
{
	Super::BeginPlay();

}

void ATowerDefenseGameMode::DecreaseLives(int32 Value)
{
	Lives -= Value;
	if (Lives <= 0)
	{
		GameOver();
	}
}

void ATowerDefenseGameMode::IncreaseLives(int32 Value)
{
	Lives += Value;
}

void ATowerDefenseGameMode::GameOver()
{

}

void ATowerDefenseGameMode::DecreaseMoney(int32 Value)
{
	Money -= Value;
}

void ATowerDefenseGameMode::IncreaseMoney(int32 Value)
{
	Money += Value;
}

bool ATowerDefenseGameMode::CheckCurrentMoney(int32 Value)
{
	if (Money >= Value) return true;
	else return false;
}

void ATowerDefenseGameMode::RemoveEnemyFromList(ADefaultEnemy* EnemyToRemove)
{
	EnemiesSpawnedThisRound.Remove(EnemyToRemove);
	UE_LOG(LogTemp, Warning, TEXT("Enemy Removed!"));
	if (EnemiesSpawnedThisRound.Num() <= 0 && bDoneSpawning && bInRound)
	{
		bInRound = false;
		bDoneSpawning = false;
		StartEnd->bInRound = false;
		EndOfRound();
	}
}

