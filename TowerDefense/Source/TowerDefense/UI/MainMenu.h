// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Components/Button.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UMainMenu(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UFUNCTION() void OnPlayButtonPressed();
	UFUNCTION() void OnSettingsButtonPressed();
	UFUNCTION() void OnExitButtonPressed();

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* PlayButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* OptionsButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* QuitButton;
	
	class USettingsMenu* SettingsMenu;

	UPROPERTY(EditDefaultsOnly) TSubclassOf<UUserWidget> SettingsWidget;
};
