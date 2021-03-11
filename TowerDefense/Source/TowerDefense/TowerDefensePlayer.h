// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TowerDefensePlayer.generated.h"

UCLASS()
class TOWERDEFENSE_API ATowerDefensePlayer : public APawn
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UBillboardComponent* Billboard;
	//Variables for camera and camera boom
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* MainCamera;

	// Player controller variable
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class ATowerDefensePlayerController* PlayerController;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	bool bRightMouseDown;
	float MouseX;
	float MouseY;
	float ZoomRate;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller")
	float MaxZoomIn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controller")
	float MaxZoomOut;

};
