// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DefaultProjectile.generated.h"

UCLASS()
class TOWERDEFENSE_API ADefaultProjectile : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADefaultProjectile();

	UFUNCTION()
	void Initialize(int32 TowerDamage, int32 TowerFireDamage, FVector LocationOfTarget);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Functions called when projectile overlaps with objects
	UFUNCTION()
	virtual void OnProjectileOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Declaration of projectile components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile | Attributes")
	class UStaticMeshComponent* ProjectileMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile | Attributes")
	class USphereComponent* OverlapSphere;

	// Declaration of projectile combat variables
	UPROPERTY()
	int32 Damage;
	UPROPERTY()
	int32 FireDamage;

	// Movement variables
	UPROPERTY(BlueprintReadOnly)
	FVector EnemyLocation;
	UPROPERTY(BlueprintReadOnly)
	float ProjectileSpeed;

};