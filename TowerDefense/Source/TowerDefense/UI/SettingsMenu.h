// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsMenu.generated.h"

UENUM(BlueprintType)
enum class EScreenResolution :uint8
{
	ESR_480		UMETA(DisplayName = "720x480"),
	ESR_720		UMETA(DisplayName = "1280x720"),
	ESR_1080	UMETA(DisplayName = "1920x1080"),
	ESR_1440	UMETA(DisplayName = "2560x1440"),

	ESR_MAX		UMETA(DisplayName = "DefaultMAX")
};

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

	UFUNCTION() void OnMainMenuButtonPressed();

	UFUNCTION() void SetScreenResolution();

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class UComboBoxString* ScreenResolutionDropDown;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class USlider* VolumeSlider;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class UProgressBar* VolumeBar;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) class UButton* MainMenuButton;

	UPROPERTY(EditDefaultsOnly) TSubclassOf<UUserWidget> MainMenuWidget;
};
