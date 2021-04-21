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
	NextPathPoint = 1;
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, FName("MoveToNextPathPoint"), NextPathPoint);

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, TimerDelegate, 0.1f, false);
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

	NextPathPoint++;
	if (Enemy->EnemyMovementStatus != EEnemyMovementStatus::EMS_Dead && NextPathPoint < PathPoints.Num())
	{
		MoveToNextPathPoint(NextPathPoint);
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

void AEnemyAIController::MoveToNextPathPoint(int32 NextLocation)
{
	MoveToLocation(PathPoints[NextLocation]);
}
