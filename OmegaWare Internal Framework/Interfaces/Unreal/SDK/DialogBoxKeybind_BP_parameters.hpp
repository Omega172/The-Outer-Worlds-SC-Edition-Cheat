#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DialogBoxKeybind_BP

#include "Basic.hpp"


namespace CG::Params
{

// Function DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.ExecuteUbergraph_DialogBoxKeybind_BP
// 0x0018 (0x0018 - 0x0000)
struct DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_NewHeight;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP) == 0x000008, "Wrong alignment on DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP");
static_assert(sizeof(DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP) == 0x000018, "Wrong size on DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP");
static_assert(offsetof(DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP, EntryPoint) == 0x000000, "Member 'DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP, K2Node_Event_NewHeight) == 0x000004, "Member 'DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP::K2Node_Event_NewHeight' has a wrong offset!");
static_assert(offsetof(DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'DialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.SetNewBackingMaterialHeight
// 0x0004 (0x0004 - 0x0000)
struct DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight final
{
public:
	float                                         NewHeight;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight) == 0x000004, "Wrong alignment on DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight");
static_assert(sizeof(DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight) == 0x000004, "Wrong size on DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight");
static_assert(offsetof(DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight, NewHeight) == 0x000000, "Member 'DialogBoxKeybind_BP_C_SetNewBackingMaterialHeight::NewHeight' has a wrong offset!");

}

