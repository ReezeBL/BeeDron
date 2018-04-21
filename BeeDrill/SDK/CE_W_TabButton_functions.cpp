// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_TabButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TabButton.W_TabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_TabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TabButton.W_TabButton_C.Construct");

	UW_TabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TabButton.W_TabButton_C.ExecuteUbergraph_W_TabButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_TabButton_C::ExecuteUbergraph_W_TabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TabButton.W_TabButton_C.ExecuteUbergraph_W_TabButton");

	UW_TabButton_C_ExecuteUbergraph_W_TabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
