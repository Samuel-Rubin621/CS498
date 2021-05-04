#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class ADefaultEnemy;
#include "EnemyDamagePopup__pf3166771619.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/EnemyDamagePopup.EnemyDamagePopup_C", OverrideNativeName="EnemyDamagePopup_C"))
class UEnemyDamagePopup_C__pf3166771619 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="MoveAndFadeText", Category="Animations", OverrideNativeName="MoveAndFadeText"))
	UWidgetAnimation* bpv__MoveAndFadeText__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Enemy", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Enemy"))
	ADefaultEnemy* bpv__Enemy__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation Length", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="AnimationLength"))
	float bpv__AnimationLength__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ProjectWorldLocationToScreen_ScreenLocation"))
	FVector2D b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf;
	UEnemyDamagePopup_C__pf3166771619(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_EnemyDamagePopup__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDamagePopup__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
