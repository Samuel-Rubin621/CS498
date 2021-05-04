// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsMenu.h"
#include "MainMenu.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ComboBoxString.h"
#include "Components/ProgressBar.h"
#include "Sound/SoundClass.h"
#include "Sound/SoundMix.h"

USettingsMenu::USettingsMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void USettingsMenu::NativeConstruct()
{
	MainMenuButton->OnClicked.AddDynamic(this, &USettingsMenu::OnMainMenuButtonPressed);
	ScreenResolutionDropDown->OnSelectionChanged.AddDynamic(this, &USettingsMenu::OnScreenResolutionChanged);

	Slider_Music->OnValueChanged.AddDynamic(this, &USettingsMenu::OnMusicVolumeChanged);
	Slider_SFX->OnValueChanged.AddDynamic(this, &USettingsMenu::OnSFXVolumeChanged);
}

void USettingsMenu::OnMainMenuButtonPressed()
{
	MainMenu->SetVisibility(ESlateVisibility::Visible);
	SetVisibility(ESlateVisibility::Hidden);
}

void USettingsMenu::OnScreenResolutionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	FString Resolution;

	int OptionIndex = ScreenResolutionDropDown->FindOptionIndex(SelectedItem);
	switch (OptionIndex)
	{
	case 0:
		Resolution = "720x480";
		break;
	case 1:
		Resolution = "1280x720";
		break;
	case 2:
		Resolution = "1920x1080";
		break;
	case 3:
		Resolution = "2560x1440";
		break;
	default:
		break;
	}

	if (Resolution != "")
	{
		FString Final = "r.SetRes " + Resolution;
		if (GEngine) GEngine->Exec(GetWorld(), *Final);
	}
}

void USettingsMenu::OnMusicVolumeChanged(float Value)
{
	UGameplayStatics::SetSoundMixClassOverride(GetWorld(), SM_Music, SC_Music, Value, 1.0f, 0.0f, true);
	UGameplayStatics::PushSoundMixModifier(GetWorld(), SM_Music);
	
	PB_Music->SetPercent(Value);
}

void USettingsMenu::OnSFXVolumeChanged(float Value)
{
	UGameplayStatics::SetSoundMixClassOverride(GetWorld(), SM_SFX, SC_SFX, Value, 1.0f, 0.0f, true);
	UGameplayStatics::PushSoundMixModifier(GetWorld(), SM_SFX);

	PB_SFX->SetPercent(Value);
}
