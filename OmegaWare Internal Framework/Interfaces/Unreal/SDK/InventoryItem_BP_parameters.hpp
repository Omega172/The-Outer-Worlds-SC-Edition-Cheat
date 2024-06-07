#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryItem_BP

#include "Basic.hpp"


namespace CG::Params
{

// Function InventoryItem_BP.InventoryItem_BP_C.ExecuteUbergraph_InventoryItem_BP
// 0x0020 (0x0020 - 0x0000)
struct InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UIndianaDamageType>         CallFunc_GetDamageType_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP) == 0x000008, "Wrong alignment on InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP");
static_assert(sizeof(InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP) == 0x000020, "Wrong size on InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP");
static_assert(offsetof(InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP, EntryPoint) == 0x000000, "Member 'InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP, CallFunc_GetDamageType_ReturnValue) == 0x000008, "Member 'InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP::CallFunc_GetDamageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP, CallFunc_Map_Find_Value) == 0x000010, "Member 'InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'InventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

