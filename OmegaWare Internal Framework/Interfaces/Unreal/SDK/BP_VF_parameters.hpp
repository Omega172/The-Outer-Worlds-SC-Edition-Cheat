#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VF

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace CG::Params
{

// Function BP_VF.BP_VF_C.ExecuteUbergraph_BP_VF
// 0x0130 (0x0130 - 0x0000)
struct BP_VF_C_ExecuteUbergraph_BP_VF final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28ED[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28EE[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_VF_C_ExecuteUbergraph_BP_VF) == 0x000008, "Wrong alignment on BP_VF_C_ExecuteUbergraph_BP_VF");
static_assert(sizeof(BP_VF_C_ExecuteUbergraph_BP_VF) == 0x000130, "Wrong size on BP_VF_C_ExecuteUbergraph_BP_VF");
static_assert(offsetof(BP_VF_C_ExecuteUbergraph_BP_VF, EntryPoint) == 0x000000, "Member 'BP_VF_C_ExecuteUbergraph_BP_VF::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VF_C_ExecuteUbergraph_BP_VF, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'BP_VF_C_ExecuteUbergraph_BP_VF::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VF_C_ExecuteUbergraph_BP_VF, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_VF_C_ExecuteUbergraph_BP_VF::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VF_C_ExecuteUbergraph_BP_VF, CallFunc_K2_AddLocalOffset_SweepHitResult) == 0x000018, "Member 'BP_VF_C_ExecuteUbergraph_BP_VF::CallFunc_K2_AddLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_VF_C_ExecuteUbergraph_BP_VF, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000A0, "Member 'BP_VF_C_ExecuteUbergraph_BP_VF::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VF_C_ExecuteUbergraph_BP_VF, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000A4, "Member 'BP_VF_C_ExecuteUbergraph_BP_VF::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

}

