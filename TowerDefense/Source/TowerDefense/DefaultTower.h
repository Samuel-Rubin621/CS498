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

UCLASS()
class TOWERDEFENSE_API ADefaultTower : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADefaultTower();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Functions called when actors overlap with TowerRangeSphere
	UFUNCTION()
	virtual void OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void GetNewTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//Declaration of tower components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower | Attributes")
	class UStaticMeshComponent* TowerMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower | Attributes")
	class USphereComponent* TowerRangeSphere;

	//Declaration of tower statistics
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower | Statistics")
	int32 TowerDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower | Statistics")
	float TowerRangeValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower | Statistics")
	float TowerFireDelay;

	//Declaration of target
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tower | Combat")
	class ADefaultEnemy* CurrentTargetEnemy;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tower | Combat")
	ETowerPositionTargeting TowerTargeting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower | Combat")
	TSubclassOf<ADefaultEnemy> EnemyFilter;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tower | Combat")
	bool NoOverlappingEnemies;
};
