#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T_Gorillian

#include "Basic.hpp"

#include "T_Generic_Hostile_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass T_Gorillian.T_Gorillian_C
// 0x0000 (0x0238 - 0x0238)
class UT_Gorillian_C final : public UT_Generic_Hostile_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"T_Gorillian_C">();
	}
	static class UT_Gorillian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UT_Gorillian_C>();
	}
};
static_assert(alignof(UT_Gorillian_C) == 0x000008, "Wrong alignment on UT_Gorillian_C");
static_assert(sizeof(UT_Gorillian_C) == 0x000238, "Wrong size on UT_Gorillian_C");

}

