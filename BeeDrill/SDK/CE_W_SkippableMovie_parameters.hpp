#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_SkippableMovie_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_SkippableMovie.W_SkippableMovie_C.OnMouseButtonDown
struct UW_SkippableMovie_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_SkippableMovie.W_SkippableMovie_C.FadeOutMovie
struct UW_SkippableMovie_C_FadeOutMovie_Params
{
};

// Function W_SkippableMovie.W_SkippableMovie_C.ExecuteUbergraph_W_SkippableMovie
struct UW_SkippableMovie_C_ExecuteUbergraph_W_SkippableMovie_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
