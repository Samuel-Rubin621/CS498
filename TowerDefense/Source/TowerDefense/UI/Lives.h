// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Lives.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSE_API ULives : public UUserWidget
{
	GENERATED_BODY()
public:
	ULives(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UFUNCTION()
	void UpdateLivesText(int32 Value);

	/** All variables below this point! */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* LivesText;
};
