// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_RconPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RconPlugin.RconCommandObject.RconCommand
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URconCommandObject::RconCommand(class UWorld* World, TArray<class FString> Args, class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function RconPlugin.RconCommandObject.RconCommand");

	URconCommandObject_RconCommand_Params params;
	params.World = World;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
