// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefaultGridTile.generated.h"

UCLASS()
class TOWERDEFENSE_API ADefaultGridTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefaultGridTile();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile | Mesh")
	class UStaticMeshComponent* MainTileMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile | Mesh")
	class UStaticMeshComponent* DetailTileMesh;

};
