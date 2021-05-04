// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsMenu.h"
#include "MainMenu.h"
#include "TowerDefense/TD_GameInstance.h"
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
	GameInstance = Cast<UTD_GameInstance>(GetGameInstance());
	InitializeDefaults();

	MainMenuButton->OnClicked.AddDynamic(this, &USettingsMenu::OnMainMenuButtonPressed);

	ScreenResolutionDropDown->OnSelectionChanged.AddDynamic(this, &USettingsMenu::OnScreenResolutionChanged);

	Slider_Music->OnValueChanged.AddDynamic(this, &USettingsMenu::OnMusicVolumeChanged);
	Slider_SFX->OnValueChanged.AddDynamic(this, &USettingsMenu::OnSFXVolumeChanged);
}

void USettingsMenu::InitializeDefaults()
{
	ScreenResolutionDropDown->SetSelectedOption(GameInstance->ScreenResolution);

	Slider_Music->SetValue(GameInstance->Volume_Music);
	PB_Music->SetPercent(GameInstance->Volume_Music);

	Slider_SFX->SetValue(GameInstance->Volume_SFX);
	PB_SFX->SetPercent(GameInstance->Volume_SFX);
}

void USettingsMenu::OnMainMenuButtonPressed()
{
	MainMenu->SetVisibility(ESlateVisibility::Visible);
	SetVisibility(ESlateVisibility::Hidden);
}

void USettingsMenu::OnScreenResolutionChanged(FString ScreenResolution, ESelectInfo::Type SelectionType)
{
	GameInstance->ScreenResolution = ScreenResolution;
	FString Final = "r.SetRes " + ScreenResolution;
	if (GEngine) GEngine->Exec(GetWorld(), *Final);
}

void USettingsMenu::OnMusicVolumeChanged(float Value)
{
	GameInstance->Volume_Music = Value;
	UGameplayStatics::SetSoundMixClassOverride(GetWorld(), SM_Music, SC_Music, Value, 1.0f, 0.0f, true);
	UGameplayStatics::PushSoundMixModifier(GetWorld(), SM_Music);
	
	PB_Music->SetPercent(Value);
}

void USettingsMenu::OnSFXVolumeChanged(float Value)
{
	GameInstance->Volume_SFX = Value;
	UGameplayStatics::SetSoundMixClassOverride(GetWorld(), SM_SFX, SC_SFX, Value, 1.0f, 0.0f, true);
	UGameplayStatics::PushSoundMixModifier(GetWorld(), SM_SFX);

	PB_SFX->SetPercent(Value);
}
