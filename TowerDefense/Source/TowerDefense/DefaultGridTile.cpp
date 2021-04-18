// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultGridTile.h"
#include "Components/WidgetComponent.h"
#include "DefaultTower.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "TowerDefenseGameMode.h"
#include "UI/ScreenOverlay.h"

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

	OnClicked.AddDynamic(this, &ADefaultGridTile::TileSelected);
}

// Called every frame
void ADefaultGridTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultGridTile::TileSelected(AActor* TouchedActor, FKey ButtonPressed)
{
	ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		if (SpawnedTower)
		{
			UScreenOverlay* ScreenOverlay = GameMode->ScreenOverlay;
			ScreenOverlay->PurchasePanel->SetVisibility(ESlateVisibility::Hidden);
			ScreenOverlay->TowerPanel->SetupTowerWidgetInformation(SpawnedTower);
			ScreenOverlay->TowerPanel->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			UScreenOverlay* ScreenOverlay = GameMode->ScreenOverlay;
			ScreenOverlay->TowerPanel->SetVisibility(ESlateVisibility::Hidden);
			ScreenOverlay->PurchasePanel->RefreshWidget(this);
			ScreenOverlay->PurchasePanel->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void ADefaultGridTile::SpawnTower(TSubclassOf<ADefaultTower> TowerToSpawn)
{
	UWorld* World = GetWorld();
	FActorSpawnParameters SpawnParams;

	if (World && !SpawnedTower)
	{
		ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
		if (GameMode->CheckCurrentMoney(TowerToSpawn->GetDefaultObject<ADefaultTower>()->TowerCost))
		{
			GameMode->DecreaseMoney(TowerToSpawn->GetDefaultObject<ADefaultTower>()->TowerCost);
			SpawnedTower = World->SpawnActor<ADefaultTower>(TowerToSpawn, GetActorLocation(), FRotator(0.f), SpawnParams);
			SpawnedTower->AttachToComponent(TileMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("TowerPlacementSocket"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Not enough money!"));
		}
	}
}

