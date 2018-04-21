#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_Engine_classes.hpp"
#include "CE_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DreamworldMods.AdditionalClassComponent
// 0x0020
struct FAdditionalClassComponent
{
	class UClass*                                      TargetActorClass;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ComponentToAdd;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAdditionalComponentRules                          AdditionRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       ComponentTag;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreamworldMods.ModInfo
// 0x00E0
struct FModInfo
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      Description;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      ChangeNote;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      Author;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      AuthorUrl;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      VersionString;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst)
	int                                                VersionMajor;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VersionMinor;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VersionBuild;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class FString                                      SourcePath;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst)
	int                                                LoadOrder;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bRequiresLoadOnStartup : 1;                               // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bLoadOnStartup : 1;                                       // 0x0084(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      bIsLoaded : 1;                                            // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bWasLoadedOnStartup : 1;                                  // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      IsValid : 1;                                              // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	class UTexture2D*                                  PreviewImage;                                             // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      SteamPublishedFileId;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                SteamVisibility;                                          // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class FString                                      FolderName;                                               // 0x00A8(0x0010) (ZeroConstructor)
	class FString                                      MD5Hash;                                                  // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst)
	class FString                                      Source;                                                   // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst)
	int                                                RevisionNumber;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SnapshotID;                                               // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreamworldMods.ServerModList
// 0x0018
struct FServerModList
{
	TArray<struct FModInfo>                            ModList;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                SteamModsCount;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NonSteamModsCount;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct DreamworldMods.CompactModInfo
// 0x0030
struct FCompactModInfo
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      SteamPublishedFileId;                                     // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      MD5Hash;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct DreamworldMods.CompactModList
// 0x0010
struct FCompactModList
{
	TArray<struct FCompactModInfo>                     ModList;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
