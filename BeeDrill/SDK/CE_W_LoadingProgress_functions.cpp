// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_LoadingProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LoadingProgress.W_LoadingProgress_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UW_LoadingProgress_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LoadingProgress.W_LoadingProgress_C.GetPercent_1");

	UW_LoadingProgress_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_LoadingProgress.W_LoadingProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LoadingProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LoadingProgress.W_LoadingProgress_C.Construct");

	UW_LoadingProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_LoadingProgress.W_LoadingProgress_C.ExecuteUbergraph_W_LoadingProgress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_LoadingProgress_C::ExecuteUbergraph_W_LoadingProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LoadingProgress.W_LoadingProgress_C.ExecuteUbergraph_W_LoadingProgress");

	UW_LoadingProgress_C_ExecuteUbergraph_W_LoadingProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
