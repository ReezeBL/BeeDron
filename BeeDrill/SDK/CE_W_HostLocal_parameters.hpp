#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_HostLocal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_HostLocal.W_HostLocal_C.SetMapName
struct UW_HostLocal_C_SetMapName_Params
{
	struct FName                                       mapName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.GetDefaultMapName
struct UW_HostLocal_C_GetDefaultMapName_Params
{
	struct FName                                       DefaultMapName;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.Get_B_Purge_Visibility_1
struct UW_HostLocal_C_Get_B_Purge_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.SetupNewGame
struct UW_HostLocal_C_SetupNewGame_Params
{
	bool                                               CanStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.SaveServerSettings
struct UW_HostLocal_C_SaveServerSettings_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.SetupKeyNavigation
struct UW_HostLocal_C_SetupKeyNavigation_Params
{
};

// Function W_HostLocal.W_HostLocal_C.OnFailure_1F3327E34B76AF0D70B0DEA021BFC1EF
struct UW_HostLocal_C_OnFailure_1F3327E34B76AF0D70B0DEA021BFC1EF_Params
{
};

// Function W_HostLocal.W_HostLocal_C.OnSuccess_1F3327E34B76AF0D70B0DEA021BFC1EF
struct UW_HostLocal_C_OnSuccess_1F3327E34B76AF0D70B0DEA021BFC1EF_Params
{
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Back_2_K2Node_ComponentBoundEvent_289_SignalClicked__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Back_2_K2Node_ComponentBoundEvent_289_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.HandleError
struct UW_HostLocal_C_HandleError_Params
{
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_HostLocal.W_HostLocal_C.Continue
struct UW_HostLocal_C_Continue_Params
{
	bool                                               AsSession;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.CloseWindow
struct UW_HostLocal_C_CloseWindow_Params
{
};

// Function W_HostLocal.W_HostLocal_C.StartSession
struct UW_HostLocal_C_StartSession_Params
{
};

// Function W_HostLocal.W_HostLocal_C.SetAsChecked
struct UW_HostLocal_C_SetAsChecked_Params
{
	class URootWidget*                                 Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.Construct
struct UW_HostLocal_C_Construct_Params
{
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_124_SignalClicked__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Back_K2Node_ComponentBoundEvent_124_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.PlayOffline
struct UW_HostLocal_C_PlayOffline_Params
{
};

// Function W_HostLocal.W_HostLocal_C.NewGame
struct UW_HostLocal_C_NewGame_Params
{
};

// Function W_HostLocal.W_HostLocal_C.SetSwitcherIndex
struct UW_HostLocal_C_SetSwitcherIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_ResetDefault_K2Node_ComponentBoundEvent_1_SignalClicked__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_ResetDefault_K2Node_ComponentBoundEvent_1_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Custom_K2Node_ComponentBoundEvent_185_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Custom_K2Node_ComponentBoundEvent_185_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Peasant_K2Node_ComponentBoundEvent_357_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Peasant_K2Node_ComponentBoundEvent_357_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Soldier_K2Node_ComponentBoundEvent_523_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Soldier_K2Node_ComponentBoundEvent_523_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_565_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_565_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Custom_K2Node_ComponentBoundEvent_1728_SignalToggled__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Custom_K2Node_ComponentBoundEvent_1728_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.OnCustomSelected
struct UW_HostLocal_C_OnCustomSelected_Params
{
	class URootWidget*                                 Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.OnRestoreDefaultButtonPressed
struct UW_HostLocal_C_OnRestoreDefaultButtonPressed_Params
{
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_1033_SignalToggled__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_1033_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Soldier_K2Node_ComponentBoundEvent_1144_SignalToggled__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Soldier_K2Node_ComponentBoundEvent_1144_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Peasant_K2Node_ComponentBoundEvent_1196_SignalToggled__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Peasant_K2Node_ComponentBoundEvent_1196_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Host_K2Node_ComponentBoundEvent_107_SignalClicked__DelegateSignature
struct UW_HostLocal_C_BndEvt__B_Host_K2Node_ComponentBoundEvent_107_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_HostLocal.W_HostLocal_C.Smoketest_HostLocal
struct UW_HostLocal_C_Smoketest_HostLocal_Params
{
};

// Function W_HostLocal.W_HostLocal_C.StartNewGame
struct UW_HostLocal_C_StartNewGame_Params
{
};

// Function W_HostLocal.W_HostLocal_C.ExecuteUbergraph_W_HostLocal
struct UW_HostLocal_C_ExecuteUbergraph_W_HostLocal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
