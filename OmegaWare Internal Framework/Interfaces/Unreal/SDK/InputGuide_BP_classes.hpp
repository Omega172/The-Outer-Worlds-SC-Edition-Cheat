#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputGuide_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass InputGuide_BP.InputGuide_BP_C
// 0x0078 (0x04F0 - 0x0478)
class UInputGuide_BP_C final : public UInputGuideWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LittleRedCircleCounterClockwise;                   // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RedCircleClockwise;                                // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroOutro;                                        // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow13_Mid;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow2_Left;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow2_Right;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow3_Left;                                       // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow3_Right;                                      // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_2;                                 // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RootBorder;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RotatingLittleRedCircle;                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         IntroOutroMultiplier;                              // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2995[0x4];                                     // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               InteractionMat;                                    // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RadialMaterial;                                    // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InputGuide_BP(int32 EntryPoint);
	void Construct();
	void OnInteractionProgressChange(float CurrentProgressRatio);
	void InteractChanged(bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputGuide_BP_C">();
	}
	static class UInputGuide_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputGuide_BP_C>();
	}
};
static_assert(alignof(UInputGuide_BP_C) == 0x000008, "Wrong alignment on UInputGuide_BP_C");
static_assert(sizeof(UInputGuide_BP_C) == 0x0004F0, "Wrong size on UInputGuide_BP_C");
static_assert(offsetof(UInputGuide_BP_C, UberGraphFrame) == 0x000478, "Member 'UInputGuide_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, LittleRedCircleCounterClockwise) == 0x000480, "Member 'UInputGuide_BP_C::LittleRedCircleCounterClockwise' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, RedCircleClockwise) == 0x000488, "Member 'UInputGuide_BP_C::RedCircleClockwise' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, IntroOutro) == 0x000490, "Member 'UInputGuide_BP_C::IntroOutro' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, Arrow13_Mid) == 0x000498, "Member 'UInputGuide_BP_C::Arrow13_Mid' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, Arrow2_Left) == 0x0004A0, "Member 'UInputGuide_BP_C::Arrow2_Left' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, Arrow2_Right) == 0x0004A8, "Member 'UInputGuide_BP_C::Arrow2_Right' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, Arrow3_Left) == 0x0004B0, "Member 'UInputGuide_BP_C::Arrow3_Left' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, Arrow3_Right) == 0x0004B8, "Member 'UInputGuide_BP_C::Arrow3_Right' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, InvalidationBox_2) == 0x0004C0, "Member 'UInputGuide_BP_C::InvalidationBox_2' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, RootBorder) == 0x0004C8, "Member 'UInputGuide_BP_C::RootBorder' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, RotatingLittleRedCircle) == 0x0004D0, "Member 'UInputGuide_BP_C::RotatingLittleRedCircle' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, IntroOutroMultiplier) == 0x0004D8, "Member 'UInputGuide_BP_C::IntroOutroMultiplier' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, InteractionMat) == 0x0004E0, "Member 'UInputGuide_BP_C::InteractionMat' has a wrong offset!");
static_assert(offsetof(UInputGuide_BP_C, RadialMaterial) == 0x0004E8, "Member 'UInputGuide_BP_C::RadialMaterial' has a wrong offset!");

}

