// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenOverlay.h"

UScreenOverlay::UScreenOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UScreenOverlay::NativeConstruct()
{
	Super::NativeConstruct();

	StartRoundButton->OnClicked.AddDynamic(this, &UScreenOverlay::ButtonClickTesting);
}

void UScreenOverlay::ButtonClickTesting()
{
	UE_LOG(LogTemp, Warning, TEXT("Button was pressed!"));
}
