#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_SubtitleEntryView_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_SubtitleEntryView.W_SubtitleEntryView_C.SetText
struct UW_SubtitleEntryView_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_SubtitleEntryView.W_SubtitleEntryView_C.ExecuteUbergraph_W_SubtitleEntryView
struct UW_SubtitleEntryView_C_ExecuteUbergraph_W_SubtitleEntryView_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
