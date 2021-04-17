// Fill out your copyright notice in the Description page of Project Settings.


#include "Lives.h"
#include "TowerDefense/TowerDefenseGameMode.h"

ULives::ULives(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void ULives::NativeConstruct()
{
	ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		GameMode->SetLivesText.AddDynamic(this, &ULives::UpdateLivesText);
		LivesText->SetText(FText::FromString(FString::FromInt(GameMode->Lives)));
	}
}

void ULives::UpdateLivesText(int32 Value)
{
	if (LivesText)
	{
		LivesText->SetText(FText::FromString(FString::FromInt(Value)));
	}
}
