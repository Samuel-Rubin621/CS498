// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerDefenseGameMode.h"
#include "TowerDefensePlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "Path.h"
#include "UI/InGameHUD.h"
#include "UI/ScreenOverlay.h"

ATowerDefenseGameMode::ATowerDefenseGameMode()
{
	// Use the custom player controller class
	PlayerControllerClass = ATowerDefensePlayerController::StaticClass();

	// Set the default actor to be controlled by the player
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Gameplay/BP_TowerDefensePlayerPawn"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	Lives = 100;
	Money = 1000;
	Round = 0;
	bDoneSpawning = false;
	bActiveRound = false;
}

// Called when the game starts or when spawned
void ATowerDefenseGameMode::BeginPlay()
{
	Super::BeginPlay();

}

#pragma region Lives
void ATowerDefenseGameMode::DecreaseLives(int32 Value)
{
	Lives -= Value;
	SetLivesText.Broadcast(Lives);
	if (Lives <= 0)
	{
		GameOver();
	}
}

void ATowerDefenseGameMode::IncreaseLives(int32 Value)
{
	Lives += Value;
	SetLivesText.Broadcast(Lives);
}

void ATowerDefenseGameMode::GameOver()
{

}
#pragma endregion

#pragma region Money
void ATowerDefenseGameMode::DecreaseMoney(int32 Value)
{
	Money -= Value;
	SetMoneyText.Broadcast(Money);
}

void ATowerDefenseGameMode::IncreaseMoney(int32 Value)
{
	Money += Value;
	SetMoneyText.Broadcast(Money);
}

bool ATowerDefenseGameMode::CheckCurrentMoney(int32 Value)
{
	if (Money >= Value) return true;
	else return false;
}
#pragma endregion

#pragma region RoundHandler
void ATowerDefenseGameMode::StartRound()
{
	bActiveRound = true;
	StartNextRound.Broadcast();
}

void ATowerDefenseGameMode::RemoveEnemyFromList(ADefaultEnemy* EnemyToRemove)
{
	EnemiesSpawnedThisRound.Remove(EnemyToRemove);

	if (EnemiesSpawnedThisRound.Num() <= 0 && bDoneSpawning)
	{
		EndOfRound();
	}
}

void ATowerDefenseGameMode::EndOfRound()
{
	UE_LOG(LogTemp, Warning, TEXT("EndOFRound()"));
	if (Lives > 0)
	{
		Round++;
		EndRound.Broadcast(Round);
		bActiveRound = false;
		bDoneSpawning = false;
	}
}
#pragma endregion
