#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_JourneyStepFIFOMessageView2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_JourneyStepFIFOMessageView2.W_JourneyStepFIFOMessageView2_C.SetHeaderAndMessage
struct UW_JourneyStepFIFOMessageView2_C_SetHeaderAndMessage_Params
{
	struct FText                                       Text;                                                     // (Parm)
	struct FText                                       Header;                                                   // (Parm)
};

// Function W_JourneyStepFIFOMessageView2.W_JourneyStepFIFOMessageView2_C.OnAnimationFinishedEvent
struct UW_JourneyStepFIFOMessageView2_C_OnAnimationFinishedEvent_Params
{
};

// Function W_JourneyStepFIFOMessageView2.W_JourneyStepFIFOMessageView2_C.ExecuteUbergraph_W_JourneyStepFIFOMessageView2
struct UW_JourneyStepFIFOMessageView2_C_ExecuteUbergraph_W_JourneyStepFIFOMessageView2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
