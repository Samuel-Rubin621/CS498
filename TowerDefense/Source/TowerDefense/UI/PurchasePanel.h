// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
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
	UFUNCTION()
	void PurchaseButtonClicked();
	UFUNCTION()
	void CloseMenuButtonClicked();

	// Function delegates for selecting a tower
	UFUNCTION()
	void BallistaSelected();
	UFUNCTION()
	void CannonSelected();
	UFUNCTION()
	void CatapultSelected();
	UFUNCTION()
	void TurretSelected();

	UFUNCTION()
	void TowerSelected();

	void RefreshWidget(class ADefaultGridTile* PassedInTile);

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* PurchaseButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* CloseMenuButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* BallistaButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* CannonButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* CatapultButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* TurretButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References")
	class ATowerDefenseGameMode* GameMode;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References")
	TSubclassOf<ADefaultTower> SelectedTower;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "References")
	TArray<TSubclassOf<ADefaultTower>> TowerClasses;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "References")
	class ADefaultGridTile* SelectedTile;
};
