// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TowerDefensePlayer.generated.h"

UCLASS()
class TOWERDEFENSE_API ATowerDefensePlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATowerDefensePlayer();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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

public:
	// Component for visualizing the origin of the pawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UBillboardComponent* Billboard;

	// Components for camera and camera boom
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* MainCamera;

	// Component for movement in the pawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UMovementComponent* PawnMovement;

	// Player controller variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class ATowerDefensePlayerController* PlayerController;

	// Variables for using the mouse to zoom and look around
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller")
	float MaxZoomIn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller")
	float MaxZoomOut;
	bool bRightMouseDown;
	float MouseX;
	float MouseY;
	float ZoomRate;
};
