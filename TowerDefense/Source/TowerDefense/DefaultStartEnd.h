// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "DefaultStartEnd.generated.h"

USTRUCT(BlueprintType)
struct FRoundInformation : public FTableRowBase
{
	GENERATED_BODY()

	//Amount of enemies to spawn based on round
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy2;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy3;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy4;
};

UCLASS()
class TOWERDEFENSE_API ADefaultStartEnd : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefaultStartEnd();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PreloadNextRound();
	UFUNCTION(BlueprintCallable)
	void StartRound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Scene;
	UPROPERTY(EditAnywhere)
	class UBillboardComponent* StartPoint;
	UPROPERTY(EditAnywhere)
	UBillboardComponent* EndPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wave | Spawning")
	class UDataTable* RoundDataTable;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Wave | Spawning")
	bool bInRound;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Wave | Spawning")
	int32 Round;

	//Amount of enemies to spawn based on round
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy2;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy3;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Enemy4;
};
