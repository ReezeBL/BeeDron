// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_BlitzButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_BlitzButton.W_BlitzButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_BlitzButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.Construct");

	UW_BlitzButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.KeyNavOnSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          selected                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGUINavDirection>* Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// class URootWidget**            previousOrNextWidget           (Parm, ZeroConstructor, IsPlainOldData)

void UW_BlitzButton_C::KeyNavOnSelected(bool* selected, TEnumAsByte<EGUINavDirection>* Direction, class URootWidget** previousOrNextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.KeyNavOnSelected");

	UW_BlitzButton_C_KeyNavOnSelected_Params params;
	params.selected = selected;
	params.Direction = Direction;
	params.previousOrNextWidget = previousOrNextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.SignalOnMouseEnter
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_BlitzButton_C::SignalOnMouseEnter(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.SignalOnMouseEnter");

	UW_BlitzButton_C_SignalOnMouseEnter_Params params;
	params.Button = Button;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.MouseEnter
// (BlueprintCallable, BlueprintEvent)

void UW_BlitzButton_C::MouseEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.MouseEnter");

	UW_BlitzButton_C_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.MouseLeave
// (BlueprintCallable, BlueprintEvent)

void UW_BlitzButton_C::MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.MouseLeave");

	UW_BlitzButton_C_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.SignalOnMouseLeave
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_BlitzButton_C::SignalOnMouseLeave(class UFCButton* Button, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.SignalOnMouseLeave");

	UW_BlitzButton_C_SignalOnMouseLeave_Params params;
	params.Button = Button;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.ExecuteUbergraph_W_BlitzButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_BlitzButton_C::ExecuteUbergraph_W_BlitzButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.ExecuteUbergraph_W_BlitzButton");

	UW_BlitzButton_C_ExecuteUbergraph_W_BlitzButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_BlitzButton.W_BlitzButton_C.SignalDescription__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (Parm)

void UW_BlitzButton_C::SignalDescription__DelegateSignature(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BlitzButton.W_BlitzButton_C.SignalDescription__DelegateSignature");

	UW_BlitzButton_C_SignalDescription__DelegateSignature_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
