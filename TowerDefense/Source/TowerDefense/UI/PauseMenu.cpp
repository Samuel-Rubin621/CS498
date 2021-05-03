// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenu.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

UPauseMenu::UPauseMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UPauseMenu::NativeConstruct()
{
	MainMenuButton->OnClicked.AddDynamic(this, &UPauseMenu::OnMainMenuButtonPressed);
	QuitButton->OnClicked.AddDynamic(this, &UPauseMenu::OnExitButtonPressed);
}

void UPauseMenu::OnMainMenuButtonPressed()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainMenu"));
}

void UPauseMenu::OnExitButtonPressed()
{
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}
