#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_NRay_AoE

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_NRay_AoE.CE_NRay_AoE_C
// 0x0010 (0x01C8 - 0x01B8)
class UCE_NRay_AoE_C final : public UMultiStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          UseNiagara;                                        // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CE_NRay_AoE(int32 EntryPoint);
	void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);
	void ReceiveClearEffect(class AActor* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_NRay_AoE_C">();
	}
	static class UCE_NRay_AoE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_NRay_AoE_C>();
	}
};
static_assert(alignof(UCE_NRay_AoE_C) == 0x000008, "Wrong alignment on UCE_NRay_AoE_C");
static_assert(sizeof(UCE_NRay_AoE_C) == 0x0001C8, "Wrong size on UCE_NRay_AoE_C");
static_assert(offsetof(UCE_NRay_AoE_C, UberGraphFrame) == 0x0001B8, "Member 'UCE_NRay_AoE_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCE_NRay_AoE_C, UseNiagara) == 0x0001C0, "Member 'UCE_NRay_AoE_C::UseNiagara' has a wrong offset!");

}

