#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Temperament_Attribute

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Temperament_Attribute.Temperament_Attribute_C
// 0x0000 (0x0040 - 0x0040)
class UTemperament_Attribute_C final : public UTemperamentAttribute
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Temperament_Attribute_C">();
	}
	static class UTemperament_Attribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemperament_Attribute_C>();
	}
};
static_assert(alignof(UTemperament_Attribute_C) == 0x000008, "Wrong alignment on UTemperament_Attribute_C");
static_assert(sizeof(UTemperament_Attribute_C) == 0x000040, "Wrong size on UTemperament_Attribute_C");

}
