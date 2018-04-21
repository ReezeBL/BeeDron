#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DreamworldPreInit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DreamworldPreInit.LoggerLibrary
// 0x0000 (0x0028 - 0x0028)
class ULoggerLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DreamworldPreInit.LoggerLibrary");
		return ptr;
	}


	bool STATIC_IsSuppressed(EDebugLevel DebugLevel, ELogChannel Channel);
	void STATIC_DWLogString(class UObject* WorldContextObject, const class FString& inString, ELogChannel Channel, EDebugLevel DebugLevel, bool bPrintToScreen, const struct FLinearColor& TextColor, float Duration, class UObject* Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
