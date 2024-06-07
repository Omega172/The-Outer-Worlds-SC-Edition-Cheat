#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GibCharacterDeath

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BaseCharacterDeath_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass GibCharacterDeath.GibCharacterDeath_C
// 0x0010 (0x0168 - 0x0158)
class UGibCharacterDeath_C final : public UBaseCharacterDeath_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Sentry;                                            // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GibCharacterDeath(int32 EntryPoint);
	void Execute(class UCharacterDeathComponent* InDeathComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GibCharacterDeath_C">();
	}
	static class UGibCharacterDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGibCharacterDeath_C>();
	}
};
static_assert(alignof(UGibCharacterDeath_C) == 0x000008, "Wrong alignment on UGibCharacterDeath_C");
static_assert(sizeof(UGibCharacterDeath_C) == 0x000168, "Wrong size on UGibCharacterDeath_C");
static_assert(offsetof(UGibCharacterDeath_C, UberGraphFrame) == 0x000158, "Member 'UGibCharacterDeath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGibCharacterDeath_C, Sentry) == 0x000160, "Member 'UGibCharacterDeath_C::Sentry' has a wrong offset!");

}

