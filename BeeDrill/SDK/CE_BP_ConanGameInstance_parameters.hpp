#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ConanGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.GetErrorTypeText
struct UBP_ConanGameInstance_C_GetErrorTypeText_Params
{
	TEnumAsByte<ENetworkFailure>                       Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       errorText;                                                // (Parm, OutParm)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShouldBeDeadByCursedWallCheck
struct UBP_ConanGameInstance_C_ShouldBeDeadByCursedWallCheck_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.IsStreamingFinished
struct UBP_ConanGameInstance_C_IsStreamingFinished_Params
{
	bool                                               IsFinsihed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B
struct UBP_ConanGameInstance_C_OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B
struct UBP_ConanGameInstance_C_OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_74CE98424F59D42828F1AFB64AC06340
struct UBP_ConanGameInstance_C_OnFailure_74CE98424F59D42828F1AFB64AC06340_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_74CE98424F59D42828F1AFB64AC06340
struct UBP_ConanGameInstance_C_OnSuccess_74CE98424F59D42828F1AFB64AC06340_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092
struct UBP_ConanGameInstance_C_OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092_Params
{
	TEnumAsByte<EOnJoinSessionCompleteResultType>      Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092
struct UBP_ConanGameInstance_C_OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092_Params
{
	TEnumAsByte<EOnJoinSessionCompleteResultType>      Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_11FA6883421FF1071A63E38CE526AE3E
struct UBP_ConanGameInstance_C_OnFailure_11FA6883421FF1071A63E38CE526AE3E_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_11FA6883421FF1071A63E38CE526AE3E
struct UBP_ConanGameInstance_C_OnSuccess_11FA6883421FF1071A63E38CE526AE3E_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ReceiveInit
struct UBP_ConanGameInstance_C_ReceiveInit_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.WaitForLoadingToFInish
struct UBP_ConanGameInstance_C_WaitForLoadingToFInish_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.Print Level loads
struct UBP_ConanGameInstance_C_Print_Level_loads_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.GoToMainMenu
struct UBP_ConanGameInstance_C_GoToMainMenu_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleNetworkError
struct UBP_ConanGameInstance_C_HandleNetworkError_Params
{
	TEnumAsByte<ENetworkFailure>*                      FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsServer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFailureDetails>*                      FailureDetails;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     additionalInformation;                                    // (Parm, ZeroConstructor)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerGotoMainMenu
struct UBP_ConanGameInstance_C_ServerGotoMainMenu_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerNotifyClientsOnDisconnect
struct UBP_ConanGameInstance_C_ServerNotifyClientsOnDisconnect_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerQuitGame
struct UBP_ConanGameInstance_C_ServerQuitGame_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowErrorDialog
struct UBP_ConanGameInstance_C_ShowErrorDialog_Params
{
	struct FText                                       errorType;                                                // (Parm)
	struct FText                                       ErrorString;                                              // (Parm)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnClosingEvent
struct UBP_ConanGameInstance_C_OnClosingEvent_Params
{
	class UWindowRoot*                                 Window;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowDisconnectingMessage
struct UBP_ConanGameInstance_C_ShowDisconnectingMessage_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleTravelError
struct UBP_ConanGameInstance_C_HandleTravelError_Params
{
	TEnumAsByte<ETravelFailure>*                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnPostLoadMap
struct UBP_ConanGameInstance_C_OnPostLoadMap_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ClientGotoMainMenu
struct UBP_ConanGameInstance_C_ClientGotoMainMenu_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.BeginJoinSession
struct UBP_ConanGameInstance_C_BeginJoinSession_Params
{
	struct FBlueprintSessionResult                     JoiningSession;                                           // (Parm)
	class APlayerController*                           JoiningPlayerController;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowJoinSessionErrorIfAny
struct UBP_ConanGameInstance_C_ShowJoinSessionErrorIfAny_Params
{
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleLoginStatusChange
struct UBP_ConanGameInstance_C_HandleLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>*                         NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ExecuteUbergraph_BP_ConanGameInstance
struct UBP_ConanGameInstance_C_ExecuteUbergraph_BP_ConanGameInstance_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.SignalStreamingFinished__DelegateSignature
struct UBP_ConanGameInstance_C_SignalStreamingFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
