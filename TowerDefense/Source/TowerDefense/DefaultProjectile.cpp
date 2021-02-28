// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultProjectile.h"
#include "Components/SphereComponent.h"
#include "DefaultEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"
#include "AIController.h"

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

// Called when the game starts or when spawned
void ADefaultProjectile::BeginPlay()
{
	Super::BeginPlay();

	AIController = Cast<AAIController>(GetController());

	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultProjectile::OnProjectileOverlapBegin);

}

// Called every frame
void ADefaultProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultProjectile::OnProjectileOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ADefaultEnemy* OverlappingEnemy = Cast<ADefaultEnemy>(OtherActor);
	if (OverlappingEnemy)
	{
		if (DamageTypeClass)
		{
			UGameplayStatics::ApplyDamage(OverlappingEnemy, Damage, AIController, this, DamageTypeClass);
		}
	}
}



