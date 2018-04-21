#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_BlitzButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_BlitzButton.W_BlitzButton_C.Construct
struct UW_BlitzButton_C_Construct_Params
{
};

// Function W_BlitzButton.W_BlitzButton_C.KeyNavOnSelected
struct UW_BlitzButton_C_KeyNavOnSelected_Params
{
	bool*                                              selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGUINavDirection>*                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class URootWidget**                                previousOrNextWidget;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_BlitzButton.W_BlitzButton_C.SignalOnMouseEnter
struct UW_BlitzButton_C_SignalOnMouseEnter_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_BlitzButton.W_BlitzButton_C.MouseEnter
struct UW_BlitzButton_C_MouseEnter_Params
{
};

// Function W_BlitzButton.W_BlitzButton_C.MouseLeave
struct UW_BlitzButton_C_MouseLeave_Params
{
};

// Function W_BlitzButton.W_BlitzButton_C.SignalOnMouseLeave
struct UW_BlitzButton_C_SignalOnMouseLeave_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_BlitzButton.W_BlitzButton_C.ExecuteUbergraph_W_BlitzButton
struct UW_BlitzButton_C_ExecuteUbergraph_W_BlitzButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_BlitzButton.W_BlitzButton_C.SignalDescription__DelegateSignature
struct UW_BlitzButton_C_SignalDescription__DelegateSignature_Params
{
	struct FText                                       Description;                                              // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
