#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeavyMelee_Skill

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass HeavyMelee_Skill.HeavyMelee_Skill_C
// 0x0000 (0x0078 - 0x0078)
class UHeavyMelee_Skill_C final : public UHeavyMeleeSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeavyMelee_Skill_C">();
	}
	static class UHeavyMelee_Skill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeavyMelee_Skill_C>();
	}
};
static_assert(alignof(UHeavyMelee_Skill_C) == 0x000008, "Wrong alignment on UHeavyMelee_Skill_C");
static_assert(sizeof(UHeavyMelee_Skill_C) == 0x000078, "Wrong size on UHeavyMelee_Skill_C");

}
