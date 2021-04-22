// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "DefaultEnemy.generated.h"

UENUM(BlueprintType)
enum class EEnemyMovementStatus : uint8
{
	EMS_Idle			UMETA(DisplayName = "Idle"),
	EMS_MoveToTarget	UMETA(DisplayName = "MoveToTarget"),
	EMS_Attacking		UMETA(DisplayName = "Attacking"),
	EMS_Dead			UMETA(DisplayName = "Dead"),

	EMS_MAX				UMETA(DisplayName = "DefaultMAX")
};

UCLASS()
class TOWERDEFENSE_API ADefaultEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADefaultEnemy();

	UFUNCTION()
	void Initialize(class USplineComponent* SplinePath);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { EnemyMovementStatus = Status; }
	FORCEINLINE EEnemyMovementStatus GetEnemyMovementStatus() { return EnemyMovementStatus; }

	void ApplyDamageFromProjectile(int32 Damage, int32 FireDamage);

	UFUNCTION()
	void Death();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	// Default enemy properties
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enemy")
	class UStaticMeshComponent* EnemyMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enemy")
	class USphereComponent* EnemyBodyCollision;

	// Declaration of enemy statistics
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enemy | Statistics")
	int32 EnemyDamage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enemy | Statistics")
	float EnemyMaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enemy | Statistics")
	float EnemyCurrentHealth;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enemy | Statistics")
	int32 EnemyValue;

	// Variables for movement
	UPROPERTY(BlueprintReadOnly, Category = "Enemy | Movement")
	class AEnemyAIController* EnemyAIController;
	UPROPERTY(BlueprintReadOnly, Category = "Enemy | Movement")
	EEnemyMovementStatus EnemyMovementStatus;

	// Spline component variables used for moving along the spline in the controller class
	UPROPERTY(BlueprintReadOnly, Category = "Enemy | Movement")
	USplineComponent* Path;
	UPROPERTY(BlueprintReadOnly, Category = "Enemy | Movement")
	FVector LastSplinePointLocation;
};
