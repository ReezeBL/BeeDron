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

// ScriptStruct ProfilerMessages.ProfilerServiceRequest
// 0x0004
struct FProfilerServiceRequest
{
	uint32_t                                           Request;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServicePreview
// 0x0001
struct FProfilerServicePreview
{
	bool                                               bRequestedPreviewState;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceCapture
// 0x0001
struct FProfilerServiceCapture
{
	bool                                               bRequestedCaptureState;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceUnsubscribe
// 0x0020
struct FProfilerServiceUnsubscribe
{
	struct FGuid                                       sessionId;                                                // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceSubscribe
// 0x0020
struct FProfilerServiceSubscribe
{
	struct FGuid                                       sessionId;                                                // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServicePong
// 0x0001
struct FProfilerServicePong
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServicePing
// 0x0001
struct FProfilerServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServiceFileChunk
// 0x0050
struct FProfilerServiceFileChunk
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, IsPlainOldData)
	class FString                                      Filename;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      HexData;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              Header;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              ChunkHash;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProfilerMessages.ProfilerServicePreviewAck
// 0x0010
struct FProfilerServicePreviewAck
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceData2
// 0x0030
struct FProfilerServiceData2
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, IsPlainOldData)
	int64_t                                            Frame;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CompressedSize;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UncompressedSize;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      HexData;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProfilerMessages.ProfilerServiceAuthorize
// 0x0020
struct FProfilerServiceAuthorize
{
	struct FGuid                                       sessionId;                                                // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
