#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_UE4Dreamworld_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// DelegateFunction UE4Dreamworld.PersistenceComponent.SignalPreComponentSave__DelegateSignature
struct UPersistenceComponent_SignalPreComponentSave__DelegateSignature_Params
{
};

// DelegateFunction UE4Dreamworld.PersistenceComponent.SignalActorDataLoaded__DelegateSignature
struct UPersistenceComponent_SignalActorDataLoaded__DelegateSignature_Params
{
};

// Function UE4Dreamworld.PersistenceComponent.SetDirty
struct UPersistenceComponent_SetDirty_Params
{
	bool                                               bDirty;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.PersistenceComponent.SetDataDoneLoading
struct UPersistenceComponent_SetDataDoneLoading_Params
{
};

// Function UE4Dreamworld.PersistenceComponent.Save
struct UPersistenceComponent_Save_Params
{
};

// Function UE4Dreamworld.PersistenceComponent.IsDataDoneLoading
struct UPersistenceComponent_IsDataDoneLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.PersistenceComponent.GetUniqueID
struct UPersistenceComponent_GetUniqueID_Params
{
	class UUniqueID*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.PersistenceComponent.Delete
struct UPersistenceComponent_Delete_Params
{
};

// Function UE4Dreamworld.DWGameMode.SetUserCharacterList
struct ADWGameMode_SetUserCharacterList_Params
{
	class FString                                      UserID;                                                   // (Parm, ZeroConstructor)
	TArray<class UUniqueID*>                           UserIDList;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function UE4Dreamworld.DWGameMode.SetUserCharacterData
struct ADWGameMode_SetUserCharacterData_Params
{
	class UUniqueID*                                   UID;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDBResult>                           UserIDList;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UE4Dreamworld.DWGameMode.K2_PostCharacterLoaded
struct ADWGameMode_K2_PostCharacterLoaded_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DWGameMode.K2_OnUserPrelogin
struct ADWGameMode_K2_OnUserPrelogin_Params
{
	class FString                                      UserID;                                                   // (Parm, ZeroConstructor)
};

// Function UE4Dreamworld.DWGameState.GetSoundStage
struct ADWGameState_GetSoundStage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASoundStage*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DWGameState.GetServiceActor
struct ADWGameState_GetServiceActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DWGameState.GetCacheModule
struct ADWGameState_GetCacheModule_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ACacheModule*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DWLevelScriptActor.IsStreaming
struct ADWLevelScriptActor_IsStreaming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DWLevelScriptActor.ClientBeginPlay
struct ADWLevelScriptActor_ClientBeginPlay_Params
{
};

// Function UE4Dreamworld.SoundStage.GetActiveAudioVolumeTags
struct ASoundStage_GetActiveAudioVolumeTags_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UE4Dreamworld.UniqueID.SetUniqueID
struct UUniqueID_SetUniqueID_Params
{
	class UUniqueID*                                   Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.UniqueID.MakeNullUID
struct UUniqueID_MakeNullUID_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.UniqueID.GetActorUID
struct UUniqueID_GetActorUID_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.UniqueID.GenerateUniqueID
struct UUniqueID_GenerateUniqueID_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.AsyncLineTraceByChannelProxy.AsyncLineTraceByChannel
struct UAsyncLineTraceByChannelProxy_AsyncLineTraceByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAsyncLineTraceByChannelProxy*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.ValidateOnlineSessions
struct UDreamworldBlueprints_ValidateOnlineSessions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlueprintSessionResult>             search;                                                   // (Parm, ZeroConstructor)
	TArray<struct FBlueprintSessionResult>             Valid;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<struct FBlueprintSessionResult>             Invalid;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UE4Dreamworld.DreamworldBlueprints.ValidateOnlineSession
struct UDreamworldBlueprints_ValidateOnlineSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlueprintSessionResult                     session;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.SpawnSoundAttached
struct UDreamworldBlueprints_SpawnSoundAttached_Params
{
	TAssetPtr<class USoundBase>                        Sound;                                                    // (Parm)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.SpawnSoundAtLocation
struct UDreamworldBlueprints_SpawnSoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USoundBase>                        Sound;                                                    // (Parm)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.ShowAccountPicker
struct UDreamworldBlueprints_ShowAccountPicker_Params
{
};

// Function UE4Dreamworld.DreamworldBlueprints.SetUniqueID
struct UDreamworldBlueprints_SetUniqueID_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.PresenceSession
struct UDreamworldBlueprints_PresenceSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.PlaySoundAtLocation
struct UDreamworldBlueprints_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USoundBase>                        Sound;                                                    // (Parm)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.NotEqual_UUIDUUID
struct UDreamworldBlueprints_NotEqual_UUIDUUID_Params
{
	class UUniqueID*                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.IsValidID
struct UDreamworldBlueprints_IsValidID_Params
{
	class UUniqueID*                                   UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.IsInTrialMode
struct UDreamworldBlueprints_IsInTrialMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.IsDeveloperUniverse
struct UDreamworldBlueprints_IsDeveloperUniverse_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.IsDeveloperMode
struct UDreamworldBlueprints_IsDeveloperMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.IsDedicatedSession
struct UDreamworldBlueprints_IsDedicatedSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.GetServerName
struct UDreamworldBlueprints_GetServerName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UE4Dreamworld.DreamworldBlueprints.GetPlayerId
struct UDreamworldBlueprints_GetPlayerId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UE4Dreamworld.DreamworldBlueprints.GetNumStressClients
struct UDreamworldBlueprints_GetNumStressClients_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.GetDreamworldVersion
struct UDreamworldBlueprints_GetDreamworldVersion_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      branch;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      Project;                                                  // (Parm, OutParm, ZeroConstructor)
	class FString                                      Configuration;                                            // (Parm, OutParm, ZeroConstructor)
	class FString                                      Platform;                                                 // (Parm, OutParm, ZeroConstructor)
	int                                                revision;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Snapshot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.GetConsoleUserIdOverride
struct UDreamworldBlueprints_GetConsoleUserIdOverride_Params
{
	class FString                                      UserID;                                                   // (Parm, ZeroConstructor)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UE4Dreamworld.DreamworldBlueprints.GetClassDefaultObject
struct UDreamworldBlueprints_GetClassDefaultObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.EqualEqual_UUIDUUID
struct UDreamworldBlueprints_EqualEqual_UUIDUUID_Params
{
	class UUniqueID*                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.DreamworldPlaySound2D
struct UDreamworldBlueprints_DreamworldPlaySound2D_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USoundBase>                        Sound;                                                    // (Parm)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.CopyUniqueID
struct UDreamworldBlueprints_CopyUniqueID_Params
{
	class UUniqueID*                                   Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UUniqueID*                                   Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.Conv_UUIDToText
struct UDreamworldBlueprints_Conv_UUIDToText_Params
{
	class UUniqueID*                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrouping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UE4Dreamworld.DreamworldBlueprints.Conv_UniqueIDToString
struct UDreamworldBlueprints_Conv_UniqueIDToString_Params
{
	class UUniqueID*                                   UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UE4Dreamworld.DreamworldBlueprints.ClientGetPlayerId
struct UDreamworldBlueprints_ClientGetPlayerId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UE4Dreamworld.DreamworldBlueprints.ClearUniqueID
struct UDreamworldBlueprints_ClearUniqueID_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DreamworldBlueprints.ChangeMaxRelevancyScaling
struct UDreamworldBlueprints_ChangeMaxRelevancyScaling_Params
{
	float                                              Scaling;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.BudgetKeeper.CheckPerformanceBudgets
struct UBudgetKeeper_CheckPerformanceBudgets_Params
{
	int                                                FrameCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.CacheModule.Flush
struct ACacheModule_Flush_Params
{
};

// Function UE4Dreamworld.CacheModule.CacheItem
struct ACacheModule_CacheItem_Params
{
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              KeepAliveTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DatabaseCompressorCallbackHelper.Success
struct UDatabaseCompressorCallbackHelper_Success_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DatabaseCompressorCallbackHelper.Failure
struct UDatabaseCompressorCallbackHelper_Failure_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.DeleteCharacterCallProxy.DeleteCharacterByUniqueID
struct UDeleteCharacterCallProxy_DeleteCharacterByUniqueID_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   actorUID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDeleteCharacterCallProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DeleteCharacterCallProxy.DeleteCharacter
struct UDeleteCharacterCallProxy_DeleteCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDeleteCharacterCallProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.Tick
struct UFrameRateTracker_Tick_Params
{
};

// Function UE4Dreamworld.FrameRateTracker.SetResetInterval
struct UFrameRateTracker_SetResetInterval_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.Reset
struct UFrameRateTracker_Reset_Params
{
};

// Function UE4Dreamworld.FrameRateTracker.K2_GetFrameCount
struct UFrameRateTracker_K2_GetFrameCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetWorstFrameTime
struct UFrameRateTracker_GetWorstFrameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetWorstFps
struct UFrameRateTracker_GetWorstFps_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetResetInterval
struct UFrameRateTracker_GetResetInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetElapsedTime
struct UFrameRateTracker_GetElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetBestFrameTime
struct UFrameRateTracker_GetBestFrameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetBestFps
struct UFrameRateTracker_GetBestFps_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetAverageFrameTime
struct UFrameRateTracker_GetAverageFrameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateTracker.GetAverageFps
struct UFrameRateTracker_GetAverageFps_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.FrameRateReporter.CreateReporter
struct UFrameRateReporter_CreateReporter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ScopeName;                                                // (Parm, ZeroConstructor)
	float                                              ResetInterval;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UFrameRateReporter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.DWDebugLibrary.SaveScreenshot
struct UDWDebugLibrary_SaveScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
};

// Function UE4Dreamworld.GetUserCharacterListCallProxy.GetUserCharacterList
struct UGetUserCharacterListCallProxy_GetUserCharacterList_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      UserID;                                                   // (Parm, ZeroConstructor)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetUserCharacterListCallProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.GetUserUniqueIDCallProxy.GetUserUniqueID
struct UGetUserUniqueIDCallProxy_GetUserUniqueID_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      UserID;                                                   // (Parm, ZeroConstructor)
	class UGetUserUniqueIDCallProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.WorldPersistenceComponent.SaveComponents
struct UWorldPersistenceComponent_SaveComponents_Params
{
	TArray<class UPersistenceComponent*>               Components;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UE4Dreamworld.WorldPersistenceComponent.SaveActor
struct UWorldPersistenceComponent_SaveActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.WorldPersistenceComponent.Save
struct UWorldPersistenceComponent_Save_Params
{
	class UPersistenceComponent*                       Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UE4Dreamworld.WorldPersistenceComponent.GetPersistentComponentByUniqueID
struct UWorldPersistenceComponent_GetPersistentComponentByUniqueID_Params
{
	class UUniqueID*                                   UniqueID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPersistenceComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UE4Dreamworld.WorldPersistenceComponent.GetActorByUniqueID
struct UWorldPersistenceComponent_GetActorByUniqueID_Params
{
	class UUniqueID*                                   UniqueID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UE4Dreamworld.PolarUtilityVectorHelpers.SetWeight
struct UPolarUtilityVectorHelpers_SetWeight_Params
{
	struct FPolarUtilityVector                         Vector;                                                   // (Parm, OutParm)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.PolarUtilityVectorHelpers.SetIntervalWeight
struct UPolarUtilityVectorHelpers_SetIntervalWeight_Params
{
	struct FPolarUtilityVector                         Vector;                                                   // (Parm, OutParm)
	float                                              MinAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.PolarUtilityVectorHelpers.GetIntervals
struct UPolarUtilityVectorHelpers_GetIntervals_Params
{
	TArray<struct FVector>                             Intervals;                                                // (Parm, OutParm, ZeroConstructor)
	struct FPolarUtilityVector                         Vector;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UE4Dreamworld.PolarUtilityVectorHelpers.FindInterval
struct UPolarUtilityVectorHelpers_FindInterval_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultInterval;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              ResultMinAdjustment;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SearchAngleInterval;                                      // (Parm, OutParm, IsPlainOldData)
	TArray<struct FVector>                             Intervals;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SearchAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SearchRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.SupportsMaxRelevancyScalingInterface.ChangeMaxRelevancyScaling
struct USupportsMaxRelevancyScalingInterface_ChangeMaxRelevancyScaling_Params
{
	float                                              Scaling;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Dreamworld.VirtualAllocTracker.DumpVirtualAllocStatsToLog
struct UVirtualAllocTracker_DumpVirtualAllocStatsToLog_Params
{
};

// Function UE4Dreamworld.VirtualAllocTracker.ClearVirtualAllocStats
struct UVirtualAllocTracker_ClearVirtualAllocStats_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
