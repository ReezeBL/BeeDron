#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_MainMenuButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_MainMenuButton.W_MainMenuButton_C.Construct
struct UW_MainMenuButton_C_Construct_Params
{
};

// Function W_MainMenuButton.W_MainMenuButton_C.OnMouseEnter
struct UW_MainMenuButton_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_MainMenuButton.W_MainMenuButton_C.OnMouseLeave
struct UW_MainMenuButton_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_MainMenuButton.W_MainMenuButton_C.ExecuteUbergraph_W_MainMenuButton
struct UW_MainMenuButton_C_ExecuteUbergraph_W_MainMenuButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
