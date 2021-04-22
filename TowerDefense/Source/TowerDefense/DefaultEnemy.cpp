// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultEnemy.h"
#include "EnemyAIController.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "TowerDefenseGameMode.h"
#include "Components/SplineComponent.h"

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
}

void ADefaultEnemy::Initialize(USplineComponent* SplinePath)
{
	Path = SplinePath;
	LastSplinePointLocation = Path->GetLocationAtSplinePoint(Path->GetNumberOfSplinePoints() - 1, ESplineCoordinateSpace::World);
}

// Called when the game starts or when spawned
void ADefaultEnemy::BeginPlay()
{
	Super::BeginPlay();
	AActor::SetFolderPath("Enemies");
	EnemyCurrentHealth = EnemyMaxHealth;

	EnemyAIController = Cast<AEnemyAIController>(GetController());

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

// Called every frame
void ADefaultEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultEnemy::ApplyDamageFromProjectile(int32 Damage, int32 FireDamage)
{
	EnemyCurrentHealth -= (Damage + FireDamage);

	if (EnemyCurrentHealth <= 0)
	{
		Death();
	}
}

void ADefaultEnemy::Death()
{
	ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	GameMode->IncreaseMoney(EnemyValue);
	GameMode->RemoveEnemyFromList(this);
	Destroy();
}
