// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerDefensePlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"
#include "TowerDefensePlayerPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "TowerDefenseGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ScreenOverlay.h"

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

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();

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
	InputComponent->BindAction("PauseMenu", IE_Pressed, this, &ATowerDefensePlayerController::PauseMenu);

	InputComponent->BindAxis("MoveForward", this, &ATowerDefensePlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATowerDefensePlayerController::MoveRight);
	InputComponent->BindAxis("LookAround", this, &ATowerDefensePlayerController::LookAround);
	InputComponent->BindAxis("Zoom", this, &ATowerDefensePlayerController::Zoom);

	// Cheat used for debugging
	InputComponent->BindAction("CheatAddMoney", IE_Pressed, this, &ATowerDefensePlayerController::CheatCodeAddMoney);
}

void ATowerDefensePlayerController::PauseMenu()
{
	if (PauseMenuReference)
	{
		if (PauseMenuReference->IsVisible()) PauseMenuReference->SetVisibility(ESlateVisibility::Hidden);
		else PauseMenuReference->SetVisibility(ESlateVisibility::Visible);
	}
	else if (GameMode->ScreenOverlay)
	{
		PauseMenuReference = GameMode->ScreenOverlay->PauseMenu;
		PauseMenu();
	}
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
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this);
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
		ControlledPawn->CameraBoom->TargetArmLength = FMath::Clamp((ControlledPawn->CameraBoom->TargetArmLength
			+ (Value * ZoomRate)), MaxZoomIn, MaxZoomOut);
	}
}

void ATowerDefensePlayerController::CheatCodeAddMoney()
{
	GameMode->IncreaseMoney(10000);
}
