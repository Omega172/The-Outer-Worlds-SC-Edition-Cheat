#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_LegCripple_Flaw_MoveSpd_Base

#include "Basic.hpp"

#include "CE_LegCripple_Flaw_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_LegCripple_Flaw_MoveSpd_Base.CE_LegCripple_Flaw_MoveSpd_Base_C
// 0x0008 (0x01C0 - 0x01B8)
class UCE_LegCripple_Flaw_MoveSpd_Base_C : public UCE_LegCripple_Flaw_C
{
public:
	bool                                          Dummy_ArchetypeFix_DoNotDelete;                    // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_LegCripple_Flaw_MoveSpd_Base_C">();
	}
	static class UCE_LegCripple_Flaw_MoveSpd_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_LegCripple_Flaw_MoveSpd_Base_C>();
	}
};
static_assert(alignof(UCE_LegCripple_Flaw_MoveSpd_Base_C) == 0x000008, "Wrong alignment on UCE_LegCripple_Flaw_MoveSpd_Base_C");
static_assert(sizeof(UCE_LegCripple_Flaw_MoveSpd_Base_C) == 0x0001C0, "Wrong size on UCE_LegCripple_Flaw_MoveSpd_Base_C");
static_assert(offsetof(UCE_LegCripple_Flaw_MoveSpd_Base_C, Dummy_ArchetypeFix_DoNotDelete) == 0x0001B8, "Member 'UCE_LegCripple_Flaw_MoveSpd_Base_C::Dummy_ArchetypeFix_DoNotDelete' has a wrong offset!");

}
