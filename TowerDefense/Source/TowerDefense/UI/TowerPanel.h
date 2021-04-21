// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2D.h"
#include "TowerDefense/DefaultTower.h"
#include "TowerPanel.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API UTowerPanel : public UUserWidget
{
	GENERATED_BODY()
public:
	UTowerPanel(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	// Function delegates for pressing a button on the widget
	UFUNCTION()
	void CloseMenuButtonClicked();

	void SetupTowerWidgetInformation(ADefaultTower* TowerOnTile);

	// Functions for setting up the information on the widget using the passed in tower reference
	void SetTowerImage();
	void SetTowerDetailsTextComponents();

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton* CloseMenuButton;

	// Text blocks displaying the tower information
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* DamageText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* RangeText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* FireRateText;

	// Image variables
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UImage* TowerImage;
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* BallistaImage;
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CannonImage;
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CatapultImage;
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* TurretImage;

	UPROPERTY(BlueprintReadOnly, Category = "References")
	class ATowerDefenseGameMode* GameMode;
	UPROPERTY(BlueprintReadOnly, Category = "References")
	class ADefaultTower* SelectedTower;
};
