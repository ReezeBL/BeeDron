// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerListView_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ServerListView.W_ServerListView_C.CloseActiveSubDialog
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UW_ServerListView_C::CloseActiveSubDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerListView.W_ServerListView_C.CloseActiveSubDialog");

	UW_ServerListView_C_CloseActiveSubDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_ServerListView.W_ServerListView_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             entry                          (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerListView_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature(class URootWidget* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerListView.W_ServerListView_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature");

	UW_ServerListView_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerListView.W_ServerListView_C.ResetLastSelected
// (BlueprintCallable, BlueprintEvent)

void UW_ServerListView_C::ResetLastSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerListView.W_ServerListView_C.ResetLastSelected");

	UW_ServerListView_C_ResetLastSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerListView.W_ServerListView_C.ExecuteUbergraph_W_ServerListView
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerListView_C::ExecuteUbergraph_W_ServerListView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerListView.W_ServerListView_C.ExecuteUbergraph_W_ServerListView");

	UW_ServerListView_C_ExecuteUbergraph_W_ServerListView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerListView.W_ServerListView_C.SignalCloseActiveDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ServerListView_C::SignalCloseActiveDialog__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerListView.W_ServerListView_C.SignalCloseActiveDialog__DelegateSignature");

	UW_ServerListView_C_SignalCloseActiveDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerListView.W_ServerListView_C.ScrollToMe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URootWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerListView_C::ScrollToMe__DelegateSignature(class URootWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerListView.W_ServerListView_C.ScrollToMe__DelegateSignature");

	UW_ServerListView_C_ScrollToMe__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
