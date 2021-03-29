// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultGridTile.h"
#include "Components/WidgetComponent.h"
#include "DefaultTower.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"

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
	
	//TileMesh->OnClicked.AddDynamic(this, &ADefaultGridTile::TileSelected);

}

// Called every frame
void ADefaultGridTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultGridTile::TileSelected(UPrimitiveComponent* ClickedComp, FKey ButtonPressed)
{
	
}

void ADefaultGridTile::SpawnTower(int TowerIntToBuild)
{
	UWorld* World = GetWorld();
	FActorSpawnParameters SpawnParams;

	if (World && !TowerSpawned)
	{
		TowerSpawned = World->SpawnActor<ADefaultTower>(TowerList[TowerIntToBuild], GetActorLocation(), FRotator(0.f), SpawnParams);
		TowerSpawned->AttachToComponent(TileMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("TowerPlacementSocket"));
	}
}

