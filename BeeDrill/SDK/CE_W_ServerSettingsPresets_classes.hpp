#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerSettingsPresets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_ServerSettingsPresets.W_ServerSettingsPresets_C
// 0x07A0 (0x0AC0 - 0x0320)
class UW_ServerSettingsPresets_C : public URootWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (Transient, DuplicateTransient)
	class UW_ButtonNormal_C*                           CB_Barbaric;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_ButtonNormal_C*                           CB_Civilized;                                             // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_ButtonNormal_C*                           CB_Decadent;                                              // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    SignalSetDifficultyCivilized;                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CharacterCreation;                                        // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x0354(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class UTexture2D*                                  CheckedTexture;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  HoverTexture;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  UncheckedTexture;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 FontColorUnchecked;                                       // 0x0378(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 FontColorChecked;                                         // 0x03A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFCButtonStyle                              NudityButtonStyleCharacterCreation;                       // 0x03C8(0x06C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFCButton*                                   PreviouslyChecked;                                        // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    SignalSetDifficultyDecadent;                              // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalSetDifficultyBarbaric;                              // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScrollIntoView;                                           // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ServerSettingsPresets.W_ServerSettingsPresets_C");
		return ptr;
	}


	void HasCensoredDLC(bool* bHasDlc);
	struct FSlateColor GetNoFontColor();
	struct FSlateColor GetFullFontColor();
	struct FSlateColor GetPartialFontColor();
	void Construct();
	void BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature(class UFCButton* Button);
	void OnBarAccepted(EMessageBoxDialogResult Result);
	void BndEvt__CB_Civilized_K2Node_ComponentBoundEvent_26_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__CB_Decadent_K2Node_ComponentBoundEvent_51_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__CB_Barbaric_K2Node_ComponentBoundEvent_77_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void OnDecAccepted(EMessageBoxDialogResult Result);
	void OnCivAccepted(EMessageBoxDialogResult Result);
	void ExecuteUbergraph_W_ServerSettingsPresets(int EntryPoint);
	void ScrollIntoView__DelegateSignature();
	void SignalSetDifficultyBarbaric__DelegateSignature();
	void SignalSetDifficultyDecadent__DelegateSignature();
	void SignalSetDifficultyCivilized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
