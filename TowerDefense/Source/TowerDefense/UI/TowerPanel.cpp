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
	IncreaseFireDamageButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseFireDamageChance);
	IncreaseRangeButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseRange);
	IncreaseFireRateButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseFireRate);

	//Bind buttons for changing the targetting type of the tower
	FirstButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingFirst);
	LastButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingLast);
	StrongestButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingStrong);
	WeakestButton->OnClicked.AddDynamic(this, &UTowerPanel::SetTargetingWeak);

	// Set the tooltips to display when hovering over different on-screen text
	DamageText->SetToolTipText(FText::FromString("This is the damage of the tower."));
	FireDamageChanceText->SetToolTipText(FText::FromString("This is the chance of inflicting fire damage."));
	RangeText->SetToolTipText(FText::FromString("This is the tower range."));
	FireRateText->SetToolTipText(FText::FromString("This is the tower fire rate."));
}

#pragma region Setup Widget Display
void UTowerPanel::SetupTowerWidgetInformation(ADefaultTower* TowerOnTile)
{
	SelectedTower = TowerOnTile;
	SetTowerImage();
	SetTowerDetailsTextComponents();
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
			break;
		case ETowerType::TT_Cannon:
			TowerImage->SetBrushFromTexture(CannonImage);
			break;
		case ETowerType::TT_Catapult:
			TowerImage->SetBrushFromTexture(CatapultImage);
			break;
		case ETowerType::TT_Turret:
			TowerImage->SetBrushFromTexture(TurretImage);
			break;
		default:
			break;
		}
	}
}

void UTowerPanel::SetTowerDetailsTextComponents()
{
	DamageText->SetText(FText::FromString(FString::FromInt(SelectedTower->Damage)));
	FireDamageChanceText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireDamageChance) + "%"));
	RangeText->SetText(FText::FromString(FString::FromInt(SelectedTower->TowerRangeSphere->GetUnscaledSphereRadius())));
	FireRateText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireRate)));
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
	if (GameMode->CheckCurrentMoney(DamageIncreaseCost))
	{
		GameMode->DecreaseMoney(DamageIncreaseCost);
		SelectedTower->Damage += 10;
		SetTowerDetailsTextComponents();
	}
}

void UTowerPanel::IncreaseFireDamageChance()
{
	if (GameMode->CheckCurrentMoney(FireDamageIncreaseCost) && SelectedTower->FireDamageChance < 100)
	{
		GameMode->DecreaseMoney(FireDamageIncreaseCost);
		SelectedTower->FireDamageChance += 10;
		if (SelectedTower->FireDamageChance > 100) SelectedTower->FireDamageChance = 100;
		SetTowerDetailsTextComponents();
	}
}

void UTowerPanel::IncreaseRange()
{
	if (GameMode->CheckCurrentMoney(RangeIncreaseCost))
	{
		GameMode->DecreaseMoney(RangeIncreaseCost);
		SelectedTower->TowerRangeSphere->SetSphereRadius(SelectedTower->TowerRangeSphere->GetScaledSphereRadius() + 100);
		SetTowerDetailsTextComponents();
	}
}

void UTowerPanel::IncreaseFireRate()
{
	if (GameMode->CheckCurrentMoney(FireRateIncreaseCost))
	{
		GameMode->DecreaseMoney(FireRateIncreaseCost);
		SelectedTower->FireRate += 10;
		SetTowerDetailsTextComponents();
	}
}
#pragma endregion