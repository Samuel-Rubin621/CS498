// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerPanel.h"

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
	SetDamageText();
	SetRangeText();
}

void UTowerPanel::SetTowerImage()
{
	if (SelectedTower)
	{/*
		ETowerName TowerName = SelectedTower->GetClass()->GetName();

		switch (TowerName)
		{
		default:
			break;
		}*/
	}
}

void UTowerPanel::SetDamageText()
{

}

void UTowerPanel::SetRangeText()
{

}
