// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsMenu.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API USettingsMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	USettingsMenu(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	void InitializeDefaults();

	UFUNCTION() void OnMainMenuButtonPressed();

	UFUNCTION() void OnScreenResolutionChanged(FString ScreenResolution, ESelectInfo::Type SelectionType);

	UFUNCTION() void OnMusicVolumeChanged(float Value);
	UFUNCTION() void OnSFXVolumeChanged(float Value);

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class UComboBoxString* ScreenResolutionDropDown;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class UButton* MainMenuButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class UProgressBar* PB_Music;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))	    UProgressBar* PB_SFX;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class USlider* Slider_Music;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))		USlider* Slider_SFX;

	UPROPERTY(EditDefaultsOnly)	class USoundClass* SC_Music;
	UPROPERTY(EditDefaultsOnly)		  USoundClass* SC_SFX;

	UPROPERTY(EditDefaultsOnly)	class USoundMix* SM_Music;
	UPROPERTY(EditDefaultsOnly)		  USoundMix* SM_SFX;

	UPROPERTY(EditDefaultsOnly) TSubclassOf<UUserWidget> MainMenuWidget;
	class ATowerDefenseGameMode* GameMode;
	class UMainMenu* MainMenu;
	class UTD_GameInstance* GameInstance;
};
