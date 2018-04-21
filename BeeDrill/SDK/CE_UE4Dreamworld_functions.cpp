// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_UE4Dreamworld_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction UE4Dreamworld.PersistenceComponent.SignalPreComponentSave__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPersistenceComponent::SignalPreComponentSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UE4Dreamworld.PersistenceComponent.SignalPreComponentSave__DelegateSignature");

	UPersistenceComponent_SignalPreComponentSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UE4Dreamworld.PersistenceComponent.SignalActorDataLoaded__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPersistenceComponent::SignalActorDataLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UE4Dreamworld.PersistenceComponent.SignalActorDataLoaded__DelegateSignature");

	UPersistenceComponent_SignalActorDataLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.PersistenceComponent.SetDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDirty                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void UPersistenceComponent::SetDirty(bool bDirty, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PersistenceComponent.SetDirty");

	UPersistenceComponent_SetDirty_Params params;
	params.bDirty = bDirty;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.PersistenceComponent.SetDataDoneLoading
// (Final, Native, Public, BlueprintCallable)

void UPersistenceComponent::SetDataDoneLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PersistenceComponent.SetDataDoneLoading");

	UPersistenceComponent_SetDataDoneLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.PersistenceComponent.Save
// (Final, Native, Public, BlueprintCallable)

void UPersistenceComponent::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PersistenceComponent.Save");

	UPersistenceComponent_Save_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.PersistenceComponent.IsDataDoneLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPersistenceComponent::IsDataDoneLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PersistenceComponent.IsDataDoneLoading");

	UPersistenceComponent_IsDataDoneLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.PersistenceComponent.GetUniqueID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUniqueID*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUniqueID* UPersistenceComponent::GetUniqueID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PersistenceComponent.GetUniqueID");

	UPersistenceComponent_GetUniqueID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.PersistenceComponent.Delete
// (Native, Public, BlueprintCallable)

void UPersistenceComponent::Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PersistenceComponent.Delete");

	UPersistenceComponent_Delete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DWGameMode.SetUserCharacterList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  UserID                         (Parm, ZeroConstructor)
// TArray<class UUniqueID*>       UserIDList                     (ConstParm, Parm, ZeroConstructor)

void ADWGameMode::SetUserCharacterList(const class FString& UserID, TArray<class UUniqueID*> UserIDList)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameMode.SetUserCharacterList");

	ADWGameMode_SetUserCharacterList_Params params;
	params.UserID = UserID;
	params.UserIDList = UserIDList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DWGameMode.SetUserCharacterData
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UUniqueID*               UID                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDBResult>       UserIDList                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADWGameMode::SetUserCharacterData(class UUniqueID* UID, TArray<struct FDBResult> UserIDList, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameMode.SetUserCharacterData");

	ADWGameMode_SetUserCharacterData_Params params;
	params.UID = UID;
	params.UserIDList = UserIDList;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DWGameMode.K2_PostCharacterLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ADWGameMode::K2_PostCharacterLoaded(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameMode.K2_PostCharacterLoaded");

	ADWGameMode_K2_PostCharacterLoaded_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DWGameMode.K2_OnUserPrelogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                  UserID                         (Parm, ZeroConstructor)

void ADWGameMode::K2_OnUserPrelogin(const class FString& UserID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameMode.K2_OnUserPrelogin");

	ADWGameMode_K2_OnUserPrelogin_Params params;
	params.UserID = UserID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DWGameState.GetSoundStage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ASoundStage*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASoundStage* ADWGameState::STATIC_GetSoundStage(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameState.GetSoundStage");

	ADWGameState_GetSoundStage_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DWGameState.GetServiceActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ADWGameState::STATIC_GetServiceActor(class UObject* WorldContextObject, class UClass* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameState.GetServiceActor");

	ADWGameState_GetServiceActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DWGameState.GetCacheModule
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ACacheModule*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACacheModule* ADWGameState::STATIC_GetCacheModule(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWGameState.GetCacheModule");

	ADWGameState_GetCacheModule_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DWLevelScriptActor.IsStreaming
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADWLevelScriptActor::IsStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWLevelScriptActor.IsStreaming");

	ADWLevelScriptActor_IsStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DWLevelScriptActor.ClientBeginPlay
// (Event, Public, BlueprintEvent)

void ADWLevelScriptActor::ClientBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWLevelScriptActor.ClientBeginPlay");

	ADWLevelScriptActor_ClientBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.SoundStage.GetActiveAudioVolumeTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ASoundStage::GetActiveAudioVolumeTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.SoundStage.GetActiveAudioVolumeTags");

	ASoundStage_GetActiveAudioVolumeTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.UniqueID.SetUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUniqueID*               Source                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUniqueID::SetUniqueID(class UUniqueID* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.UniqueID.SetUniqueID");

	UUniqueID_SetUniqueID_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.UniqueID.MakeNullUID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUniqueID* UUniqueID::STATIC_MakeNullUID(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.UniqueID.MakeNullUID");

	UUniqueID_MakeNullUID_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.UniqueID.GetActorUID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUniqueID* UUniqueID::STATIC_GetActorUID(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.UniqueID.GetActorUID");

	UUniqueID_GetActorUID_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.UniqueID.GenerateUniqueID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUniqueID* UUniqueID::STATIC_GenerateUniqueID(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.UniqueID.GenerateUniqueID");

	UUniqueID_GenerateUniqueID_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.AsyncLineTraceByChannelProxy.AsyncLineTraceByChannel
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAsyncLineTraceByChannelProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAsyncLineTraceByChannelProxy* UAsyncLineTraceByChannelProxy::STATIC_AsyncLineTraceByChannel(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.AsyncLineTraceByChannelProxy.AsyncLineTraceByChannel");

	UAsyncLineTraceByChannelProxy_AsyncLineTraceByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.ValidateOnlineSessions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBlueprintSessionResult> search                         (Parm, ZeroConstructor)
// TArray<struct FBlueprintSessionResult> Valid                          (Parm, OutParm, ZeroConstructor)
// TArray<struct FBlueprintSessionResult> Invalid                        (Parm, OutParm, ZeroConstructor)

void UDreamworldBlueprints::STATIC_ValidateOnlineSessions(class UObject* WorldContextObject, TArray<struct FBlueprintSessionResult> search, TArray<struct FBlueprintSessionResult>* Valid, TArray<struct FBlueprintSessionResult>* Invalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.ValidateOnlineSessions");

	UDreamworldBlueprints_ValidateOnlineSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.search = search;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Invalid != nullptr)
		*Invalid = params.Invalid;
}


// Function UE4Dreamworld.DreamworldBlueprints.ValidateOnlineSession
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlueprintSessionResult session                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_ValidateOnlineSession(class UObject* WorldContextObject, const struct FBlueprintSessionResult& session)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.ValidateOnlineSession");

	UDreamworldBlueprints_ValidateOnlineSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.session = session;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.SpawnSoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TAssetPtr<class USoundBase>    Sound                          (Parm)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_SpawnSoundAttached(TAssetPtr<class USoundBase> Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.SpawnSoundAttached");

	UDreamworldBlueprints_SpawnSoundAttached_Params params;
	params.Sound = Sound;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.SpawnSoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USoundBase>    Sound                          (Parm)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.SpawnSoundAtLocation");

	UDreamworldBlueprints_SpawnSoundAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.ShowAccountPicker
// (Final, Native, Static, Public, BlueprintCallable)

void UDreamworldBlueprints::STATIC_ShowAccountPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.ShowAccountPicker");

	UDreamworldBlueprints_ShowAccountPicker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.SetUniqueID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               UID                            (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_SetUniqueID(class AActor* Actor, class UUniqueID* UID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.SetUniqueID");

	UDreamworldBlueprints_SetUniqueID_Params params;
	params.Actor = Actor;
	params.UID = UID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.PresenceSession
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_PresenceSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.PresenceSession");

	UDreamworldBlueprints_PresenceSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USoundBase>    Sound                          (Parm)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.PlaySoundAtLocation");

	UDreamworldBlueprints_PlaySoundAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.NotEqual_UUIDUUID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUniqueID*               A                              (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_NotEqual_UUIDUUID(class UUniqueID* A, class UUniqueID* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.NotEqual_UUIDUUID");

	UDreamworldBlueprints_NotEqual_UUIDUUID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.IsValidID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUniqueID*               UID                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_IsValidID(class UUniqueID* UID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.IsValidID");

	UDreamworldBlueprints_IsValidID_Params params;
	params.UID = UID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.IsInTrialMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_IsInTrialMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.IsInTrialMode");

	UDreamworldBlueprints_IsInTrialMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.IsDeveloperUniverse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_IsDeveloperUniverse(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.IsDeveloperUniverse");

	UDreamworldBlueprints_IsDeveloperUniverse_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.IsDeveloperMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_IsDeveloperMode(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.IsDeveloperMode");

	UDreamworldBlueprints_IsDeveloperMode_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.IsDedicatedSession
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_IsDedicatedSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.IsDedicatedSession");

	UDreamworldBlueprints_IsDedicatedSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.GetServerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDreamworldBlueprints::STATIC_GetServerName(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.GetServerName");

	UDreamworldBlueprints_GetServerName_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.GetPlayerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDreamworldBlueprints::STATIC_GetPlayerId(class UObject* WorldContextObject, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.GetPlayerId");

	UDreamworldBlueprints_GetPlayerId_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.GetNumStressClients
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDreamworldBlueprints::STATIC_GetNumStressClients(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.GetNumStressClients");

	UDreamworldBlueprints_GetNumStressClients_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.GetDreamworldVersion
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  branch                         (Parm, OutParm, ZeroConstructor)
// class FString                  Project                        (Parm, OutParm, ZeroConstructor)
// class FString                  Configuration                  (Parm, OutParm, ZeroConstructor)
// class FString                  Platform                       (Parm, OutParm, ZeroConstructor)
// int                            revision                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Snapshot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_GetDreamworldVersion(class UObject* WorldContextObject, class FString* branch, class FString* Project, class FString* Configuration, class FString* Platform, int* revision, int* Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.GetDreamworldVersion");

	UDreamworldBlueprints_GetDreamworldVersion_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (branch != nullptr)
		*branch = params.branch;
	if (Project != nullptr)
		*Project = params.Project;
	if (Configuration != nullptr)
		*Configuration = params.Configuration;
	if (Platform != nullptr)
		*Platform = params.Platform;
	if (revision != nullptr)
		*revision = params.revision;
	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function UE4Dreamworld.DreamworldBlueprints.GetConsoleUserIdOverride
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  UserID                         (Parm, ZeroConstructor)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDreamworldBlueprints::STATIC_GetConsoleUserIdOverride(const class FString& UserID, class APlayerController* Controller, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.GetConsoleUserIdOverride");

	UDreamworldBlueprints_GetConsoleUserIdOverride_Params params;
	params.UserID = UserID;
	params.Controller = Controller;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.GetClassDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UDreamworldBlueprints::STATIC_GetClassDefaultObject(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.GetClassDefaultObject");

	UDreamworldBlueprints_GetClassDefaultObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.EqualEqual_UUIDUUID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUniqueID*               A                              (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDreamworldBlueprints::STATIC_EqualEqual_UUIDUUID(class UUniqueID* A, class UUniqueID* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.EqualEqual_UUIDUUID");

	UDreamworldBlueprints_EqualEqual_UUIDUUID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.DreamworldPlaySound2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USoundBase>    Sound                          (Parm)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_DreamworldPlaySound2D(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.DreamworldPlaySound2D");

	UDreamworldBlueprints_DreamworldPlaySound2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.CopyUniqueID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UUniqueID*               Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UUniqueID*               Source                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_CopyUniqueID(class UUniqueID* Source, class UUniqueID** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.CopyUniqueID");

	UDreamworldBlueprints_CopyUniqueID_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function UE4Dreamworld.DreamworldBlueprints.Conv_UUIDToText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUniqueID*               Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGrouping                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinimumIntegralDigits          (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaximumIntegralDigits          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDreamworldBlueprints::STATIC_Conv_UUIDToText(class UUniqueID* Value, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.Conv_UUIDToText");

	UDreamworldBlueprints_Conv_UUIDToText_Params params;
	params.Value = Value;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.Conv_UniqueIDToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUniqueID*               UID                            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDreamworldBlueprints::STATIC_Conv_UniqueIDToString(class UUniqueID* UID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.Conv_UniqueIDToString");

	UDreamworldBlueprints_Conv_UniqueIDToString_Params params;
	params.UID = UID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.ClientGetPlayerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDreamworldBlueprints::STATIC_ClientGetPlayerId(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.ClientGetPlayerId");

	UDreamworldBlueprints_ClientGetPlayerId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DreamworldBlueprints.ClearUniqueID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_ClearUniqueID(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.ClearUniqueID");

	UDreamworldBlueprints_ClearUniqueID_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DreamworldBlueprints.ChangeMaxRelevancyScaling
// (Final, Exec, Native, Static, Public)
// Parameters:
// float                          Scaling                        (Parm, ZeroConstructor, IsPlainOldData)

void UDreamworldBlueprints::STATIC_ChangeMaxRelevancyScaling(float Scaling)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DreamworldBlueprints.ChangeMaxRelevancyScaling");

	UDreamworldBlueprints_ChangeMaxRelevancyScaling_Params params;
	params.Scaling = Scaling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.BudgetKeeper.CheckPerformanceBudgets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            FrameCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UBudgetKeeper::STATIC_CheckPerformanceBudgets(int FrameCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.BudgetKeeper.CheckPerformanceBudgets");

	UBudgetKeeper_CheckPerformanceBudgets_Params params;
	params.FrameCount = FrameCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.CacheModule.Flush
// (Final, Native, Public, BlueprintCallable)

void ACacheModule::Flush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.CacheModule.Flush");

	ACacheModule_Flush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.CacheModule.CacheItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          KeepAliveTime                  (Parm, ZeroConstructor, IsPlainOldData)

void ACacheModule::CacheItem(class UObject* Asset, float KeepAliveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.CacheModule.CacheItem");

	ACacheModule_CacheItem_Params params;
	params.Asset = Asset;
	params.KeepAliveTime = KeepAliveTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DatabaseCompressorCallbackHelper.Success
// (Final, Native, Public)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UDatabaseCompressorCallbackHelper::Success(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DatabaseCompressorCallbackHelper.Success");

	UDatabaseCompressorCallbackHelper_Success_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DatabaseCompressorCallbackHelper.Failure
// (Final, Native, Public)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UDatabaseCompressorCallbackHelper::Failure(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DatabaseCompressorCallbackHelper.Failure");

	UDatabaseCompressorCallbackHelper_Failure_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.DeleteCharacterCallProxy.DeleteCharacterByUniqueID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               actorUID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDeleteCharacterCallProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDeleteCharacterCallProxy* UDeleteCharacterCallProxy::STATIC_DeleteCharacterByUniqueID(class UObject* WorldContextObject, class UUniqueID* actorUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DeleteCharacterCallProxy.DeleteCharacterByUniqueID");

	UDeleteCharacterCallProxy_DeleteCharacterByUniqueID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.actorUID = actorUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DeleteCharacterCallProxy.DeleteCharacter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDeleteCharacterCallProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDeleteCharacterCallProxy* UDeleteCharacterCallProxy::STATIC_DeleteCharacter(class UObject* WorldContextObject, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DeleteCharacterCallProxy.DeleteCharacter");

	UDeleteCharacterCallProxy_DeleteCharacter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.Tick
// (Final, Native, Public, BlueprintCallable)

void UFrameRateTracker::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.Tick");

	UFrameRateTracker_Tick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.FrameRateTracker.SetResetInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrameRateTracker::SetResetInterval(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.SetResetInterval");

	UFrameRateTracker_SetResetInterval_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.FrameRateTracker.Reset
// (Final, Native, Public, BlueprintCallable)

void UFrameRateTracker::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.Reset");

	UFrameRateTracker_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.FrameRateTracker.K2_GetFrameCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFrameRateTracker::K2_GetFrameCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.K2_GetFrameCount");

	UFrameRateTracker_K2_GetFrameCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetWorstFrameTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetWorstFrameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetWorstFrameTime");

	UFrameRateTracker_GetWorstFrameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetWorstFps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetWorstFps()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetWorstFps");

	UFrameRateTracker_GetWorstFps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetResetInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetResetInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetResetInterval");

	UFrameRateTracker_GetResetInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetElapsedTime");

	UFrameRateTracker_GetElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetBestFrameTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetBestFrameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetBestFrameTime");

	UFrameRateTracker_GetBestFrameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetBestFps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetBestFps()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetBestFps");

	UFrameRateTracker_GetBestFps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetAverageFrameTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetAverageFrameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetAverageFrameTime");

	UFrameRateTracker_GetAverageFrameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateTracker.GetAverageFps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFrameRateTracker::GetAverageFps()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateTracker.GetAverageFps");

	UFrameRateTracker_GetAverageFps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.FrameRateReporter.CreateReporter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ScopeName                      (Parm, ZeroConstructor)
// float                          ResetInterval                  (Parm, ZeroConstructor, IsPlainOldData)
// class UFrameRateReporter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrameRateReporter* UFrameRateReporter::STATIC_CreateReporter(class UObject* WorldContextObject, const class FString& ScopeName, float ResetInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.FrameRateReporter.CreateReporter");

	UFrameRateReporter_CreateReporter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScopeName = ScopeName;
	params.ResetInterval = ResetInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.DWDebugLibrary.SaveScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Filename                       (Parm, ZeroConstructor)

void UDWDebugLibrary::STATIC_SaveScreenshot(class UObject* WorldContextObject, const class FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.DWDebugLibrary.SaveScreenshot");

	UDWDebugLibrary_SaveScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.GetUserCharacterListCallProxy.GetUserCharacterList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  UserID                         (Parm, ZeroConstructor)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UGetUserCharacterListCallProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetUserCharacterListCallProxy* UGetUserCharacterListCallProxy::STATIC_GetUserCharacterList(class UObject* WorldContextObject, const class FString& UserID, class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.GetUserCharacterListCallProxy.GetUserCharacterList");

	UGetUserCharacterListCallProxy_GetUserCharacterList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UserID = UserID;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.GetUserUniqueIDCallProxy.GetUserUniqueID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  UserID                         (Parm, ZeroConstructor)
// class UGetUserUniqueIDCallProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetUserUniqueIDCallProxy* UGetUserUniqueIDCallProxy::STATIC_GetUserUniqueID(class UObject* WorldContextObject, const class FString& UserID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.GetUserUniqueIDCallProxy.GetUserUniqueID");

	UGetUserUniqueIDCallProxy_GetUserUniqueID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UserID = UserID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.WorldPersistenceComponent.SaveComponents
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class UPersistenceComponent*> Components                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWorldPersistenceComponent::SaveComponents(TArray<class UPersistenceComponent*> Components)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.WorldPersistenceComponent.SaveComponents");

	UWorldPersistenceComponent_SaveComponents_Params params;
	params.Components = Components;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.WorldPersistenceComponent.SaveActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UWorldPersistenceComponent::STATIC_SaveActor(class UObject* WorldContextObject, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.WorldPersistenceComponent.SaveActor");

	UWorldPersistenceComponent_SaveActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.WorldPersistenceComponent.Save
// (Final, Native, Public)
// Parameters:
// class UPersistenceComponent*   Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWorldPersistenceComponent::Save(class UPersistenceComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.WorldPersistenceComponent.Save");

	UWorldPersistenceComponent_Save_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.WorldPersistenceComponent.GetPersistentComponentByUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUniqueID*               UniqueID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPersistenceComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPersistenceComponent* UWorldPersistenceComponent::GetPersistentComponentByUniqueID(class UUniqueID* UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.WorldPersistenceComponent.GetPersistentComponentByUniqueID");

	UWorldPersistenceComponent_GetPersistentComponentByUniqueID_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.WorldPersistenceComponent.GetActorByUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUniqueID*               UniqueID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UWorldPersistenceComponent::GetActorByUniqueID(class UUniqueID* UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.WorldPersistenceComponent.GetActorByUniqueID");

	UWorldPersistenceComponent_GetActorByUniqueID_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Dreamworld.PolarUtilityVectorHelpers.SetWeight
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolarUtilityVector     Vector                         (Parm, OutParm)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UPolarUtilityVectorHelpers::STATIC_SetWeight(float Weight, struct FPolarUtilityVector* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PolarUtilityVectorHelpers.SetWeight");

	UPolarUtilityVectorHelpers_SetWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function UE4Dreamworld.PolarUtilityVectorHelpers.SetIntervalWeight
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolarUtilityVector     Vector                         (Parm, OutParm)
// float                          MinAngle                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxAngle                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UPolarUtilityVectorHelpers::STATIC_SetIntervalWeight(float MinAngle, float MaxAngle, float Weight, struct FPolarUtilityVector* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PolarUtilityVectorHelpers.SetIntervalWeight");

	UPolarUtilityVectorHelpers_SetIntervalWeight_Params params;
	params.MinAngle = MinAngle;
	params.MaxAngle = MaxAngle;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function UE4Dreamworld.PolarUtilityVectorHelpers.GetIntervals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Intervals                      (Parm, OutParm, ZeroConstructor)
// struct FPolarUtilityVector     Vector                         (ConstParm, Parm, OutParm, ReferenceParm)

void UPolarUtilityVectorHelpers::STATIC_GetIntervals(const struct FPolarUtilityVector& Vector, TArray<struct FVector>* Intervals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PolarUtilityVectorHelpers.GetIntervals");

	UPolarUtilityVectorHelpers_GetIntervals_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intervals != nullptr)
		*Intervals = params.Intervals;
}


// Function UE4Dreamworld.PolarUtilityVectorHelpers.FindInterval
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultInterval                 (Parm, OutParm, IsPlainOldData)
// float                          ResultMinAdjustment            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SearchAngleInterval            (Parm, OutParm, IsPlainOldData)
// TArray<struct FVector>         Intervals                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          SearchAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          SearchRange                    (Parm, ZeroConstructor, IsPlainOldData)

void UPolarUtilityVectorHelpers::STATIC_FindInterval(TArray<struct FVector> Intervals, float SearchAngle, float SearchRange, bool* Success, struct FVector* ResultInterval, float* ResultMinAdjustment, struct FVector* SearchAngleInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.PolarUtilityVectorHelpers.FindInterval");

	UPolarUtilityVectorHelpers_FindInterval_Params params;
	params.Intervals = Intervals;
	params.SearchAngle = SearchAngle;
	params.SearchRange = SearchRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ResultInterval != nullptr)
		*ResultInterval = params.ResultInterval;
	if (ResultMinAdjustment != nullptr)
		*ResultMinAdjustment = params.ResultMinAdjustment;
	if (SearchAngleInterval != nullptr)
		*SearchAngleInterval = params.SearchAngleInterval;
}


// Function UE4Dreamworld.SupportsMaxRelevancyScalingInterface.ChangeMaxRelevancyScaling
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scaling                        (Parm, ZeroConstructor, IsPlainOldData)

void USupportsMaxRelevancyScalingInterface::ChangeMaxRelevancyScaling(float Scaling)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.SupportsMaxRelevancyScalingInterface.ChangeMaxRelevancyScaling");

	USupportsMaxRelevancyScalingInterface_ChangeMaxRelevancyScaling_Params params;
	params.Scaling = Scaling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.VirtualAllocTracker.DumpVirtualAllocStatsToLog
// (Final, Exec, Native, Static, Public)

void UVirtualAllocTracker::STATIC_DumpVirtualAllocStatsToLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.VirtualAllocTracker.DumpVirtualAllocStatsToLog");

	UVirtualAllocTracker_DumpVirtualAllocStatsToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Dreamworld.VirtualAllocTracker.ClearVirtualAllocStats
// (Final, Exec, Native, Static, Public)

void UVirtualAllocTracker::STATIC_ClearVirtualAllocStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Dreamworld.VirtualAllocTracker.ClearVirtualAllocStats");

	UVirtualAllocTracker_ClearVirtualAllocStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
