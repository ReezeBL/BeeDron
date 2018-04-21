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

// ScriptStruct SlateReflector.WidgetSnapshotResponse
// 0x0020
struct FWidgetSnapshotResponse
{
	struct FGuid                                       SnapshotRequestId;                                        // 0x0000(0x0010) (Edit, IsPlainOldData)
	TArray<unsigned char>                              SnapshotData;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct SlateReflector.WidgetSnapshotRequest
// 0x0020
struct FWidgetSnapshotRequest
{
	struct FGuid                                       TargetInstanceId;                                         // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FGuid                                       SnapshotRequestId;                                        // 0x0010(0x0010) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
