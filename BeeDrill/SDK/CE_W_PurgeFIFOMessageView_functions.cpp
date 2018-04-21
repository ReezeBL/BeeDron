// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_PurgeFIFOMessageView_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.OnAnimationFinishedEvent
// (BlueprintCallable, BlueprintEvent)

void UW_PurgeFIFOMessageView_C::OnAnimationFinishedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.OnAnimationFinishedEvent");

	UW_PurgeFIFOMessageView_C_OnAnimationFinishedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.SetHeaderAndMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)
// struct FText                   Header                         (Parm)

void UW_PurgeFIFOMessageView_C::SetHeaderAndMessage(const struct FText& Text, const struct FText& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.SetHeaderAndMessage");

	UW_PurgeFIFOMessageView_C_SetHeaderAndMessage_Params params;
	params.Text = Text;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.ExecuteUbergraph_W_PurgeFIFOMessageView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_PurgeFIFOMessageView_C::ExecuteUbergraph_W_PurgeFIFOMessageView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.ExecuteUbergraph_W_PurgeFIFOMessageView");

	UW_PurgeFIFOMessageView_C_ExecuteUbergraph_W_PurgeFIFOMessageView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
