#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T_Sickbay_Guard

#include "Basic.hpp"

#include "T_MardetGuards_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass T_Sickbay_Guard.T_Sickbay_Guard_C
// 0x0000 (0x0238 - 0x0238)
class UT_Sickbay_Guard_C final : public UT_MardetGuards_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"T_Sickbay_Guard_C">();
	}
	static class UT_Sickbay_Guard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UT_Sickbay_Guard_C>();
	}
};
static_assert(alignof(UT_Sickbay_Guard_C) == 0x000008, "Wrong alignment on UT_Sickbay_Guard_C");
static_assert(sizeof(UT_Sickbay_Guard_C) == 0x000238, "Wrong size on UT_Sickbay_Guard_C");

}
