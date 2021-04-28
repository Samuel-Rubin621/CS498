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

	// Movement functions
	void RightMouseDown();
	void RightMouseUp();

	// Functions for moving around the word using WASD
	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookAround(float Value);
	void Zoom(float Value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	UFUNCTION()
	void CheatCodeAddMoney();

public:
	UPROPERTY()
	class ATowerDefensePlayerPawn* ControlledPawn;

	UPROPERTY(BlueprintReadOnly, Category = "References")
	class ATowerDefenseGameMode* GameMode;

	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
	class UParticleSystem* FireParticles;

	// Variables for using the mouse to zoom and look around
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller")
	float MaxZoomIn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller")
	float MaxZoomOut;
	UPROPERTY()
	bool bRightMouseDown;
	UPROPERTY()
	float MouseX;
	UPROPERTY()
	float MouseY;
	UPROPERTY()
	float ZoomRate;
};


