#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomMeshComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace CG
{

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (0x0530 - 0x0520)
class UCustomMeshComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_16CA[0x10];                                    // 0x0520(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	bool SetCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomMeshComponent">();
	}
	static class UCustomMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomMeshComponent>();
	}
};
static_assert(alignof(UCustomMeshComponent) == 0x000010, "Wrong alignment on UCustomMeshComponent");
static_assert(sizeof(UCustomMeshComponent) == 0x000530, "Wrong size on UCustomMeshComponent");

}

