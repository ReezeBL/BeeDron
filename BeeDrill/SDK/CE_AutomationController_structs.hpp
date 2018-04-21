#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationController.AutomatedTestResult
// 0x0050
struct FAutomatedTestResult
{
	class FString                                      TestName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      TestResult;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<class FString>                              TestInfo;                                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<class FString>                              TestErrors;                                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<class FString>                              TestWarnings;                                             // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AutomationController.AutomatedTestPassResults
// 0x0020
struct FAutomatedTestPassResults
{
	int                                                NumSucceeded;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumFailed;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumNotRun;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FAutomatedTestResult>                TestInformation;                                          // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
