#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Qos_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Qos.QosBeaconClient.ServerQosRequest
struct AQosBeaconClient_ServerQosRequest_Params
{
	class FString                                      InSessionId;                                              // (Parm, ZeroConstructor)
};

// Function Qos.QosBeaconClient.ClientQosResponse
struct AQosBeaconClient_ClientQosResponse_Params
{
	EQosResponseType                                   response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
