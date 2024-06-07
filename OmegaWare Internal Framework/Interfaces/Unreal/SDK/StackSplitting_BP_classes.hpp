#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StackSplitting_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass StackSplitting_BP.StackSplitting_BP_C
// 0x0040 (0x0508 - 0x04C8)
class UStackSplitting_BP_C final : public UStackSplittingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BackingBot;                                        // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackingTop;                                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BackingBotInst;                                    // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StackSplitting_BP(int32 EntryPoint);
	void SetNewBackingMaterialHeight(float NewHeight);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackSplitting_BP_C">();
	}
	static class UStackSplitting_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackSplitting_BP_C>();
	}
};
static_assert(alignof(UStackSplitting_BP_C) == 0x000008, "Wrong alignment on UStackSplitting_BP_C");
static_assert(sizeof(UStackSplitting_BP_C) == 0x000508, "Wrong size on UStackSplitting_BP_C");
static_assert(offsetof(UStackSplitting_BP_C, UberGraphFrame) == 0x0004C8, "Member 'UStackSplitting_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, FadeIn) == 0x0004D0, "Member 'UStackSplitting_BP_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, BackingBot) == 0x0004D8, "Member 'UStackSplitting_BP_C::BackingBot' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, BackingTop) == 0x0004E0, "Member 'UStackSplitting_BP_C::BackingTop' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, Frame) == 0x0004E8, "Member 'UStackSplitting_BP_C::Frame' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, Image_0) == 0x0004F0, "Member 'UStackSplitting_BP_C::Image_0' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, Image_1) == 0x0004F8, "Member 'UStackSplitting_BP_C::Image_1' has a wrong offset!");
static_assert(offsetof(UStackSplitting_BP_C, BackingBotInst) == 0x000500, "Member 'UStackSplitting_BP_C::BackingBotInst' has a wrong offset!");

}
