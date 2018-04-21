// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_SubtitleEntryView_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SubtitleEntryView.W_SubtitleEntryView_C.SetText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UW_SubtitleEntryView_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubtitleEntryView.W_SubtitleEntryView_C.SetText");

	UW_SubtitleEntryView_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SubtitleEntryView.W_SubtitleEntryView_C.ExecuteUbergraph_W_SubtitleEntryView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_SubtitleEntryView_C::ExecuteUbergraph_W_SubtitleEntryView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubtitleEntryView.W_SubtitleEntryView_C.ExecuteUbergraph_W_SubtitleEntryView");

	UW_SubtitleEntryView_C_ExecuteUbergraph_W_SubtitleEntryView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
