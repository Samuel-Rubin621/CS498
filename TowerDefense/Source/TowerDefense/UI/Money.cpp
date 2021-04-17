// Fill out your copyright notice in the Description page of Project Settings.


#include "Money.h"
#include "TowerDefense/TowerDefenseGameMode.h"

UMoney::UMoney(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UMoney::NativeConstruct()
{
	ATowerDefenseGameMode* GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		GameMode->SetMoneyText.AddDynamic(this, &UMoney::UpdateMoneyText);
		MoneyText->SetText(FText::FromString(FString::FromInt(GameMode->Money)));
	}

}

void UMoney::UpdateMoneyText(int32 Value)
{
	if (MoneyText)
	{
		MoneyText->SetText(FText::FromString(FString::FromInt(Value)));
	}
}
