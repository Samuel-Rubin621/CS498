// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameHUD.h"
#include "ScreenOverlay.h"

AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (ScreenOverlayClass)
	{
		ScreenOverlay = CreateWidget<UScreenOverlay>(GetWorld(), ScreenOverlayClass);
		if (ScreenOverlay)
		{
			ScreenOverlay->AddToViewport();
		}
	}
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}