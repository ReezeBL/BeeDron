#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DialoguePlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DialoguePlugin.Dialogue.GetNextNodes
struct UDialogue_GetNextNodes_Params
{
	struct FDialogueNode                               Node;                                                     // (Parm)
	TArray<struct FDialogueNode>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DialoguePlugin.Dialogue.GetFirstNode
struct UDialogue_GetFirstNode_Params
{
	struct FDialogueNode                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DialoguePlugin.Dialogue.CallFunctionByName
struct UDialogue_CallFunctionByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
