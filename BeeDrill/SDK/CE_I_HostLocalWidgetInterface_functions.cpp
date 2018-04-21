// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_I_HostLocalWidgetInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C.SetMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   mapName                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UI_HostLocalWidgetInterface_C::SetMapName(const struct FName& mapName, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C.SetMapName");

	UI_HostLocalWidgetInterface_C_SetMapName_Params params;
	params.mapName = mapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C.GetDefaultMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   DefaultMapName                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UI_HostLocalWidgetInterface_C::GetDefaultMapName(struct FName* DefaultMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HostLocalWidgetInterface.I_HostLocalWidgetInterface_C.GetDefaultMapName");

	UI_HostLocalWidgetInterface_C_GetDefaultMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultMapName != nullptr)
		*DefaultMapName = params.DefaultMapName;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
