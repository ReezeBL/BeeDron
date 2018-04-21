// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_MainMenuButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MainMenuButton.W_MainMenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MainMenuButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainMenuButton.W_MainMenuButton_C.Construct");

	UW_MainMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_MainMenuButton.W_MainMenuButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_MainMenuButton_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainMenuButton.W_MainMenuButton_C.OnMouseEnter");

	UW_MainMenuButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_MainMenuButton.W_MainMenuButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_MainMenuButton_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainMenuButton.W_MainMenuButton_C.OnMouseLeave");

	UW_MainMenuButton_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_MainMenuButton.W_MainMenuButton_C.ExecuteUbergraph_W_MainMenuButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_MainMenuButton_C::ExecuteUbergraph_W_MainMenuButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainMenuButton.W_MainMenuButton_C.ExecuteUbergraph_W_MainMenuButton");

	UW_MainMenuButton_C_ExecuteUbergraph_W_MainMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
