// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "DefaultStartEnd.h"
#include "AIController.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ADefaultEnemy::ADefaultEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyDamage = 1;
	EnemyMaxHealth = 1;
	EnemyHealth = EnemyMaxHealth;
	EnemySpeed = 1;

}

// Called when the game starts or when spawned
void ADefaultEnemy::BeginPlay()
{
	Super::BeginPlay();
	AActor::SetFolderPath("Enemies");

	AIController = Cast<AAIController>(GetController());

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	float Delay = 0.1f;
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ADefaultEnemy::MoveToTarget, Delay, false);

}

// Called every frame
void ADefaultEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultEnemy::MoveToTarget()
{
	if (EnemyMovementStatus == EEnemyMovementStatus::EMS_Dead) return;

	SetEnemyMovementStatus(EEnemyMovementStatus::EMS_MoveToTarget);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	if (AIController)
	{


		FAIMoveRequest MoveRequest;
		MoveRequest.SetGoalLocation(EndPoint);
		MoveRequest.SetAcceptanceRadius(10.0f);

		FNavPathSharedPtr NavPath;

		AIController->MoveTo(MoveRequest, &NavPath);
		/*
		TArray<FNavPathPoint> PathPoints = NavPath->GetPathPoints();
		for (auto Point : PathPoints)
		{
			FVector Location = Point.Location;

			UKismetSystemLibrary::DrawDebugSphere(this, Location, 25.f, 8, FLinearColor::Green, 10.f, .5f);
		}*/
	}
}


