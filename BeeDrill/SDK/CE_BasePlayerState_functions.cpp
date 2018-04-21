// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BasePlayerState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasePlayerState.BasePlayerState_C.BeginPlayShowMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePlayerState_C::BeginPlayShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.BeginPlayShowMainMenu");

	ABasePlayerState_C_BeginPlayShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasePlayerState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.UserConstructionScript");

	ABasePlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.ClientShowMainMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABasePlayerState_C::ClientShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.ClientShowMainMenu");

	ABasePlayerState_C_ClientShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.ShowCharacterCreation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABasePlayerState_C::ShowCharacterCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.ShowCharacterCreation");

	ABasePlayerState_C_ShowCharacterCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.ShowMainMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasePlayerState_C::ShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.ShowMainMenu");

	ABasePlayerState_C_ShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABasePlayerState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.ReceiveBeginPlay");

	ABasePlayerState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.ExecuteUbergraph_BasePlayerState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerState_C::ExecuteUbergraph_BasePlayerState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.ExecuteUbergraph_BasePlayerState");

	ABasePlayerState_C_ExecuteUbergraph_BasePlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasePlayerState.BasePlayerState_C.CharacterCreationLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABasePlayerState_C::CharacterCreationLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerState.BasePlayerState_C.CharacterCreationLoaded__DelegateSignature");

	ABasePlayerState_C_CharacterCreationLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
