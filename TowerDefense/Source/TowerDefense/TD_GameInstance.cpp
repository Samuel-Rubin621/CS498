// Fill out your copyright notice in the Description page of Project Settings.


#include "TD_GameInstance.h"
#include "Kismet/GameplayStatics.h"

void UTD_GameInstance::Init()
{
	ScreenResolution = "1280x720";
	Volume_Music = 0.5f;
	Volume_SFX = 0.5f;
}