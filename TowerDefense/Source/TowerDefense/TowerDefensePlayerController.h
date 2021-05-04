// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TowerDefensePlayerController.generated.h"

UCLASS()
class ATowerDefensePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATowerDefensePlayerController();

	void PauseMenu();

	// Movement functions
	void RightMouseDown();
	void RightMouseUp();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookAround(float Value);
	void Zoom(float Value);

	void CheatCodeAddMoney();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

public:
	UPROPERTY() class ATowerDefensePlayerPawn* ControlledPawn;

	class ATowerDefenseGameMode* GameMode;
	class UPauseMenu* PauseMenuReference;

	// Variables for using the mouse to zoom and look around
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller") float MaxZoomIn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller") float MaxZoomOut;
	bool bRightMouseDown;
	float MouseX;
	float MouseY;
	float ZoomRate;
};


