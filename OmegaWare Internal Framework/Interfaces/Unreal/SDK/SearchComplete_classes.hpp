#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SearchComplete

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass SearchComplete.SearchComplete_C
// 0x0000 (0x0048 - 0x0048)
class USearchComplete_C final : public UDecisionTree_Combined
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SearchComplete_C">();
	}
	static class USearchComplete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USearchComplete_C>();
	}
};
static_assert(alignof(USearchComplete_C) == 0x000008, "Wrong alignment on USearchComplete_C");
static_assert(sizeof(USearchComplete_C) == 0x000048, "Wrong size on USearchComplete_C");

}
