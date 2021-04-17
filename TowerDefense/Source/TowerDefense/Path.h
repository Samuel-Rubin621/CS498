// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Path.generated.h"

// Struct to get data from a table to fill values for waves
USTRUCT(BlueprintType)
struct FRoundInformation : public FTableRowBase
{
	GENERATED_BODY()

	//Amount of enemies to spawn based on round
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Enemy1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Enemy2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Enemy3;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Enemy4;
};

// Struct to store the number of enemies to spawn and which enemy to spawn
USTRUCT(BlueprintType)
struct FEnemyData
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 AmountToSpawn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float SpawnDelay;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class ADefaultEnemy> ClassToSpawn;
};

UCLASS()
class TOWERDEFENSE_API APath : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APath();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PreloadNextRound(int32 Round);
	UFUNCTION(BlueprintCallable)
	void StartRound();
	UFUNCTION(BlueprintCallable)
	void CallSpawner(FEnemyData EnemySpawningData);
	UFUNCTION(BlueprintCallable)
	void SpawnEnemy(FEnemyData EnemySpawningData);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere)
	class USplineComponent* SplinePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "References")
	class ATowerDefenseGameMode* GameMode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Path")
	TArray<FVector> PathPoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wave | Spawning")
	class UDataTable* RoundDataTable;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Wave | Spawning")
	int32 TotalToSpawnThisRound;

	// Amount of enemies to spawn based on round
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FEnemyData Enemy1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FEnemyData Enemy2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FEnemyData Enemy3;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FEnemyData Enemy4;

};
