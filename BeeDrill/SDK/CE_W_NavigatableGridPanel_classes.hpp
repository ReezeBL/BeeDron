#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_NavigatableGridPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_NavigatableGridPanel.W_NavigatableGridPanel_C
// 0x0000 (0x03B0 - 0x03B0)
class UW_NavigatableGridPanel_C : public UNavigatableGridPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NavigatableGridPanel.W_NavigatableGridPanel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
