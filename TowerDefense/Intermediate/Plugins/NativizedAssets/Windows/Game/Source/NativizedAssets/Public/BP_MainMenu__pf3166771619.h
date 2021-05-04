#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "TowerDefense/UI/MainMenu.h"
class UImage;
#include "BP_MainMenu__pf3166771619.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/BP_MainMenu.BP_MainMenu_C", OverrideNativeName="BP_MainMenu_C"))
class UBP_MainMenu_C__pf3166771619 : public UMainMenu
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_0", Category="BP_MainMenu", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Separator", Category="BP_MainMenu", OverrideNativeName="Separator"))
	UImage* bpv__Separator__pf;
	UBP_MainMenu_C__pf3166771619(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
