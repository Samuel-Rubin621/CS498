// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
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

	// Called every frame
		virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void MoveToTarget(FVector NextMoveTarget);
	UFUNCTION()
		//void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);


	UFUNCTION(BlueprintCallable)
		void ReachedTheEnd();

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { EnemyMovementStatus = Status; }
	FORCEINLINE EEnemyMovementStatus GetEnemyMovementStatus() { return EnemyMovementStatus; }

		virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

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
		float EnemySpeed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enemy | Statistics")
		int32 EnemyValue;

	// Variables for movement
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
		class AEnemyAIController* AIController;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
		TArray<FVector> PathPoints;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
		EEnemyMovementStatus EnemyMovementStatus;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
		TSubclassOf<class ADefaultStartEnd> StartEndFilter;
};
