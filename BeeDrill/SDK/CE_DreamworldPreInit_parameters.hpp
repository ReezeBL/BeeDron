#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DreamworldPreInit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DreamworldPreInit.LoggerLibrary.IsSuppressed
struct ULoggerLibrary_IsSuppressed_Params
{
	EDebugLevel                                        DebugLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ELogChannel                                        Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreamworldPreInit.LoggerLibrary.DWLogString
struct ULoggerLibrary_DWLogString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      inString;                                                 // (ConstParm, Parm, ZeroConstructor)
	ELogChannel                                        Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EDebugLevel                                        DebugLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
