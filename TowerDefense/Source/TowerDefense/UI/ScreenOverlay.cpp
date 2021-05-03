// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenOverlay.h"
#include "TowerDefense/TowerDefenseGameMode.h"

UScreenOverlay::UScreenOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UScreenOverlay::NativeConstruct()
{
	Super::NativeConstruct();

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
	GameMode->ScreenOverlay = this;

	PurchasePanel->SetVisibility(ESlateVisibility::Hidden);
	TowerPanel->SetVisibility(ESlateVisibility::Hidden);
	PauseMenu->SetVisibility(ESlateVisibility::Hidden);

	StartRoundButton->OnClicked.AddDynamic(this, &UScreenOverlay::StartRound);
	GameMode->EndRound.AddDynamic(this, &UScreenOverlay::EndRound);
}

void UScreenOverlay::StartRound()
{
	GameMode->StartRound();
	StartRoundButton->SetVisibility(ESlateVisibility::Hidden);
}

void UScreenOverlay::EndRound(int32 Round)
{
	StartRoundButton->SetVisibility(ESlateVisibility::Visible);
}
