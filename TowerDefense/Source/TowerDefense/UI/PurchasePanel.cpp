// Fill out your copyright notice in the Description page of Project Settings.


#include "PurchasePanel.h"
#include "TowerDefense/TowerDefenseGameMode.h"
#include "TowerDefense/DefaultGridTile.h"
#include "TowerDefense/DefaultTower.h"

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
	if (SelectedTower)
	{
		DamageText->SetText(FText::FromString(FString::FromInt(SelectedTower->GetDefaultObject<ADefaultTower>()->Damage)));
		FireChanceText->SetText(FText::FromString(FString::FromInt(SelectedTower->GetDefaultObject<ADefaultTower>()->FireChance) + "%"));
		FireRateText->SetText(FText::FromString(FString::FromInt(SelectedTower->GetDefaultObject<ADefaultTower>()->FireRate)));
		RangeText->SetText(FText::FromString(FString::FromInt(SelectedTower->GetDefaultObject<ADefaultTower>()->Range)));

		DamageProgressBar->SetPercent((float)SelectedTower->GetDefaultObject<ADefaultTower>()->Damage / (float)SelectedTower->GetDefaultObject<ADefaultTower>()->MaxDamage);
		FireChanceProgressBar->SetPercent((float)SelectedTower->GetDefaultObject<ADefaultTower>()->FireChance / (float)SelectedTower->GetDefaultObject<ADefaultTower>()->MaxFireChance);
		FireRateProgressBar->SetPercent(SelectedTower->GetDefaultObject<ADefaultTower>()->FireRate / SelectedTower->GetDefaultObject<ADefaultTower>()->MaxFireRate);
		RangeProgressBar->SetPercent(SelectedTower->GetDefaultObject<ADefaultTower>()->Range / SelectedTower->GetDefaultObject<ADefaultTower>()->MaxRange);
	
		if (GameMode)
		{
			PurchaseButton->SetIsEnabled(GameMode->CheckCurrentMoney(SelectedTower->GetDefaultObject<ADefaultTower>()->TowerCost));
		}
	}
}

void UPurchasePanel::RefreshWidget(ADefaultGridTile* PassedInTile)
{
	DamageText->SetText(FText::FromString("N/A"));
	FireChanceText->SetText(FText::FromString("N/A"));
	FireRateText->SetText(FText::FromString("N/A"));
	RangeText->SetText(FText::FromString("N/A"));

	DamageProgressBar->SetPercent(0.f);
	FireChanceProgressBar->SetPercent(0.f);
	FireRateProgressBar->SetPercent(0.f);
	RangeProgressBar->SetPercent(0.f);

	PurchaseButton->SetIsEnabled(false);
	SelectedTower = nullptr;
	SelectedTile = PassedInTile;
}