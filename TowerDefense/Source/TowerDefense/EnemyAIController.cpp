// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "DefaultEnemy.h"
#include "TowerDefenseGameMode.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "Components/SplineComponent.h"

AEnemyAIController::AEnemyAIController()
{
	// We need this AIController to run its Tick method.
	PrimaryActorTick.bCanEverTick = true;

	// Setup default variable values
	Distance = 0;
}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyAIController::OnPossess(APawn* ControlledPawn)
{
	Super::OnPossess(ControlledPawn);
	
	// Set the reference to the Enemy
	Enemy = Cast<ADefaultEnemy>(GetCharacter());
}

void AEnemyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Distance += (Enemy->GetCharacterMovement()->MaxWalkSpeed * DeltaSeconds);
	Enemy->SetActorLocation(Enemy->Path->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World));

	if (Enemy->LastSplinePointLocation == Enemy->GetActorLocation())
	{
		ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
		GameMode->DecreaseLives(Enemy->EnemyDamage);
		GameMode->RemoveEnemyFromList(Enemy);
		Enemy->Destroy();
		Destroy();
	}
}
