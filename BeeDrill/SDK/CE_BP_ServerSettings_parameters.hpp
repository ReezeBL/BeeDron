#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ServerSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerActiveHungerMultiplier
struct ABP_ServerSettings_C_GetPlayerActiveHungerMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerActiveThirstMultiplier
struct ABP_ServerSettings_C_GetPlayerActiveThirstMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerIdleThirstMultiplier
struct ABP_ServerSettings_C_GetPlayerIdleThirstMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerIdleHungerMultiplier
struct ABP_ServerSettings_C_GetPlayerIdleHungerMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.GetPlayerXPRateMultiplier
struct ABP_ServerSettings_C_GetPlayerXPRateMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.SetSoldierSettings
struct ABP_ServerSettings_C_SetSoldierSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.SetPeasantSettings
struct ABP_ServerSettings_C_SetPeasantSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.SetBarbarianSettings
struct ABP_ServerSettings_C_SetBarbarianSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.GetLatestBlueprintConfigVersion
struct ABP_ServerSettings_C_GetLatestBlueprintConfigVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.UserConstructionScript
struct ABP_ServerSettings_C_UserConstructionScript_Params
{
};

// Function BP_ServerSettings.BP_ServerSettings_C.UpdateBlueprintConfig
struct ABP_ServerSettings_C_UpdateBlueprintConfig_Params
{
	int*                                               OldVersion;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewVersion;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerSettings.BP_ServerSettings_C.ExecuteUbergraph_BP_ServerSettings
struct ABP_ServerSettings_C_ExecuteUbergraph_BP_ServerSettings_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
