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
	IncreaseDamageButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseDamage);
	IncreaseFireDamageButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseFireDamage);
	IncreaseRangeButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseRange);
	IncreaseFireRateButton->OnClicked.AddDynamic(this, &UTowerPanel::IncreaseFireRate);

	// Set the tooltips to display when hovering over different on-screen text
	DamageText->SetToolTipText(FText::FromString("This is the damage of the tower."));
	FireDamageText->SetToolTipText(FText::FromString("This is the chance of inflicting fire damage."));
	RangeText->SetToolTipText(FText::FromString("This is the tower range."));
	FireRateText->SetToolTipText(FText::FromString("This is the tower fire rate."));
}

void UTowerPanel::CloseMenuButtonClicked()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UTowerPanel::SetupTowerWidgetInformation(ADefaultTower* TowerOnTile)
{
	SelectedTower = TowerOnTile;
	SetTowerImage();
	SetTowerDetailsTextComponents();
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
	FireDamageText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireDamage)));
	RangeText->SetText(FText::FromString(FString::FromInt(SelectedTower->TowerRangeSphere->GetUnscaledSphereRadius())));
	FireRateText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireRate)));
}

void UTowerPanel::IncreaseDamage()
{
	if (GameMode->CheckCurrentMoney(DamageIncreaseCost))
	{
		GameMode->DecreaseMoney(DamageIncreaseCost);
		SelectedTower->Damage += 10;
		SetTowerDetailsTextComponents();
	}
}

void UTowerPanel::IncreaseFireDamage()
{
	if (GameMode->CheckCurrentMoney(FireDamageIncreaseCost))
	{
		GameMode->DecreaseMoney(FireDamageIncreaseCost);
		SelectedTower->FireDamage += 10;
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
