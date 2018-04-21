#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerSetting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_ServerSetting.W_ServerSetting_C.SetDescription
struct UW_ServerSetting_C_SetDescription_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function W_ServerSetting.W_ServerSetting_C.ExecuteUbergraph_W_ServerSetting
struct UW_ServerSetting_C_ExecuteUbergraph_W_ServerSetting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
