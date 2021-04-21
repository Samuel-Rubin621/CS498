// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this AI Controller's properties.
	AEnemyAIController();

	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Called when the AIController is taken over.
	virtual void OnPossess(class APawn* ControlledPawn) override;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	virtual FRotator GetControlRotation() const override;

	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	UFUNCTION()
	void MoveToNextPathPoint(int32 NextLocation);


	/***** Only variables declared beyond this point! *****/

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class ADefaultEnemy* Enemy;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FVector> PathPoints;
	int32 NextPathPoint;

};