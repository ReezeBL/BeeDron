// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_PvPSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PvPSelection.W_PvPSelection_C.SetupKeyNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URootWidget*             Skip_Button                    (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::SetupKeyNavigation(class URootWidget* Skip_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.SetupKeyNavigation");

	UW_PvPSelection_C_SetupKeyNavigation_Params params;
	params.Skip_Button = Skip_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPButton_K2Node_ComponentBoundEvent_335_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::BndEvt__PvPButton_K2Node_ComponentBoundEvent_335_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPButton_K2Node_ComponentBoundEvent_335_SignalClicked__DelegateSignature");

	UW_PvPSelection_C_BndEvt__PvPButton_K2Node_ComponentBoundEvent_335_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvEButton_K2Node_ComponentBoundEvent_352_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::BndEvt__PvEButton_K2Node_ComponentBoundEvent_352_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvEButton_K2Node_ComponentBoundEvent_352_SignalClicked__DelegateSignature");

	UW_PvPSelection_C_BndEvt__PvEButton_K2Node_ComponentBoundEvent_352_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.StartState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URootWidget*             Skip_Button                    (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::StartState(class URootWidget* Skip_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.StartState");

	UW_PvPSelection_C_StartState_Params params;
	params.Skip_Button = Skip_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.EndState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EServerType>       mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::EndState(TEnumAsByte<EServerType> mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.EndState");

	UW_PvPSelection_C_EndState_Params params;
	params.mode = mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPBlizButton_K2Node_ComponentBoundEvent_621_SignalDescription__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Description                    (Parm)

void UW_PvPSelection_C::BndEvt__PvPBlizButton_K2Node_ComponentBoundEvent_621_SignalDescription__DelegateSignature(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPBlizButton_K2Node_ComponentBoundEvent_621_SignalDescription__DelegateSignature");

	UW_PvPSelection_C_BndEvt__PvPBlizButton_K2Node_ComponentBoundEvent_621_SignalDescription__DelegateSignature_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvEButton_K2Node_ComponentBoundEvent_644_SignalDescription__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Description                    (Parm)

void UW_PvPSelection_C::BndEvt__PvEButton_K2Node_ComponentBoundEvent_644_SignalDescription__DelegateSignature(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvEButton_K2Node_ComponentBoundEvent_644_SignalDescription__DelegateSignature");

	UW_PvPSelection_C_BndEvt__PvEButton_K2Node_ComponentBoundEvent_644_SignalDescription__DelegateSignature_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPButton_K2Node_ComponentBoundEvent_668_SignalDescription__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Description                    (Parm)

void UW_PvPSelection_C::BndEvt__PvPButton_K2Node_ComponentBoundEvent_668_SignalDescription__DelegateSignature(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPButton_K2Node_ComponentBoundEvent_668_SignalDescription__DelegateSignature");

	UW_PvPSelection_C_BndEvt__PvPButton_K2Node_ComponentBoundEvent_668_SignalDescription__DelegateSignature_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.ExecuteUbergraph_W_PvPSelection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::ExecuteUbergraph_W_PvPSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.ExecuteUbergraph_W_PvPSelection");

	UW_PvPSelection_C_ExecuteUbergraph_W_PvPSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PvPSelection.W_PvPSelection_C.CombatModeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EServerType>       mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UW_PvPSelection_C::CombatModeSelected__DelegateSignature(TEnumAsByte<EServerType> mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PvPSelection.W_PvPSelection_C.CombatModeSelected__DelegateSignature");

	UW_PvPSelection_C_CombatModeSelected__DelegateSignature_Params params;
	params.mode = mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
