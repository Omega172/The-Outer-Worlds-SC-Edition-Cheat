#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_Paranoid

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_Paranoid.CE_Paranoid_C
// 0x0000 (0x0240 - 0x0240)
class UCE_Paranoid_C final : public UStatModifierStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_Paranoid_C">();
	}
	static class UCE_Paranoid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_Paranoid_C>();
	}
};
static_assert(alignof(UCE_Paranoid_C) == 0x000008, "Wrong alignment on UCE_Paranoid_C");
static_assert(sizeof(UCE_Paranoid_C) == 0x000240, "Wrong size on UCE_Paranoid_C");

}
