// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ConanGameInstance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConanGameInstance.BP_ConanGameInstance_C.GetErrorTypeText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>   Selection                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   errorText                      (Parm, OutParm)

void UBP_ConanGameInstance_C::GetErrorTypeText(TEnumAsByte<ENetworkFailure> Selection, struct FText* errorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.GetErrorTypeText");

	UBP_ConanGameInstance_C_GetErrorTypeText_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (errorText != nullptr)
		*errorText = params.errorText;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShouldBeDeadByCursedWallCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ShouldBeDeadByCursedWallCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShouldBeDeadByCursedWallCheck");

	UBP_ConanGameInstance_C_ShouldBeDeadByCursedWallCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.IsStreamingFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFinsihed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::IsStreamingFinished(bool* IsFinsihed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.IsStreamingFinished");

	UBP_ConanGameInstance_C_IsStreamingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinsihed != nullptr)
		*IsFinsihed = params.IsFinsihed;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B");

	UBP_ConanGameInstance_C_OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B");

	UBP_ConanGameInstance_C_OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_74CE98424F59D42828F1AFB64AC06340
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnFailure_74CE98424F59D42828F1AFB64AC06340()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_74CE98424F59D42828F1AFB64AC06340");

	UBP_ConanGameInstance_C_OnFailure_74CE98424F59D42828F1AFB64AC06340_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_74CE98424F59D42828F1AFB64AC06340
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnSuccess_74CE98424F59D42828F1AFB64AC06340()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_74CE98424F59D42828F1AFB64AC06340");

	UBP_ConanGameInstance_C_OnSuccess_74CE98424F59D42828F1AFB64AC06340_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOnJoinSessionCompleteResultType> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092(TEnumAsByte<EOnJoinSessionCompleteResultType> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092");

	UBP_ConanGameInstance_C_OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOnJoinSessionCompleteResultType> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092(TEnumAsByte<EOnJoinSessionCompleteResultType> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092");

	UBP_ConanGameInstance_C_OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_11FA6883421FF1071A63E38CE526AE3E
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnFailure_11FA6883421FF1071A63E38CE526AE3E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnFailure_11FA6883421FF1071A63E38CE526AE3E");

	UBP_ConanGameInstance_C_OnFailure_11FA6883421FF1071A63E38CE526AE3E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_11FA6883421FF1071A63E38CE526AE3E
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnSuccess_11FA6883421FF1071A63E38CE526AE3E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnSuccess_11FA6883421FF1071A63E38CE526AE3E");

	UBP_ConanGameInstance_C_OnSuccess_11FA6883421FF1071A63E38CE526AE3E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_ConanGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ReceiveInit");

	UBP_ConanGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.WaitForLoadingToFInish
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::WaitForLoadingToFInish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.WaitForLoadingToFInish");

	UBP_ConanGameInstance_C_WaitForLoadingToFInish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.Print Level loads
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::Print_Level_loads()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.Print Level loads");

	UBP_ConanGameInstance_C_Print_Level_loads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.GoToMainMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::GoToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.GoToMainMenu");

	UBP_ConanGameInstance_C_GoToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>*  FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsServer                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFailureDetails>*  FailureDetails                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 additionalInformation          (Parm, ZeroConstructor)

void UBP_ConanGameInstance_C::HandleNetworkError(TEnumAsByte<ENetworkFailure>* FailureType, bool* bIsServer, TEnumAsByte<EFailureDetails>* FailureDetails, class FString* additionalInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleNetworkError");

	UBP_ConanGameInstance_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;
	params.FailureDetails = FailureDetails;
	params.additionalInformation = additionalInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerGotoMainMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ServerGotoMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerGotoMainMenu");

	UBP_ConanGameInstance_C_ServerGotoMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerNotifyClientsOnDisconnect
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ServerNotifyClientsOnDisconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerNotifyClientsOnDisconnect");

	UBP_ConanGameInstance_C_ServerNotifyClientsOnDisconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerQuitGame
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ServerQuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ServerQuitGame");

	UBP_ConanGameInstance_C_ServerQuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowErrorDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   errorType                      (Parm)
// struct FText                   ErrorString                    (Parm)

void UBP_ConanGameInstance_C::ShowErrorDialog(const struct FText& errorType, const struct FText& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowErrorDialog");

	UBP_ConanGameInstance_C_ShowErrorDialog_Params params;
	params.errorType = errorType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnClosingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowRoot*             Window                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::OnClosingEvent(class UWindowRoot* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnClosingEvent");

	UBP_ConanGameInstance_C_OnClosingEvent_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowDisconnectingMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ShowDisconnectingMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowDisconnectingMessage");

	UBP_ConanGameInstance_C_ShowDisconnectingMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETravelFailure>*   FailureType                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::HandleTravelError(TEnumAsByte<ETravelFailure>* FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleTravelError");

	UBP_ConanGameInstance_C_HandleTravelError_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnPostLoadMap
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::OnPostLoadMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.OnPostLoadMap");

	UBP_ConanGameInstance_C_OnPostLoadMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ClientGotoMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ClientGotoMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ClientGotoMainMenu");

	UBP_ConanGameInstance_C_ClientGotoMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.BeginJoinSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult JoiningSession                 (Parm)
// class APlayerController*       JoiningPlayerController        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::BeginJoinSession(const struct FBlueprintSessionResult& JoiningSession, class APlayerController* JoiningPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.BeginJoinSession");

	UBP_ConanGameInstance_C_BeginJoinSession_Params params;
	params.JoiningSession = JoiningSession;
	params.JoiningPlayerController = JoiningPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowJoinSessionErrorIfAny
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::ShowJoinSessionErrorIfAny()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ShowJoinSessionErrorIfAny");

	UBP_ConanGameInstance_C_ShowJoinSessionErrorIfAny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleLoginStatusChange
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoginStatus>*     NewStatus                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::HandleLoginStatusChange(TEnumAsByte<ELoginStatus>* NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.HandleLoginStatusChange");

	UBP_ConanGameInstance_C_HandleLoginStatusChange_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.ExecuteUbergraph_BP_ConanGameInstance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConanGameInstance_C::ExecuteUbergraph_BP_ConanGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.ExecuteUbergraph_BP_ConanGameInstance");

	UBP_ConanGameInstance_C_ExecuteUbergraph_BP_ConanGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanGameInstance.BP_ConanGameInstance_C.SignalStreamingFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ConanGameInstance_C::SignalStreamingFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanGameInstance.BP_ConanGameInstance_C.SignalStreamingFinished__DelegateSignature");

	UBP_ConanGameInstance_C_SignalStreamingFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
