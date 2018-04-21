// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Startup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Startup.Startup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStartup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.ReceiveBeginPlay");

	AStartup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Startup.Startup_C.ExecuteUbergraph_Startup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStartup_C::ExecuteUbergraph_Startup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.ExecuteUbergraph_Startup");

	AStartup_C_ExecuteUbergraph_Startup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
