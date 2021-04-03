// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTestPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TowerDefensePlayerController.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
APawnTestPlayer::APawnTestPlayer()
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
void APawnTestPlayer::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<ATowerDefensePlayerController>(GetController());
}

// Called every frame
void APawnTestPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRightMouseDown)
	{
		PlayerController->SetMouseLocation(MouseX, MouseY);
	}

}

// Called to bind functionality to input
void APawnTestPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("RightMouseButton", IE_Pressed, this, &APawnTestPlayer::RightMouseDown);
	PlayerInputComponent->BindAction("RightMouseButton", IE_Released, this, &APawnTestPlayer::RightMouseUp);

	PlayerInputComponent->BindAxis("MoveForward", this, &APawnTestPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APawnTestPlayer::MoveRight);
	PlayerInputComponent->BindAxis("LookAround", this, &APawnTestPlayer::LookAround);
	PlayerInputComponent->BindAxis("Zoom", this, &APawnTestPlayer::Zoom);


}

void APawnTestPlayer::RightMouseDown()
{
	bRightMouseDown = true;
	PlayerController->bShowMouseCursor = false;
	PlayerController->GetMousePosition(MouseX, MouseY);
}

void APawnTestPlayer::RightMouseUp()
{
	bRightMouseDown = false;
	PlayerController->bShowMouseCursor = true;
}

void APawnTestPlayer::MoveForward(float Value)
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

void APawnTestPlayer::MoveRight(float Value)
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

void APawnTestPlayer::LookAround(float Value)
{
	if (Value != 0.f && Controller && Controller->IsLocalPlayerController() && bRightMouseDown)
	{
		UE_LOG(LogTemp, Warning, TEXT("Turning"));
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddYawInput(Value);
	}
}

void APawnTestPlayer::Zoom(float Value)
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