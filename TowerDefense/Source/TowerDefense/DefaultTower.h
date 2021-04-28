// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefaultTower.generated.h"

UENUM(BlueprintType)
enum class ETowerPositionTargeting : uint8
{
	TPT_First		UMETA(DisplayName = "First"),
	TPT_Last		UMETA(DisplayName = "Last"),
	TPT_Strongest	UMETA(DisplayName = "Strongest"),
	TPT_Weakest		UMETA(DisplayName = "Weakest"),

	TPT_MAX			UMETA(DisplayName = "DefaultMax")
};

UENUM(BlueprintType)
enum class ETowerType : uint8
{
	TT_Ballista		UMETA(DisplayName = "Ballista"),
	TT_Cannon		UMETA(DisplayName = "Cannon"),
	TT_Catapult		UMETA(DisplayName = "Catapult"),
	TT_Turret		UMETA(DisplayName = "Turret"),

	TT_MAX			UMETA(DisplayName = "DefaultMax")
};

UCLASS()
class TOWERDEFENSE_API ADefaultTower : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADefaultTower();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Functions called when actors overlap with TowerRangeSphere
	UFUNCTION() virtual void OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION() virtual void OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION() void GetNewTarget();
	UFUNCTION() void Shoot();

	FORCEINLINE void ReloadingDone() { bReloading = false; }

	UFUNCTION() void TowerSelected(AActor* TouchedActor, FKey ButtonPressed);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Declaration of tower components
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Attributes") class UStaticMeshComponent* TowerMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Attributes") class USphereComponent* TowerRangeSphere;

	// Variables for projectile spawning
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Attributes") USphereComponent* FiringLocation;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Attributes") TSubclassOf<class ADefaultProjectile> Projectile;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Attributes") class USoundCue* ShootingSound;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") int32 TowerCost;

	// Base tower stats that can be set for each tower subclass
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") int32 Damage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") int32 FireDamageChance;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") float FireRate;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") float Range;

	// Max tower stats that can be set for each tower subclass
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") int32 MaxDamage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") int32 MaxFireDamageChance;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") float MaxFireRate;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Statistics") float MaxRange;


	// Declaration of target
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tower | Combat") class ADefaultEnemy* CurrentTargetEnemy;

	// Declaration of enum variables
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tower | Combat") ETowerPositionTargeting TowerTargeting;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tower | Combat") ETowerType TowerType;

	// Used for ensuring that only objects inheriting from ADefaultEnemy can be used as targets
	UPROPERTY() TSubclassOf<ADefaultEnemy> EnemyFilter;

	// Boolean values for target checking
	bool bNoOverlappingEnemies;
	bool bMoreThanOneOverlappingEnemy;
	bool bReloading;

	UPROPERTY(BlueprintReadOnly, Category = "References") class ATowerDefenseGameMode* GameMode;
};
