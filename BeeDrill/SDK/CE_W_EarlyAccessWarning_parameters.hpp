#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_EarlyAccessWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.OnMouseButtonDown
struct UW_EarlyAccessWarning_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.KeyNavOnInvokeBP
struct UW_EarlyAccessWarning_C_KeyNavOnInvokeBP_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.Skip
struct UW_EarlyAccessWarning_C_Skip_Params
{
};

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.Construct
struct UW_EarlyAccessWarning_C_Construct_Params
{
};

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ExecuteUbergraph_W_EarlyAccessWarning
struct UW_EarlyAccessWarning_C_ExecuteUbergraph_W_EarlyAccessWarning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ShowGamma__DelegateSignature
struct UW_EarlyAccessWarning_C_ShowGamma__DelegateSignature_Params
{
};

// Function W_EarlyAccessWarning.W_EarlyAccessWarning_C.ShowMainMenu__DelegateSignature
struct UW_EarlyAccessWarning_C_ShowMainMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
