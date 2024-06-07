#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooglePAD

#include "Basic.hpp"

#include "GooglePAD_classes.hpp"
#include "GooglePAD_parameters.hpp"


namespace CG
{

// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AssetPacks                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(const TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "CancelDownload");

	Params::GooglePADFunctionLibrary_CancelDownload Parms{};

	Parms.AssetPacks = std::move(AssetPacks);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const class FString& Param_Name, int32* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetAssetPackLocation");

	Params::GooglePADFunctionLibrary_GetAssetPackLocation Parms{};

	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = Parms.Location;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Location                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGooglePADFunctionLibrary::GetAssetsPath(const int32 Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetAssetsPath");

	Params::GooglePADFunctionLibrary_GetAssetsPath Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGooglePADFunctionLibrary::GetBytesDownloaded(const int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetBytesDownloaded");

	Params::GooglePADFunctionLibrary_GetBytesDownloaded Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const class FString& Param_Name, int32* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetDownloadState");

	Params::GooglePADFunctionLibrary_GetDownloadState Parms{};

	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = Parms.State;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGooglePADDownloadStatus                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(const int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetDownloadStatus");

	Params::GooglePADFunctionLibrary_GetDownloadStatus Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EGooglePADCellularDataConfirmStatus     Status                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetShowCellularDataConfirmationStatus");

	Params::GooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Status != nullptr)
		*Status = Parms.Status;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Location                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGooglePADStorageMethod                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(const int32 Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetStorageMethod");

	Params::GooglePADFunctionLibrary_GetStorageMethod Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGooglePADFunctionLibrary::GetTotalBytesToDownload(const int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetTotalBytesToDownload");

	Params::GooglePADFunctionLibrary_GetTotalBytesToDownload Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Location                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(const int32 Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ReleaseAssetPackLocation");

	Params::GooglePADFunctionLibrary_ReleaseAssetPackLocation Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseDownloadState(const int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ReleaseDownloadState");

	Params::GooglePADFunctionLibrary_ReleaseDownloadState Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AssetPacks                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(const TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestDownload");

	Params::GooglePADFunctionLibrary_RequestDownload Parms{};

	Parms.AssetPacks = std::move(AssetPacks);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AssetPacks                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(const TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestInfo");

	Params::GooglePADFunctionLibrary_RequestInfo Parms{};

	Parms.AssetPacks = std::move(AssetPacks);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestRemoval");

	Params::GooglePADFunctionLibrary_RequestRemoval Parms{};

	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGooglePADErrorCode                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ShowCellularDataConfirmation");

	Params::GooglePADFunctionLibrary_ShowCellularDataConfirmation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

