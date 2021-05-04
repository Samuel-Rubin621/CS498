#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class USkeletalMeshComponent;
#include "TestEnemy__pf2487122693.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/Classes/TestEnemy.TestEnemy_C", OverrideNativeName="TestEnemy_C"))
class ATestEnemy_C__pf2487122693 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Beard"))
	USkeletalMeshComponent* bpv__Beard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="militaryHelmet"))
	USkeletalMeshComponent* bpv__militaryHelmet__pf;
	ATestEnemy_C__pf2487122693(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
