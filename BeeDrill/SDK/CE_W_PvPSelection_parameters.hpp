#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_PvPSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_PvPSelection.W_PvPSelection_C.SetupKeyNavigation
struct UW_PvPSelection_C_SetupKeyNavigation_Params
{
	class URootWidget*                                 Skip_Button;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPButton_K2Node_ComponentBoundEvent_335_SignalClicked__DelegateSignature
struct UW_PvPSelection_C_BndEvt__PvPButton_K2Node_ComponentBoundEvent_335_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvEButton_K2Node_ComponentBoundEvent_352_SignalClicked__DelegateSignature
struct UW_PvPSelection_C_BndEvt__PvEButton_K2Node_ComponentBoundEvent_352_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PvPSelection.W_PvPSelection_C.StartState
struct UW_PvPSelection_C_StartState_Params
{
	class URootWidget*                                 Skip_Button;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PvPSelection.W_PvPSelection_C.EndState
struct UW_PvPSelection_C_EndState_Params
{
	TEnumAsByte<EServerType>                           mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPBlizButton_K2Node_ComponentBoundEvent_621_SignalDescription__DelegateSignature
struct UW_PvPSelection_C_BndEvt__PvPBlizButton_K2Node_ComponentBoundEvent_621_SignalDescription__DelegateSignature_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvEButton_K2Node_ComponentBoundEvent_644_SignalDescription__DelegateSignature
struct UW_PvPSelection_C_BndEvt__PvEButton_K2Node_ComponentBoundEvent_644_SignalDescription__DelegateSignature_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function W_PvPSelection.W_PvPSelection_C.BndEvt__PvPButton_K2Node_ComponentBoundEvent_668_SignalDescription__DelegateSignature
struct UW_PvPSelection_C_BndEvt__PvPButton_K2Node_ComponentBoundEvent_668_SignalDescription__DelegateSignature_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function W_PvPSelection.W_PvPSelection_C.ExecuteUbergraph_W_PvPSelection
struct UW_PvPSelection_C_ExecuteUbergraph_W_PvPSelection_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PvPSelection.W_PvPSelection_C.CombatModeSelected__DelegateSignature
struct UW_PvPSelection_C_CombatModeSelected__DelegateSignature_Params
{
	TEnumAsByte<EServerType>                           mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
