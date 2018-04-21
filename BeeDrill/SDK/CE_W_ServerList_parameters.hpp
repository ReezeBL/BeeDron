#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_ServerList.W_ServerList_C.SetMaximumPingField
struct UW_ServerList_C_SetMaximumPingField_Params
{
	int                                                Ping;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.GetRegionType
struct UW_ServerList_C_GetRegionType_Params
{
	class FString                                      selected;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EServerRegion>                         Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.UpdateFilter
struct UW_ServerList_C_UpdateFilter_Params
{
};

// Function W_ServerList.W_ServerList_C.SetupServerListView
struct UW_ServerList_C_SetupServerListView_Params
{
};

// Function W_ServerList.W_ServerList_C.GetSteamFilter
struct UW_ServerList_C_GetSteamFilter_Params
{
	int                                                Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SetupCommunityNavigation
struct UW_ServerList_C_SetupCommunityNavigation_Params
{
};

// Function W_ServerList.W_ServerList_C.GetDefaultFilter
struct UW_ServerList_C_GetDefaultFilter_Params
{
	class FString                                      Option;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function W_ServerList.W_ServerList_C.GetCommunity
struct UW_ServerList_C_GetCommunity_Params
{
	class FString                                      selected;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EServerCommunity>                      Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.GetCombatType
struct UW_ServerList_C_GetCombatType_Params
{
	class FString                                      selected;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EServerType>                           Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SetFavoriteButtonsVisibilty
struct UW_ServerList_C_SetFavoriteButtonsVisibilty_Params
{
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFavorite;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SetServerSettings
struct UW_ServerList_C_SetServerSettings_Params
{
	struct FBlueprintSessionResult                     session;                                                  // (Parm)
};

// Function W_ServerList.W_ServerList_C.SetupKeyNavigation
struct UW_ServerList_C_SetupKeyNavigation_Params
{
};

// Function W_ServerList.W_ServerList_C.GetServerType
struct UW_ServerList_C_GetServerType_Params
{
	TEnumAsByte<EFindSessionServerSet>                 Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.IsServerSelected
struct UW_ServerList_C_IsServerSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.OnFailure_66195D1745184F12040037BFAFBF4056
struct UW_ServerList_C_OnFailure_66195D1745184F12040037BFAFBF4056_Params
{
	TEnumAsByte<EOnJoinSessionCompleteResultType>      Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.OnSuccess_66195D1745184F12040037BFAFBF4056
struct UW_ServerList_C_OnSuccess_66195D1745184F12040037BFAFBF4056_Params
{
	TEnumAsByte<EOnJoinSessionCompleteResultType>      Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.OnFailure_514869BF4AD7DBD25CD3CA97D130465A
struct UW_ServerList_C_OnFailure_514869BF4AD7DBD25CD3CA97D130465A_Params
{
};

// Function W_ServerList.W_ServerList_C.OnSuccess_514869BF4AD7DBD25CD3CA97D130465A
struct UW_ServerList_C_OnSuccess_514869BF4AD7DBD25CD3CA97D130465A_Params
{
};

// Function W_ServerList.W_ServerList_C.OnFailure_C0F8F58A4E6CC5FACBC8638AA138AEF8
struct UW_ServerList_C_OnFailure_C0F8F58A4E6CC5FACBC8638AA138AEF8_Params
{
};

// Function W_ServerList.W_ServerList_C.OnSuccess_C0F8F58A4E6CC5FACBC8638AA138AEF8
struct UW_ServerList_C_OnSuccess_C0F8F58A4E6CC5FACBC8638AA138AEF8_Params
{
};

// Function W_ServerList.W_ServerList_C.Find Servers
struct UW_ServerList_C_Find_Servers_Params
{
};

// Function W_ServerList.W_ServerList_C.Construct
struct UW_ServerList_C_Construct_Params
{
};

// Function W_ServerList.W_ServerList_C.SlotJoinButtonClicked
struct UW_ServerList_C_SlotJoinButtonClicked_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SlotRefreshButtonClicked
struct UW_ServerList_C_SlotRefreshButtonClicked_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SlotBackButtonClicked
struct UW_ServerList_C_SlotBackButtonClicked_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnName_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnName_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnType_K2Node_ComponentBoundEvent_39_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnType_K2Node_ComponentBoundEvent_39_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnRegion_K2Node_ComponentBoundEvent_55_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnRegion_K2Node_ComponentBoundEvent_55_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnPlayers_K2Node_ComponentBoundEvent_91_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnPlayers_K2Node_ComponentBoundEvent_91_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnVersion_K2Node_ComponentBoundEvent_109_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnVersion_K2Node_ComponentBoundEvent_109_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnPing_K2Node_ComponentBoundEvent_128_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnPing_K2Node_ComponentBoundEvent_128_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_476_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_476_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__UnfavoriteButton_K2Node_ComponentBoundEvent_498_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__UnfavoriteButton_K2Node_ComponentBoundEvent_498_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.JoinServer
struct UW_ServerList_C_JoinServer_Params
{
};

// Function W_ServerList.W_ServerList_C.Refresh
struct UW_ServerList_C_Refresh_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__W_FCEditableTextBlock_K2Node_ComponentBoundEvent_69_OnFCEditableTextBoxChangedEvent__DelegateSignature
struct UW_ServerList_C_BndEvt__W_FCEditableTextBlock_K2Node_ComponentBoundEvent_69_OnFCEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CBS_GameType_K2Node_ComponentBoundEvent_918_OnSelectionChangedEvent__DelegateSignature
struct UW_ServerList_C_BndEvt__CBS_GameType_K2Node_ComponentBoundEvent_918_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CBS_Community_K2Node_ComponentBoundEvent_940_OnSelectionChangedEvent__DelegateSignature
struct UW_ServerList_C_BndEvt__CBS_Community_K2Node_ComponentBoundEvent_940_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.OnServerSelected
struct UW_ServerList_C_OnServerSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__IntentionPicker_K2Node_ComponentBoundEvent_1095_SignalCommunitySelected__DelegateSignature
struct UW_ServerList_C_BndEvt__IntentionPicker_K2Node_ComponentBoundEvent_1095_SignalCommunitySelected__DelegateSignature_Params
{
	TEnumAsByte<EServerCommunity>                      Community;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SetState
struct UW_ServerList_C_SetState_Params
{
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SkipToList_K2Node_ComponentBoundEvent_964_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SkipToList_K2Node_ComponentBoundEvent_964_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__W_CombatModePicker_K2Node_ComponentBoundEvent_1039_CombatModeSelected__DelegateSignature
struct UW_ServerList_C_BndEvt__W_CombatModePicker_K2Node_ComponentBoundEvent_1039_CombatModeSelected__DelegateSignature_Params
{
	TEnumAsByte<EServerType>                           mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CBS_SteamFilter_K2Node_ComponentBoundEvent_100_OnSelectionChangedEvent__DelegateSignature
struct UW_ServerList_C_BndEvt__CBS_SteamFilter_K2Node_ComponentBoundEvent_100_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.OnConnectionFailure
struct UW_ServerList_C_OnConnectionFailure_Params
{
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function W_ServerList.W_ServerList_C.ShowWrongPasswordMessage
struct UW_ServerList_C_ShowWrongPasswordMessage_Params
{
	class FString                                      ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CB_NEVERAGAIN_K2Node_ComponentBoundEvent_70_SignalToggled__DelegateSignature
struct UW_ServerList_C_BndEvt__CB_NEVERAGAIN_K2Node_ComponentBoundEvent_70_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_Back_K2Node_ComponentBoundEvent_149_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_Back_K2Node_ComponentBoundEvent_149_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_MainPingPerfect_K2Node_ComponentBoundEvent_474_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_MainPingPerfect_K2Node_ComponentBoundEvent_474_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.ShowPasswordDialog
struct UW_ServerList_C_ShowPasswordDialog_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnOfficial_K2Node_ComponentBoundEvent_483_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnOfficial_K2Node_ComponentBoundEvent_483_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SetupServerList
struct UW_ServerList_C_SetupServerList_Params
{
};

// Function W_ServerList.W_ServerList_C.StartState
struct UW_ServerList_C_StartState_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_SortOnBattleEye_K2Node_ComponentBoundEvent_2574_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_SortOnBattleEye_K2Node_ComponentBoundEvent_2574_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.OnOk
struct UW_ServerList_C_OnOk_Params
{
	struct FBlueprintSessionResult                     session;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_ServerList.W_ServerList_C.OnBack
struct UW_ServerList_C_OnBack_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_ServerFullOk_K2Node_ComponentBoundEvent_98_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_ServerFullOk_K2Node_ComponentBoundEvent_98_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_BattleEyeOk_K2Node_ComponentBoundEvent_403_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_BattleEyeOk_K2Node_ComponentBoundEvent_403_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_DirectConnect_K2Node_ComponentBoundEvent_155_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_DirectConnect_K2Node_ComponentBoundEvent_155_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_DConnectOk_K2Node_ComponentBoundEvent_588_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_DConnectOk_K2Node_ComponentBoundEvent_588_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_DConnectBack_K2Node_ComponentBoundEvent_633_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_DConnectBack_K2Node_ComponentBoundEvent_633_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.ShowTimedOut
struct UW_ServerList_C_ShowTimedOut_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalServerSearchDoneDelegate__DelegateSignature
struct UW_ServerList_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalServerSearchDoneDelegate__DelegateSignature_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__CB_ShowInvalidServers_K2Node_ComponentBoundEvent_1967_SignalToggled__DelegateSignature
struct UW_ServerList_C_BndEvt__CB_ShowInvalidServers_K2Node_ComponentBoundEvent_1967_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CB_FullServers_K2Node_ComponentBoundEvent_2043_SignalToggled__DelegateSignature
struct UW_ServerList_C_BndEvt__CB_FullServers_K2Node_ComponentBoundEvent_2043_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CB_ModsEnabled_K2Node_ComponentBoundEvent_2177_SignalToggled__DelegateSignature
struct UW_ServerList_C_BndEvt__CB_ModsEnabled_K2Node_ComponentBoundEvent_2177_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.DeselectArrows
struct UW_ServerList_C_DeselectArrows_Params
{
};

// Function W_ServerList.W_ServerList_C.SelectArrow
struct UW_ServerList_C_SelectArrow_Params
{
	class UImage*                                      Arrow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.JoinAfterPassword
struct UW_ServerList_C_JoinAfterPassword_Params
{
	struct FBlueprintSessionResult                     JoiningSession;                                           // (Parm)
};

// Function W_ServerList.W_ServerList_C.SetGPortalLabel
struct UW_ServerList_C_SetGPortalLabel_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_91_SignalIPFoundDelegate__DelegateSignature
struct UW_ServerList_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_91_SignalIPFoundDelegate__DelegateSignature_Params
{
	struct FText                                       Label;                                                    // (Parm)
	bool                                               bFoundRegion;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__CB_ModsVacEnabled_K2Node_ComponentBoundEvent_1392_SignalToggled__DelegateSignature
struct UW_ServerList_C_BndEvt__CB_ModsVacEnabled_K2Node_ComponentBoundEvent_1392_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.CreateModRequestObject
struct UW_ServerList_C_CreateModRequestObject_Params
{
};

// Function W_ServerList.W_ServerList_C.OnModDetailsRecieved
struct UW_ServerList_C_OnModDetailsRecieved_Params
{
	class FString                                      sessionId;                                                // (Parm, ZeroConstructor)
	TArray<struct FModInfo>                            ModDetails;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               wasSuccessfull;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.GetServerMods
struct UW_ServerList_C_GetServerMods_Params
{
	class UServerInfoBase*                             Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_158_ScrollToMe__DelegateSignature
struct UW_ServerList_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_158_ScrollToMe__DelegateSignature_Params
{
	class URootWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.NavigateTo
struct UW_ServerList_C_NavigateTo_Params
{
	class URootWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.ShowSubDialog
struct UW_ServerList_C_ShowSubDialog_Params
{
	class UWidget*                                     Dialog;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class URootWidget*                                 NavigateTo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_128_SignalCloseActiveDialog__DelegateSignature
struct UW_ServerList_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_128_SignalCloseActiveDialog__DelegateSignature_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_100_SignalServerInvokedDelegate__DelegateSignature
struct UW_ServerList_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_100_SignalServerInvokedDelegate__DelegateSignature_Params
{
};

// Function W_ServerList.W_ServerList_C.HideOnConsole
struct UW_ServerList_C_HideOnConsole_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__W_ButtonCustom_C_0_K2Node_ComponentBoundEvent_602_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__W_ButtonCustom_C_0_K2Node_ComponentBoundEvent_602_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SignalClicked(Y_Skip)
struct UW_ServerList_C_SignalClicked_Y_Skip__Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_ServerList.W_ServerList_C.BindGamepadYButton(Skip)
struct UW_ServerList_C_BindGamepadYButton_Skip__Params
{
};

// Function W_ServerList.W_ServerList_C.SetXboxUI
struct UW_ServerList_C_SetXboxUI_Params
{
};

// Function W_ServerList.W_ServerList_C.UnbindGamepadYButton(Skip)
struct UW_ServerList_C_UnbindGamepadYButton_Skip__Params
{
};

// Function W_ServerList.W_ServerList_C.SignalClicked(Y_Favorite)
struct UW_ServerList_C_SignalClicked_Y_Favorite__Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_ServerList.W_ServerList_C.BindGamepadYButton(Favorite_Unfavorite)
struct UW_ServerList_C_BindGamepadYButton_Favorite_Unfavorite__Params
{
};

// Function W_ServerList.W_ServerList_C.UnbindGamepadYButton(Favorite_Unfavorite)
struct UW_ServerList_C_UnbindGamepadYButton_Favorite_Unfavorite__Params
{
};

// Function W_ServerList.W_ServerList_C.BindGamepadXButton(DConnect)
struct UW_ServerList_C_BindGamepadXButton_DConnect__Params
{
};

// Function W_ServerList.W_ServerList_C.UnbindGamepadXButton(DConnect)
struct UW_ServerList_C_UnbindGamepadXButton_DConnect__Params
{
};

// Function W_ServerList.W_ServerList_C.SignalClicked(X_DConnect)
struct UW_ServerList_C_SignalClicked_X_DConnect__Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_ServerList.W_ServerList_C.BindGamepadAButton(Join)
struct UW_ServerList_C_BindGamepadAButton_Join__Params
{
};

// Function W_ServerList.W_ServerList_C.UnbindGamepadAButton(Join)
struct UW_ServerList_C_UnbindGamepadAButton_Join__Params
{
};

// Function W_ServerList.W_ServerList_C.SignalClicked(A_Join)
struct UW_ServerList_C_SignalClicked_A_Join__Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_ServerList.W_ServerList_C.BindRemoveXboxButtons
struct UW_ServerList_C_BindRemoveXboxButtons_Params
{
};

// Function W_ServerList.W_ServerList_C.UnbindRemoveXboxButtons
struct UW_ServerList_C_UnbindRemoveXboxButtons_Params
{
};

// Function W_ServerList.W_ServerList_C.RemoveXboxServerOverlayButtons
struct UW_ServerList_C_RemoveXboxServerOverlayButtons_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_105_SignalServerSelectedDelegate__DelegateSignature
struct UW_ServerList_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_105_SignalServerSelectedDelegate__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BindResetGamepadOverlay
struct UW_ServerList_C_BindResetGamepadOverlay_Params
{
};

// Function W_ServerList.W_ServerList_C.SignalResetGamepadOverlay
struct UW_ServerList_C_SignalResetGamepadOverlay_Params
{
};

// Function W_ServerList.W_ServerList_C.SetDirectConnectInOverlay
struct UW_ServerList_C_SetDirectConnectInOverlay_Params
{
	bool                                               Set;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.SignalResetGamepadOverlay_MainMenu
struct UW_ServerList_C_SignalResetGamepadOverlay_MainMenu_Params
{
};

// Function W_ServerList.W_ServerList_C.OnGUIControlModeChanged
struct UW_ServerList_C_OnGUIControlModeChanged_Params
{
	TEnumAsByte<EGUIControlMode>                       mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.Destruct
struct UW_ServerList_C_Destruct_Params
{
};

// Function W_ServerList.W_ServerList_C.SignalResetGamepadOverlay_DConnect
struct UW_ServerList_C_SignalResetGamepadOverlay_DConnect_Params
{
};

// Function W_ServerList.W_ServerList_C.BndEvt__CBS_RegionFilter_K2Node_ComponentBoundEvent_306_OnSelectionChangedEvent__DelegateSignature
struct UW_ServerList_C_BndEvt__CBS_RegionFilter_K2Node_ComponentBoundEvent_306_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__B_ClearPing_K2Node_ComponentBoundEvent_0_SignalClicked__DelegateSignature
struct UW_ServerList_C_BndEvt__B_ClearPing_K2Node_ComponentBoundEvent_0_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.BndEvt__InputT_PingFilter_K2Node_ComponentBoundEvent_0_OnFCEditableTextBoxCommittedEvent__DelegateSignature
struct UW_ServerList_C_BndEvt__InputT_PingFilter_K2Node_ComponentBoundEvent_0_OnFCEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_ServerList.W_ServerList_C.ExecuteUbergraph_W_ServerList
struct UW_ServerList_C_ExecuteUbergraph_W_ServerList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
