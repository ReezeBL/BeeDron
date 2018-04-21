#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ConanGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConanGameInstance.BP_ConanGameInstance_C
// 0x0101 (0x05A1 - 0x04A0)
class UBP_ConanGameInstance_C : public UConanGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    SignalStreamingFinished;                                  // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                LoadingProgress;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Timeout;                                                  // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UMessageBoxWidget*                           Message_Disconnecting;                                    // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBlueprintSessionResult                     JoiningSession;                                           // 0x04D0(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerController*                           JoiningPlayerController;                                  // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoConnectionError;                                        // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConanGameInstance.BP_ConanGameInstance_C");
		return ptr;
	}


	void GetErrorTypeText(TEnumAsByte<ENetworkFailure> Selection, struct FText* errorText);
	void ShouldBeDeadByCursedWallCheck();
	void IsStreamingFinished(bool* IsFinsihed);
	void OnFailure_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B();
	void OnSuccess_9FB9CE2A485A0AD6F7AF8B91FC1CFD2B();
	void OnFailure_74CE98424F59D42828F1AFB64AC06340();
	void OnSuccess_74CE98424F59D42828F1AFB64AC06340();
	void OnFailure_CF279F2A4C743DFA1AFDF9BFCEB0B092(TEnumAsByte<EOnJoinSessionCompleteResultType> Result);
	void OnSuccess_CF279F2A4C743DFA1AFDF9BFCEB0B092(TEnumAsByte<EOnJoinSessionCompleteResultType> Result);
	void OnFailure_11FA6883421FF1071A63E38CE526AE3E();
	void OnSuccess_11FA6883421FF1071A63E38CE526AE3E();
	void ReceiveInit();
	void WaitForLoadingToFInish();
	void Print_Level_loads();
	void GoToMainMenu();
	void HandleNetworkError(TEnumAsByte<ENetworkFailure>* FailureType, bool* bIsServer, TEnumAsByte<EFailureDetails>* FailureDetails, class FString* additionalInformation);
	void ServerGotoMainMenu();
	void ServerNotifyClientsOnDisconnect();
	void ServerQuitGame();
	void ShowErrorDialog(const struct FText& errorType, const struct FText& ErrorString);
	void OnClosingEvent(class UWindowRoot* Window);
	void ShowDisconnectingMessage();
	void HandleTravelError(TEnumAsByte<ETravelFailure>* FailureType);
	void OnPostLoadMap();
	void ClientGotoMainMenu();
	void BeginJoinSession(const struct FBlueprintSessionResult& JoiningSession, class APlayerController* JoiningPlayerController);
	void ShowJoinSessionErrorIfAny();
	void HandleLoginStatusChange(TEnumAsByte<ELoginStatus>* NewStatus);
	void ExecuteUbergraph_BP_ConanGameInstance(int EntryPoint);
	void SignalStreamingFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
