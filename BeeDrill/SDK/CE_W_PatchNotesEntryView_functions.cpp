// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_PatchNotesEntryView_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PatchNotesEntryView.W_PatchNotesEntryView_C.SetupUI
// (Event, Public, BlueprintEvent)

void UW_PatchNotesEntryView_C::SetupUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PatchNotesEntryView.W_PatchNotesEntryView_C.SetupUI");

	UW_PatchNotesEntryView_C_SetupUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PatchNotesEntryView.W_PatchNotesEntryView_C.ExecuteUbergraph_W_PatchNotesEntryView
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_PatchNotesEntryView_C::ExecuteUbergraph_W_PatchNotesEntryView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PatchNotesEntryView.W_PatchNotesEntryView_C.ExecuteUbergraph_W_PatchNotesEntryView");

	UW_PatchNotesEntryView_C_ExecuteUbergraph_W_PatchNotesEntryView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
