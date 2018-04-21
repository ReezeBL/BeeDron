#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_Engine_classes.hpp"
#include "CE_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DialoguePlugin.DialogueEvents
// 0x0008
struct FDialogueEvents
{
	class UAnimMontage*                                AnimationMontage;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DialoguePlugin.DialogueConditions
// 0x0004
struct FDialogueConditions
{
	int                                                Money;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DialoguePlugin.DialogueNode
// 0x0060
struct FDialogueNode
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayer;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<int>                                        Links;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   Coordinates;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bHasEvents;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasConditions;                                           // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FDialogueEvents                             events;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FDialogueConditions                         Conditions;                                               // 0x0048(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDialogueWave*                               DialogueWave;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
