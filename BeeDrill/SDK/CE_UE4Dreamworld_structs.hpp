#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_OnlineSubsystemUtils_classes.hpp"
#include "CE_Engine_classes.hpp"
#include "CE_CoreUObject_classes.hpp"
#include "CE_PacketHandler_classes.hpp"
#include "CE_DreamworldPreInit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UE4Dreamworld.DBResult
// 0x0010
struct FDBResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct UE4Dreamworld.CharacterListData
// 0x0010
struct FCharacterListData
{
	class UUniqueID*                                   UID;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isAlive;                                                  // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct UE4Dreamworld.PolarUtilityVector
// 0x0018
struct FPolarUtilityVector
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct UE4Dreamworld.DWTickHelper
// 0x0008 (0x0058 - 0x0050)
struct FDWTickHelper : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
