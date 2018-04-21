// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerSetting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ServerSetting.W_ServerSetting_C.SetDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (Parm)

void UW_ServerSetting_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSetting.W_ServerSetting_C.SetDescription");

	UW_ServerSetting_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerSetting.W_ServerSetting_C.ExecuteUbergraph_W_ServerSetting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerSetting_C::ExecuteUbergraph_W_ServerSetting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerSetting.W_ServerSetting_C.ExecuteUbergraph_W_ServerSetting");

	UW_ServerSetting_C_ExecuteUbergraph_W_ServerSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
