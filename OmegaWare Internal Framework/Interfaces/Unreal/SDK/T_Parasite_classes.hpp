#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T_Parasite

#include "Basic.hpp"

#include "T_Generic_Hostile_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass T_Parasite.T_Parasite_C
// 0x0000 (0x0238 - 0x0238)
class UT_Parasite_C final : public UT_Generic_Hostile_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"T_Parasite_C">();
	}
	static class UT_Parasite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UT_Parasite_C>();
	}
};
static_assert(alignof(UT_Parasite_C) == 0x000008, "Wrong alignment on UT_Parasite_C");
static_assert(sizeof(UT_Parasite_C) == 0x000238, "Wrong size on UT_Parasite_C");

}
