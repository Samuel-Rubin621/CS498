// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "TowerDefense/DefaultTower.h"
#include "TowerPanel.generated.h"

UENUM(BlueprintType)
enum class ETowerName : uint8
{
	TN_BP_Ballista_C	UMETA(DisplayName = "Ballista"),
	TN_BP_Cannon_C		UMETA(DisplayName = "Cannon"),
	TN_BP_Catapult_C	UMETA(DisplayName = "Catapult"),
	TN_BP_Turret_C		UMETA(DisplayName = "Turret"),

	TN_MAX				UMETA(DisplayName = "DefaultMax")
};

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
	void SetDamageText();
	void SetRangeText();

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UButton* CloseMenuButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References")
	class ATowerDefenseGameMode* GameMode;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "References")
	class ADefaultTower* SelectedTower;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "References")
	//TArray<class UPaperSprite*> TowerSprites;
};
