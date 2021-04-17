// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Money.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API UMoney : public UUserWidget
{
	GENERATED_BODY()
public:
	UMoney(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UFUNCTION()
	void UpdateMoneyText(int32 Value);

	/** All variables below this point! */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* MoneyText;
};
