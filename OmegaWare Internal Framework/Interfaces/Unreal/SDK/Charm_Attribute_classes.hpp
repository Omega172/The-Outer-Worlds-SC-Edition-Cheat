#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Charm_Attribute

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Charm_Attribute.Charm_Attribute_C
// 0x0000 (0x0040 - 0x0040)
class UCharm_Attribute_C final : public UCharmAttribute
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Charm_Attribute_C">();
	}
	static class UCharm_Attribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharm_Attribute_C>();
	}
};
static_assert(alignof(UCharm_Attribute_C) == 0x000008, "Wrong alignment on UCharm_Attribute_C");
static_assert(sizeof(UCharm_Attribute_C) == 0x000040, "Wrong size on UCharm_Attribute_C");

}

