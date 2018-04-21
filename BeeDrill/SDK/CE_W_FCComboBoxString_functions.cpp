// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_FCComboBoxString_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FCComboBoxString.W_FCComboBoxString_C.On_ComboBox_GenerateWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UW_FCComboBoxString_C::On_ComboBox_GenerateWidget(const class FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FCComboBoxString.W_FCComboBoxString_C.On_ComboBox_GenerateWidget");

	UW_FCComboBoxString_C_On_ComboBox_GenerateWidget_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
