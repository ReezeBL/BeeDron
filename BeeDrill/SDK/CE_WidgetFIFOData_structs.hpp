#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_ConanSandbox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct WidgetFIFOData.WidgetFIFOData
// 0x0038
struct FWidgetFIFOData
{
	EFIFOStyle                                         Style_11_72221A0647F55A6088EAC993B43E2DD0;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Text_9_C7E539F949D8678439AA958ACA33AFF2;                  // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Header_10_F85EC5634E266A2CC8A8238E23F81AEE;               // 0x0020(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
