// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerDefensePlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"
#include "TowerDefensePlayerPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

ATowerDefensePlayerController::ATowerDefensePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	DefaultMouseCursor = EMouseCursor::Default;

	// Set pawn defaults upon creation
	bRightMouseDown = false;
	ZoomRate = 100;
	MaxZoomIn = 2000.f;
	MaxZoomOut = 4000.f;
}

// Called when the game starts or when spawned
void ATowerDefensePlayerController::BeginPlay()
{
	Super::BeginPlay();

	ControlledPawn = (ATowerDefensePlayerPawn*)AController::GetPawn();
}

void ATowerDefensePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}

void ATowerDefensePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("RightMouseButton", IE_Pressed, this, &ATowerDefensePlayerController::RightMouseDown);
	InputComponent->BindAction("RightMouseButton", IE_Released, this, &ATowerDefensePlayerController::RightMouseUp);

	InputComponent->BindAxis("MoveForward", this, &ATowerDefensePlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATowerDefensePlayerController::MoveRight);
	InputComponent->BindAxis("LookAround", this, &ATowerDefensePlayerController::LookAround);
	InputComponent->BindAxis("Zoom", this, &ATowerDefensePlayerController::Zoom);

}

void ATowerDefensePlayerController::RightMouseDown()
{
	bRightMouseDown = true;
	bShowMouseCursor = false;
	GetMousePosition(MouseX, MouseY);
}

void ATowerDefensePlayerController::RightMouseUp()
{
	bShowMouseCursor = true;
	bRightMouseDown = false;
	UWidgetBlueprintLibrary::SetInputMode_GameAndUI(this);
}

void ATowerDefensePlayerController::LookAround(float Value)
{
	if (Value != 0.f && IsLocalPlayerController() && bRightMouseDown)
	{
		SetMouseLocation(MouseX, MouseY);
		APlayerController* const PC = CastChecked<APlayerController>(this);
		PC->AddYawInput(Value);
	}
}

void ATowerDefensePlayerController::MoveForward(float Value)
{
	if ((Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		ControlledPawn->AddMovementInput(Direction, Value);
	}
}

void ATowerDefensePlayerController::MoveRight(float Value)
{
	if ((Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		ControlledPawn->AddMovementInput(Direction, Value);
	}
}

void ATowerDefensePlayerController::Zoom(float Value)
{
	if (Value != 0)
	{
		ControlledPawn->CameraBoom->TargetArmLength = FMath::Clamp((ControlledPawn->CameraBoom->TargetArmLength + (Value * ZoomRate)), MaxZoomIn, MaxZoomOut);
	}
}