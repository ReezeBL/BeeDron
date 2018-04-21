#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_I_HostLocalWidgetInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UI_HostLocalWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C");
		return ptr;
	}


	void SetMapName(const struct FName& mapName, bool* dummy);
	void GetDefaultMapName(struct FName* DefaultMapName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
