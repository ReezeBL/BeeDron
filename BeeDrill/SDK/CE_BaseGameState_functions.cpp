// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BaseGameState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseGameState.BaseGameState_C.IsAvatarTypeLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  AvatarType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseGameState_C::IsAvatarTypeLocked(class UClass* AvatarType, bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.IsAvatarTypeLocked");

	ABaseGameState_C_IsAvatarTypeLocked_Params params;
	params.AvatarType = AvatarType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function BaseGameState.BaseGameState_C.UnlockSummonedAvatarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AvatarType                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameState_C::UnlockSummonedAvatarType(class UClass* AvatarType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.UnlockSummonedAvatarType");

	ABaseGameState_C_UnlockSummonedAvatarType_Params params;
	params.AvatarType = AvatarType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameState.BaseGameState_C.LockSummonedAvatarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AvatarType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AConanCharacter*         Summoner                       (Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameState_C::LockSummonedAvatarType(class UClass* AvatarType, class AConanCharacter* Summoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.LockSummonedAvatarType");

	ABaseGameState_C_LockSummonedAvatarType_Params params;
	params.AvatarType = AvatarType;
	params.Summoner = Summoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameState.BaseGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABaseGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.UserConstructionScript");

	ABaseGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameState.BaseGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABaseGameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.ReceiveBeginPlay");

	ABaseGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameState.BaseGameState_C.ModifyGlobalImpulseMultiplier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameState_C::ModifyGlobalImpulseMultiplier(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.ModifyGlobalImpulseMultiplier");

	ABaseGameState_C_ModifyGlobalImpulseMultiplier_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameState.BaseGameState_C.MuticastOnServerTerminated
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABaseGameState_C::MuticastOnServerTerminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.MuticastOnServerTerminated");

	ABaseGameState_C_MuticastOnServerTerminated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameState.BaseGameState_C.ExecuteUbergraph_BaseGameState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameState_C::ExecuteUbergraph_BaseGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameState.BaseGameState_C.ExecuteUbergraph_BaseGameState");

	ABaseGameState_C_ExecuteUbergraph_BaseGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
