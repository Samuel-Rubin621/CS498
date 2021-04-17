// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultStartEnd.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "TowerDefenseGameMode.h"

// Sets default values
ADefaultStartEnd::ADefaultStartEnd()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;
	StartPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("StartPoint"));
	StartPoint->SetupAttachment(GetRootComponent());
	EndPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("EndPoint"));
	EndPoint->SetupAttachment(GetRootComponent());

	static ConstructorHelpers::FObjectFinder<UDataTable> RoundDataObject(TEXT("DataTable'/Game/Enemies/Spawning/RoundDataTable.RoundDataTable'"));
	if (RoundDataObject.Succeeded())
	{
		RoundDataTable = RoundDataObject.Object;
	}

	bInRound = false;
	Round = 1;
}

// Called when the game starts or when spawned
void ADefaultStartEnd::BeginPlay()
{
	Super::BeginPlay();

	GameMode = (ATowerDefenseGameMode*)GetWorld()->GetAuthGameMode();
}

// Called every frame
void ADefaultStartEnd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}