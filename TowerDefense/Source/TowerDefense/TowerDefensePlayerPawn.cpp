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

}

// Called when the game starts or when spawned
void ATowerDefensePlayerPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATowerDefensePlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Called to bind functionality to input
void ATowerDefensePlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
}
