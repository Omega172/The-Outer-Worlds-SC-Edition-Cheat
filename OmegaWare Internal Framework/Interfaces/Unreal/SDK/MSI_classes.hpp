#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MSI

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass MSI.MSI_C
// 0x0000 (0x0200 - 0x0200)
class UMSI_C final : public UFactionData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MSI_C">();
	}
	static class UMSI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMSI_C>();
	}
};
static_assert(alignof(UMSI_C) == 0x000008, "Wrong alignment on UMSI_C");
static_assert(sizeof(UMSI_C) == 0x000200, "Wrong size on UMSI_C");

}

