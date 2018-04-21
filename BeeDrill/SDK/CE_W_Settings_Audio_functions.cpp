// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_Settings_Audio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Settings_Audio.W_Settings_Audio_C.GetVoiceChatVolumeVisibiliy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UW_Settings_Audio_C::GetVoiceChatVolumeVisibiliy()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Settings_Audio.W_Settings_Audio_C.GetVoiceChatVolumeVisibiliy");

	UW_Settings_Audio_C_GetVoiceChatVolumeVisibiliy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
