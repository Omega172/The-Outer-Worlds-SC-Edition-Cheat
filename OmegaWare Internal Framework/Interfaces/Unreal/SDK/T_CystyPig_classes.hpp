#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T_CystyPig

#include "Basic.hpp"

#include "T_Generic_Hostile_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass T_CystyPig.T_CystyPig_C
// 0x0000 (0x0238 - 0x0238)
class UT_CystyPig_C final : public UT_Generic_Hostile_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"T_CystyPig_C">();
	}
	static class UT_CystyPig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UT_CystyPig_C>();
	}
};
static_assert(alignof(UT_CystyPig_C) == 0x000008, "Wrong alignment on UT_CystyPig_C");
static_assert(sizeof(UT_CystyPig_C) == 0x000238, "Wrong size on UT_CystyPig_C");

}
