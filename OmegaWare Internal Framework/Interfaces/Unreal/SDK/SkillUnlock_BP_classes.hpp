#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillUnlock_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass SkillUnlock_BP.SkillUnlock_BP_C
// 0x0008 (0x0358 - 0x0350)
class USkillUnlock_BP_C final : public USkillUnlockEntryWidget
{
public:
	class UImage*                                 CircleBacking;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillUnlock_BP_C">();
	}
	static class USkillUnlock_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillUnlock_BP_C>();
	}
};
static_assert(alignof(USkillUnlock_BP_C) == 0x000008, "Wrong alignment on USkillUnlock_BP_C");
static_assert(sizeof(USkillUnlock_BP_C) == 0x000358, "Wrong size on USkillUnlock_BP_C");
static_assert(offsetof(USkillUnlock_BP_C, CircleBacking) == 0x000350, "Member 'USkillUnlock_BP_C::CircleBacking' has a wrong offset!");

}
