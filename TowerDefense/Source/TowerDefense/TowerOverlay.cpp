// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerOverlay.h"

UTowerOverlay::UTowerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}


void UTowerOverlay::NativeConstruct()
{
	// Do some custom setup

	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();
}


void UTowerOverlay::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Do your custom tick stuff here
}