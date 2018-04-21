// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_UIResourceSingleton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UIResourceSingleton.BP_UIResourceSingleton_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_UIResourceSingleton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UIResourceSingleton.BP_UIResourceSingleton_C.UserConstructionScript");

	UBP_UIResourceSingleton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
