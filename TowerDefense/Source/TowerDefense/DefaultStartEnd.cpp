// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultStartEnd.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

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

	PreloadNextRound();
	
}

// Called every frame
void ADefaultStartEnd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultStartEnd::PreloadNextRound()
{
	if (RoundDataTable)
	{
		static const FString ContextString(TEXT("Round Information"));
		FRoundInformation* RoundInfo = RoundDataTable->FindRow<FRoundInformation>(FName(FString::FromInt(Round)), ContextString, true);
		if (RoundInfo)
		{
			Enemy1 = RoundInfo->Enemy1;
			Enemy2 = RoundInfo->Enemy2;
			Enemy3 = RoundInfo->Enemy3;
			Enemy4 = RoundInfo->Enemy4;
		}
	}
}

void ADefaultStartEnd::StartRound()
{
	bInRound = true;


}










