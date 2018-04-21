// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_StartupGameMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StartupGameMode.StartupGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStartupGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StartupGameMode.StartupGameMode_C.UserConstructionScript");

	AStartupGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
