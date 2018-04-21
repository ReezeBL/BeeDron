// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ConanSword_DLC_ModController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConanSword_DLC_ModController.BP_ConanSword_DLC_ModController_C.ModDataTableOperations
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ConanSword_DLC_ModController_C::ModDataTableOperations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanSword_DLC_ModController.BP_ConanSword_DLC_ModController_C.ModDataTableOperations");

	ABP_ConanSword_DLC_ModController_C_ModDataTableOperations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConanSword_DLC_ModController.BP_ConanSword_DLC_ModController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ConanSword_DLC_ModController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConanSword_DLC_ModController.BP_ConanSword_DLC_ModController_C.UserConstructionScript");

	ABP_ConanSword_DLC_ModController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
