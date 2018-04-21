#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_RconPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RconPlugin.RconCommandObject
// 0x0028 (0x0050 - 0x0028)
class URconCommandObject : public UObject
{
public:
	struct FName                                       RconCommandName;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      RconHelpString;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RconPlugin.RconCommandObject");
		return ptr;
	}


	bool RconCommand(class UWorld* World, TArray<class FString> Args, class FString* Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
