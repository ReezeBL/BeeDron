#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_ConanGameInstanceInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.ShowJoinSessionErrorIfAny
struct UConanGameInstanceInterface_C_ShowJoinSessionErrorIfAny_Params
{
};

// Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.BeginJoinSession
struct UConanGameInstanceInterface_C_BeginJoinSession_Params
{
	struct FBlueprintSessionResult                     JoiningSession;                                           // (Parm)
	class APlayerController*                           JoiningPlayerController;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConanGameInstanceInterface.ConanGameInstanceInterface_C.ClientGotoMainMenu
struct UConanGameInstanceInterface_C_ClientGotoMainMenu_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
