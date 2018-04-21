#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_DiscoveryFIFOMessageView_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_DiscoveryFIFOMessageView.W_DiscoveryFIFOMessageView_C.SetHeaderAndMessage
struct UW_DiscoveryFIFOMessageView_C_SetHeaderAndMessage_Params
{
	struct FText                                       Text;                                                     // (Parm)
	struct FText                                       Header;                                                   // (Parm)
};

// Function W_DiscoveryFIFOMessageView.W_DiscoveryFIFOMessageView_C.OnAnimationFinishedEvent
struct UW_DiscoveryFIFOMessageView_C_OnAnimationFinishedEvent_Params
{
};

// Function W_DiscoveryFIFOMessageView.W_DiscoveryFIFOMessageView_C.ExecuteUbergraph_W_DiscoveryFIFOMessageView
struct UW_DiscoveryFIFOMessageView_C_ExecuteUbergraph_W_DiscoveryFIFOMessageView_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
