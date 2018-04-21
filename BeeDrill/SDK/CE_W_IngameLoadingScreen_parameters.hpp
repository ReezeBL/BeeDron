#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_IngameLoadingScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.UpdateText
struct UW_IngameLoadingScreen_C_UpdateText_Params
{
	struct FText                                       newText;                                                  // (Parm)
};

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.FadeFromBlack
struct UW_IngameLoadingScreen_C_FadeFromBlack_Params
{
};

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.RemoveLoadingScreen
struct UW_IngameLoadingScreen_C_RemoveLoadingScreen_Params
{
};

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.Construct
struct UW_IngameLoadingScreen_C_Construct_Params
{
};

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.OnAnimationFinished
struct UW_IngameLoadingScreen_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_IngameLoadingScreen.W_IngameLoadingScreen_C.ExecuteUbergraph_W_IngameLoadingScreen
struct UW_IngameLoadingScreen_C_ExecuteUbergraph_W_IngameLoadingScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
