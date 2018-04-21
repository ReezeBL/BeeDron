#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationMessages.AutomationWorkerImageComparisonResults
// 0x0002
struct FAutomationWorkerImageComparisonResults
{
	bool                                               bNew;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimilar;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationScreenshotMetadata
// 0x00F8
struct FAutomationScreenshotMetadata
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Context;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ID;                                                       // 0x0020(0x0010) (Edit, IsPlainOldData)
	int                                                Width;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      RHI;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	class FString                                      Platform;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
	class FString                                      FeatureLevel;                                             // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsStereo;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class FString                                      Vendor;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor)
	class FString                                      AdapterName;                                              // 0x0080(0x0010) (Edit, ZeroConstructor)
	class FString                                      AdapterInternalDriverVersion;                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class FString                                      AdapterUserDriverVersion;                                 // 0x00A0(0x0010) (Edit, ZeroConstructor)
	class FString                                      UniqueDeviceId;                                           // 0x00B0(0x0010) (Edit, ZeroConstructor)
	float                                              ResolutionQuality;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FoliageQuality;                                           // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GraniteTextureQuality;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasComparisonRules;                                      // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceRed;                                             // 0x00E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceGreen;                                           // 0x00E6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceBlue;                                            // 0x00E7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceAlpha;                                           // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceMinBrightness;                                   // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceMaxBrightness;                                   // 0x00EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00EB(0x0001) MISSED OFFSET
	float                                              MaximumLocalError;                                        // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumGlobalError;                                       // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAntiAliasing;                                      // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreColors;                                            // 0x00F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerScreenImage
// 0x0118
struct FAutomationWorkerScreenImage
{
	TArray<unsigned char>                              ScreenImage;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      ScreenShotName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FAutomationScreenshotMetadata               MetaData;                                                 // 0x0020(0x00F8) (Edit)
};

// ScriptStruct AutomationMessages.AutomationWorkerNextNetworkCommandReply
// 0x0001
struct FAutomationWorkerNextNetworkCommandReply
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestNextNetworkCommand
// 0x0004
struct FAutomationWorkerRequestNextNetworkCommand
{
	uint32_t                                           ExecutionCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerEvent
// 0x0038
struct FAutomationWorkerEvent
{
	class FString                                      Message;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Context;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      Filename;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	int                                                LineNumber;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRunTestsReply
// 0x0058
struct FAutomationWorkerRunTestsReply
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FAutomationWorkerEvent>              Errors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           ExecutionCount;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class FString>                              Logs;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               Success;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class FString                                      TestName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              Warnings;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationWorkerRunTests
// 0x0030
struct FAutomationWorkerRunTests
{
	uint32_t                                           ExecutionCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RoleIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      TestName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      BeautifiedTestName;                                       // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bScreenshotsEnabled;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSendAnalytics;                                           // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReplyComplete
// 0x0001
struct FAutomationWorkerRequestTestsReplyComplete
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReply
// 0x0088
struct FAutomationWorkerRequestTestsReply
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      FullTestPath;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      TestName;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      TestParameter;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      SourceFile;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	int                                                SourceFileLine;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class FString                                      AssetPath;                                                // 0x0058(0x0010) (Edit, ZeroConstructor)
	class FString                                      OpenCommand;                                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           TestFlags;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumParticipantsRequired;                                  // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TotalNumTests;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTests
// 0x0008
struct FAutomationWorkerRequestTests
{
	bool                                               DeveloperDirectoryIncluded;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           RequestedTestFlags;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerPong
// 0x0001
struct FAutomationWorkerPong
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerResetTests
// 0x0001
struct FAutomationWorkerResetTests
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerPing
// 0x0001
struct FAutomationWorkerPing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerWorkerOffline
// 0x0001
struct FAutomationWorkerWorkerOffline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkersResponse
// 0x0098
struct FAutomationWorkerFindWorkersResponse
{
	class FString                                      DeviceName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      InstanceName;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      Platform;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      OSVersionName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      ModelName;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      GPUName;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	class FString                                      CPUModelName;                                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           RAMInGB;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class FString                                      RenderModeName;                                           // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       sessionId;                                                // 0x0088(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkers
// 0x0038
struct FAutomationWorkerFindWorkers
{
	int                                                Changelist;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      GameName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      ProcessName;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       sessionId;                                                // 0x0028(0x0010) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
