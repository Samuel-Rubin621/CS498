// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefensePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/BillboardComponent.h"
#include "TowerDefensePlayerController.h"

// Sets default values
ATowerDefensePlayer::ATowerDefensePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("SceneComponent"));
	RootComponent = Billboard;

	// Setup camera and camera boom attachment
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 1200.f; // Camera follows at this distance
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	MainCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	MainCamera->bUsePawnControlRotation = false;

	bRightMouseDown = false;
}

// Called when the game starts or when spawned
void ATowerDefensePlayer::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerController = Cast<ATowerDefensePlayerController>(GetController());
}

// Called every frame
void ATowerDefensePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRightMouseDown)
	{
		PlayerController->SetMouseLocation(MouseX, MouseY);
	}

}

// Called to bind functionality to input
void ATowerDefensePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("RightMouseButton", IE_Pressed, this, &ATowerDefensePlayer::RightMouseDown);
	PlayerInputComponent->BindAction("RightMouseButton", IE_Released, this, &ATowerDefensePlayer::RightMouseUp);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATowerDefensePlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATowerDefensePlayer::MoveRight);
	PlayerInputComponent->BindAxis("LookAround", this, &ATowerDefensePlayer::LookAround);

}

void ATowerDefensePlayer::RightMouseDown()
{
	bRightMouseDown = true;
	PlayerController->bShowMouseCursor = false;
	PlayerController->GetMousePosition(MouseX, MouseY);
}

void ATowerDefensePlayer::RightMouseUp()
{
	bRightMouseDown = false;
	PlayerController->bShowMouseCursor = true;
}

void ATowerDefensePlayer::MoveForward(float Value)
{

}

void ATowerDefensePlayer::MoveRight(float Value)
{

}

void ATowerDefensePlayer::LookAround(float Value)
{
	if (Value != 0.f && Controller && Controller->IsLocalPlayerController() && bRightMouseDown)
	{
		UE_LOG(LogTemp, Warning, TEXT("Turning"));
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddYawInput(Value);
	}
}