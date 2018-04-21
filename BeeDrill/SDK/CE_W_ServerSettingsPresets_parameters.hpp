#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerSettingsPresets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.HasCensoredDLC
struct UW_ServerSettingsPresets_C_HasCensoredDLC_Params
{
	bool                                               bHasDlc;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetNoFontColor
struct UW_ServerSettingsPresets_C_GetNoFontColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetFullFontColor
struct UW_ServerSettingsPresets_C_GetFullFontColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.GetPartialFontColor
struct UW_ServerSettingsPresets_C_GetPartialFontColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.Construct
struct UW_ServerSettingsPresets_C_Construct_Params
{
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature
struct UW_ServerSettingsPresets_C_BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature
struct UW_ServerSettingsPresets_C_BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature
struct UW_ServerSettingsPresets_C_BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnBarAccepted
struct UW_ServerSettingsPresets_C_OnBarAccepted_Params
{
	EMessageBoxDialogResult                            Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_ServerSettingsPresets_C_BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_ServerSettingsPresets_C_BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_ServerSettingsPresets_C_BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnDecAccepted
struct UW_ServerSettingsPresets_C_OnDecAccepted_Params
{
	EMessageBoxDialogResult                            Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.OnCivAccepted
struct UW_ServerSettingsPresets_C_OnCivAccepted_Params
{
	EMessageBoxDialogResult                            Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.ExecuteUbergraph_W_ServerSettingsPresets
struct UW_ServerSettingsPresets_C_ExecuteUbergraph_W_ServerSettingsPresets_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.ScrollIntoView__DelegateSignature
struct UW_ServerSettingsPresets_C_ScrollIntoView__DelegateSignature_Params
{
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyBarbaric__DelegateSignature
struct UW_ServerSettingsPresets_C_SignalSetDifficultyBarbaric__DelegateSignature_Params
{
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyDecadent__DelegateSignature
struct UW_ServerSettingsPresets_C_SignalSetDifficultyDecadent__DelegateSignature_Params
{
};

// Function W_ServerSettingsPresets.W_ServerSettingsPresets_C.SignalSetDifficultyCivilized__DelegateSignature
struct UW_ServerSettingsPresets_C_SignalSetDifficultyCivilized__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
