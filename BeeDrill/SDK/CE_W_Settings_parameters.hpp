#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Settings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_Settings.W_Settings_C.CloseConfirmVideoDialog
struct UW_Settings_C_CloseConfirmVideoDialog_Params
{
	bool                                               DoApply;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.SlotESCPressedVideoConfirm
struct UW_Settings_C_SlotESCPressedVideoConfirm_Params
{
	bool                                               wasHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.CHANGELATER_HideDefaultInKeyBindings
struct UW_Settings_C_CHANGELATER_HideDefaultInKeyBindings_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.Construct
struct UW_Settings_C_Construct_Params
{
};

// Function W_Settings.W_Settings_C.UpdateCountDown
struct UW_Settings_C_UpdateCountDown_Params
{
};

// Function W_Settings.W_Settings_C.OnShowConfirmDialog
struct UW_Settings_C_OnShowConfirmDialog_Params
{
};

// Function W_Settings.W_Settings_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_138_SignalClicked__DelegateSignature
struct UW_Settings_C_BndEvt__B_Back_K2Node_ComponentBoundEvent_138_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_156_SignalClicked__DelegateSignature
struct UW_Settings_C_BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_156_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.BndEvt__B_ConfirmDialog_Revert_K2Node_ComponentBoundEvent_171_SignalClicked__DelegateSignature
struct UW_Settings_C_BndEvt__B_ConfirmDialog_Revert_K2Node_ComponentBoundEvent_171_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.BndEvt__B_Cross_K2Node_ComponentBoundEvent_296_SignalClicked__DelegateSignature
struct UW_Settings_C_BndEvt__B_Cross_K2Node_ComponentBoundEvent_296_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.Destruct
struct UW_Settings_C_Destruct_Params
{
};

// Function W_Settings.W_Settings_C.ExecuteUbergraph_W_Settings
struct UW_Settings_C_ExecuteUbergraph_W_Settings_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings.W_Settings_C.SlotESCPressed__DelegateSignature
struct UW_Settings_C_SlotESCPressed__DelegateSignature_Params
{
};

// Function W_Settings.W_Settings_C.OnClose__DelegateSignature
struct UW_Settings_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
