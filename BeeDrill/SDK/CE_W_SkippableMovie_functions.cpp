// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_SkippableMovie_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SkippableMovie.W_SkippableMovie_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UW_SkippableMovie_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SkippableMovie.W_SkippableMovie_C.OnMouseButtonDown");

	UW_SkippableMovie_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_SkippableMovie.W_SkippableMovie_C.FadeOutMovie
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UW_SkippableMovie_C::FadeOutMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SkippableMovie.W_SkippableMovie_C.FadeOutMovie");

	UW_SkippableMovie_C_FadeOutMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SkippableMovie.W_SkippableMovie_C.ExecuteUbergraph_W_SkippableMovie
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_SkippableMovie_C::ExecuteUbergraph_W_SkippableMovie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SkippableMovie.W_SkippableMovie_C.ExecuteUbergraph_W_SkippableMovie");

	UW_SkippableMovie_C_ExecuteUbergraph_W_SkippableMovie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
