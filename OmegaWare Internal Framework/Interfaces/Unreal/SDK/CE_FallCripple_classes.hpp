#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_FallCripple

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_FallCripple.CE_FallCripple_C
// 0x0028 (0x01E0 - 0x01B8)
class UCE_FallCripple_C final : public UMultiStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleSystemComponent*>       PSs;                                               // 0x01C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                           Sockets;                                           // 0x01D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CE_FallCripple(int32 EntryPoint);
	void ReceiveClearEffect(class AActor* Target);
	void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_FallCripple_C">();
	}
	static class UCE_FallCripple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_FallCripple_C>();
	}
};
static_assert(alignof(UCE_FallCripple_C) == 0x000008, "Wrong alignment on UCE_FallCripple_C");
static_assert(sizeof(UCE_FallCripple_C) == 0x0001E0, "Wrong size on UCE_FallCripple_C");
static_assert(offsetof(UCE_FallCripple_C, UberGraphFrame) == 0x0001B8, "Member 'UCE_FallCripple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCE_FallCripple_C, PSs) == 0x0001C0, "Member 'UCE_FallCripple_C::PSs' has a wrong offset!");
static_assert(offsetof(UCE_FallCripple_C, Sockets) == 0x0001D0, "Member 'UCE_FallCripple_C::Sockets' has a wrong offset!");

}

