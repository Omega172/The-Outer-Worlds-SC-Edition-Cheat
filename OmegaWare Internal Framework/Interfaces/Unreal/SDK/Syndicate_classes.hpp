#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Syndicate

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Syndicate.Syndicate_C
// 0x0000 (0x0200 - 0x0200)
class USyndicate_C final : public UFactionData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Syndicate_C">();
	}
	static class USyndicate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USyndicate_C>();
	}
};
static_assert(alignof(USyndicate_C) == 0x000008, "Wrong alignment on USyndicate_C");
static_assert(sizeof(USyndicate_C) == 0x000200, "Wrong size on USyndicate_C");

}

