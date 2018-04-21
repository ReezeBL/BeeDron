#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_DropDownText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_DropDownText.W_DropDownText_C.SetText
struct UW_DropDownText_C_SetText_Params
{
	class FString                                      Label;                                                    // (Parm, ZeroConstructor)
};

// Function W_DropDownText.W_DropDownText_C.OnMouseEnter
struct UW_DropDownText_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_DropDownText.W_DropDownText_C.OnMouseLeave
struct UW_DropDownText_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_DropDownText.W_DropDownText_C.ExecuteUbergraph_W_DropDownText
struct UW_DropDownText_C_ExecuteUbergraph_W_DropDownText_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
