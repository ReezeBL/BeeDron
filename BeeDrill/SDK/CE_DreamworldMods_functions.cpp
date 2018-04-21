// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DreamworldMods_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DreamworldMods.ModController.RemoveDataTableRows
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              TargetDataTable                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           RowIDs                         (Parm, ZeroConstructor)

void AModController::RemoveDataTableRows(class UDataTable* TargetDataTable, TArray<struct FName> RowIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModController.RemoveDataTableRows");

	AModController_RemoveDataTableRows_Params params;
	params.TargetDataTable = TargetDataTable;
	params.RowIDs = RowIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreamworldMods.ModController.ModDataTableOperations
// (Event, Public, BlueprintEvent, Const)

void AModController::ModDataTableOperations()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModController.ModDataTableOperations");

	AModController_ModDataTableOperations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreamworldMods.ModController.MergeDataTables
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              MergeIntoDataTable             (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              ToBeAddedDataTable             (Parm, ZeroConstructor, IsPlainOldData)

void AModController::MergeDataTables(class UDataTable* MergeIntoDataTable, class UDataTable* ToBeAddedDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModController.MergeDataTables");

	AModController_MergeDataTables_Params params;
	params.MergeIntoDataTable = MergeIntoDataTable;
	params.ToBeAddedDataTable = ToBeAddedDataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreamworldMods.ModController.ClearDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              TargetDataTable                (Parm, ZeroConstructor, IsPlainOldData)

void AModController::ClearDataTable(class UDataTable* TargetDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModController.ClearDataTable");

	AModController_ClearDataTable_Params params;
	params.TargetDataTable = TargetDataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreamworldMods.ModDetailsRequest.SendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        ModIDs                         (ConstParm, Parm, ZeroConstructor)
// class FString                  sessionId                      (Parm, ZeroConstructor)

void UModDetailsRequest::SendRequest(TArray<struct FModInfo> ModIDs, const class FString& sessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModDetailsRequest.SendRequest");

	UModDetailsRequest_SendRequest_Params params;
	params.ModIDs = ModIDs;
	params.sessionId = sessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreamworldMods.ModManager.SetSelectedMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        Mods                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModManager::STATIC_SetSelectedMods(TArray<struct FModInfo> Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.SetSelectedMods");

	UModManager_SetSelectedMods_Params params;
	params.Mods = Mods;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.MakeLocalCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModInfo                Mod                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModManager::STATIC_MakeLocalCopy(const struct FModInfo& Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.MakeLocalCopy");

	UModManager_MakeLocalCopy_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.LoadSelectedMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModManager::STATIC_LoadSelectedMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.LoadSelectedMods");

	UModManager_LoadSelectedMods_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.InstallMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        ModsToInstall                  (ConstParm, Parm, ZeroConstructor)

void UModManager::STATIC_InstallMods(TArray<struct FModInfo> ModsToInstall)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.InstallMods");

	UModManager_InstallMods_Params params;
	params.ModsToInstall = ModsToInstall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreamworldMods.ModManager.GetSelectedMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FModInfo> UModManager::STATIC_GetSelectedMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.GetSelectedMods");

	UModManager_GetSelectedMods_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.GetModPreviewTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModInfo                Mod                            (Parm)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UModManager::STATIC_GetModPreviewTexture(const struct FModInfo& Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.GetModPreviewTexture");

	UModManager_GetModPreviewTexture_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.GetMissingMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        CheckAgainstModList            (ConstParm, Parm, ZeroConstructor)
// TArray<struct FModInfo>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FModInfo> UModManager::STATIC_GetMissingMods(TArray<struct FModInfo> CheckAgainstModList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.GetMissingMods");

	UModManager_GetMissingMods_Params params;
	params.CheckAgainstModList = CheckAgainstModList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.GetLoadedMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FModInfo> UModManager::STATIC_GetLoadedMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.GetLoadedMods");

	UModManager_GetLoadedMods_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.GetAvailableMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModInfo>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FModInfo> UModManager::STATIC_GetAvailableMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.GetAvailableMods");

	UModManager_GetAvailableMods_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.DeleteLocalCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModInfo                Mod                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModManager::STATIC_DeleteLocalCopy(const struct FModInfo& Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.DeleteLocalCopy");

	UModManager_DeleteLocalCopy_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.CreateModDetailsRequestObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UModDetailsRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UModDetailsRequest* UModManager::STATIC_CreateModDetailsRequestObject(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.CreateModDetailsRequestObject");

	UModManager_CreateModDetailsRequestObject_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldMods.ModManager.CanLoadSelectedMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModManager::STATIC_CanLoadSelectedMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldMods.ModManager.CanLoadSelectedMods");

	UModManager_CanLoadSelectedMods_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
