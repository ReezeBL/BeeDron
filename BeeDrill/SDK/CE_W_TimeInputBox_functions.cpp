// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_TimeInputBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TimeInputBox.W_TimeInputBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_TimeInputBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimeInputBox.W_TimeInputBox_C.Construct");

	UW_TimeInputBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TimeInputBox.W_TimeInputBox_C.BndEvt__TXT_Minutes_K2Node_ComponentBoundEvent_3_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_TimeInputBox_C::BndEvt__TXT_Minutes_K2Node_ComponentBoundEvent_3_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimeInputBox.W_TimeInputBox_C.BndEvt__TXT_Minutes_K2Node_ComponentBoundEvent_3_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_TimeInputBox_C_BndEvt__TXT_Minutes_K2Node_ComponentBoundEvent_3_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TimeInputBox.W_TimeInputBox_C.BndEvt__TXT_Hours_K2Node_ComponentBoundEvent_17_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_TimeInputBox_C::BndEvt__TXT_Hours_K2Node_ComponentBoundEvent_17_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimeInputBox.W_TimeInputBox_C.BndEvt__TXT_Hours_K2Node_ComponentBoundEvent_17_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_TimeInputBox_C_BndEvt__TXT_Hours_K2Node_ComponentBoundEvent_17_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TimeInputBox.W_TimeInputBox_C.ExecuteUbergraph_W_TimeInputBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_TimeInputBox_C::ExecuteUbergraph_W_TimeInputBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimeInputBox.W_TimeInputBox_C.ExecuteUbergraph_W_TimeInputBox");

	UW_TimeInputBox_C_ExecuteUbergraph_W_TimeInputBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TimeInputBox.W_TimeInputBox_C.SignalTimeInputSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_TimeInputBox_C::SignalTimeInputSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimeInputBox.W_TimeInputBox_C.SignalTimeInputSelected__DelegateSignature");

	UW_TimeInputBox_C_SignalTimeInputSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
