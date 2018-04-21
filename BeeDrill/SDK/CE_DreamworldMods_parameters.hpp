#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DreamworldMods_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DreamworldMods.ModController.RemoveDataTableRows
struct AModController_RemoveDataTableRows_Params
{
	class UDataTable*                                  TargetDataTable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RowIDs;                                                   // (Parm, ZeroConstructor)
};

// Function DreamworldMods.ModController.ModDataTableOperations
struct AModController_ModDataTableOperations_Params
{
};

// Function DreamworldMods.ModController.MergeDataTables
struct AModController_MergeDataTables_Params
{
	class UDataTable*                                  MergeIntoDataTable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ToBeAddedDataTable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreamworldMods.ModController.ClearDataTable
struct AModController_ClearDataTable_Params
{
	class UDataTable*                                  TargetDataTable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreamworldMods.ModDetailsRequest.SendRequest
struct UModDetailsRequest_SendRequest_Params
{
	TArray<struct FModInfo>                            ModIDs;                                                   // (ConstParm, Parm, ZeroConstructor)
	class FString                                      sessionId;                                                // (Parm, ZeroConstructor)
};

// Function DreamworldMods.ModManager.SetSelectedMods
struct UModManager_SetSelectedMods_Params
{
	TArray<struct FModInfo>                            Mods;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldMods.ModManager.MakeLocalCopy
struct UModManager_MakeLocalCopy_Params
{
	struct FModInfo                                    Mod;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldMods.ModManager.LoadSelectedMods
struct UModManager_LoadSelectedMods_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldMods.ModManager.InstallMods
struct UModManager_InstallMods_Params
{
	TArray<struct FModInfo>                            ModsToInstall;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function DreamworldMods.ModManager.GetSelectedMods
struct UModManager_GetSelectedMods_Params
{
	TArray<struct FModInfo>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreamworldMods.ModManager.GetModPreviewTexture
struct UModManager_GetModPreviewTexture_Params
{
	struct FModInfo                                    Mod;                                                      // (Parm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldMods.ModManager.GetMissingMods
struct UModManager_GetMissingMods_Params
{
	TArray<struct FModInfo>                            CheckAgainstModList;                                      // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FModInfo>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreamworldMods.ModManager.GetLoadedMods
struct UModManager_GetLoadedMods_Params
{
	TArray<struct FModInfo>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreamworldMods.ModManager.GetAvailableMods
struct UModManager_GetAvailableMods_Params
{
	TArray<struct FModInfo>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreamworldMods.ModManager.DeleteLocalCopy
struct UModManager_DeleteLocalCopy_Params
{
	struct FModInfo                                    Mod;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldMods.ModManager.CreateModDetailsRequestObject
struct UModManager_CreateModDetailsRequestObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UModDetailsRequest*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldMods.ModManager.CanLoadSelectedMods
struct UModManager_CanLoadSelectedMods_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
