// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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
	void MoveToTarget();

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { EnemyMovementStatus = Status; }
	FORCEINLINE EEnemyMovementStatus GetEnemyMovementStatus() { return EnemyMovementStatus; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	//Declaration of enemy attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy | Attributes")
	class USkeletalMeshComponent* EnemyMesh;

	//Declaration of enemy statistics
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy | Statistics")
	float EnemyDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy | Statistics")
	float EnemyMaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy | Statistics")
	float EnemyHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy | Statistics")
	float EnemySpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
	class AAIController* AIController;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
	FVector EndPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
	EEnemyMovementStatus EnemyMovementStatus;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy | Movement")
	TSubclassOf<class ADefaultStartEnd> StartEndFilter;
};
