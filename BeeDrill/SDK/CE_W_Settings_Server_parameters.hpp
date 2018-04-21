#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Settings_Server_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_Settings_Server.W_Settings_Server_C.GetPurgeMenuVisibility
struct UW_Settings_Server_C_GetPurgeMenuVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.GetMapNameVisibility
struct UW_Settings_Server_C_GetMapNameVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.GetAvatarLifeTimeVisibility
struct UW_Settings_Server_C_GetAvatarLifeTimeVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.GetCoopTetheringIsEnabled
struct UW_Settings_Server_C_GetCoopTetheringIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.GetCoopTetheringLimitVisibility
struct UW_Settings_Server_C_GetCoopTetheringLimitVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.Get_PasswordVisibility
struct UW_Settings_Server_C_Get_PasswordVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.IsAdmin
struct UW_Settings_Server_C_IsAdmin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.Get_B_MakeMeAdmin_Visibility
struct UW_Settings_Server_C_Get_B_MakeMeAdmin_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.GetCatchupTimeEnabled
struct UW_Settings_Server_C_GetCatchupTimeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CB_TimeRestrictPVPBuildingDamage_K2Node_ComponentBoundEvent_141_SignalToggled__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CB_TimeRestrictPVPBuildingDamage_K2Node_ComponentBoundEvent_141_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CB_TimeRestrictAvatarSummoning_K2Node_ComponentBoundEvent_108_SignalToggled__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CB_TimeRestrictAvatarSummoning_K2Node_ComponentBoundEvent_108_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__B_ClearServerpassword_K2Node_ComponentBoundEvent_32_SignalClicked__DelegateSignature
struct UW_Settings_Server_C_BndEvt__B_ClearServerpassword_K2Node_ComponentBoundEvent_32_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__B_ClearAdminPassword_K2Node_ComponentBoundEvent_58_SignalClicked__DelegateSignature
struct UW_Settings_Server_C_BndEvt__B_ClearAdminPassword_K2Node_ComponentBoundEvent_58_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.Server_ClearAdminPassword
struct UW_Settings_Server_C_Server_ClearAdminPassword_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__B_ResetMapName_K2Node_ComponentBoundEvent_0_SignalClicked__DelegateSignature
struct UW_Settings_Server_C_BndEvt__B_ResetMapName_K2Node_ComponentBoundEvent_0_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__ETXT_MapName_K2Node_ComponentBoundEvent_1_OnFCEditableTextBoxChangedEvent__DelegateSignature
struct UW_Settings_Server_C_BndEvt__ETXT_MapName_K2Node_ComponentBoundEvent_1_OnFCEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CB_PVPRestrictToTime_K2Node_ComponentBoundEvent_331_SignalToggled__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CB_PVPRestrictToTime_K2Node_ComponentBoundEvent_331_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_143_SignalClicked__DelegateSignature
struct UW_Settings_Server_C_BndEvt__B_ConfirmDialog_Accept_K2Node_ComponentBoundEvent_143_SignalClicked__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.Tick
struct UW_Settings_Server_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.Construct
struct UW_Settings_Server_C_Construct_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_30_SignalSetDifficultyCivilized__DelegateSignature
struct UW_Settings_Server_C_BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_30_SignalSetDifficultyCivilized__DelegateSignature_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_51_SignalSetDifficultyDecadent__DelegateSignature
struct UW_Settings_Server_C_BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_51_SignalSetDifficultyDecadent__DelegateSignature_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_70_SignalSetDifficultyBarbaric__DelegateSignature
struct UW_Settings_Server_C_BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_70_SignalSetDifficultyBarbaric__DelegateSignature_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_183_ScrollIntoView__DelegateSignature
struct UW_Settings_Server_C_BndEvt__W_ServerSettingsPresets_K2Node_ComponentBoundEvent_183_ScrollIntoView__DelegateSignature_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__ETXT_MapName_K2Node_ComponentBoundEvent_260_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_Settings_Server_C_BndEvt__ETXT_MapName_K2Node_ComponentBoundEvent_260_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__ETXT_ServerPW_K2Node_ComponentBoundEvent_285_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_Settings_Server_C_BndEvt__ETXT_ServerPW_K2Node_ComponentBoundEvent_285_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.SetupCategoryButtons
struct UW_Settings_Server_C_SetupCategoryButtons_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CBS_ServerVoiceChat_K2Node_ComponentBoundEvent_112_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CBS_ServerVoiceChat_K2Node_ComponentBoundEvent_112_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CB_TimeRestrictAvatarSummoning_K2Node_ComponentBoundEvent_275_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CB_TimeRestrictAvatarSummoning_K2Node_ComponentBoundEvent_275_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__S_PlayerDamageMultiplier_K2Node_ComponentBoundEvent_405_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_Settings_Server_C_BndEvt__S_PlayerDamageMultiplier_K2Node_ComponentBoundEvent_405_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__TIME_AvatarSummoningRestrictionWeekendEnd_K2Node_ComponentBoundEvent_1253_SignalTimeInputSelected__DelegateSignature
struct UW_Settings_Server_C_BndEvt__TIME_AvatarSummoningRestrictionWeekendEnd_K2Node_ComponentBoundEvent_1253_SignalTimeInputSelected__DelegateSignature_Params
{
};

// Function W_Settings_Server.W_Settings_Server_C.NavigateToCategory
struct UW_Settings_Server_C_NavigateToCategory_Params
{
	TEnumAsByte<EServerSettingsCategory>*              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__B_MOTD_K2Node_ComponentBoundEvent_111_SignalKeyNavSelectionChanged__DelegateSignature
struct UW_Settings_Server_C_BndEvt__B_MOTD_K2Node_ComponentBoundEvent_111_SignalKeyNavSelectionChanged__DelegateSignature_Params
{
	class URootWidget*                                 SelectedWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CB_PurgeRestrictToTime_K2Node_ComponentBoundEvent_0_SignalToggled__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CB_PurgeRestrictToTime_K2Node_ComponentBoundEvent_0_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.BndEvt__CB_EnablePurge_K2Node_ComponentBoundEvent_1304_SignalToggled__DelegateSignature
struct UW_Settings_Server_C_BndEvt__CB_EnablePurge_K2Node_ComponentBoundEvent_1304_SignalToggled__DelegateSignature_Params
{
	class UFCButton*                                   Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChcked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Settings_Server.W_Settings_Server_C.ExecuteUbergraph_W_Settings_Server
struct UW_Settings_Server_C_ExecuteUbergraph_W_Settings_Server_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
