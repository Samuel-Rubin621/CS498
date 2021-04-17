// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "ScreenOverlay.generated.h"

UCLASS()
class TOWERDEFENSE_API UScreenOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	UScreenOverlay(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UFUNCTION()
	void StartRound();
	UFUNCTION()
	void EndRound(int32 Round);

	/***** Only variables declared beyond this point! *****/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UButton* StartRoundButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class ULives* LivesWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UMoney* MoneyWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References")
	class ATowerDefenseGameMode* GameMode;
};
