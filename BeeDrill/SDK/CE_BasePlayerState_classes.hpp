#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BasePlayerState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasePlayerState.BasePlayerState_C
// 0x0088 (0x0588 - 0x0500)
class ABasePlayerState_C : public AConanPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    CharacterCreationLoaded;                                  // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UW_MainMenu_MainMenu_C*                      MainMenu;                                                 // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UW_ServerList_C*                             ServerList;                                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerIndex;                                              // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerSettingDurabilityModifier;                          // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SocialID;                                                 // 0x0538(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                guildId;                                                  // 0x053C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      SocialName;                                               // 0x0540(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       guildName;                                                // 0x0550(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PartyID;                                                  // 0x0558(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentGeneralID;                                         // 0x055C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTradeID;                                           // 0x0560(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FText                                       PreparingWorld;                                           // 0x0568(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      CharacterCreationActor;                                   // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasePlayerState.BasePlayerState_C");
		return ptr;
	}


	void BeginPlayShowMainMenu();
	void UserConstructionScript();
	void ClientShowMainMenu();
	void ShowCharacterCreation();
	void ShowMainMenu();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BasePlayerState(int EntryPoint);
	void CharacterCreationLoaded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
