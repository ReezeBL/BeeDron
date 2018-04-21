#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Settings_Gameplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.GetAllowFirstPersonCameraVisibility
struct UW_Settings_Gameplay_C_GetAllowFirstPersonCameraVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__NudityOption_K2Node_ComponentBoundEvent_98_SignalSelectionChanged__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__NudityOption_K2Node_ComponentBoundEvent_98_SignalSelectionChanged__DelegateSignature_Params
{
	TEnumAsByte<ENudity>                               Nudity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.Construct
struct UW_Settings_Gameplay_C_Construct_Params
{
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_FloatingNames_K2Node_ComponentBoundEvent_71_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_FloatingNames_K2Node_ComponentBoundEvent_71_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ToggleDodge_K2Node_ComponentBoundEvent_42_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_ToggleDodge_K2Node_ComponentBoundEvent_42_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CBS_ChatVisibility_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CBS_ChatVisibility_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ToggleShowHUDDot_K2Node_ComponentBoundEvent_18_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_ToggleShowHUDDot_K2Node_ComponentBoundEvent_18_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_FixedMovement_K2Node_ComponentBoundEvent_1397_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_FixedMovement_K2Node_ComponentBoundEvent_1397_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowJourneySteps_K2Node_ComponentBoundEvent_229_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_ShowJourneySteps_K2Node_ComponentBoundEvent_229_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowBuldingHelp_K2Node_ComponentBoundEvent_262_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_ShowBuldingHelp_K2Node_ComponentBoundEvent_262_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CBS_Language_K2Node_ComponentBoundEvent_275_OnSelectionChangedEvent__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CBS_Language_K2Node_ComponentBoundEvent_275_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_EnableAutoFacingOnAttack_K2Node_ComponentBoundEvent_33_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_EnableAutoFacingOnAttack_K2Node_ComponentBoundEvent_33_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.BndEvt__CB_ShowWeaponTrails_K2Node_ComponentBoundEvent_59_SignalToggled__DelegateSignature
struct UW_Settings_Gameplay_C_BndEvt__CB_ShowWeaponTrails_K2Node_ComponentBoundEvent_59_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.EventOnSettingsChanged
struct UW_Settings_Gameplay_C_EventOnSettingsChanged_Params
{
};

// Function W_Settings_Gameplay.W_Settings_Gameplay_C.ExecuteUbergraph_W_Settings_Gameplay
struct UW_Settings_Gameplay_C_ExecuteUbergraph_W_Settings_Gameplay_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
