// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_IngameLoadingScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   newText                        (Parm)

void UW_IngameLoadingScreen_C::UpdateText(const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.UpdateText");

	UW_IngameLoadingScreen_C_UpdateText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.FadeFromBlack
// (BlueprintCallable, BlueprintEvent)

void UW_IngameLoadingScreen_C::FadeFromBlack()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.FadeFromBlack");

	UW_IngameLoadingScreen_C_FadeFromBlack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.RemoveLoadingScreen
// (BlueprintCallable, BlueprintEvent)

void UW_IngameLoadingScreen_C::RemoveLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.RemoveLoadingScreen");

	UW_IngameLoadingScreen_C_RemoveLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_IngameLoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.Construct");

	UW_IngameLoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UW_IngameLoadingScreen_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.OnAnimationFinished");

	UW_IngameLoadingScreen_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.ExecuteUbergraph_W_IngameLoadingScreen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_IngameLoadingScreen_C::ExecuteUbergraph_W_IngameLoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.ExecuteUbergraph_W_IngameLoadingScreen");

	UW_IngameLoadingScreen_C_ExecuteUbergraph_W_IngameLoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
