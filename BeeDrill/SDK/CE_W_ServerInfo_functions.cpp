// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ServerInfo.W_ServerInfo_C.KeyNavOnInvokeBP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Pressed                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UW_ServerInfo_C::KeyNavOnInvokeBP(bool* Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerInfo.W_ServerInfo_C.KeyNavOnInvokeBP");

	UW_ServerInfo_C_KeyNavOnInvokeBP_Params params;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_ServerInfo.W_ServerInfo_C.BndEvt__B_SelectThis_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_ServerInfo_C::BndEvt__B_SelectThis_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerInfo.W_ServerInfo_C.BndEvt__B_SelectThis_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature");

	UW_ServerInfo_C_BndEvt__B_SelectThis_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerInfo.W_ServerInfo_C.KeyNavOnSelectedBP
// (BlueprintCallable, BlueprintEvent)

void UW_ServerInfo_C::KeyNavOnSelectedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerInfo.W_ServerInfo_C.KeyNavOnSelectedBP");

	UW_ServerInfo_C_KeyNavOnSelectedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerInfo.W_ServerInfo_C.ShowAsSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerInfo_C::ShowAsSelected(bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerInfo.W_ServerInfo_C.ShowAsSelected");

	UW_ServerInfo_C_ShowAsSelected_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerInfo.W_ServerInfo_C.PlayFavoriteAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UW_ServerInfo_C::PlayFavoriteAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerInfo.W_ServerInfo_C.PlayFavoriteAnimation");

	UW_ServerInfo_C_PlayFavoriteAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_ServerInfo.W_ServerInfo_C.ExecuteUbergraph_W_ServerInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_ServerInfo_C::ExecuteUbergraph_W_ServerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ServerInfo.W_ServerInfo_C.ExecuteUbergraph_W_ServerInfo");

	UW_ServerInfo_C_ExecuteUbergraph_W_ServerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
