// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Keybindings_Command_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Keybindings_Command.W_Keybindings_Command_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Keybindings_Command_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Keybindings_Command.W_Keybindings_Command_C.Construct");

	UW_Keybindings_Command_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Keybindings_Command.W_Keybindings_Command_C.ExecuteUbergraph_W_Keybindings_Command
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_Keybindings_Command_C::ExecuteUbergraph_W_Keybindings_Command(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Keybindings_Command.W_Keybindings_Command_C.ExecuteUbergraph_W_Keybindings_Command");

	UW_Keybindings_Command_C_ExecuteUbergraph_W_Keybindings_Command_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
