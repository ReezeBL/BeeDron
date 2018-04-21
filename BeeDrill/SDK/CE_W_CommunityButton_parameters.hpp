#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_CommunityButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_CommunityButton.W_CommunityButton_C.Construct
struct UW_CommunityButton_C_Construct_Params
{
};

// Function W_CommunityButton.W_CommunityButton_C.KeyNavOnSelected
struct UW_CommunityButton_C_KeyNavOnSelected_Params
{
	bool*                                              selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGUINavDirection>*                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class URootWidget**                                previousOrNextWidget;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CommunityButton.W_CommunityButton_C.SignalOnMouseEnter
struct UW_CommunityButton_C_SignalOnMouseEnter_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_CommunityButton.W_CommunityButton_C.MouseEnter
struct UW_CommunityButton_C_MouseEnter_Params
{
};

// Function W_CommunityButton.W_CommunityButton_C.MouseLeave
struct UW_CommunityButton_C_MouseLeave_Params
{
};

// Function W_CommunityButton.W_CommunityButton_C.SignalOnMouseLeave
struct UW_CommunityButton_C_SignalOnMouseLeave_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_CommunityButton.W_CommunityButton_C.SetSelected
struct UW_CommunityButton_C_SetSelected_Params
{
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CommunityButton.W_CommunityButton_C.ExecuteUbergraph_W_CommunityButton
struct UW_CommunityButton_C_ExecuteUbergraph_W_CommunityButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CommunityButton.W_CommunityButton_C.SignalDescription__DelegateSignature
struct UW_CommunityButton_C_SignalDescription__DelegateSignature_Params
{
	struct FText                                       Description;                                              // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
