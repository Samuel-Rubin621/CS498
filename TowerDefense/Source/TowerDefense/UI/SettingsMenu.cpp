// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsMenu.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenu.h"

USettingsMenu::USettingsMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void USettingsMenu::NativeConstruct()
{
	MainMenuButton->OnClicked.AddDynamic(this, &USettingsMenu::OnMainMenuButtonPressed);
}

void USettingsMenu::OnMainMenuButtonPressed()
{
	UMainMenu* MainMenu = CreateWidget<UMainMenu>(GetWorld(), MainMenuWidget);
	RemoveFromParent();
	MainMenu->AddToViewport();
}

void USettingsMenu::SetScreenResolution()
{
	
}


