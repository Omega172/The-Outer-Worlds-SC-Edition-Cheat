#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StaticMeshDescription

#include "Basic.hpp"

#include "StaticMeshDescription_classes.hpp"
#include "StaticMeshDescription_parameters.hpp"


namespace CG
{

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          Center                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          HalfExtents                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID                  PolygonGroup                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       PolygonID_PlusX                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       PolygonID_MinusX                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       PolygonID_PlusY                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       PolygonID_MinusY                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       PolygonID_PlusZ                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       PolygonID_MinusZ                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::StaticMeshDescription_CreateCube Parms{};

	Parms.Center = std::move(Center);
	Parms.HalfExtents = std::move(HalfExtents);
	Parms.PolygonGroup = std::move(PolygonGroup);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = std::move(Parms.PolygonID_PlusX);

	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = std::move(Parms.PolygonID_MinusX);

	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = std::move(Parms.PolygonID_PlusY);

	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = std::move(Parms.PolygonID_MinusY);

	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = std::move(Parms.PolygonID_PlusZ);

	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = std::move(Parms.PolygonID_MinusZ);
}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID                  PolygonGroupID                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SlotName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const class FName& SlotName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::StaticMeshDescription_SetPolygonGroupMaterialSlotName Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID                VertexInstanceID                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        UV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   UVIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::StaticMeshDescription_SetVertexInstanceUV Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);
	Parms.UV = std::move(UV);
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID                VertexInstanceID                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   UVIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::StaticMeshDescription_GetVertexInstanceUV Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

