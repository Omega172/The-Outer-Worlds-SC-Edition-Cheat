#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass BP_VF.BP_VF_C
// 0x0028 (0x02E0 - 0x02B8)
class ABP_VF_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVectorFieldComponent*                  VectorField;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         VF_Intensity;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               VF_Rotation;                                       // 0x02D4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_VF(int32 EntryPoint);
	void Update();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VF_C">();
	}
	static class ABP_VF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VF_C>();
	}
};
static_assert(alignof(ABP_VF_C) == 0x000008, "Wrong alignment on ABP_VF_C");
static_assert(sizeof(ABP_VF_C) == 0x0002E0, "Wrong size on ABP_VF_C");
static_assert(offsetof(ABP_VF_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_VF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VF_C, VectorField) == 0x0002C0, "Member 'ABP_VF_C::VectorField' has a wrong offset!");
static_assert(offsetof(ABP_VF_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_VF_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_VF_C, VF_Intensity) == 0x0002D0, "Member 'ABP_VF_C::VF_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_VF_C, VF_Rotation) == 0x0002D4, "Member 'ABP_VF_C::VF_Rotation' has a wrong offset!");

}
