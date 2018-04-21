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

// ScriptStruct ScreenShotComparisonTools.ImageTolerance
// 0x0010
struct FImageTolerance
{
	unsigned char                                      Red;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Green;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Blue;                                                     // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Alpha;                                                    // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinBrightness;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxBrightness;                                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAntiAliasing;                                       // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreColors;                                             // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumLocalError;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumGlobalError;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScreenShotComparisonTools.ImageComparisonResult
// 0x0068
struct FImageComparisonResult
{
	class FString                                      ApprovedFile;                                             // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      IncomingFile;                                             // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      ComparisonFile;                                           // 0x0020(0x0010) (ZeroConstructor)
	double                                             MaxLocalDifference;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             GlobalDifference;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // 0x0040(0x0018)
	struct FImageTolerance                             Tolerance;                                                // 0x0058(0x0010)
};

// ScriptStruct ScreenShotComparisonTools.ComparisonResults
// 0x0060
struct FComparisonResults
{
	class FString                                      ApprovedPath;                                             // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      IncomingPath;                                             // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      DeltaPath;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FImageComparisonResult>              Comparisons;                                              // 0x0030(0x0010) (ZeroConstructor)
	TArray<class FString>                              Added;                                                    // 0x0040(0x0010) (ZeroConstructor)
	TArray<class FString>                              Missing;                                                  // 0x0050(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
