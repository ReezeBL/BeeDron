#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DialoguePlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DialoguePlugin.Dialogue
// 0x0048 (0x0070 - 0x0028)
class UDialogue : public UDataAsset
{
public:
	bool                                               DisplayIdleSplines;                                       // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDialogueNode>                       Data;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NextNodeId;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.Dialogue");
		return ptr;
	}


	TArray<struct FDialogueNode> GetNextNodes(const struct FDialogueNode& Node);
	struct FDialogueNode GetFirstNode();
	void STATIC_CallFunctionByName(class UObject* Object, const class FString& FunctionName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
