// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DreamworldPreInit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DreamworldPreInit.LoggerLibrary.IsSuppressed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EDebugLevel                    DebugLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// ELogChannel                    Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoggerLibrary::STATIC_IsSuppressed(EDebugLevel DebugLevel, ELogChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldPreInit.LoggerLibrary.IsSuppressed");

	ULoggerLibrary_IsSuppressed_Params params;
	params.DebugLevel = DebugLevel;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreamworldPreInit.LoggerLibrary.DWLogString
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  inString                       (ConstParm, Parm, ZeroConstructor)
// ELogChannel                    Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// EDebugLevel                    DebugLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintToScreen                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Key                            (Parm, ZeroConstructor, IsPlainOldData)

void ULoggerLibrary::STATIC_DWLogString(class UObject* WorldContextObject, const class FString& inString, ELogChannel Channel, EDebugLevel DebugLevel, bool bPrintToScreen, const struct FLinearColor& TextColor, float Duration, class UObject* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreamworldPreInit.LoggerLibrary.DWLogString");

	ULoggerLibrary_DWLogString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.inString = inString;
	params.Channel = Channel;
	params.DebugLevel = DebugLevel;
	params.bPrintToScreen = bPrintToScreen;
	params.TextColor = TextColor;
	params.Duration = Duration;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
