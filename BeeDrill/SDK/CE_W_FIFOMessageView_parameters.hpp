#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_FIFOMessageView_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_FIFOMessageView.W_FIFOMessageView_C.SetMessage
struct UW_FIFOMessageView_C_SetMessage_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function W_FIFOMessageView.W_FIFOMessageView_C.DisplayTimer
struct UW_FIFOMessageView_C_DisplayTimer_Params
{
};

// Function W_FIFOMessageView.W_FIFOMessageView_C.ExecuteUbergraph_W_FIFOMessageView
struct UW_FIFOMessageView_C_ExecuteUbergraph_W_FIFOMessageView_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
