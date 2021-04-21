// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerPanel.h"
#include "Components/SphereComponent.h"

UTowerPanel::UTowerPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UTowerPanel::NativeConstruct()
{
	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	CloseMenuButton->OnClicked.AddDynamic(this, &UTowerPanel::CloseMenuButtonClicked);
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
	FireDamageText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireDamageRating)));
	RangeText->SetText(FText::FromString(FString::FromInt(SelectedTower->TowerRangeSphere->GetUnscaledSphereRadius())));
	FireRateText->SetText(FText::FromString(FString::FromInt(SelectedTower->FireRate)));
}