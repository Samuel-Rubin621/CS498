// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultProjectile.h"
#include "Components/SphereComponent.h"
#include "DefaultEnemy.h"

// Sets default values
ADefaultProjectile::ADefaultProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	RootComponent = ProjectileMesh;

	OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
	OverlapSphere->SetupAttachment(GetRootComponent());
}

void ADefaultProjectile::Initialize(int32 TowerDamage, int32 TowerFireDamage, FVector LocationOfTarget)
{
	Damage = TowerDamage;
	FireDamage = TowerFireDamage;
	EnemyLocation = LocationOfTarget;
}

// Called when the game starts or when spawned
void ADefaultProjectile::BeginPlay()
{
	Super::BeginPlay();

	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultProjectile::OnProjectileOverlapBegin);
}

// Called every frame
void ADefaultProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	SetActorLocation(FMath::VInterpConstantTo(GetActorLocation(), EnemyLocation, DeltaTime, ProjectileSpeed));
	if (GetActorLocation() == EnemyLocation)
	{
		Destroy();
	}
}

void ADefaultProjectile::OnProjectileOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ADefaultEnemy* OverlappingEnemy = Cast<ADefaultEnemy>(OtherActor);
	if (OverlappingEnemy)
	{
		OverlappingEnemy->ApplyDamageFromProjectile(Damage, FireDamage);
		Destroy();
	}
}

