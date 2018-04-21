// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Settings_Gameplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.GetAllowFirstPersonCameraVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UW_Settings_Gameplay_C::GetAllowFirstPersonCameraVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.GetAllowFirstPersonCameraVisibility");

	UW_Settings_Gameplay_C_GetAllowFirstPersonCameraVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__NudityOption_K2Node_ComponentBoundEvent_98_SignalSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ENudity>           Nudity                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__NudityOption_K2Node_ComponentBoundEvent_98_SignalSelectionChanged__DelegateSignature(TEnumAsByte<ENudity> Nudity)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__NudityOption_K2Node_ComponentBoundEvent_98_SignalSelectionChanged__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__NudityOption_K2Node_ComponentBoundEvent_98_SignalSelectionChanged__DelegateSignature_Params params;
	params.Nudity = Nudity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Settings_Gameplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.Construct");

	UW_Settings_Gameplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_FloatingNames_K2Node_ComponentBoundEvent_71_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_FloatingNames_K2Node_ComponentBoundEvent_71_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_FloatingNames_K2Node_ComponentBoundEvent_71_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_FloatingNames_K2Node_ComponentBoundEvent_71_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ToggleDodge_K2Node_ComponentBoundEvent_42_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_ToggleDodge_K2Node_ComponentBoundEvent_42_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ToggleDodge_K2Node_ComponentBoundEvent_42_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_ToggleDodge_K2Node_ComponentBoundEvent_42_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CBS_ChatVisibility_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CBS_ChatVisibility_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CBS_ChatVisibility_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CBS_ChatVisibility_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ToggleShowHUDDot_K2Node_ComponentBoundEvent_18_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_ToggleShowHUDDot_K2Node_ComponentBoundEvent_18_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ToggleShowHUDDot_K2Node_ComponentBoundEvent_18_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_ToggleShowHUDDot_K2Node_ComponentBoundEvent_18_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_FixedMovement_K2Node_ComponentBoundEvent_1397_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_FixedMovement_K2Node_ComponentBoundEvent_1397_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_FixedMovement_K2Node_ComponentBoundEvent_1397_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_FixedMovement_K2Node_ComponentBoundEvent_1397_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowJourneySteps_K2Node_ComponentBoundEvent_229_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_ShowJourneySteps_K2Node_ComponentBoundEvent_229_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowJourneySteps_K2Node_ComponentBoundEvent_229_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_ShowJourneySteps_K2Node_ComponentBoundEvent_229_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowBuldingHelp_K2Node_ComponentBoundEvent_262_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_ShowBuldingHelp_K2Node_ComponentBoundEvent_262_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowBuldingHelp_K2Node_ComponentBoundEvent_262_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_ShowBuldingHelp_K2Node_ComponentBoundEvent_262_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CBS_Language_K2Node_ComponentBoundEvent_275_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CBS_Language_K2Node_ComponentBoundEvent_275_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CBS_Language_K2Node_ComponentBoundEvent_275_OnSelectionChangedEvent__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CBS_Language_K2Node_ComponentBoundEvent_275_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_EnableAutoFacingOnAttack_K2Node_ComponentBoundEvent_33_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_EnableAutoFacingOnAttack_K2Node_ComponentBoundEvent_33_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_EnableAutoFacingOnAttack_K2Node_ComponentBoundEvent_33_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_EnableAutoFacingOnAttack_K2Node_ComponentBoundEvent_33_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowWeaponTrails_K2Node_ComponentBoundEvent_59_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::BndEvt__CB_ShowWeaponTrails_K2Node_ComponentBoundEvent_59_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowWeaponTrails_K2Node_ComponentBoundEvent_59_SignalToggled__DelegateSignature");

	UW_Settings_Gameplay_C_BndEvt__CB_ShowWeaponTrails_K2Node_ComponentBoundEvent_59_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.EventOnSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UW_Settings_Gameplay_C::EventOnSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.EventOnSettingsChanged");

	UW_Settings_Gameplay_C_EventOnSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Settings_Gameplay.W_Settings_Gameplay_C.ExecuteUbergraph_W_Settings_Gameplay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_Settings_Gameplay_C::ExecuteUbergraph_W_Settings_Gameplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Gameplay.W_Settings_Gameplay_C.ExecuteUbergraph_W_Settings_Gameplay");

	UW_Settings_Gameplay_C_ExecuteUbergraph_W_Settings_Gameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
