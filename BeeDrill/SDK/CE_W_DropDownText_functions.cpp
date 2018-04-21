// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_DropDownText_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DropDownText.W_DropDownText_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Label                          (Parm, ZeroConstructor)

void UW_DropDownText_C::SetText(const class FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DropDownText.W_DropDownText_C.SetText");

	UW_DropDownText_C_SetText_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_DropDownText.W_DropDownText_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_DropDownText_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DropDownText.W_DropDownText_C.OnMouseEnter");

	UW_DropDownText_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_DropDownText.W_DropDownText_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_DropDownText_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DropDownText.W_DropDownText_C.OnMouseLeave");

	UW_DropDownText_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_DropDownText.W_DropDownText_C.ExecuteUbergraph_W_DropDownText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_DropDownText_C::ExecuteUbergraph_W_DropDownText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DropDownText.W_DropDownText_C.ExecuteUbergraph_W_DropDownText");

	UW_DropDownText_C_ExecuteUbergraph_W_DropDownText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
