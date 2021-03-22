// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultGridTile.h"

// Sets default values
ADefaultGridTile::ADefaultGridTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MainTileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainTileMesh"));
	RootComponent = MainTileMesh;
	DetailTileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DetailTileMesh"));
	DetailTileMesh->SetupAttachment(GetRootComponent());

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

