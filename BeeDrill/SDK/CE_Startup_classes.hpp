#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Startup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Startup.Startup_C
// 0x0008 (0x03E0 - 0x03D8)
class AStartup_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Startup.Startup_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Startup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
