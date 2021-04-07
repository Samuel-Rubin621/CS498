// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "DefaultStartEnd.h"
#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "TowerDefenseGameMode.h"

// Sets default values
ADefaultEnemy::ADefaultEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(GetRootComponent());
	EnemyBodyCollision = CreateDefaultSubobject<USphereComponent>(TEXT("EnemyBodyCollision"));
	EnemyBodyCollision->SetupAttachment(EnemyMesh);

	GetCapsuleComponent()->SetCapsuleSize(10.f, 10.f, true);
	EnemyDamage = 1;
	EnemyMaxHealth = 1;
	EnemyCurrentHealth = EnemyMaxHealth;
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
	}
}

void ADefaultEnemy::ReachedTheEnd()
{
	ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	GameMode->DecreaseLives(EnemyDamage);
	GameMode->RemoveEnemyFromList(this);
	Destroy();
}

float ADefaultEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	EnemyCurrentHealth -= DamageAmount;
	if (EnemyCurrentHealth <= 0)
	{
		Death();
	}
	return DamageAmount;
}

void ADefaultEnemy::Death()
{
	ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	GameMode->IncreaseMoney(EnemyValue);
	GameMode->RemoveEnemyFromList(this);
	Destroy();
}
