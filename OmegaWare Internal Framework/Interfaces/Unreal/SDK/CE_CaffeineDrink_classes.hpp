#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_CaffeineDrink

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_CaffeineDrink.CE_CaffeineDrink_C
// 0x0000 (0x0240 - 0x0240)
class UCE_CaffeineDrink_C final : public UStatModifierStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_CaffeineDrink_C">();
	}
	static class UCE_CaffeineDrink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_CaffeineDrink_C>();
	}
};
static_assert(alignof(UCE_CaffeineDrink_C) == 0x000008, "Wrong alignment on UCE_CaffeineDrink_C");
static_assert(sizeof(UCE_CaffeineDrink_C) == 0x000240, "Wrong size on UCE_CaffeineDrink_C");

}

