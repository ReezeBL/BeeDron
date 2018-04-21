#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Hotfix_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Hotfix.OnlineHotfixManager
// 0x0388 (0x03B0 - 0x0028)
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0028(0x0358) MISSED OFFSET
	class FString                                      OSSName;                                                  // 0x0380(0x0010) (ZeroConstructor, Config)
	class FString                                      HotfixManagerClassName;                                   // 0x0390(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugPrefix;                                              // 0x03A0(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}


	void StartHotfixProcess();
};


// Class Hotfix.UpdateManager
// 0x0238 (0x0260 - 0x0028)
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0028(0x01C8) MISSED OFFSET
	float                                              HotfixCheckCompleteDelay;                                 // 0x01F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckCompleteDelay;                                 // 0x01F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HotfixAvailabilityCheckCompleteDelay;                     // 0x01F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckAvailabilityCompleteDelay;                     // 0x01FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPlatformEnvironmentDetected;                             // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialUpdateFinished;                                   // 0x0201(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCheckHotfixAvailabilityOnly;                             // 0x0202(0x0001) (ZeroConstructor, IsPlainOldData)
	EUpdateState                                       CurrentUpdateState;                                       // 0x0203(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                WorstNumFilesPendingLoadViewed;                           // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	EPatchCheckResult                                  LastPatchCheckResult;                                     // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	EHotfixResult                                      LastHotfixResult;                                         // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x020A(0x001E) MISSED OFFSET
	struct FDateTime                                   LastUpdateCheck[0x2];                                     // 0x0228(0x0008)
	EUpdateCompletionStatus                            LastCompletionResult[0x2];                                // 0x0238(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x023A(0x000E) MISSED OFFSET
	class UEnum*                                       UpdateStateEnum;                                          // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnum*                                       UpdateCompletionEnum;                                     // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
