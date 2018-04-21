#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DreamworldMods_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DreamworldMods.ModController
// 0x0018 (0x03E8 - 0x03D0)
class AModController : public AInfo
{
public:
	class UActorPersistenceComponent*                  PersistenceComponent;                                     // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FAdditionalClassComponent>           AdditionalClassComponents;                                // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DreamworldMods.ModController");
		return ptr;
	}


	void RemoveDataTableRows(class UDataTable* TargetDataTable, TArray<struct FName> RowIDs);
	void ModDataTableOperations();
	void MergeDataTables(class UDataTable* MergeIntoDataTable, class UDataTable* ToBeAddedDataTable);
	void ClearDataTable(class UDataTable* TargetDataTable);
};


// Class DreamworldMods.ModDetailsRequest
// 0x0080 (0x00A8 - 0x0028)
class UModDetailsRequest : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnModDetailsRecieved;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DreamworldMods.ModDetailsRequest");
		return ptr;
	}


	void SendRequest(TArray<struct FModInfo> ModIDs, const class FString& sessionId);
};


// Class DreamworldMods.ModManager
// 0x0000 (0x0028 - 0x0028)
class UModManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DreamworldMods.ModManager");
		return ptr;
	}


	bool STATIC_SetSelectedMods(TArray<struct FModInfo> Mods);
	bool STATIC_MakeLocalCopy(const struct FModInfo& Mod);
	bool STATIC_LoadSelectedMods();
	void STATIC_InstallMods(TArray<struct FModInfo> ModsToInstall);
	TArray<struct FModInfo> STATIC_GetSelectedMods();
	class UTexture2D* STATIC_GetModPreviewTexture(const struct FModInfo& Mod);
	TArray<struct FModInfo> STATIC_GetMissingMods(TArray<struct FModInfo> CheckAgainstModList);
	TArray<struct FModInfo> STATIC_GetLoadedMods();
	TArray<struct FModInfo> STATIC_GetAvailableMods();
	bool STATIC_DeleteLocalCopy(const struct FModInfo& Mod);
	class UModDetailsRequest* STATIC_CreateModDetailsRequestObject(class UObject* WorldContextObject);
	bool STATIC_CanLoadSelectedMods();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
