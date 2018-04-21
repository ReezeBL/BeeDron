#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_I_HostLocalWidgetInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C.SetMapName
struct UI_HostLocalWidgetInterface_C_SetMapName_Params
{
	struct FName                                       mapName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C.GetDefaultMapName
struct UI_HostLocalWidgetInterface_C_GetDefaultMapName_Params
{
	struct FName                                       DefaultMapName;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
