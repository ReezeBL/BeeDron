// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_SettingsGamepadPreset_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SettingsGamepadPreset.W_SettingsGamepadPreset_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SettingsGamepadPreset_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsGamepadPreset.W_SettingsGamepadPreset_C.Construct");

	UW_SettingsGamepadPreset_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SettingsGamepadPreset.W_SettingsGamepadPreset_C.ClearAllTextFields
// (Event, Protected, BlueprintEvent)

void UW_SettingsGamepadPreset_C::ClearAllTextFields()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsGamepadPreset.W_SettingsGamepadPreset_C.ClearAllTextFields");

	UW_SettingsGamepadPreset_C_ClearAllTextFields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_SettingsGamepadPreset.W_SettingsGamepadPreset_C.ExecuteUbergraph_W_SettingsGamepadPreset
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_SettingsGamepadPreset_C::ExecuteUbergraph_W_SettingsGamepadPreset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsGamepadPreset.W_SettingsGamepadPreset_C.ExecuteUbergraph_W_SettingsGamepadPreset");

	UW_SettingsGamepadPreset_C_ExecuteUbergraph_W_SettingsGamepadPreset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
