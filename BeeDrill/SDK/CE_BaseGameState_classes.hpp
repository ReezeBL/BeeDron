#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BaseGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseGameState.BaseGameState_C
// 0x0038 (0x0E18 - 0x0DE0)
class ABaseGameState_C : public AConanGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DE0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalImpulseMultiplier;                                  // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0DF4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SummonedAvatarTypes;                                      // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AConanCharacter*>                     SummonedAvatarSummoners;                                  // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseGameState.BaseGameState_C");
		return ptr;
	}


	void IsAvatarTypeLocked(class UClass* AvatarType, bool* IsLocked);
	void UnlockSummonedAvatarType(class UClass* AvatarType);
	void LockSummonedAvatarType(class UClass* AvatarType, class AConanCharacter* Summoner);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ModifyGlobalImpulseMultiplier(float Value);
	void MuticastOnServerTerminated();
	void ExecuteUbergraph_BaseGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
