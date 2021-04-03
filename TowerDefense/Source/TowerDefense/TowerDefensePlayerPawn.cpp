// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefensePlayerPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TowerDefensePlayerController.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
ATowerDefensePlayerPawn::ATowerDefensePlayerPawn()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	// Setup camera and camera boom attachment
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 1200.f; // Camera follows at this distance
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller
	MainCamera = CreateDefaultSubobject<UCameraComponent>("MainCamera");
	MainCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	MainCamera->bUsePawnControlRotation = false;

	// Setup movement component
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");

	// Set pawn defaults upon creation
	bRightMouseDown = false;
	ZoomRate = 100;
	MaxZoomIn = 600.f;
	MaxZoomOut = 2500.f;

}

// Called when the game starts or when spawned
void ATowerDefensePlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<ATowerDefensePlayerController>(GetController());
}

// Called every frame
void ATowerDefensePlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRightMouseDown)
	{
		PlayerController->SetMouseLocation(MouseX, MouseY);
	}

}

// Called to bind functionality to input
void ATowerDefensePlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("RightMouseButton", IE_Pressed, this, &ATowerDefensePlayerPawn::RightMouseDown);
	PlayerInputComponent->BindAction("RightMouseButton", IE_Released, this, &ATowerDefensePlayerPawn::RightMouseUp);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATowerDefensePlayerPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATowerDefensePlayerPawn::MoveRight);
	PlayerInputComponent->BindAxis("LookAround", this, &ATowerDefensePlayerPawn::LookAround);
	PlayerInputComponent->BindAxis("Zoom", this, &ATowerDefensePlayerPawn::Zoom);


}

void ATowerDefensePlayerPawn::RightMouseDown()
{
	bRightMouseDown = true;
	PlayerController->bShowMouseCursor = false;
	PlayerController->GetMousePosition(MouseX, MouseY);
}

void ATowerDefensePlayerPawn::RightMouseUp()
{
	bRightMouseDown = false;
	PlayerController->bShowMouseCursor = true;
}

void ATowerDefensePlayerPawn::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		UE_LOG(LogTemp, Warning, TEXT("Forward"));

		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ATowerDefensePlayerPawn::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		UE_LOG(LogTemp, Warning, TEXT("Right"));

		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ATowerDefensePlayerPawn::LookAround(float Value)
{
	if (Value != 0.f && Controller && Controller->IsLocalPlayerController() && bRightMouseDown)
	{
		UE_LOG(LogTemp, Warning, TEXT("Turning"));
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddYawInput(Value);
	}
}

void ATowerDefensePlayerPawn::Zoom(float Value)
{
	if (Value != 0)
	{
		CameraBoom->TargetArmLength = FMath::Clamp((CameraBoom->TargetArmLength + (Value * ZoomRate)), MaxZoomIn, MaxZoomOut);
		/*
		FVector NewCameraPosition = MainCamera->GetComponentLocation();
		NewCameraPosition.Z = FMath::Clamp((NewCameraPosition.Z + 10.f), 20.f, 100.f);
		MainCamera->AddRelativeLocation(NewCameraPosition);*/
	}
}