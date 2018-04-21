#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_ConanGameInstanceInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ConanGameInstanceInterface.ConanGameInstanceInterface_C
// 0x0000 (0x0028 - 0x0028)
class UConanGameInstanceInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConanGameInstanceInterface.ConanGameInstanceInterface_C");
		return ptr;
	}


	void ShowJoinSessionErrorIfAny();
	void BeginJoinSession(const struct FBlueprintSessionResult& JoiningSession, class APlayerController* JoiningPlayerController);
	void ClientGotoMainMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
