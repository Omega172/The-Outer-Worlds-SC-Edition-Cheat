#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IndianaUI_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass IndianaUI_BP.IndianaUI_BP_C
// 0x0010 (0x06A0 - 0x0690)
class AIndianaUI_BP_C final : public AIndianaUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_IndianaUI_BP(int32 EntryPoint);
	void SetObjective(class AActor* Objective, const class FString& ObjectiveName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IndianaUI_BP_C">();
	}
	static class AIndianaUI_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AIndianaUI_BP_C>();
	}
};
static_assert(alignof(AIndianaUI_BP_C) == 0x000008, "Wrong alignment on AIndianaUI_BP_C");
static_assert(sizeof(AIndianaUI_BP_C) == 0x0006A0, "Wrong size on AIndianaUI_BP_C");
static_assert(offsetof(AIndianaUI_BP_C, UberGraphFrame) == 0x000690, "Member 'AIndianaUI_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AIndianaUI_BP_C, DefaultSceneRoot) == 0x000698, "Member 'AIndianaUI_BP_C::DefaultSceneRoot' has a wrong offset!");

}
