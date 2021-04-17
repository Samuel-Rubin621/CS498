// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Path.h"
#include "DefaultEnemy.h"
#include "TowerDefenseGameMode.h"
#include "Engine/World.h"

AEnemyAIController::AEnemyAIController()
{
	// We need this AIController to run its Tick method.
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	
}

void AEnemyAIController::OnPossess(APawn* ControlledPawn)
{
	Super::OnPossess(ControlledPawn);
	
	// Set the reference to the Enemy.
	Enemy = Cast<ADefaultEnemy>(GetCharacter());

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AEnemyAIController::MoveToNextPathPoint, 0.1f, false);
}

void AEnemyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

FRotator AEnemyAIController::GetControlRotation() const
{
	if (GetPawn() == nullptr) return FRotator(0.0f, 0.0f, 0.0f);

	return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void AEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	PathPoints.RemoveAt(0);
	if (Enemy->EnemyMovementStatus != EEnemyMovementStatus::EMS_Dead && PathPoints.Num() > 0)
	{
		MoveToNextPathPoint();
	}
	else
	{
		ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
		GameMode->DecreaseLives(Enemy->EnemyDamage);
		GameMode->RemoveEnemyFromList(Enemy);
		Enemy->Destroy();
		Destroy();
	}
}

void AEnemyAIController::MoveToNextPathPoint()
{
	MoveToLocation(PathPoints[0]);
}
