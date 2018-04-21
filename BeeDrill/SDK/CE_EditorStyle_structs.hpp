#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EditorStyle.EAssetEditorOpenLocation
enum class EAssetEditorOpenLocation : uint8_t
{
	EAssetEditorOpenLocation__Default = 0,
	EAssetEditorOpenLocation__NewWindow = 1,
	EAssetEditorOpenLocation__MainWindow = 2,
	EAssetEditorOpenLocation__ContentBrowser = 3,
	EAssetEditorOpenLocation__LastDockedWindowOrNewWindow = 4,
	EAssetEditorOpenLocation__LastDockedWindowOrMainWindow = 5,
	EAssetEditorOpenLocation__LastDockedWindowOrContentBrowser = 6,
	EAssetEditorOpenLocation__EAssetEditorOpenLocation_MAX = 7
};


// Enum EditorStyle.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	CVD_NormalVision               = 0,
	CVD_Deuteranomly               = 1,
	CVD_Deuteranopia               = 2,
	CVD_Protanomly                 = 3,
	CVD_Protanopia                 = 4,
	CVD_Tritanomaly                = 5,
	CVD_Tritanopia                 = 6,
	CVD_Achromatopsia              = 7,
	CVD_MAX                        = 8
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
