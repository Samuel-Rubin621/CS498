// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "DefaultStartEnd.h"
#include "AIController.h"

// Sets default values
ADefaultEnemy::ADefaultEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(GetRootComponent());

	EnemyDamage = 1;
	EnemyMaxHealth = 1;
	EnemyHealth = EnemyMaxHealth;
	EnemySpeed = 1;

}

// Called when the game starts or when spawned
void ADefaultEnemy::BeginPlay()
{
	Super::BeginPlay();

	AIController = Cast<AAIController>(GetController());
	/*
	TArray<AActor*> StartEnd;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), StartEndFilter, StartEnd);

	if (StartEnd.Num() == 1)
	{
		EndPoint = GetActorLocation(StartEnd[0].EndPoint);
	}

	MoveToTarget();
	*/
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

