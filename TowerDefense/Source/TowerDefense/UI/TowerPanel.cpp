// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerPanel.h"
#include "Components/SphereComponent.h"
#include "TowerDefense/TowerDefenseGameMode.h"
#include "Components/SphereComponent.h"

UTowerPanel::UTowerPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UTowerPanel::NativeConstruct()
{
	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();

	// Bind all the buttons to functions to create functionality for button clicks
	CloseMenuButton->OnClicked.AddDynamic(this, &UTowerPanel::CloseMenuButtonClicked);

	// Bind buttons for increasing tower stats
	IncreaseDamageButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseDamage);
	IncreaseFireChanceButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseFireDamageChance);
	IncreaseRangeButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseRange);
	IncreaseFireRateButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseFireRate);

	//Bind buttons for changing the targetting type of the tower
	FirstButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingFirst);
	LastButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingLast);
	StrongestButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingStrong);
	WeakestButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingWeak);

	// Set the tooltips to display when hovering over different on-screen text
	DamageText->SetToolTipText(FText::FromString("This is the damage of the tower."));
	FireChanceText->SetToolTipText(FText::FromString("This is the chance of inflicting fire damage."));
	RangeText->SetToolTipText(FText::FromString("This is the tower range."));
	FireRateText->SetToolTipText(FText::FromString("This is the tower fire rate."));
}

#pragma region Setup Widget Display
void UTowerPanel::SetupTowerWidgetInformation(ADefaultTower* TowerOnTile)
{
	SelectedTower = TowerOnTile;
	SetTowerImage();
	SetTowerDetails();
	SetTargetingButtons();
}

void UTowerPanel::SetTowerImage()
{
	if (SelectedTower)
	{
		switch (SelectedTower->TowerType)
		{
		case ETowerType::TT_Ballista:
			TowerImage->SetBrushFromTexture(BallistaImage);
			TowerName->SetText(FText::FromString("Ballista"));
			break;
		case ETowerType::TT_Cannon:
			TowerImage->SetBrushFromTexture(CannonImage);
			TowerName->SetText(FText::FromString("Cannon"));
			break;
		case ETowerType::TT_Catapult:
			TowerImage->SetBrushFromTexture(CatapultImage);
			TowerName->SetText(FText::FromString("Catapult"));
			break;
		case ETowerType::TT_Turret:
			TowerImage->SetBrushFromTexture(TurretImage);
			TowerName->SetText(FText::FromString("Turret"));
			break;
		default:
			break;
		}
	}
}

void UTowerPanel::SetTowerDetails()
{
	DamageText->SetText(FText::FromString(FString::FromInt(SelectedTower->Damage)));
	FireChanceText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireChance) + "%"));
	FireRateText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireRate)));
	RangeText->SetText(FText::FromString(FString::FromInt(SelectedTower->Range)));

	if (SelectedTower->Damage >= SelectedTower->MaxDamage) IncreaseDamageText->SetText(FText::FromString("MAX"));
	else IncreaseDamageText->SetText(FText::FromString("+ $" + FString::FromInt(DamageIncreaseCost)));
	
	if (SelectedTower->FireChance >= SelectedTower->MaxFireChance) IncreaseFireDamageChanceText->SetText(FText::FromString("MAX"));
	else IncreaseFireDamageChanceText->SetText(FText::FromString("+ $" + FString::FromInt(FireChanceIncreaseCost)));

	if (SelectedTower->FireRate >= SelectedTower->MaxFireRate) IncreaseFireRateText->SetText(FText::FromString("MAX"));
	else IncreaseFireRateText->SetText(FText::FromString("+ $" + FString::FromInt(FireRateIncreaseCost)));

	if (SelectedTower->Range >= SelectedTower->MaxRange) IncreaseRangeText->SetText(FText::FromString("MAX"));
	else IncreaseRangeText->SetText(FText::FromString("+ $" + FString::FromInt(RangeIncreaseCost)));

	DamageProgressBar->SetPercent((float)SelectedTower->Damage / (float)SelectedTower->MaxDamage);
	FireChanceProgressBar->SetPercent((float)SelectedTower->FireChance / (float)SelectedTower->MaxFireChance);
	FireRateProgressBar->SetPercent(SelectedTower->FireRate / SelectedTower->MaxFireRate);
	RangeProgressBar->SetPercent(SelectedTower->Range / SelectedTower->MaxRange);
}

void UTowerPanel::SetTargetingButtons()
{
	FirstButton->SetIsEnabled(true);
	LastButton->SetIsEnabled(true);
	StrongestButton->SetIsEnabled(true);
	WeakestButton->SetIsEnabled(true);

	if (SelectedTower)
	{
		switch (SelectedTower->TowerTargeting)
		{
		case ETowerPositionTargeting::TPT_First:
			FirstButton->SetIsEnabled(false);
			break;
		case ETowerPositionTargeting::TPT_Last:
			LastButton->SetIsEnabled(false);
			break;
		case ETowerPositionTargeting::TPT_Strongest:
			StrongestButton->SetIsEnabled(false);
			break;
		case ETowerPositionTargeting::TPT_Weakest:
			WeakestButton->SetIsEnabled(false);
			break;
		default:
			break;
		}
	}
}
#pragma endregion

#pragma region Increase Tower Stats
void UTowerPanel::IncreaseDamage()
{
	if (GameMode->CheckCurrentMoney(DamageIncreaseCost) && SelectedTower->Damage < SelectedTower->MaxDamage)
	{
		GameMode->DecreaseMoney(DamageIncreaseCost);
		SelectedTower->Damage += 10;
		SetTowerDetails();
	}
}

void UTowerPanel::IncreaseFireDamageChance()
{
	if (GameMode->CheckCurrentMoney(FireChanceIncreaseCost) && SelectedTower->FireChance < SelectedTower->MaxFireChance)
	{
		GameMode->DecreaseMoney(FireChanceIncreaseCost);
		SelectedTower->FireChance += 10;
		if (SelectedTower->FireChance > 100) SelectedTower->FireChance = 100;
		SetTowerDetails();
	}
}

void UTowerPanel::IncreaseRange()
{
	if (GameMode->CheckCurrentMoney(RangeIncreaseCost) && SelectedTower->Range < SelectedTower->MaxRange)
	{
		GameMode->DecreaseMoney(RangeIncreaseCost);
		SelectedTower->Range += 100;
		SelectedTower->TowerRangeSphere->SetSphereRadius(SelectedTower->Range);
		SetTowerDetails();
	}
}

void UTowerPanel::IncreaseFireRate()
{
	if (GameMode->CheckCurrentMoney(FireRateIncreaseCost) && SelectedTower->FireRate < SelectedTower->MaxFireRate)
	{
		GameMode->DecreaseMoney(FireRateIncreaseCost);
		SelectedTower->FireRate += 10;
		SetTowerDetails();
	}
}
#pragma endregion