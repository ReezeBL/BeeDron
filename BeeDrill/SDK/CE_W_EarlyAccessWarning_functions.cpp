// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_EarlyAccessWarning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UW_EarlyAccessWarning_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.OnMouseButtonDown");

	UW_EarlyAccessWarning_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.KeyNavOnInvokeBP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Pressed                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UW_EarlyAccessWarning_C::KeyNavOnInvokeBP(bool* Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.KeyNavOnInvokeBP");

	UW_EarlyAccessWarning_C_KeyNavOnInvokeBP_Params params;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.Skip
// (BlueprintCallable, BlueprintEvent)

void UW_EarlyAccessWarning_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.Skip");

	UW_EarlyAccessWarning_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_EarlyAccessWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.Construct");

	UW_EarlyAccessWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ExecuteUbergraph_W_EarlyAccessWarning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_EarlyAccessWarning_C::ExecuteUbergraph_W_EarlyAccessWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ExecuteUbergraph_W_EarlyAccessWarning");

	UW_EarlyAccessWarning_C_ExecuteUbergraph_W_EarlyAccessWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ShowGamma__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_EarlyAccessWarning_C::ShowGamma__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ShowGamma__DelegateSignature");

	UW_EarlyAccessWarning_C_ShowGamma__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ShowMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_EarlyAccessWarning_C::ShowMainMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ShowMainMenu__DelegateSignature");

	UW_EarlyAccessWarning_C_ShowMainMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
