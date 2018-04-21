#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_UE4Dreamworld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UE4Dreamworld.PersistenceComponent
// 0x0060 (0x0158 - 0x00F8)
class UPersistenceComponent : public UActorComponent
{
public:
	bool                                               SaveOnSpawn;                                              // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              SaveFrequency;                                            // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipSaving;                                               // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class UUniqueID*                                   UID;                                                      // 0x0108(0x0008) (Edit, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSignalDataLoaded;                                       // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSignalPreSave;                                          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               m_bWasLoadedFromDB;                                       // 0x0130(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0131(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.PersistenceComponent");
		return ptr;
	}


	void SignalPreComponentSave__DelegateSignature();
	void SignalActorDataLoaded__DelegateSignature();
	void SetDirty(bool bDirty, float Delay);
	void SetDataDoneLoading();
	void Save();
	bool IsDataDoneLoading();
	class UUniqueID* GetUniqueID();
	void Delete();
};


// Class UE4Dreamworld.DWGameInstance
// 0x0010 (0x0110 - 0x0100)
class UDWGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DWGameInstance");
		return ptr;
	}

};


// Class UE4Dreamworld.ActorPersistenceComponent
// 0x0000 (0x0158 - 0x0158)
class UActorPersistenceComponent : public UPersistenceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.ActorPersistenceComponent");
		return ptr;
	}

};


// Class UE4Dreamworld.CharacterPersistenceComponent
// 0x0008 (0x0160 - 0x0158)
class UCharacterPersistenceComponent : public UPersistenceComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.CharacterPersistenceComponent");
		return ptr;
	}

};


// Class UE4Dreamworld.DWGameMode
// 0x0140 (0x05E0 - 0x04A0)
class ADWGameMode : public AGameMode
{
public:
	class FString                                      DatabaseHost;                                             // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame)
	int                                                DatabasePort;                                             // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               DatabaseVerbose;                                          // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	class UWorldPersistenceComponent*                  WorldPersistence;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x120];                                     // 0x04C0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DWGameMode");
		return ptr;
	}


	void SetUserCharacterList(const class FString& UserID, TArray<class UUniqueID*> UserIDList);
	void SetUserCharacterData(class UUniqueID* UID, TArray<struct FDBResult> UserIDList, const struct FTransform& Transform);
	void K2_PostCharacterLoaded(class APawn* Pawn);
	void K2_OnUserPrelogin(const class FString& UserID);
};


// Class UE4Dreamworld.DWGameState
// 0x0078 (0x04A8 - 0x0430)
class ADWGameState : public AGameState
{
public:
	struct FStringClassReference                       SoundStageClassName;                                      // 0x0430(0x0010) (Edit, Config, GlobalConfig, NoClear)
	class ASoundStage*                                 SoundStage;                                               // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UClass*, class AActor*>                 m_ServiceActors;                                          // 0x0448(0x0050) (ZeroConstructor)
	class ACacheModule*                                CacheModule;                                              // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DWGameState");
		return ptr;
	}


	class ASoundStage* STATIC_GetSoundStage(class UObject* WorldContextObject);
	class AActor* STATIC_GetServiceActor(class UObject* WorldContextObject, class UClass* Interface);
	class ACacheModule* STATIC_GetCacheModule(class UObject* WorldContextObject);
};


// Class UE4Dreamworld.DWLevelScriptActor
// 0x0000 (0x03D8 - 0x03D8)
class ADWLevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DWLevelScriptActor");
		return ptr;
	}


	bool IsStreaming();
	void ClientBeginPlay();
};


// Class UE4Dreamworld.SoundStage
// 0x0000 (0x03D0 - 0x03D0)
class ASoundStage : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.SoundStage");
		return ptr;
	}


	TArray<struct FName> GetActiveAudioVolumeTags();
};


// Class UE4Dreamworld.UniqueID
// 0x0018 (0x0040 - 0x0028)
class UUniqueID : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	int64_t                                            UID;                                                      // 0x0038(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.UniqueID");
		return ptr;
	}


	void SetUniqueID(class UUniqueID* Source);
	class UUniqueID* STATIC_MakeNullUID(class UObject* WorldContextObject);
	class UUniqueID* STATIC_GetActorUID(class AActor* Actor);
	class UUniqueID* STATIC_GenerateUniqueID(class UObject* WorldContextObject);
};


// Class UE4Dreamworld.AsyncLineTraceByChannelProxy
// 0x0198 (0x01C0 - 0x0028)
class UAsyncLineTraceByChannelProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnCompletion;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x188];                                     // 0x0038(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.AsyncLineTraceByChannelProxy");
		return ptr;
	}


	class UAsyncLineTraceByChannelProxy* STATIC_AsyncLineTraceByChannel(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf);
};


