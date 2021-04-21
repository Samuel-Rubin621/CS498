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

}

// Called when the game starts or when spawned
void ADefaultStartEnd::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADefaultStartEnd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}