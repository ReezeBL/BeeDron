#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Startup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Startup.Startup_C.ReceiveBeginPlay
struct AStartup_C_ReceiveBeginPlay_Params
{
};

// Function Startup.Startup_C.ExecuteUbergraph_Startup
struct AStartup_C_ExecuteUbergraph_Startup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
