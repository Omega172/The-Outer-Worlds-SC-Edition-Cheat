#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_MedicalForce

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass CE_MedicalForce.CE_MedicalForce_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_MedicalForce_C final : public UMultiStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_MedicalForce_C">();
	}
	static class UCE_MedicalForce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCE_MedicalForce_C>();
	}
};
static_assert(alignof(UCE_MedicalForce_C) == 0x000008, "Wrong alignment on UCE_MedicalForce_C");
static_assert(sizeof(UCE_MedicalForce_C) == 0x0001B8, "Wrong size on UCE_MedicalForce_C");

}

