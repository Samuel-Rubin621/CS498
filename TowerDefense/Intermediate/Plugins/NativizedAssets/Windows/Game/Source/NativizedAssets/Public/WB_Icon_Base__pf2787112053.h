#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_GlassMaskTypes__pf1973725292.h"
#include "E_IconBaseTypes__pf1973725292.h"
#include "E_Sizes__pf1973725292.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UObject;
class UTexture2D;
#include "WB_Icon_Base__pf2787112053.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ProIconPack/UI/WB_Icon_Base.WB_Icon_Base_C", OverrideNativeName="WB_Icon_Base_C"))
class UWB_Icon_Base_C__pf2787112053 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="img_Icon", Category="WB_Icon_Base", OverrideNativeName="img_Icon"))
	UImage* bpv__img_Icon__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="img_Icon_Base", Category="WB_Icon_Base", OverrideNativeName="img_Icon_Base"))
	UImage* bpv__img_Icon_Base__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="img_Icon_Mask1", Category="WB_Icon_Base", OverrideNativeName="img_Icon_Mask1"))
	UImage* bpv__img_Icon_Mask1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="img_Icon_Mask2", Category="WB_Icon_Base", OverrideNativeName="img_Icon_Mask2"))
	UImage* bpv__img_Icon_Mask2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="img_Icon_Outline1", Category="WB_Icon_Base", OverrideNativeName="img_Icon_Outline1"))
	UImage* bpv__img_Icon_Outline1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="img_Icon_Outline2", Category="WB_Icon_Base", OverrideNativeName="img_Icon_Outline2"))
	UImage* bpv__img_Icon_Outline2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text_IconText", Category="WB_Icon_Base", OverrideNativeName="Text_IconText"))
	UTextBlock* bpv__Text_IconText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon", Category="Icon", ExposeOnSpawn="true", OverrideNativeName="Icon"))
	UObject* bpv__Icon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Color", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="bBaseColor"))
	bool bpv__bBaseColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Color", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="BaseColor"))
	FLinearColor bpv__BaseColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Mask", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="bBaseMask"))
	bool bpv__bBaseMask__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Mask Color", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="BaseMaskColor"))
	FLinearColor bpv__BaseMaskColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Outline 1", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="bOutline1"))
	bool bpv__bOutline1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Outline 1 Color", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="Outline1_Color"))
	FLinearColor bpv__Outline1_Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Contour", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="bContour"))
	bool bpv__bContour__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Contour Color", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="Contour_Color"))
	FLinearColor bpv__Contour_Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Glass Mask", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="bGlassMask"))
	bool bpv__bGlassMask__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Glass Mask Color", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="GlassMask_Color"))
	FLinearColor bpv__GlassMask_Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Glass Mask Types", Category="Colors", ExposeOnSpawn="true", OverrideNativeName="GlassMask Types"))
	E__E_GlassMaskTypes__pf bpv__GlassMaskxTypes__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Color", Category="Icon", ExposeOnSpawn="true", OverrideNativeName="IconColor"))
	FLinearColor bpv__IconColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Scale", Category="Icon", ClampMin="0.4", ClampMax="1.3", ExposeOnSpawn="true", OverrideNativeName="IconScale"))
	float bpv__IconScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overall Angle", Category="Icon", ClampMin="-360", ClampMax="360", ExposeOnSpawn="true", OverrideNativeName="Overall_Angle"))
	float bpv__Overall_Angle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Base Types", Category="Icon", ExposeOnSpawn="true", OverrideNativeName="IconBaseTypes"))
	E__E_IconBaseTypes__pf bpv__IconBaseTypes__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Base Size", Category="Icon", ExposeOnSpawn="true", OverrideNativeName="IconBaseSize"))
	E__E_Sizes__pf bpv__IconBaseSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Base Icon", Category="Custom_Icon", ExposeOnSpawn="true", OverrideNativeName="Custom_BaseIcon"))
	UTexture2D* bpv__Custom_BaseIcon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Mask 1", Category="Custom_Icon", ExposeOnSpawn="true", OverrideNativeName="Custom_Mask1"))
	UTexture2D* bpv__Custom_Mask1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Mask 2", Category="Custom_Icon", ExposeOnSpawn="true", OverrideNativeName="Custom_Mask2"))
	UTexture2D* bpv__Custom_Mask2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Outline 1", Category="Custom_Icon", ExposeOnSpawn="true", OverrideNativeName="Custom_Outline1"))
	UTexture2D* bpv__Custom_Outline1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Outline 2", Category="Custom_Icon", ExposeOnSpawn="true", OverrideNativeName="Custom_Outline2"))
	UTexture2D* bpv__Custom_Outline2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Translation X", Category="Icon", ExposeOnSpawn="true", OverrideNativeName="Icon_Translation_X"))
	float bpv__Icon_Translation_X__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Translation Y", Category="Icon", ExposeOnSpawn="true", OverrideNativeName="Icon_Translation_Y"))
	float bpv__Icon_Translation_Y__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Icon Text", Category="IconText", ExposeOnSpawn="true", OverrideNativeName="bUseIconText"))
	bool bpv__bUseIconText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Text", Category="IconText", ExposeOnSpawn="true", OverrideNativeName="IconText"))
	FText bpv__IconText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Text Transform", Category="IconText", ExposeOnSpawn="true", OverrideNativeName="IconText_Transform"))
	FWidgetTransform bpv__IconText_Transform__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Text Color", Category="IconText", ExposeOnSpawn="true", OverrideNativeName="IconText_Color"))
	FSlateColor bpv__IconText_Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Text Font", Category="IconText", ExposeOnSpawn="true", OverrideNativeName="IconTextFont"))
	FSlateFontInfo bpv__IconTextFont__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FLinearColor b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	UObject* b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	UObject* b0l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_2"))
	UObject* b0l__Temp_object_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_3"))
	UObject* b0l__Temp_object_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_4"))
	UObject* b0l__Temp_object_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_5"))
	UObject* b0l__Temp_object_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_6"))
	UObject* b0l__Temp_object_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_7"))
	UObject* b0l__Temp_object_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_8"))
	UTexture2D* b0l__Temp_object_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_9"))
	UTexture2D* b0l__Temp_object_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_10"))
	UTexture2D* b0l__Temp_object_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_11"))
	UTexture2D* b0l__Temp_object_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_12"))
	UTexture2D* b0l__Temp_object_Variable_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_13"))
	UTexture2D* b0l__Temp_object_Variable_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_14"))
	UTexture2D* b0l__Temp_object_Variable_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_15"))
	UTexture2D* b0l__Temp_object_Variable_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_3"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_16"))
	UTexture2D* b0l__Temp_object_Variable_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_17"))
	UTexture2D* b0l__Temp_object_Variable_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_18"))
	UTexture2D* b0l__Temp_object_Variable_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_19"))
	UTexture2D* b0l__Temp_object_Variable_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_4"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_20"))
	UTexture2D* b0l__Temp_object_Variable_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_21"))
	UTexture2D* b0l__Temp_object_Variable_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_22"))
	UTexture2D* b0l__Temp_object_Variable_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_23"))
	UTexture2D* b0l__Temp_object_Variable_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_5"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_24"))
	UTexture2D* b0l__Temp_object_Variable_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_25"))
	UTexture2D* b0l__Temp_object_Variable_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_26"))
	UTexture2D* b0l__Temp_object_Variable_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_27"))
	UTexture2D* b0l__Temp_object_Variable_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_6"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_28"))
	UTexture2D* b0l__Temp_object_Variable_28__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_29"))
	UTexture2D* b0l__Temp_object_Variable_29__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_30"))
	UTexture2D* b0l__Temp_object_Variable_30__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_31"))
	UTexture2D* b0l__Temp_object_Variable_31__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_7"))
	E__E_Sizes__pf b0l__Temp_byte_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_8"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_32"))
	UTexture2D* b0l__Temp_object_Variable_32__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_33"))
	UTexture2D* b0l__Temp_object_Variable_33__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_34"))
	UTexture2D* b0l__Temp_object_Variable_34__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_35"))
	UTexture2D* b0l__Temp_object_Variable_35__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_9"))
	E__E_Sizes__pf b0l__Temp_byte_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_10"))
	E__E_Sizes__pf b0l__Temp_byte_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_11"))
	E__E_Sizes__pf b0l__Temp_byte_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_12"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_36"))
	UTexture2D* b0l__Temp_object_Variable_36__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_37"))
	UTexture2D* b0l__Temp_object_Variable_37__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_38"))
	UTexture2D* b0l__Temp_object_Variable_38__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_39"))
	UTexture2D* b0l__Temp_object_Variable_39__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_13"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_40"))
	UTexture2D* b0l__Temp_object_Variable_40__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_41"))
	UTexture2D* b0l__Temp_object_Variable_41__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_42"))
	UTexture2D* b0l__Temp_object_Variable_42__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_43"))
	UTexture2D* b0l__Temp_object_Variable_43__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_14"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_44"))
	UTexture2D* b0l__Temp_object_Variable_44__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_45"))
	UTexture2D* b0l__Temp_object_Variable_45__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_46"))
	UTexture2D* b0l__Temp_object_Variable_46__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_47"))
	UTexture2D* b0l__Temp_object_Variable_47__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FLinearColor b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	UObject* b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_1"))
	UTexture2D* b0l__K2Node_Select_Default_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_2"))
	UTexture2D* b0l__K2Node_Select_Default_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_1"))
	bool b0l__Temp_bool_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FLinearColor b0l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_15"))
	E__E_IconBaseTypes__pf b0l__Temp_byte_Variable_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_16"))
	E__E_Sizes__pf b0l__Temp_byte_Variable_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_3"))
	UObject* b0l__K2Node_Select_Default_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_4"))
	UObject* b0l__K2Node_Select_Default_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_17"))
	E__E_Sizes__pf b0l__Temp_byte_Variable_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_5"))
	UObject* b0l__K2Node_Select_Default_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_18"))
	E__E_GlassMaskTypes__pf b0l__Temp_byte_Variable_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_3"))
	FLinearColor b0l__Temp_struct_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_6"))
	UTexture2D* b0l__K2Node_Select_Default_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_7"))
	UTexture2D* b0l__K2Node_Select_Default_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_8"))
	UTexture2D* b0l__K2Node_Select_Default_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_9"))
	UTexture2D* b0l__K2Node_Select_Default_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_10"))
	UTexture2D* b0l__K2Node_Select_Default_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_11"))
	UTexture2D* b0l__K2Node_Select_Default_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_12"))
	UTexture2D* b0l__K2Node_Select_Default_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_13"))
	UTexture2D* b0l__K2Node_Select_Default_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_14"))
	UTexture2D* b0l__K2Node_Select_Default_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_15"))
	UTexture2D* b0l__K2Node_Select_Default_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_16"))
	UTexture2D* b0l__K2Node_Select_Default_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_17"))
	UTexture2D* b0l__K2Node_Select_Default_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_2"))
	bool b0l__Temp_bool_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_1"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_2"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_3"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_3"))
	bool b0l__Temp_bool_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_4"))
	FLinearColor b0l__Temp_struct_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_4"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_18"))
	FLinearColor b0l__K2Node_Select_Default_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_19"))
	FLinearColor b0l__K2Node_Select_Default_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_20"))
	FLinearColor b0l__K2Node_Select_Default_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_21"))
	FLinearColor b0l__K2Node_Select_Default_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_22"))
	UObject* b0l__K2Node_Select_Default_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_5"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_4"))
	bool b0l__Temp_bool_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_23"))
	FLinearColor b0l__K2Node_Select_Default_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UWB_Icon_Base_C__pf2787112053(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_WB_Icon_Base_0"))
	void bpf__ExecuteUbergraph_WB_Icon_Base__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update"))
	virtual void bpf__Update__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
