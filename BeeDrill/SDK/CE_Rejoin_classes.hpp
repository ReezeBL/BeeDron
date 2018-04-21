#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Rejoin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Rejoin.RejoinCheck
// 0x0198 (0x01C0 - 0x0028)
class URejoinCheck : public UObject
{
public:
	ERejoinStatus                                      LastKnownStatus;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRejoinAfterCheck;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttemptingRejoin;                                        // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x195];                                     // 0x002B(0x0195) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Rejoin.RejoinCheck");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
