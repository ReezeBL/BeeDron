#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_PurgeFIFOMessageView_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.OnAnimationFinishedEvent
struct UW_PurgeFIFOMessageView_C_OnAnimationFinishedEvent_Params
{
};

// Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.SetHeaderAndMessage
struct UW_PurgeFIFOMessageView_C_SetHeaderAndMessage_Params
{
	struct FText                                       Text;                                                     // (Parm)
	struct FText                                       Header;                                                   // (Parm)
};

// Function W_PurgeFIFOMessageView.W_PurgeFIFOMessageView_C.ExecuteUbergraph_W_PurgeFIFOMessageView
struct UW_PurgeFIFOMessageView_C_ExecuteUbergraph_W_PurgeFIFOMessageView_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
