// Fill out your copyright notice in the Description page of Project Settings.


#include "PurchasePanel.h"
#include "TowerDefense/TowerDefenseGameMode.h"
#include "TowerDefense/DefaultGridTile.h"

UPurchasePanel::UPurchasePanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UPurchasePanel::NativeConstruct()
{
	Super::NativeConstruct();

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		// Assign the delegates for clicking the purchase of cancel buttons
		PurchaseButton->OnClicked.AddDynamic(this, &UPurchasePanel::PurchaseButtonClicked);
		CloseMenuButton->OnClicked.AddDynamic(this, &UPurchasePanel::CloseMenuButtonClicked);

		// Assign the delegates for clicking any of the tower buttons
		BallistaButton->OnClicked.AddDynamic(this, &UPurchasePanel::BallistaSelected);
		CannonButton->OnClicked.AddDynamic(this, &UPurchasePanel::CannonSelected);
		CatapultButton->OnClicked.AddDynamic(this, &UPurchasePanel::CatapultSelected);
		TurretButton->OnClicked.AddDynamic(this, &UPurchasePanel::TurretSelected);
	}

	PurchaseButton->SetIsEnabled(false);
	SelectedTower = nullptr;
}

void UPurchasePanel::PurchaseButtonClicked()
{
	SelectedTile->SpawnTower(SelectedTower);

	if (GameMode)
	{
		SetVisibility(ESlateVisibility::Hidden);
		SelectedTower = nullptr;
		SelectedTile = nullptr;
		PurchaseButton->SetIsEnabled(false);
	}
}

void UPurchasePanel::CloseMenuButtonClicked()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UPurchasePanel::BallistaSelected()
{
	if (TowerClasses[0])
	{
		SelectedTower = TowerClasses[0];
		TowerSelected();
	}
}

void UPurchasePanel::CannonSelected()
{
	if (TowerClasses[1])
	{
		SelectedTower = TowerClasses[1];
		TowerSelected();
	}
}

void UPurchasePanel::CatapultSelected()
{
	if (TowerClasses[2])
	{
		SelectedTower = TowerClasses[2];
		TowerSelected();
	}
}

void UPurchasePanel::TurretSelected()
{
	if (TowerClasses[3])
	{
		SelectedTower = TowerClasses[3];
		TowerSelected();
	}
}

void UPurchasePanel::TowerSelected()
{
	if (GameMode)
	{
		PurchaseButton->SetIsEnabled(GameMode->CheckCurrentMoney(SelectedTower->GetDefaultObject<ADefaultTower>()->TowerCost));
	}
}

void UPurchasePanel::RefreshWidget(ADefaultGridTile* PassedInTile)
{
	PurchaseButton->SetIsEnabled(false);
	SelectedTower = nullptr;
	SelectedTile = PassedInTile;
}