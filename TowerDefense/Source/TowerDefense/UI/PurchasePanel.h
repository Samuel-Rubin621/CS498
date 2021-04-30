// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "TowerDefense/DefaultTower.h"
#include "PurchasePanel.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API UPurchasePanel : public UUserWidget
{
	GENERATED_BODY()
public:
	UPurchasePanel(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	// Function delegates for pressing a button on the widget
	UFUNCTION() void PurchaseButtonClicked();
	UFUNCTION() void CloseMenuButtonClicked();

	// Function delegates for selecting a tower
	UFUNCTION() void BallistaSelected();
	UFUNCTION() void CannonSelected();
	UFUNCTION() void CatapultSelected();
	UFUNCTION() void TurretSelected();

	UFUNCTION()void TowerSelected();

	void RefreshWidget(class ADefaultGridTile* PassedInTile);

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget)) UButton* PurchaseButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget)) UButton* CloseMenuButton;


	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* BallistaButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* CannonButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* CatapultButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UButton* TurretButton;

	// Text blocks displaying the tower information
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* DamageText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* FireChanceText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* FireRateText;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UTextBlock* RangeText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UProgressBar* DamageProgressBar;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UProgressBar* FireChanceProgressBar;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UProgressBar* FireRateProgressBar;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget)) UProgressBar* RangeProgressBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References") class ATowerDefenseGameMode* GameMode;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References") TSubclassOf<ADefaultTower> SelectedTower;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "References") TArray<TSubclassOf<ADefaultTower>> TowerClasses;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "References") class ADefaultGridTile* SelectedTile;
};
