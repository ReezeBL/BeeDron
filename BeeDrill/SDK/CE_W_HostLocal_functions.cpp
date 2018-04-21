// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_HostLocal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_HostLocal.W_HostLocal_C.SetMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   mapName                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::SetMapName(const struct FName& mapName, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.SetMapName");

	UW_HostLocal_C_SetMapName_Params params;
	params.mapName = mapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function W_HostLocal.W_HostLocal_C.GetDefaultMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DefaultMapName                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::GetDefaultMapName(struct FName* DefaultMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.GetDefaultMapName");

	UW_HostLocal_C_GetDefaultMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultMapName != nullptr)
		*DefaultMapName = params.DefaultMapName;
}


// Function W_HostLocal.W_HostLocal_C.Get_B_Purge_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UW_HostLocal_C::Get_B_Purge_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.Get_B_Purge_Visibility_1");

	UW_HostLocal_C_Get_B_Purge_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_HostLocal.W_HostLocal_C.SetupNewGame
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::SetupNewGame(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.SetupNewGame");

	UW_HostLocal_C_SetupNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;
}


// Function W_HostLocal.W_HostLocal_C.SaveServerSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::SaveServerSettings(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.SaveServerSettings");

	UW_HostLocal_C_SaveServerSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function W_HostLocal.W_HostLocal_C.SetupKeyNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::SetupKeyNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.SetupKeyNavigation");

	UW_HostLocal_C_SetupKeyNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.OnFailure_1F3327E34B76AF0D70B0DEA021BFC1EF
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::OnFailure_1F3327E34B76AF0D70B0DEA021BFC1EF()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.OnFailure_1F3327E34B76AF0D70B0DEA021BFC1EF");

	UW_HostLocal_C_OnFailure_1F3327E34B76AF0D70B0DEA021BFC1EF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.OnSuccess_1F3327E34B76AF0D70B0DEA021BFC1EF
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::OnSuccess_1F3327E34B76AF0D70B0DEA021BFC1EF()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.OnSuccess_1F3327E34B76AF0D70B0DEA021BFC1EF");

	UW_HostLocal_C_OnSuccess_1F3327E34B76AF0D70B0DEA021BFC1EF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Back_2_K2Node_ComponentBoundEvent_289_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Back_2_K2Node_ComponentBoundEvent_289_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Back_2_K2Node_ComponentBoundEvent_289_SignalClicked__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Back_2_K2Node_ComponentBoundEvent_289_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.HandleError
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)

void UW_HostLocal_C::HandleError(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.HandleError");

	UW_HostLocal_C_HandleError_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.Continue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AsSession                      (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::Continue(bool AsSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.Continue");

	UW_HostLocal_C_Continue_Params params;
	params.AsSession = AsSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.CloseWindow
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::CloseWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.CloseWindow");

	UW_HostLocal_C_CloseWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.StartSession
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::StartSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.StartSession");

	UW_HostLocal_C_StartSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.SetAsChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URootWidget*             Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::SetAsChecked(class URootWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.SetAsChecked");

	UW_HostLocal_C_SetAsChecked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_HostLocal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.Construct");

	UW_HostLocal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_124_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Back_K2Node_ComponentBoundEvent_124_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_124_SignalClicked__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Back_K2Node_ComponentBoundEvent_124_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.PlayOffline
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::PlayOffline()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.PlayOffline");

	UW_HostLocal_C_PlayOffline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.NewGame
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::NewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.NewGame");

	UW_HostLocal_C_NewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.SetSwitcherIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::SetSwitcherIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.SetSwitcherIndex");

	UW_HostLocal_C_SetSwitcherIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_ResetDefault_K2Node_ComponentBoundEvent_1_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_ResetDefault_K2Node_ComponentBoundEvent_1_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_ResetDefault_K2Node_ComponentBoundEvent_1_SignalClicked__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_ResetDefault_K2Node_ComponentBoundEvent_1_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Custom_K2Node_ComponentBoundEvent_185_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Custom_K2Node_ComponentBoundEvent_185_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Custom_K2Node_ComponentBoundEvent_185_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Custom_K2Node_ComponentBoundEvent_185_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Peasant_K2Node_ComponentBoundEvent_357_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Peasant_K2Node_ComponentBoundEvent_357_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Peasant_K2Node_ComponentBoundEvent_357_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Peasant_K2Node_ComponentBoundEvent_357_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Soldier_K2Node_ComponentBoundEvent_523_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Soldier_K2Node_ComponentBoundEvent_523_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Soldier_K2Node_ComponentBoundEvent_523_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Soldier_K2Node_ComponentBoundEvent_523_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_565_SignalKeyNavSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URootWidget*             SelectedWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_565_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_565_SignalKeyNavSelectionChanged__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_565_SignalKeyNavSelectionChanged__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Custom_K2Node_ComponentBoundEvent_1728_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Custom_K2Node_ComponentBoundEvent_1728_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Custom_K2Node_ComponentBoundEvent_1728_SignalToggled__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Custom_K2Node_ComponentBoundEvent_1728_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.OnCustomSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URootWidget*             Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::OnCustomSelected(class URootWidget* Button, bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.OnCustomSelected");

	UW_HostLocal_C_OnCustomSelected_Params params;
	params.Button = Button;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.OnRestoreDefaultButtonPressed
// (Event, Protected, BlueprintEvent)

void UW_HostLocal_C::OnRestoreDefaultButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.OnRestoreDefaultButtonPressed");

	UW_HostLocal_C_OnRestoreDefaultButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_1033_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_1033_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_1033_SignalToggled__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Barbarian_K2Node_ComponentBoundEvent_1033_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Soldier_K2Node_ComponentBoundEvent_1144_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Soldier_K2Node_ComponentBoundEvent_1144_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Soldier_K2Node_ComponentBoundEvent_1144_SignalToggled__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Soldier_K2Node_ComponentBoundEvent_1144_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Peasant_K2Node_ComponentBoundEvent_1196_SignalToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChcked                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Peasant_K2Node_ComponentBoundEvent_1196_SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Peasant_K2Node_ComponentBoundEvent_1196_SignalToggled__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Peasant_K2Node_ComponentBoundEvent_1196_SignalToggled__DelegateSignature_Params params;
	params.Button = Button;
	params.IsChcked = IsChcked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.BndEvt__B_Host_K2Node_ComponentBoundEvent_107_SignalClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFCButton*               Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::BndEvt__B_Host_K2Node_ComponentBoundEvent_107_SignalClicked__DelegateSignature(class UFCButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.BndEvt__B_Host_K2Node_ComponentBoundEvent_107_SignalClicked__DelegateSignature");

	UW_HostLocal_C_BndEvt__B_Host_K2Node_ComponentBoundEvent_107_SignalClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.Smoketest_HostLocal
// (BlueprintCallable, BlueprintEvent)

void UW_HostLocal_C::Smoketest_HostLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.Smoketest_HostLocal");

	UW_HostLocal_C_Smoketest_HostLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.StartNewGame
// (Event, Protected, BlueprintEvent)

void UW_HostLocal_C::StartNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.StartNewGame");

	UW_HostLocal_C_StartNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_HostLocal.W_HostLocal_C.ExecuteUbergraph_W_HostLocal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_HostLocal_C::ExecuteUbergraph_W_HostLocal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HostLocal.W_HostLocal_C.ExecuteUbergraph_W_HostLocal");

	UW_HostLocal_C_ExecuteUbergraph_W_HostLocal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
