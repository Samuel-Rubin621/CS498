// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "PauseMenu.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API UPauseMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UPauseMenu(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UFUNCTION() void OnMainMenuButtonPressed();
	UFUNCTION() void OnExitButtonPressed();

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* MainMenuButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* QuitButton;

	UPROPERTY(EditDefaultsOnly) TSubclassOf<UUserWidget> SettingsWidget;
};
