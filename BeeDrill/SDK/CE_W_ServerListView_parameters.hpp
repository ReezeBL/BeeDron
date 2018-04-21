#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerListView_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_ServerListView.W_ServerListView_C.CloseActiveSubDialog
struct UW_ServerListView_C_CloseActiveSubDialog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_ServerListView.W_ServerListView_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature
struct UW_ServerListView_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature_Params
{
	class URootWidget*                                 entry;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerListView.W_ServerListView_C.ResetLastSelected
struct UW_ServerListView_C_ResetLastSelected_Params
{
};

// Function W_ServerListView.W_ServerListView_C.ExecuteUbergraph_W_ServerListView
struct UW_ServerListView_C_ExecuteUbergraph_W_ServerListView_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerListView.W_ServerListView_C.SignalCloseActiveDialog__DelegateSignature
struct UW_ServerListView_C_SignalCloseActiveDialog__DelegateSignature_Params
{
};

// Function W_ServerListView.W_ServerListView_C.ScrollToMe__DelegateSignature
struct UW_ServerListView_C_ScrollToMe__DelegateSignature_Params
{
	class URootWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
