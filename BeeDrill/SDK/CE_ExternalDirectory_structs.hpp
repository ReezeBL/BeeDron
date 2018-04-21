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

// ScriptStruct ExternalDirectory.FavoriteServer
// 0x0038
struct FFavoriteServer
{
	class FString                                      ServerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      IPAddress;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       UID;                                                      // 0x0024(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ExternalDirectory.HistoricServer
// 0x0008 (0x0040 - 0x0038)
struct FHistoricServer : public FFavoriteServer
{
	struct FDateTime                                   LastConnected;                                            // 0x0038(0x0008)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
