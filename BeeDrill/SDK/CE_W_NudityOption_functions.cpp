// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_NudityOption_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_NudityOption.W_NudityOption_C.HasCensoredDLC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasDlc                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::HasCensoredDLC(bool* bHasDlc)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.HasCensoredDLC");

	UW_NudityOption_C_HasCensoredDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasDlc != nullptr)
		*bHasDlc = params.bHasDlc;
}


// Function W_NudityOption.W_NudityOption_C.GetNoFontColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UW_NudityOption_C::GetNoFontColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.GetNoFontColor");

	UW_NudityOption_C_GetNoFontColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_NudityOption.W_NudityOption_C.GetFullFontColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UW_NudityOption_C::GetFullFontColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.GetFullFontColor");

	UW_NudityOption_C_GetFullFontColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_NudityOption.W_NudityOption_C.GetPartialFontColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UW_NudityOption_C::GetPartialFontColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.GetPartialFontColor");

	UW_NudityOption_C_GetPartialFontColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_NudityOption.W_NudityOption_C.OnReturned_5FBBBBED4755B4328C73AC8C23885A4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PurchaseOccured                (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::OnReturned_5FBBBBED4755B4328C73AC8C23885A4B(bool PurchaseOccured)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.OnReturned_5FBBBBED4755B4328C73AC8C23885A4B");

	UW_NudityOption_C_OnReturned_5FBBBBED4755B4328C73AC8C23885A4B_Params params;
	params.PurchaseOccured = PurchaseOccured;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.OnFailed_48AA32DF49D864B24C71B2A6FE6448FC
// (BlueprintCallable, BlueprintEvent)

void UW_NudityOption_C::OnFailed_48AA32DF49D864B24C71B2A6FE6448FC()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.OnFailed_48AA32DF49D864B24C71B2A6FE6448FC");

	UW_NudityOption_C_OnFailed_48AA32DF49D864B24C71B2A6FE6448FC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC
// (BlueprintCallable, BlueprintEvent)

void UW_NudityOption_C::OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC");

	UW_NudityOption_C_OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.OnFailed_79A5D5454E3B89AED112ADA95FBDACE0
// (BlueprintCallable, BlueprintEvent)

void UW_NudityOption_C::OnFailed_79A5D5454E3B89AED112ADA95FBDACE0()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.OnFailed_79A5D5454E3B89AED112ADA95FBDACE0");

	UW_NudityOption_C_OnFailed_79A5D5454E3B89AED112ADA95FBDACE0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0
// (BlueprintCallable, BlueprintEvent)

void UW_NudityOption_C::OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0");

	UW_NudityOption_C_OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_NudityOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.Construct");

	UW_NudityOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.SetMaximumNudityText
// (BlueprintCallable, BlueprintEvent)

void UW_NudityOption_C::SetMaximumNudityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.SetMaximumNudityText");

	UW_NudityOption_C_SetMaximumNudityText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENudity>           Nudity                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::SetSelected(TEnumAsByte<ENudity> Nudity)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.SetSelected");

	UW_NudityOption_C_SetSelected_Params params;
	params.Nudity = Nudity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature");

	UW_NudityOption_C_BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature");

	UW_NudityOption_C_BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature");

	UW_NudityOption_C_BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.CheckCensored
// (BlueprintCallable, BlueprintEvent)

void UW_NudityOption_C::CheckCensored()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.CheckCensored");

	UW_NudityOption_C_CheckCensored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_NudityOption_C_BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_NudityOption_C_BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_NudityOption_C_BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.ExecuteUbergraph_W_NudityOption
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::ExecuteUbergraph_W_NudityOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.ExecuteUbergraph_W_NudityOption");

	UW_NudityOption_C_ExecuteUbergraph_W_NudityOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.SignalScrollToMe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::SignalScrollToMe__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.SignalScrollToMe__DelegateSignature");

	UW_NudityOption_C_SignalScrollToMe__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_NudityOption.W_NudityOption_C.SignalSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENudity>           Nudity                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_NudityOption_C::SignalSelectionChanged__DelegateSignature(TEnumAsByte<ENudity> Nudity)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NudityOption.W_NudityOption_C.SignalSelectionChanged__DelegateSignature");

	UW_NudityOption_C_SignalSelectionChanged__DelegateSignature_Params params;
	params.Nudity = Nudity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
