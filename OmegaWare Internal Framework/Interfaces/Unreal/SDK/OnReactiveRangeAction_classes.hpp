#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnReactiveRangeAction

#include "Basic.hpp"

#include "Indiana_structs.hpp"
#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass OnReactiveRangeAction.OnReactiveRangeAction_C
// 0x0000 (0x0030 - 0x0030)
class UOnReactiveRangeAction_C final : public UDecisionTree
{
public:
	TArray<class UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, class FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority* OutPriority);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnReactiveRangeAction_C">();
	}
	static class UOnReactiveRangeAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnReactiveRangeAction_C>();
	}
};
static_assert(alignof(UOnReactiveRangeAction_C) == 0x000008, "Wrong alignment on UOnReactiveRangeAction_C");
static_assert(sizeof(UOnReactiveRangeAction_C) == 0x000030, "Wrong size on UOnReactiveRangeAction_C");

}

