#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BasePlayerCharInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasePlayerCharInterface.BasePlayerCharInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBasePlayerCharInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasePlayerCharInterface.BasePlayerCharInterface_C");
		return ptr;
	}


	void GetJourneyComponent(class UActorComponent** JourneyActorComponent);
	void StopClimbingIfColliding();
	void EnergyThresholdTriggered(const struct FEnergyEventTableRow& TemperatureEnergyEventRow);
	void AddJourneyEventInterfaceCall(const struct FName& JourneyName);
	void GetTargetLockLocation(struct FVector* Value);
	void FirstPersonCombatCameraDisabled();
	void FirstPersonCombatCameraEnabled();
	void GetUniqueID(class UUniqueID** UniqueID);
	void GetMapMarkerComponent(class UCharacterMapMarkerComponent** MapMarkerComp);
	void FreeMovementUserDisabled();
	void FreeMovementUserEnabled();
	void ToggleMounted(bool IsMounted_);
	void Player_Interactable_SetLockedState(bool LockedValueToSet, class APlaceableBase* PlaceableTarget);
	void UpdateCharacterState(ECharacterState CharacterState);
	void PlayerLogout();
	void Player_Interactable_ReturnToInventory(class APlaceableBase* PlaceableToReturn);
	void Player_Interactable_Demolish(class AActor* Actor_to_Demolish);
	void GetSpawnpointIDs(class UUniqueID** bedrollID, class UUniqueID** bedID, class FString* CharacterName);
	void GetActiveCameraLocationRotation(struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void ClientShowFIFO(const struct FText& Text);
	void PlayerSit(class USceneComponent* SceneComponentToSitOn, ESittingPoses SittingPose);
	void PickUpLoreItem(int LoreItem, const TScriptInterface<class UInteractableInterface>& Interactable);
	void GiveLoreItem(int LoreItem, bool* Success);
	void HasLoreItem(int LoreItem, bool* TRUE);
	void GetDebugIgnoreBuildingCost(bool* ShouldIgnore);
	void Player_Interactable_Dismantle(class AActor* ActorToDismantle);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
