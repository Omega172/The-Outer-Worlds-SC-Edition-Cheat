#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompanionOverview_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass CompanionOverview_BP.CompanionOverview_BP_C
// 0x0030 (0x03F0 - 0x03C0)
class UCompanionOverview_BP_C final : public UCompanionOverviewWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimateInOutStatusEffectBlock;                     // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInRootAnim;                                    // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BottomBarPiece;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RootAnimationContainer;                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusEffectBlock;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CompanionOverview_BP(int32 EntryPoint);
	void OnAnimInOutComplete();
	void OnFirstStatusEffect();
	void OnNoStatusEffect();
	void OnMadeInactive();
	void OnMadeActive();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CompanionOverview_BP_C">();
	}
	static class UCompanionOverview_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionOverview_BP_C>();
	}
};
static_assert(alignof(UCompanionOverview_BP_C) == 0x000008, "Wrong alignment on UCompanionOverview_BP_C");
static_assert(sizeof(UCompanionOverview_BP_C) == 0x0003F0, "Wrong size on UCompanionOverview_BP_C");
static_assert(offsetof(UCompanionOverview_BP_C, UberGraphFrame) == 0x0003C0, "Member 'UCompanionOverview_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCompanionOverview_BP_C, AnimateInOutStatusEffectBlock) == 0x0003C8, "Member 'UCompanionOverview_BP_C::AnimateInOutStatusEffectBlock' has a wrong offset!");
static_assert(offsetof(UCompanionOverview_BP_C, FadeInRootAnim) == 0x0003D0, "Member 'UCompanionOverview_BP_C::FadeInRootAnim' has a wrong offset!");
static_assert(offsetof(UCompanionOverview_BP_C, BottomBarPiece) == 0x0003D8, "Member 'UCompanionOverview_BP_C::BottomBarPiece' has a wrong offset!");
static_assert(offsetof(UCompanionOverview_BP_C, RootAnimationContainer) == 0x0003E0, "Member 'UCompanionOverview_BP_C::RootAnimationContainer' has a wrong offset!");
static_assert(offsetof(UCompanionOverview_BP_C, StatusEffectBlock) == 0x0003E8, "Member 'UCompanionOverview_BP_C::StatusEffectBlock' has a wrong offset!");

}

