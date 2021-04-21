// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Kismet/GameplayStatics.h"
#include "SettingsMenu.h"

UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UMainMenu::NativeConstruct()
{
	PlayButton->OnClicked.AddDynamic(this, &UMainMenu::OnPlayButtonPressed);
	OptionsButton->OnClicked.AddDynamic(this, &UMainMenu::OnSettingsButtonPressed);
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::OnExitButtonPressed);
}

void UMainMenu::OnPlayButtonPressed()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("StartingMap"));
}

void UMainMenu::OnSettingsButtonPressed()
{
	USettingsMenu* SettingsMenu = CreateWidget<USettingsMenu>(GetWorld(), SettingsWidget);
	RemoveFromParent();
	SettingsMenu->AddToViewport();
}

void UMainMenu::OnExitButtonPressed()
{
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}
