// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_ConanGameInstanceInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.ShowJoinSessionErrorIfAny
// (Public, BlueprintCallable, BlueprintEvent)

void UConanGameInstanceInterface_C::ShowJoinSessionErrorIfAny()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.ShowJoinSessionErrorIfAny");

	UConanGameInstanceInterface_C_ShowJoinSessionErrorIfAny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.BeginJoinSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult JoiningSession                 (Parm)
// class APlayerController*       JoiningPlayerController        (Parm, ZeroConstructor, IsPlainOldData)

void UConanGameInstanceInterface_C::BeginJoinSession(const struct FBlueprintSessionResult& JoiningSession, class APlayerController* JoiningPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.BeginJoinSession");

	UConanGameInstanceInterface_C_BeginJoinSession_Params params;
	params.JoiningSession = JoiningSession;
	params.JoiningPlayerController = JoiningPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.ClientGotoMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UConanGameInstanceInterface_C::ClientGotoMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.ClientGotoMainMenu");

	UConanGameInstanceInterface_C_ClientGotoMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
