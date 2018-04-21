// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Settings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Settings.W_Settings_C.CloseConfirmVideoDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoApply                        (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::CloseConfirmVideoDialog(bool DoApply)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.CloseConfirmVideoDialog");

	UW_Settings_C_CloseConfirmVideoDialog_Params params;
	params.DoApply = DoApply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.SlotESCPressedVideoConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::SlotESCPressedVideoConfirm(bool* wasHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.SlotESCPressedVideoConfirm");

	UW_Settings_C_SlotESCPressedVideoConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (wasHandled != nullptr)
		*wasHandled = params.wasHandled;
}


// Function W_Settings.W_Settings_C.CHANGELATER_HideDefaultInKeyBindings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UW_Settings_C::CHANGELATER_HideDefaultInKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.CHANGELATER_HideDefaultInKeyBindings");

	UW_Settings_C_CHANGELATER_HideDefaultInKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_Settings.W_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Settings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.Construct");

	UW_Settings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.UpdateCountDown
// (BlueprintCallable, BlueprintEvent)

void UW_Settings_C::UpdateCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.UpdateCountDown");

	UW_Settings_C_UpdateCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.OnShowConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UW_Settings_C::OnShowConfirmDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.OnShowConfirmDialog");

	UW_Settings_C_OnShowConfirmDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_138_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::BndEvt__B_Back_K2Node_ComponentBoundEvent_138_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_138_SignalClicked__DelegateSignature");

	UW_Settings_C_BndEvt__B_Back_K2Node_ComponentBoundEvent_138_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_156_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_156_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_156_SignalClicked__DelegateSignature");

	UW_Settings_C_BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_156_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.BndEvt__B_ConfirmDialog_Revert_K2Node_ComponentBoundEvent_171_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::BndEvt__B_ConfirmDialog_Revert_K2Node_ComponentBoundEvent_171_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.BndEvt__B_ConfirmDialog_Revert_K2Node_ComponentBoundEvent_171_SignalClicked__DelegateSignature");

	UW_Settings_C_BndEvt__B_ConfirmDialog_Revert_K2Node_ComponentBoundEvent_171_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.BndEvt__B_Cross_K2Node_ComponentBoundEvent_296_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::BndEvt__B_Cross_K2Node_ComponentBoundEvent_296_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.BndEvt__B_Cross_K2Node_ComponentBoundEvent_296_SignalClicked__DelegateSignature");

	UW_Settings_C_BndEvt__B_Cross_K2Node_ComponentBoundEvent_296_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Settings_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.Destruct");

	UW_Settings_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.ExecuteUbergraph_W_Settings
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_C::ExecuteUbergraph_W_Settings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.ExecuteUbergraph_W_Settings");

	UW_Settings_C_ExecuteUbergraph_W_Settings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.SlotESCPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_Settings_C::SlotESCPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.SlotESCPressed__DelegateSignature");

	UW_Settings_C_SlotESCPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings.W_Settings_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_Settings_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings.W_Settings_C.OnClose__DelegateSignature");

	UW_Settings_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
