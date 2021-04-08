// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultGridTile.h"
#include "Components/WidgetComponent.h"
#include "DefaultTower.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "TowerDefenseGameMode.h"

// Sets default values
ADefaultGridTile::ADefaultGridTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	RootComponent = TileMesh;
}

// Called when the game starts or when spawned
void ADefaultGridTile::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADefaultGridTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultGridTile::SpawnTower(TSubclassOf<ADefaultTower> TowerToSpawn)
{
	UWorld* World = GetWorld();
	FActorSpawnParameters SpawnParams;

	if (World && !TowerSpawned)
	{
		ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
		if (GameMode->CheckCurrentMoney(TowerToSpawn->GetDefaultObject<ADefaultTower>()->TowerCost))
		{
			GameMode->DecreaseMoney(TowerToSpawn->GetDefaultObject<ADefaultTower>()->TowerCost);
			TowerSpawned = World->SpawnActor<ADefaultTower>(TowerToSpawn, GetActorLocation(), FRotator(0.f), SpawnParams);
			TowerSpawned->AttachToComponent(TileMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("TowerPlacementSocket"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Not enough money!"));
		}
	}
}

