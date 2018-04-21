// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_DialoguePlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DialoguePlugin.Dialogue.GetNextNodes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDialogueNode           Node                           (Parm)
// TArray<struct FDialogueNode>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDialogueNode> UDialogue::GetNextNodes(const struct FDialogueNode& Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.GetNextNodes");

	UDialogue_GetNextNodes_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DialoguePlugin.Dialogue.GetFirstNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDialogueNode           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDialogueNode UDialogue::GetFirstNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.GetFirstNode");

	UDialogue_GetFirstNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DialoguePlugin.Dialogue.CallFunctionByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FunctionName                   (Parm, ZeroConstructor)

void UDialogue::STATIC_CallFunctionByName(class UObject* Object, const class FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.CallFunctionByName");

	UDialogue_CallFunctionByName_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
