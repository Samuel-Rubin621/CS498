// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TowerOverlay.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class TOWERDEFENSE_API UTowerOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UTowerOverlay(const FObjectInitializer& ObjectInitializer);

	// Optionally override the Blueprint "Event Construct" event
	virtual void NativeConstruct() override;

	// Optionally override the tick event
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

protected:


public:
	




};
