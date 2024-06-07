#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spacers

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Spacers.Spacers_C
// 0x0000 (0x0200 - 0x0200)
class USpacers_C final : public UFactionData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Spacers_C">();
	}
	static class USpacers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpacers_C>();
	}
};
static_assert(alignof(USpacers_C) == 0x000008, "Wrong alignment on USpacers_C");
static_assert(sizeof(USpacers_C) == 0x000200, "Wrong size on USpacers_C");

}
