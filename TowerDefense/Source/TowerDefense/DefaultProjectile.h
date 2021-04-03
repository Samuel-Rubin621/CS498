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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Projectile | Combat")
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile | Combat")
	TSubclassOf<UDamageType> DamageTypeClass;

	// Movement variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile | AI")
	class AAIController* AIController;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile | AI")
	FVector EnemyLocation;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile | AI")
	float ProjectileSpeed;

};