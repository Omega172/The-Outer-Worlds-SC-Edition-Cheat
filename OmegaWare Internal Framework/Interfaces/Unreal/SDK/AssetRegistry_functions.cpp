#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssetRegistry

#include "Basic.hpp"

#include "AssetRegistry_classes.hpp"
#include "AssetRegistry_parameters.hpp"


namespace CG
{

// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          InAsset                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAllowBlueprintClass                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                       ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAssetData UAssetRegistryHelpers::CreateAssetData(const class UObject* InAsset, bool bAllowBlueprintClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "CreateAssetData");

	Params::AssetRegistryHelpers_CreateAssetData Parms{};

	Parms.InAsset = InAsset;
	Parms.bAllowBlueprintClass = bAllowBlueprintClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetAsset");

	Params::AssetRegistryHelpers_GetAsset Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IAssetRegistry>  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

TScriptInterface<class IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");

	Params::AssetRegistryHelpers_GetAssetRegistry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetClass");

	Params::AssetRegistryHelpers_GetClass Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetExportTextName");

	Params::AssetRegistryHelpers_GetExportTextName Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetFullName");

	Params::AssetRegistryHelpers_GetFullName Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             InTagName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           OutTagValue                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const class FName& InTagName, class FString* OutTagValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetTagValue");

	Params::AssetRegistryHelpers_GetTagValue Parms{};

	Parms.InAssetData = std::move(InAssetData);
	Parms.InTagName = InTagName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTagValue != nullptr)
		*OutTagValue = std::move(Parms.OutTagValue);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");

	Params::AssetRegistryHelpers_IsAssetLoaded Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsRedirector");

	Params::AssetRegistryHelpers_IsRedirector Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsUAsset");

	Params::AssetRegistryHelpers_IsUAsset Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsValid");

	Params::AssetRegistryHelpers_IsValid Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                        InFilter                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FTagAndValue>             InTagsAndValues                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter                        ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");

	Params::AssetRegistryHelpers_SetFilterTagsAndValues Parms{};

	Parms.InFilter = std::move(InFilter);
	Parms.InTagsAndValues = std::move(InTagsAndValues);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                       InAssetData                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoftObjectPath                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");

	Params::AssetRegistryHelpers_ToSoftObjectPath Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PathToPrioritize                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::PrioritizeSearchPath(const class FString& PathToPrioritize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "PrioritizeSearchPath");

	Params::AssetRegistry_PrioritizeSearchPath Parms{};

	Parms.PathToPrioritize = std::move(PathToPrioritize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   InFilePaths                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bForceRescan                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::ScanFilesSynchronous(const TArray<class FString>& InFilePaths, bool bForceRescan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "ScanFilesSynchronous");

	Params::AssetRegistry_ScanFilesSynchronous Parms{};

	Parms.InFilePaths = std::move(InFilePaths);
	Parms.bForceRescan = bForceRescan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   InFilePaths                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAssetRegistry::ScanModifiedAssetFiles(const TArray<class FString>& InFilePaths)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "ScanModifiedAssetFiles");

	Params::AssetRegistry_ScanModifiedAssetFiles Parms{};

	Parms.InFilePaths = std::move(InFilePaths);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   InPaths                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bForceRescan                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::ScanPathsSynchronous(const TArray<class FString>& InPaths, bool bForceRescan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "ScanPathsSynchronous");

	Params::AssetRegistry_ScanPathsSynchronous Parms{};

	Parms.InPaths = std::move(InPaths);
	Parms.bForceRescan = bForceRescan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSynchronousSearch                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "SearchAllAssets");

	Params::AssetRegistry_SearchAllAssets Parms{};

	Parms.bSynchronousSearch = bSynchronousSearch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AssetRegistry.AssetRegistry.WaitForCompletion
// (Native, Public, BlueprintCallable)

