// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ServerSettings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerActiveHungerMultiplier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ServerSettings_C::GetPlayerActiveHungerMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerActiveHungerMultiplier");

	ABP_ServerSettings_C_GetPlayerActiveHungerMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerActiveThirstMultiplier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ServerSettings_C::GetPlayerActiveThirstMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerActiveThirstMultiplier");

	ABP_ServerSettings_C_GetPlayerActiveThirstMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerIdleThirstMultiplier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ServerSettings_C::GetPlayerIdleThirstMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerIdleThirstMultiplier");

	ABP_ServerSettings_C_GetPlayerIdleThirstMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerIdleHungerMultiplier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ServerSettings_C::GetPlayerIdleHungerMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerIdleHungerMultiplier");

	ABP_ServerSettings_C_GetPlayerIdleHungerMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerXPRateMultiplier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ServerSettings_C::GetPlayerXPRateMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerXPRateMultiplier");

	ABP_ServerSettings_C_GetPlayerXPRateMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.SetSoldierSettings
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ServerSettings_C::SetSoldierSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.SetSoldierSettings");

	ABP_ServerSettings_C_SetSoldierSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.SetPeasantSettings
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ServerSettings_C::SetPeasantSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.SetPeasantSettings");

	ABP_ServerSettings_C_SetPeasantSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.SetBarbarianSettings
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ServerSettings_C::SetBarbarianSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.SetBarbarianSettings");

	ABP_ServerSettings_C_SetBarbarianSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.GetLatestBlueprintConfigVersion
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_ServerSettings_C::GetLatestBlueprintConfigVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.GetLatestBlueprintConfigVersion");

	ABP_ServerSettings_C_GetLatestBlueprintConfigVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerSettings.BP_ServerSettings_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ServerSettings_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.UserConstructionScript");

	ABP_ServerSettings_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerSettings.BP_ServerSettings_C.UpdateBlueprintConfig
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           OldVersion                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewVersion                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ServerSettings_C::UpdateBlueprintConfig(int* OldVersion, int* NewVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.UpdateBlueprintConfig");

	ABP_ServerSettings_C_UpdateBlueprintConfig_Params params;
	params.OldVersion = OldVersion;
	params.NewVersion = NewVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerSettings.BP_ServerSettings_C.ExecuteUbergraph_BP_ServerSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ServerSettings_C::ExecuteUbergraph_BP_ServerSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSettings.BP_ServerSettings_C.ExecuteUbergraph_BP_ServerSettings");

	ABP_ServerSettings_C_ExecuteUbergraph_BP_ServerSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
