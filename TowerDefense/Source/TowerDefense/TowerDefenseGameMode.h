// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DefaultEnemy.h"
#include "TowerDefenseGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoneyChange, int32, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLivesChange, int32, Value);

UCLASS(minimalapi)
class ATowerDefenseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATowerDefenseGameMode();

	// Functions for lives
	UFUNCTION(BlueprintCallable)
	void DecreaseLives(int32 Value);
	UFUNCTION(BlueprintCallable)
	void IncreaseLives(int32 Value);
	UFUNCTION(BlueprintCallable)
	void GameOver();

	// Functions for money
	UFUNCTION(BlueprintCallable)
	void DecreaseMoney(int32 Value);
	UFUNCTION(BlueprintCallable)
	void IncreaseMoney(int32 Value);
	UFUNCTION(BlueprintCallable)
	bool CheckCurrentMoney(int32 value);

	// Functions for handling rounds
	UFUNCTION(BlueprintCallable)
	void RemoveEnemyFromList(ADefaultEnemy* EnemyToRemove);
	UFUNCTION()
	void EndOfRound();

	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnMoneyChange SetMoneyText;
	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnLivesChange SetLivesText;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lives")
	int32 Lives;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
	int32 Money;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Reference")
	class AInGameHUD* InGameHUD;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rounds")
	bool bInRound;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rounds")
	bool bDoneSpawning;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rounds")
	TArray<ADefaultEnemy*> EnemiesSpawnedThisRound;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rounds")
	class APath* Path;


};



