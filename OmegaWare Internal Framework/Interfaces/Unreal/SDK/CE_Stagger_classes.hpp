#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_Stagger

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_Stagger.CE_Stagger_C
// 0x0048 (0x0200 - 0x01B8)
class UCE_Stagger_C : public UMultiStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                           Sockets;                                           // 0x01C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>       PSs;                                               // 0x01D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FParticleSysParam>              NewVar_0;                                          // 0x01E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FParticleSysParam>              PS_Params;                                         // 0x01F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CE_Stagger(int32 EntryPoint);
	void ReceiveClearEffect(class AActor* Target);
	void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_Stagger_C">();
	}
	static class UCE_Stagger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_Stagger_C>();
	}
};
static_assert(alignof(UCE_Stagger_C) == 0x000008, "Wrong alignment on UCE_Stagger_C");
static_assert(sizeof(UCE_Stagger_C) == 0x000200, "Wrong size on UCE_Stagger_C");
static_assert(offsetof(UCE_Stagger_C, UberGraphFrame) == 0x0001B8, "Member 'UCE_Stagger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCE_Stagger_C, Sockets) == 0x0001C0, "Member 'UCE_Stagger_C::Sockets' has a wrong offset!");
static_assert(offsetof(UCE_Stagger_C, PSs) == 0x0001D0, "Member 'UCE_Stagger_C::PSs' has a wrong offset!");
static_assert(offsetof(UCE_Stagger_C, NewVar_0) == 0x0001E0, "Member 'UCE_Stagger_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UCE_Stagger_C, PS_Params) == 0x0001F0, "Member 'UCE_Stagger_C::PS_Params' has a wrong offset!");

}

