#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_EditorStyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EditorStyle.EditorStyleSettings
// 0x0168 (0x0190 - 0x0028)
class UEditorStyleSettings : public UObject
{
public:
	struct FLinearColor                                SelectionColor;                                           // 0x0028(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                PressedSelectionColor;                                    // 0x0038(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                InactiveSelectionColor;                                   // 0x0048(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                KeyboardFocusColor;                                       // 0x0058(0x0010) (Edit, Config, IsPlainOldData)
	TEnumAsByte<EColorVisionDeficiency>                ColorVisionDeficiencyPreviewType;                         // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	unsigned char                                      bUseSmallToolBarIcons : 1;                                // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      bUseGrid : 1;                                             // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FLinearColor                                RegularColor;                                             // 0x0070(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                RuleColor;                                                // 0x0080(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                CenterColor;                                              // 0x0090(0x0010) (Edit, Config, IsPlainOldData)
	uint32_t                                           GridSnapSize;                                             // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableWindowAnimations : 1;                              // 0x00A4(0x0001) (Edit, Config)
	unsigned char                                      bShowFriendlyNames : 1;                                   // 0x00A4(0x0001) (Edit, Config)
	unsigned char                                      bExpandConfigurationMenus : 1;                            // 0x00A4(0x0001) (Edit, Config)
	unsigned char                                      bShowProjectMenus : 1;                                    // 0x00A4(0x0001) (Config)
	unsigned char                                      bShowLaunchMenus : 1;                                     // 0x00A4(0x0001) (Config)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FLinearColor                                LogBackgroundColor;                                       // 0x00A8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogSelectionBackgroundColor;                              // 0x00B8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogNormalColor;                                           // 0x00C8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogCommandColor;                                          // 0x00D8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogWarningColor;                                          // 0x00E8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogErrorColor;                                            // 0x00F8(0x0010) (Edit, Config, IsPlainOldData)
	unsigned char                                      bShowAllAdvancedDetails : 1;                              // 0x0108(0x0001) (Config)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	int                                                LogFontSize;                                              // 0x010C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ELogTimes>                             LogTimestampMode;                                         // 0x0110(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPromoteOutputLogWarningsDuringPIE;                       // 0x0111(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EAssetEditorOpenLocation                           AssetEditorOpenLocation;                                  // 0x0112(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7D];                                      // 0x0113(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditorStyle.EditorStyleSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
