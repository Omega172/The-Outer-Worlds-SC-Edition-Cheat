#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Perception_Attribute

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Perception_Attribute.Perception_Attribute_C
// 0x0000 (0x0040 - 0x0040)
class UPerception_Attribute_C final : public UPerceptionAttribute
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Perception_Attribute_C">();
	}
	static class UPerception_Attribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerception_Attribute_C>();
	}
};
static_assert(alignof(UPerception_Attribute_C) == 0x000008, "Wrong alignment on UPerception_Attribute_C");
static_assert(sizeof(UPerception_Attribute_C) == 0x000040, "Wrong size on UPerception_Attribute_C");

}
