#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deserters

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Deserters.Deserters_C
// 0x0000 (0x0200 - 0x0200)
class UDeserters_C final : public UFactionData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Deserters_C">();
	}
	static class UDeserters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeserters_C>();
	}
};
static_assert(alignof(UDeserters_C) == 0x000008, "Wrong alignment on UDeserters_C");
static_assert(sizeof(UDeserters_C) == 0x000200, "Wrong size on UDeserters_C");

}
