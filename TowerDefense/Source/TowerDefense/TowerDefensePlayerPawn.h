// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TowerDefensePlayerPawn.generated.h"

UCLASS()
class TOWERDEFENSE_API ATowerDefensePlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATowerDefensePlayerPawn();

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

	// Components for the pawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Root;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* MainCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UMovementComponent* Movement;

	// Component for movement in the pawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UFloatingPawnMovement* PawnMovement;

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
