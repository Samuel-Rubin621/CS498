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

	SettingsMenu = CreateWidget<USettingsMenu>(GetWorld(), SettingsWidget);
	SettingsMenu->AddToViewport();
	SettingsMenu->SetVisibility(ESlateVisibility::Hidden);
	SettingsMenu->MainMenu = this;
}

void UMainMenu::OnPlayButtonPressed()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("StartingMap"));
}

void UMainMenu::OnSettingsButtonPressed()
{
	SettingsMenu->SetVisibility(ESlateVisibility::Visible);
	this->SetVisibility(ESlateVisibility::Hidden);
}

void UMainMenu::OnExitButtonPressed()
{
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}
