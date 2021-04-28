// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2D.h"
#include "TowerDefense/DefaultTower.h"
#include "Components/ComboBoxString.h"
#include "TowerPanel.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API UTowerPanel : public UUserWidget
{
	GENERATED_BODY()
public:
	// Constructor functions
	UTowerPanel(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;

	// Functions for setting up the information on the widget using the passed in tower reference
	void SetupTowerWidgetInformation(ADefaultTower* TowerOnTile);
	void SetTowerImage();
	void SetTowerDetailsTextComponents();
	void SetTargetingButtons();

	// Function delegates for pressing a button on the widget
	UFUNCTION() void CloseMenuButtonClicked() { SetVisibility(ESlateVisibility::Hidden); }

	// Functions for increasing tower stats
	UFUNCTION()	void IncreaseDamage();
	UFUNCTION()	void IncreaseFireDamageChance();
	UFUNCTION()	void IncreaseRange();
	UFUNCTION()	void IncreaseFireRate();

	// Functions for setting the tower targeting type and disabling the appropriate button
	UFUNCTION() void SetTargetingFirst() { SelectedTower->TowerTargeting = ETowerPositionTargeting::TPT_First; SetTargetingButtons(); }
	UFUNCTION()	void SetTargetingLast() { SelectedTower->TowerTargeting = ETowerPositionTargeting::TPT_Last; SetTargetingButtons(); }
	UFUNCTION()	void SetTargetingStrong() { SelectedTower->TowerTargeting = ETowerPositionTargeting::TPT_Strongest; SetTargetingButtons(); }
	UFUNCTION()	void SetTargetingWeak() { SelectedTower->TowerTargeting = ETowerPositionTargeting::TPT_Weakest; SetTargetingButtons(); }

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* CloseMenuButton;

	// Text blocks displaying the tower information
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* DamageText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* FireDamageChanceText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* RangeText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* FireRateText;

	// Tower upgrade button variables
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* IncreaseDamageButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* IncreaseFireDamageButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* IncreaseRangeButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* IncreaseFireRateButton;

	// Tower upgrade costs that can be changed in the editor
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) int32 DamageIncreaseCost;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) int32 FireDamageIncreaseCost;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) int32 RangeIncreaseCost;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) int32 FireRateIncreaseCost;

	// Tower upgrade cost text variables to indicate if the tower can be upgraded
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* IncreaseDamageText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* IncreaseFireDamageChanceText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* IncreaseRangeText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* IncreaseFireRateText;

	// Image variable that gets changed to display an image of the selected tower
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UImage* TowerImage;

	UPROPERTY(EditDefaultsOnly) UTexture2D* BallistaImage;
	UPROPERTY(EditDefaultsOnly) UTexture2D* CannonImage;
	UPROPERTY(EditDefaultsOnly) UTexture2D* CatapultImage;
	UPROPERTY(EditDefaultsOnly) UTexture2D* TurretImage;

	// Tower targetting type button variables
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* FirstButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* LastButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* StrongestButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* WeakestButton;

	// Reference variables
	UPROPERTY(BlueprintReadOnly, Category = "References") class ATowerDefenseGameMode* GameMode;
	UPROPERTY(BlueprintReadOnly, Category = "References") ADefaultTower* SelectedTower;
};
