// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_FIFOMessageView_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FIFOMessageView.W_FIFOMessageView_C.SetMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UW_FIFOMessageView_C::SetMessage(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOMessageView.W_FIFOMessageView_C.SetMessage");

	UW_FIFOMessageView_C_SetMessage_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FIFOMessageView.W_FIFOMessageView_C.DisplayTimer
// (BlueprintCallable, BlueprintEvent)

void UW_FIFOMessageView_C::DisplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOMessageView.W_FIFOMessageView_C.DisplayTimer");

	UW_FIFOMessageView_C_DisplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FIFOMessageView.W_FIFOMessageView_C.ExecuteUbergraph_W_FIFOMessageView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_FIFOMessageView_C::ExecuteUbergraph_W_FIFOMessageView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOMessageView.W_FIFOMessageView_C.ExecuteUbergraph_W_FIFOMessageView");

	UW_FIFOMessageView_C_ExecuteUbergraph_W_FIFOMessageView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
