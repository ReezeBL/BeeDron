#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_BP_ConanSword_DLC_ModController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConanSword_DLC_ModController.BP_ConanSword_DLC_ModController_C
// 0x0000 (0x03E8 - 0x03E8)
class ABP_ConanSword_DLC_ModController_C : public AModController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConanSword_DLC_ModController.BP_ConanSword_DLC_ModController_C");
		return ptr;
	}


	void ModDataTableOperations();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
