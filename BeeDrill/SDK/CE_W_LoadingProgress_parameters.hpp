#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_LoadingProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_LoadingProgress.W_LoadingProgress_C.GetPercent_1
struct UW_LoadingProgress_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_LoadingProgress.W_LoadingProgress_C.Construct
struct UW_LoadingProgress_C_Construct_Params
{
};

// Function W_LoadingProgress.W_LoadingProgress_C.ExecuteUbergraph_W_LoadingProgress
struct UW_LoadingProgress_C_ExecuteUbergraph_W_LoadingProgress_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