// Class UE4Dreamworld.DreamworldBlueprints
// 0x00C0 (0x00E8 - 0x0028)
class UDreamworldBlueprints : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DreamworldBlueprints");
		return ptr;
	}


	void STATIC_ValidateOnlineSessions(class UObject* WorldContextObject, TArray<struct FBlueprintSessionResult> search, TArray<struct FBlueprintSessionResult>* Valid, TArray<struct FBlueprintSessionResult>* Invalid);
	bool STATIC_ValidateOnlineSession(class UObject* WorldContextObject, const struct FBlueprintSessionResult& session);
	void STATIC_SpawnSoundAttached(TAssetPtr<class USoundBase> Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void STATIC_ShowAccountPicker();
	void STATIC_SetUniqueID(class AActor* Actor, class UUniqueID* UID);
	bool STATIC_PresenceSession(class UObject* WorldContextObject);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	bool STATIC_NotEqual_UUIDUUID(class UUniqueID* A, class UUniqueID* B);
	bool STATIC_IsValidID(class UUniqueID* UID);
	bool STATIC_IsInTrialMode();
	bool STATIC_IsDeveloperUniverse(class UObject* WorldContextObject);
	bool STATIC_IsDeveloperMode(class UObject* WorldContextObject);
	bool STATIC_IsDedicatedSession(class UObject* WorldContextObject);
	class FString STATIC_GetServerName(class UObject* WorldContextObject);
	class FString STATIC_GetPlayerId(class UObject* WorldContextObject, class APlayerState* PlayerState);
	int STATIC_GetNumStressClients(class UObject* WorldContextObject);
	void STATIC_GetDreamworldVersion(class UObject* WorldContextObject, class FString* branch, class FString* Project, class FString* Configuration, class FString* Platform, int* revision, int* Snapshot);
	class FString STATIC_GetConsoleUserIdOverride(const class FString& UserID, class APlayerController* Controller, class UObject* WorldContextObject);
	class UObject* STATIC_GetClassDefaultObject(class UClass* Class);
	bool STATIC_EqualEqual_UUIDUUID(class UUniqueID* A, class UUniqueID* B);
	void STATIC_DreamworldPlaySound2D(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings);
	void STATIC_CopyUniqueID(class UUniqueID* Source, class UUniqueID** Target);
	struct FText STATIC_Conv_UUIDToText(class UUniqueID* Value, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
	class FString STATIC_Conv_UniqueIDToString(class UUniqueID* UID);
	class FString STATIC_ClientGetPlayerId(class UObject* WorldContextObject);
	void STATIC_ClearUniqueID(class AActor* Actor);
	void STATIC_ChangeMaxRelevancyScaling(float Scaling);
};


// Class UE4Dreamworld.BudgetKeeper
// 0x0000 (0x0028 - 0x0028)
class UBudgetKeeper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.BudgetKeeper");
		return ptr;
	}


	void STATIC_CheckPerformanceBudgets(int FrameCount);
};


// Class UE4Dreamworld.CacheModule
// 0x0050 (0x0420 - 0x03D0)
class ACacheModule : public AActor
{
public:
	TMap<class UObject*, float>                        CachedItems;                                              // 0x03D0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.CacheModule");
		return ptr;
	}


	void Flush();
	void CacheItem(class UObject* Asset, float KeepAliveTime);
};


// Class UE4Dreamworld.DatabaseCompressorCallbackHelper
// 0x0040 (0x0068 - 0x0028)
class UDatabaseCompressorCallbackHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DatabaseCompressorCallbackHelper");
		return ptr;
	}


	void Success(class APlayerController* Controller);
	void Failure(class APlayerController* Controller);
};


// Class UE4Dreamworld.DeleteCharacterCallProxy
// 0x0038 (0x0060 - 0x0028)
class UDeleteCharacterCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DeleteCharacterCallProxy");
		return ptr;
	}


	class UDeleteCharacterCallProxy* STATIC_DeleteCharacterByUniqueID(class UObject* WorldContextObject, class UUniqueID* actorUID);
	class UDeleteCharacterCallProxy* STATIC_DeleteCharacter(class UObject* WorldContextObject, class AActor* Actor);
};


// Class UE4Dreamworld.DreamworldHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UDreamworldHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DreamworldHandlerComponentFactory");
		return ptr;
	}

};


// Class UE4Dreamworld.FrameRateTracker
// 0x0028 (0x0050 - 0x0028)
class UFrameRateTracker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.FrameRateTracker");
		return ptr;
	}


	void Tick();
	void SetResetInterval(float Value);
	void Reset();
	int K2_GetFrameCount();
	float GetWorstFrameTime();
	float GetWorstFps();
	float GetResetInterval();
	float GetElapsedTime();
	float GetBestFrameTime();
	float GetBestFps();
	float GetAverageFrameTime();
	float GetAverageFps();
};


