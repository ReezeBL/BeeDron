// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BasePlayerCharInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetJourneyComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         JourneyActorComponent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::GetJourneyComponent(class UActorComponent** JourneyActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetJourneyComponent");

	UBasePlayerCharInterface_C_GetJourneyComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JourneyActorComponent != nullptr)
		*JourneyActorComponent = params.JourneyActorComponent;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.StopClimbingIfColliding
// (Public, BlueprintCallable, BlueprintEvent)

void UBasePlayerCharInterface_C::StopClimbingIfColliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.StopClimbingIfColliding");

	UBasePlayerCharInterface_C_StopClimbingIfColliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.EnergyThresholdTriggered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnergyEventTableRow    TemperatureEnergyEventRow      (Parm)

void UBasePlayerCharInterface_C::EnergyThresholdTriggered(const struct FEnergyEventTableRow& TemperatureEnergyEventRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.EnergyThresholdTriggered");

	UBasePlayerCharInterface_C_EnergyThresholdTriggered_Params params;
	params.TemperatureEnergyEventRow = TemperatureEnergyEventRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.AddJourneyEventInterfaceCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JourneyName                    (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::AddJourneyEventInterfaceCall(const struct FName& JourneyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.AddJourneyEventInterfaceCall");

	UBasePlayerCharInterface_C_AddJourneyEventInterfaceCall_Params params;
	params.JourneyName = JourneyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetTargetLockLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Value                          (Parm, OutParm, IsPlainOldData)

void UBasePlayerCharInterface_C::GetTargetLockLocation(struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetTargetLockLocation");

	UBasePlayerCharInterface_C_GetTargetLockLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FirstPersonCombatCameraDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UBasePlayerCharInterface_C::FirstPersonCombatCameraDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.FirstPersonCombatCameraDisabled");

	UBasePlayerCharInterface_C_FirstPersonCombatCameraDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FirstPersonCombatCameraEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void UBasePlayerCharInterface_C::FirstPersonCombatCameraEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.FirstPersonCombatCameraEnabled");

	UBasePlayerCharInterface_C_FirstPersonCombatCameraEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetUniqueID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniqueID*               UniqueID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::GetUniqueID(class UUniqueID** UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetUniqueID");

	UBasePlayerCharInterface_C_GetUniqueID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueID != nullptr)
		*UniqueID = params.UniqueID;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetMapMarkerComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterMapMarkerComponent* MapMarkerComp                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::GetMapMarkerComponent(class UCharacterMapMarkerComponent** MapMarkerComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetMapMarkerComponent");

	UBasePlayerCharInterface_C_GetMapMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapMarkerComp != nullptr)
		*MapMarkerComp = params.MapMarkerComp;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FreeMovementUserDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UBasePlayerCharInterface_C::FreeMovementUserDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.FreeMovementUserDisabled");

	UBasePlayerCharInterface_C_FreeMovementUserDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FreeMovementUserEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void UBasePlayerCharInterface_C::FreeMovementUserEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.FreeMovementUserEnabled");

	UBasePlayerCharInterface_C_FreeMovementUserEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.ToggleMounted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMounted_                     (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::ToggleMounted(bool IsMounted_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.ToggleMounted");

	UBasePlayerCharInterface_C_ToggleMounted_Params params;
	params.IsMounted_ = IsMounted_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable SetLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LockedValueToSet               (Parm, ZeroConstructor, IsPlainOldData)
// class APlaceableBase*          PlaceableTarget                (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::Player_Interactable_SetLockedState(bool LockedValueToSet, class APlaceableBase* PlaceableTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable SetLockedState");

	UBasePlayerCharInterface_C_Player_Interactable_SetLockedState_Params params;
	params.LockedValueToSet = LockedValueToSet;
	params.PlaceableTarget = PlaceableTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.UpdateCharacterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState                CharacterState                 (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::UpdateCharacterState(ECharacterState CharacterState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.UpdateCharacterState");

	UBasePlayerCharInterface_C_UpdateCharacterState_Params params;
	params.CharacterState = CharacterState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.PlayerLogout
// (Public, BlueprintCallable, BlueprintEvent)

void UBasePlayerCharInterface_C::PlayerLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.PlayerLogout");

	UBasePlayerCharInterface_C_PlayerLogout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable ReturnToInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlaceableBase*          PlaceableToReturn              (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::Player_Interactable_ReturnToInventory(class APlaceableBase* PlaceableToReturn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable ReturnToInventory");

	UBasePlayerCharInterface_C_Player_Interactable_ReturnToInventory_Params params;
	params.PlaceableToReturn = PlaceableToReturn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable Demolish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_to_Demolish              (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::Player_Interactable_Demolish(class AActor* Actor_to_Demolish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable Demolish");

	UBasePlayerCharInterface_C_Player_Interactable_Demolish_Params params;
	params.Actor_to_Demolish = Actor_to_Demolish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetSpawnpointIDs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniqueID*               bedrollID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUniqueID*               bedID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  CharacterName                  (Parm, OutParm, ZeroConstructor)

void UBasePlayerCharInterface_C::GetSpawnpointIDs(class UUniqueID** bedrollID, class UUniqueID** bedID, class FString* CharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetSpawnpointIDs");

	UBasePlayerCharInterface_C_GetSpawnpointIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bedrollID != nullptr)
		*bedrollID = params.bedrollID;
	if (bedID != nullptr)
		*bedID = params.bedID;
	if (CharacterName != nullptr)
		*CharacterName = params.CharacterName;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetActiveCameraLocationRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (Parm, OutParm, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, IsPlainOldData)

void UBasePlayerCharInterface_C::GetActiveCameraLocationRotation(struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetActiveCameraLocationRotation");

	UBasePlayerCharInterface_C_GetActiveCameraLocationRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.ClientShowFIFO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UBasePlayerCharInterface_C::ClientShowFIFO(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.ClientShowFIFO");

	UBasePlayerCharInterface_C_ClientShowFIFO_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.PlayerSit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         SceneComponentToSitOn          (Parm, ZeroConstructor, IsPlainOldData)
// ESittingPoses                  SittingPose                    (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::PlayerSit(class USceneComponent* SceneComponentToSitOn, ESittingPoses SittingPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.PlayerSit");

	UBasePlayerCharInterface_C_PlayerSit_Params params;
	params.SceneComponentToSitOn = SceneComponentToSitOn;
	params.SittingPose = SittingPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.PickUpLoreItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoreItem                       (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UInteractableInterface> Interactable                   (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::PickUpLoreItem(int LoreItem, const TScriptInterface<class UInteractableInterface>& Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.PickUpLoreItem");

	UBasePlayerCharInterface_C_PickUpLoreItem_Params params;
	params.LoreItem = LoreItem;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GiveLoreItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoreItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::GiveLoreItem(int LoreItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GiveLoreItem");

	UBasePlayerCharInterface_C_GiveLoreItem_Params params;
	params.LoreItem = LoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.HasLoreItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoreItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TRUE                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::HasLoreItem(int LoreItem, bool* TRUE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.HasLoreItem");

	UBasePlayerCharInterface_C_HasLoreItem_Params params;
	params.LoreItem = LoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TRUE != nullptr)
		*TRUE = params.TRUE;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetDebugIgnoreBuildingCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldIgnore                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::GetDebugIgnoreBuildingCost(bool* ShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetDebugIgnoreBuildingCost");

	UBasePlayerCharInterface_C_GetDebugIgnoreBuildingCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldIgnore != nullptr)
		*ShouldIgnore = params.ShouldIgnore;
}


// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable Dismantle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToDismantle               (Parm, ZeroConstructor, IsPlainOldData)

void UBasePlayerCharInterface_C::Player_Interactable_Dismantle(class AActor* ActorToDismantle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable Dismantle");

	UBasePlayerCharInterface_C_Player_Interactable_Dismantle_Params params;
	params.ActorToDismantle = ActorToDismantle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
