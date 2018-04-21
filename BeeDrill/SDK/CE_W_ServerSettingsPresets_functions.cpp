// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerSettingsPresets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.HasCensoredDLC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasDlc                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::HasCensoredDLC(bool* bHasDlc)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.HasCensoredDLC");

	UW_ServerSettingsPresets_C_HasCensoredDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasDlc != nullptr)
		*bHasDlc = params.bHasDlc;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetNoFontColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UW_ServerSettingsPresets_C::GetNoFontColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetNoFontColor");

	UW_ServerSettingsPresets_C_GetNoFontColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetFullFontColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UW_ServerSettingsPresets_C::GetFullFontColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetFullFontColor");

	UW_ServerSettingsPresets_C_GetFullFontColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetPartialFontColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UW_ServerSettingsPresets_C::GetPartialFontColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetPartialFontColor");

	UW_ServerSettingsPresets_C_GetPartialFontColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ServerSettingsPresets_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.Construct");

	UW_ServerSettingsPresets_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature");

	UW_ServerSettingsPresets_C_BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature");

	UW_ServerSettingsPresets_C_BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature");

	UW_ServerSettingsPresets_C_BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnBarAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMessageBoxDialogResult        Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::OnBarAccepted(EMessageBoxDialogResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnBarAccepted");

	UW_ServerSettingsPresets_C_OnBarAccepted_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_ServerSettingsPresets_C_BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_ServerSettingsPresets_C_BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_ServerSettingsPresets_C_BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnDecAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMessageBoxDialogResult        Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::OnDecAccepted(EMessageBoxDialogResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnDecAccepted");

	UW_ServerSettingsPresets_C_OnDecAccepted_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnCivAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMessageBoxDialogResult        Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::OnCivAccepted(EMessageBoxDialogResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnCivAccepted");

	UW_ServerSettingsPresets_C_OnCivAccepted_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.ExecuteUbergraph_W_ServerSettingsPresets
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSettingsPresets_C::ExecuteUbergraph_W_ServerSettingsPresets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.ExecuteUbergraph_W_ServerSettingsPresets");

	UW_ServerSettingsPresets_C_ExecuteUbergraph_W_ServerSettingsPresets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.ScrollIntoView__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ServerSettingsPresets_C::ScrollIntoView__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.ScrollIntoView__DelegateSignature");

	UW_ServerSettingsPresets_C_ScrollIntoView__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyBarbaric__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ServerSettingsPresets_C::SignalSetDifficultyBarbaric__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyBarbaric__DelegateSignature");

	UW_ServerSettingsPresets_C_SignalSetDifficultyBarbaric__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyDecadent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ServerSettingsPresets_C::SignalSetDifficultyDecadent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyDecadent__DelegateSignature");

	UW_ServerSettingsPresets_C_SignalSetDifficultyDecadent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyCivilized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ServerSettingsPresets_C::SignalSetDifficultyCivilized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyCivilized__DelegateSignature");

	UW_ServerSettingsPresets_C_SignalSetDifficultyCivilized__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