// Class UE4Dreamworld.FrameRateReporter
// 0x0038 (0x0088 - 0x0050)
class UFrameRateReporter : public UFrameRateTracker
{
public:
	class FString                                      ScopeName;                                                // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               Compact;                                                  // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDebugLevel                                        DebugLevel;                                               // 0x0061(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x26];                                      // 0x0062(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.FrameRateReporter");
		return ptr;
	}


	class UFrameRateReporter* STATIC_CreateReporter(class UObject* WorldContextObject, const class FString& ScopeName, float ResetInterval);
};


// Class UE4Dreamworld.DWDebugLibrary
// 0x0000 (0x0028 - 0x0028)
class UDWDebugLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DWDebugLibrary");
		return ptr;
	}


	void STATIC_SaveScreenshot(class UObject* WorldContextObject, const class FString& Filename);
};


// Class UE4Dreamworld.FileSystemCleanup
// 0x0000 (0x0028 - 0x0028)
class UFileSystemCleanup : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.FileSystemCleanup");
		return ptr;
	}

};


// Class UE4Dreamworld.DWGenericLibrary
// 0x0000 (0x0028 - 0x0028)
class UDWGenericLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.DWGenericLibrary");
		return ptr;
	}

};


// Class UE4Dreamworld.GetUserCharacterListCallProxy
// 0x0068 (0x0090 - 0x0028)
class UGetUserCharacterListCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET
	TArray<class UUniqueID*>                           idList;                                                   // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FCharacterListData>                  CharacterListData;                                        // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.GetUserCharacterListCallProxy");
		return ptr;
	}


	class UGetUserCharacterListCallProxy* STATIC_GetUserCharacterList(class UObject* WorldContextObject, const class FString& UserID, class APlayerController* Controller);
};


// Class UE4Dreamworld.GetUserUniqueIDCallProxy
// 0x0038 (0x0060 - 0x0028)
class UGetUserUniqueIDCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.GetUserUniqueIDCallProxy");
		return ptr;
	}


	class UGetUserUniqueIDCallProxy* STATIC_GetUserUniqueID(class UObject* WorldContextObject, const class FString& UserID);
};


// Class UE4Dreamworld.WorldPersistenceComponent
// 0x00D0 (0x0228 - 0x0158)
class UWorldPersistenceComponent : public UPersistenceComponent
{
public:
	unsigned char                                      UnknownData00[0xCC];                                      // 0x0158(0x00CC) MISSED OFFSET
	float                                              MinDirtySaveDelay;                                        // 0x0224(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.WorldPersistenceComponent");
		return ptr;
	}


	void SaveComponents(TArray<class UPersistenceComponent*> Components);
	void STATIC_SaveActor(class UObject* WorldContextObject, class AActor* Actor);
	void Save(class UPersistenceComponent* Component);
	class UPersistenceComponent* GetPersistentComponentByUniqueID(class UUniqueID* UniqueID);
	class AActor* GetActorByUniqueID(class UUniqueID* UniqueID);
};


// Class UE4Dreamworld.PolarUtilityVectorHelpers
// 0x0000 (0x0028 - 0x0028)
class UPolarUtilityVectorHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.PolarUtilityVectorHelpers");
		return ptr;
	}


	void STATIC_SetWeight(float Weight, struct FPolarUtilityVector* Vector);
	void STATIC_SetIntervalWeight(float MinAngle, float MaxAngle, float Weight, struct FPolarUtilityVector* Vector);
	void STATIC_GetIntervals(const struct FPolarUtilityVector& Vector, TArray<struct FVector>* Intervals);
	void STATIC_FindInterval(TArray<struct FVector> Intervals, float SearchAngle, float SearchRange, bool* Success, struct FVector* ResultInterval, float* ResultMinAdjustment, struct FVector* SearchAngleInterval);
};


// Class UE4Dreamworld.SupportsMaxRelevancyScalingInterface
// 0x0000 (0x0028 - 0x0028)
class USupportsMaxRelevancyScalingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.SupportsMaxRelevancyScalingInterface");
		return ptr;
	}


	void ChangeMaxRelevancyScaling(float Scaling);
};


// Class UE4Dreamworld.VirtualAllocTracker
// 0x0000 (0x0028 - 0x0028)
class UVirtualAllocTracker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Dreamworld.VirtualAllocTracker");
		return ptr;
	}


	void STATIC_DumpVirtualAllocStatsToLog();
	void STATIC_ClearVirtualAllocStats();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
