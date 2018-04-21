#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_FIFOWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_FIFOWindow.W_FIFOWindow_C.Tick
struct UW_FIFOWindow_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_FIFOWindow.W_FIFOWindow_C.ShowMessage
struct UW_FIFOWindow_C_ShowMessage_Params
{
	EFIFOStyle*                                        Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      Header;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_FIFOWindow.W_FIFOWindow_C.Event Add To Parent
struct UW_FIFOWindow_C_Event_Add_To_Parent_Params
{
	EFIFOStyle                                         Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	struct FText                                       Header;                                                   // (Parm)
};

// Function W_FIFOWindow.W_FIFOWindow_C.ExecuteUbergraph_W_FIFOWindow
struct UW_FIFOWindow_C_ExecuteUbergraph_W_FIFOWindow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
