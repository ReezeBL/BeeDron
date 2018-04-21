#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BaseGameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseGameState.BaseGameState_C.IsAvatarTypeLocked
struct ABaseGameState_C_IsAvatarTypeLocked_Params
{
	class UClass*                                      AvatarType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameState.BaseGameState_C.UnlockSummonedAvatarType
struct ABaseGameState_C_UnlockSummonedAvatarType_Params
{
	class UClass*                                      AvatarType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameState.BaseGameState_C.LockSummonedAvatarType
struct ABaseGameState_C_LockSummonedAvatarType_Params
{
	class UClass*                                      AvatarType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AConanCharacter*                             Summoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameState.BaseGameState_C.UserConstructionScript
struct ABaseGameState_C_UserConstructionScript_Params
{
};

// Function BaseGameState.BaseGameState_C.ReceiveBeginPlay
struct ABaseGameState_C_ReceiveBeginPlay_Params
{
};

// Function BaseGameState.BaseGameState_C.ModifyGlobalImpulseMultiplier
struct ABaseGameState_C_ModifyGlobalImpulseMultiplier_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameState.BaseGameState_C.MuticastOnServerTerminated
struct ABaseGameState_C_MuticastOnServerTerminated_Params
{
};

// Function BaseGameState.BaseGameState_C.ExecuteUbergraph_BaseGameState
struct ABaseGameState_C_ExecuteUbergraph_BaseGameState_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