void IAssetRegistry::WaitForCompletion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "WaitForCompletion");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>               OutAssetData                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bIncludeOnlyOnDiskAssets                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAllAssets");

	Params::AssetRegistry_GetAllAssets Parms{};

	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FString>                   OutPathList                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IAssetRegistry::GetAllCachedPaths(TArray<class FString>* OutPathList) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAllCachedPaths");

	Params::AssetRegistry_GetAllCachedPaths Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPathList != nullptr)
		*OutPathList = std::move(Parms.OutPathList);
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FName                             ObjectPath                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIncludeOnlyOnDiskAssets                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                       ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAssetData IAssetRegistry::GetAssetByObjectPath(const class FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetByObjectPath");

	Params::AssetRegistry_GetAssetByObjectPath Parms{};

	Parms.ObjectPath = ObjectPath;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FARFilter                        Filter                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>               OutAssetData                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssets");

	Params::AssetRegistry_GetAssets Parms{};

	Parms.Filter = std::move(Filter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                             ClassName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>               OutAssetData                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bSearchSubClasses                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssetsByClass(class FName ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByClass");

	Params::AssetRegistry_GetAssetsByClass Parms{};

	Parms.ClassName = ClassName;
	Parms.bSearchSubClasses = bSearchSubClasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                             PackageName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>               OutAssetData                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bIncludeOnlyOnDiskAssets                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssetsByPackageName(class FName PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPackageName");

	Params::AssetRegistry_GetAssetsByPackageName Parms{};

	Parms.PackageName = PackageName;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                             PackagePath                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>               OutAssetData                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bRecursive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIncludeOnlyOnDiskAssets                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssetsByPath(class FName PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPath");

	Params::AssetRegistry_GetAssetsByPath Parms{};

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                           InBasePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   OutPathList                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bInRecurse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetSubPaths");

	Params::AssetRegistry_GetSubPaths Parms{};

	Parms.InBasePath = std::move(InBasePath);
	Parms.bInRecurse = bInRecurse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPathList != nullptr)
		*OutPathList = std::move(Parms.OutPathList);
}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                             PackagePath                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bRecursive                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::HasAssets(const class FName PackagePath, const bool bRecursive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "HasAssets");

	Params::AssetRegistry_HasAssets Parms{};

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::IsLoadingAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "IsLoadingAssets");

	Params::AssetRegistry_IsLoadingAssets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                             PackageName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetRegistryDependencyOptions  DependencyOptions                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FName>                     OutDependencies                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::K2_GetDependencies(class FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "K2_GetDependencies");

	Params::AssetRegistry_K2_GetDependencies Parms{};

	Parms.PackageName = PackageName;
	Parms.DependencyOptions = std::move(DependencyOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDependencies != nullptr)
		*OutDependencies = std::move(Parms.OutDependencies);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                             PackageName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetRegistryDependencyOptions  ReferenceOptions                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FName>                     OutReferencers                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::K2_GetReferencers(class FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "K2_GetReferencers");

	Params::AssetRegistry_K2_GetReferencers Parms{};

	Parms.PackageName = PackageName;
	Parms.ReferenceOptions = std::move(ReferenceOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutReferencers != nullptr)
		*OutReferencers = std::move(Parms.OutReferencers);

	return Parms.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>               AssetDataList                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter                        Filter                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IAssetRegistry::RunAssetsThroughFilter(TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "RunAssetsThroughFilter");

	Params::AssetRegistry_RunAssetsThroughFilter Parms{};

	Parms.AssetDataList = std::move(AssetDataList);
	Parms.Filter = std::move(Filter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	AssetDataList = std::move(Parms.AssetDataList);
}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>               AssetDataList                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter                        Filter                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IAssetRegistry::UseFilterToExcludeAssets(TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "UseFilterToExcludeAssets");

	Params::AssetRegistry_UseFilterToExcludeAssets Parms{};

	Parms.AssetDataList = std::move(AssetDataList);
	Parms.Filter = std::move(Filter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	AssetDataList = std::move(Parms.AssetDataList);
}

}

