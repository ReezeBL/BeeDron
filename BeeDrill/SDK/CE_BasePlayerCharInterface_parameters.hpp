#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BasePlayerCharInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetJourneyComponent
struct UBasePlayerCharInterface_C_GetJourneyComponent_Params
{
	class UActorComponent*                             JourneyActorComponent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.StopClimbingIfColliding
struct UBasePlayerCharInterface_C_StopClimbingIfColliding_Params
{
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.EnergyThresholdTriggered
struct UBasePlayerCharInterface_C_EnergyThresholdTriggered_Params
{
	struct FEnergyEventTableRow                        TemperatureEnergyEventRow;                                // (Parm)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.AddJourneyEventInterfaceCall
struct UBasePlayerCharInterface_C_AddJourneyEventInterfaceCall_Params
{
	struct FName                                       JourneyName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetTargetLockLocation
struct UBasePlayerCharInterface_C_GetTargetLockLocation_Params
{
	struct FVector                                     Value;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FirstPersonCombatCameraDisabled
struct UBasePlayerCharInterface_C_FirstPersonCombatCameraDisabled_Params
{
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FirstPersonCombatCameraEnabled
struct UBasePlayerCharInterface_C_FirstPersonCombatCameraEnabled_Params
{
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetUniqueID
struct UBasePlayerCharInterface_C_GetUniqueID_Params
{
	class UUniqueID*                                   UniqueID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetMapMarkerComponent
struct UBasePlayerCharInterface_C_GetMapMarkerComponent_Params
{
	class UCharacterMapMarkerComponent*                MapMarkerComp;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FreeMovementUserDisabled
struct UBasePlayerCharInterface_C_FreeMovementUserDisabled_Params
{
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.FreeMovementUserEnabled
struct UBasePlayerCharInterface_C_FreeMovementUserEnabled_Params
{
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.ToggleMounted
struct UBasePlayerCharInterface_C_ToggleMounted_Params
{
	bool                                               IsMounted_;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable SetLockedState
struct UBasePlayerCharInterface_C_Player_Interactable_SetLockedState_Params
{
	bool                                               LockedValueToSet;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APlaceableBase*                              PlaceableTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.UpdateCharacterState
struct UBasePlayerCharInterface_C_UpdateCharacterState_Params
{
	ECharacterState                                    CharacterState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.PlayerLogout
struct UBasePlayerCharInterface_C_PlayerLogout_Params
{
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable ReturnToInventory
struct UBasePlayerCharInterface_C_Player_Interactable_ReturnToInventory_Params
{
	class APlaceableBase*                              PlaceableToReturn;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable Demolish
struct UBasePlayerCharInterface_C_Player_Interactable_Demolish_Params
{
	class AActor*                                      Actor_to_Demolish;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetSpawnpointIDs
struct UBasePlayerCharInterface_C_GetSpawnpointIDs_Params
{
	class UUniqueID*                                   bedrollID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   bedID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      CharacterName;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetActiveCameraLocationRotation
struct UBasePlayerCharInterface_C_GetActiveCameraLocationRotation_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.ClientShowFIFO
struct UBasePlayerCharInterface_C_ClientShowFIFO_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.PlayerSit
struct UBasePlayerCharInterface_C_PlayerSit_Params
{
	class USceneComponent*                             SceneComponentToSitOn;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ESittingPoses                                      SittingPose;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.PickUpLoreItem
struct UBasePlayerCharInterface_C_PickUpLoreItem_Params
{
	int                                                LoreItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UInteractableInterface>     Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GiveLoreItem
struct UBasePlayerCharInterface_C_GiveLoreItem_Params
{
	int                                                LoreItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.HasLoreItem
struct UBasePlayerCharInterface_C_HasLoreItem_Params
{
	int                                                LoreItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TRUE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.GetDebugIgnoreBuildingCost
struct UBasePlayerCharInterface_C_GetDebugIgnoreBuildingCost_Params
{
	bool                                               ShouldIgnore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePlayerCharInterface.BasePlayerCharInterface_C.Player Interactable Dismantle
struct UBasePlayerCharInterface_C_Player_Interactable_Dismantle_Params
{
	class AActor*                                      ActorToDismantle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
