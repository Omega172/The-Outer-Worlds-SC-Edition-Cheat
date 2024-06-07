#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerStats_BP

#include "Basic.hpp"


namespace CG::Params
{

// Function PlayerStats_BP.PlayerStats_BP_C.ExecuteUbergraph_PlayerStats_BP
// 0x0010 (0x0010 - 0x0000)
struct PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_XPRatio;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP) == 0x000008, "Wrong alignment on PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP");
static_assert(sizeof(PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP) == 0x000010, "Wrong size on PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP");
static_assert(offsetof(PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP, EntryPoint) == 0x000000, "Member 'PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP, K2Node_Event_XPRatio) == 0x000004, "Member 'PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP::K2Node_Event_XPRatio' has a wrong offset!");
static_assert(offsetof(PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'PlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function PlayerStats_BP.PlayerStats_BP_C.SetXPRatio
// 0x0004 (0x0004 - 0x0000)
struct PlayerStats_BP_C_SetXPRatio final
{
public:
	float                                         XPRatio;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerStats_BP_C_SetXPRatio) == 0x000004, "Wrong alignment on PlayerStats_BP_C_SetXPRatio");
static_assert(sizeof(PlayerStats_BP_C_SetXPRatio) == 0x000004, "Wrong size on PlayerStats_BP_C_SetXPRatio");
static_assert(offsetof(PlayerStats_BP_C_SetXPRatio, XPRatio) == 0x000000, "Member 'PlayerStats_BP_C_SetXPRatio::XPRatio' has a wrong offset!");

}
