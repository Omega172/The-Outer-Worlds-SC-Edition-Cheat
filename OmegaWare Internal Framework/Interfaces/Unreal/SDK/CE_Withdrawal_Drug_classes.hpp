#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_Withdrawal_Drug

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_Withdrawal_Drug.CE_Withdrawal_Drug_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_Withdrawal_Drug_C final : public UMultiStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_Withdrawal_Drug_C">();
	}
	static class UCE_Withdrawal_Drug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_Withdrawal_Drug_C>();
	}
};
static_assert(alignof(UCE_Withdrawal_Drug_C) == 0x000008, "Wrong alignment on UCE_Withdrawal_Drug_C");
static_assert(sizeof(UCE_Withdrawal_Drug_C) == 0x0001B8, "Wrong size on UCE_Withdrawal_Drug_C");

}

