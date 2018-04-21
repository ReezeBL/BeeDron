#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ServerSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ServerSettings.BP_ServerSettings_C
// 0x00E0 (0x07D0 - 0x06F0)
class ABP_ServerSettings_C : public AServerSettings
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (Transient, DuplicateTransient)
	float                                              PlayerWaterMultiplier;                                    // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerIdleThirstMultiplier;                               // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerActiveThirstMultiplier;                             // 0x0700(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerOfflineThirstMultiplier;                            // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerIdleHungerMultiplier;                               // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerActiveHungerMultiplier;                             // 0x070C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerOfflineHungerMultiplier;                            // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ShieldDurabilityMultiplier;                               // 0x0714(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerKnockbackMultiplier;                                // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              NPCKnockbackMultiplier;                                   // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StructureDamageMultiplier;                                // 0x0720(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StructureHealthMultiplier;                                // 0x0724(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              NPCRespawnMultiplier;                                     // 0x0728(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              NPCHealthMultiplier;                                      // 0x072C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              CraftingCostMultiplier;                                   // 0x0730(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerDamageMultiplier;                                   // 0x0734(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerDamageTakenMultiplier;                              // 0x0738(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              MinionDamageMultiplier;                                   // 0x073C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              MinionDamageTakenMultiplier;                              // 0x0740(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              NPCDamageMultiplier;                                      // 0x0744(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              NPCDamageTakenMultiplier;                                 // 0x0748(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerEncumbranceMultiplier;                              // 0x074C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerEncumbrancePenaltyMultiplier;                       // 0x0750(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerMovementSpeedScale;                                 // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerStaminaCostSprintMultiplier;                        // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerSprintSpeedScale;                                   // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerStaminaCostMultiplier;                              // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerHealthRegenSpeedScale;                              // 0x0764(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerStaminaRegenSpeedScale;                             // 0x0768(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerXPRateMultiplier;                                   // 0x076C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerXPKillMultiplier;                                   // 0x0770(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerXPHarvestMultiplier;                                // 0x0774(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerXPCraftMultiplier;                                  // 0x0778(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              PlayerXPTimeMultiplier;                                   // 0x077C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DogsOfTheDesertSpawnWithDogs;                             // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CrossDesertOnce;                                          // 0x0781(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0782(0x0002) MISSED OFFSET
	float                                              WeaponEffectBoundsShorteningFraction;                     // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OldVersion;                                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, IsPlainOldData)
	int                                                NewVersion;                                               // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, IsPlainOldData)
	float                                              ThrallExclusionRadius;                                    // 0x0790(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              MaxAggroRange;                                            // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              FriendlyFireDamageMultiplier;                             // 0x0798(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CampsIgnoreLandclaim;                                     // 0x079C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	float                                              AvatarDomeDurationMultiplier;                             // 0x07A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              AvatarDomeDamageMultiplier;                               // 0x07A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StaminaExhaustionTime;                                    // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaOnConsumeRegenPause;                               // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaMovingRegenRateMultiplier;                         // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DodgeStaminaCost;                                         // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NPCMaxSpawnCapMultiplier;                                 // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StaminaRegenerationTime;                                  // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaStaticRegenRateMultiplier;                         // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttackRotationRestriction;                                // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              AttackRotationMultiplier;                                 // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaOnExhaustionRegenPause;                            // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ServerSettings.BP_ServerSettings_C");
		return ptr;
	}


	float GetPlayerActiveHungerMultiplier();
	float GetPlayerActiveThirstMultiplier();
	float GetPlayerIdleThirstMultiplier();
	float GetPlayerIdleHungerMultiplier();
	float GetPlayerXPRateMultiplier();
	bool SetSoldierSettings();
	bool SetPeasantSettings();
	bool SetBarbarianSettings();
	int GetLatestBlueprintConfigVersion();
	void UserConstructionScript();
	void UpdateBlueprintConfig(int* OldVersion, int* NewVersion);
	void ExecuteUbergraph_BP_ServerSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
