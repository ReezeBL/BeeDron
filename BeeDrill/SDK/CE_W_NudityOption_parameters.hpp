#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_NudityOption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_NudityOption.W_NudityOption_C.HasCensoredDLC
struct UW_NudityOption_C_HasCensoredDLC_Params
{
	bool                                               bHasDlc;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.GetNoFontColor
struct UW_NudityOption_C_GetNoFontColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_NudityOption.W_NudityOption_C.GetFullFontColor
struct UW_NudityOption_C_GetFullFontColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_NudityOption.W_NudityOption_C.GetPartialFontColor
struct UW_NudityOption_C_GetPartialFontColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_NudityOption.W_NudityOption_C.OnReturned_5FBBBBED4755B4328C73AC8C23885A4B
struct UW_NudityOption_C_OnReturned_5FBBBBED4755B4328C73AC8C23885A4B_Params
{
	bool                                               PurchaseOccured;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.OnFailed_48AA32DF49D864B24C71B2A6FE6448FC
struct UW_NudityOption_C_OnFailed_48AA32DF49D864B24C71B2A6FE6448FC_Params
{
};

// Function W_NudityOption.W_NudityOption_C.OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC
struct UW_NudityOption_C_OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC_Params
{
};

// Function W_NudityOption.W_NudityOption_C.OnFailed_79A5D5454E3B89AED112ADA95FBDACE0
struct UW_NudityOption_C_OnFailed_79A5D5454E3B89AED112ADA95FBDACE0_Params
{
};

// Function W_NudityOption.W_NudityOption_C.OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0
struct UW_NudityOption_C_OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0_Params
{
};

// Function W_NudityOption.W_NudityOption_C.Construct
struct UW_NudityOption_C_Construct_Params
{
};

// Function W_NudityOption.W_NudityOption_C.SetMaximumNudityText
struct UW_NudityOption_C_SetMaximumNudityText_Params
{
};

// Function W_NudityOption.W_NudityOption_C.SetSelected
struct UW_NudityOption_C_SetSelected_Params
{
	TEnumAsByte<ENudity>                               Nudity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature
struct UW_NudityOption_C_BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature
struct UW_NudityOption_C_BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature
struct UW_NudityOption_C_BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.CheckCensored
struct UW_NudityOption_C_CheckCensored_Params
{
};

// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_NudityOption_C_BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_NudityOption_C_BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_NudityOption_C_BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.ExecuteUbergraph_W_NudityOption
struct UW_NudityOption_C_ExecuteUbergraph_W_NudityOption_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.SignalScrollToMe__DelegateSignature
struct UW_NudityOption_C_SignalScrollToMe__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_NudityOption.W_NudityOption_C.SignalSelectionChanged__DelegateSignature
struct UW_NudityOption_C_SignalSelectionChanged__DelegateSignature_Params
{
	TEnumAsByte<ENudity>                               Nudity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
