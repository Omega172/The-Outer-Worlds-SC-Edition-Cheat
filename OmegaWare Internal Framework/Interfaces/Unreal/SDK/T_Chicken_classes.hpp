#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T_Chicken

#include "Basic.hpp"

#include "T_Generic_Neutral_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass T_Chicken.T_Chicken_C
// 0x0000 (0x0238 - 0x0238)
class UT_Chicken_C final : public UT_Generic_Neutral_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"T_Chicken_C">();
	}
	static class UT_Chicken_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UT_Chicken_C>();
	}
};
static_assert(alignof(UT_Chicken_C) == 0x000008, "Wrong alignment on UT_Chicken_C");
static_assert(sizeof(UT_Chicken_C) == 0x000238, "Wrong size on UT_Chicken_C");

}
