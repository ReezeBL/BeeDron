#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_NudityOption_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_NudityOption.W_NudityOption_C
// 0x07A8 (0x0AC8 - 0x0320)
class UW_NudityOption_C : public URootWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (Transient, DuplicateTransient)
	class UW_ButtonNormal_C*                           CB_Full;                                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_ButtonNormal_C*                           CB_No;                                                    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_ButtonNormal_C*                           CB_Partial;                                               // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  MaximumNudityText;                                        // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    Overlay_Full;                                             // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_4;                                              // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_5;                                              // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_6;                                              // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    SignalSelectionChanged;                                   // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CharacterCreation;                                        // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x037C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UTexture2D*                                  CheckedTexture;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  HoverTexture;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  UncheckedTexture;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 FontColorUnchecked;                                       // 0x03A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 FontColorChecked;                                         // 0x03C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFCButtonStyle                              NudityButtonStyleCharacterCreation;                       // 0x03F0(0x06C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFCButton*                                   PreviouslyChecked;                                        // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    SignalScrollToMe;                                         // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NudityOption.W_NudityOption_C");
		return ptr;
	}


	void HasCensoredDLC(bool* bHasDlc);
	struct FSlateColor GetNoFontColor();
	struct FSlateColor GetFullFontColor();
	struct FSlateColor GetPartialFontColor();
	void OnReturned_5FBBBBED4755B4328C73AC8C23885A4B(bool PurchaseOccured);
	void OnFailed_48AA32DF49D864B24C71B2A6FE6448FC();
	void OnSucceeded_48AA32DF49D864B24C71B2A6FE6448FC();
	void OnFailed_79A5D5454E3B89AED112ADA95FBDACE0();
	void OnSucceeded_79A5D5454E3B89AED112ADA95FBDACE0();
	void Construct();
	void SetMaximumNudityText();
	void SetSelected(TEnumAsByte<ENudity> Nudity);
	void BndEvt__CB_Full_K2Node_ComponentBoundEvent_24_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__CB_Partial_K2Node_ComponentBoundEvent_35_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__CB_No_K2Node_ComponentBoundEvent_47_SignalClicked__DelegateSignature(class UFCButton* Button);
	void CheckCensored();
	void BndEvt__CB_No_K2Node_ComponentBoundEvent_14_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__CB_Partial_K2Node_ComponentBoundEvent_39_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__CB_Full_K2Node_ComponentBoundEvent_65_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void ExecuteUbergraph_W_NudityOption(int EntryPoint);
	void SignalScrollToMe__DelegateSignature(class UUserWidget* Widget);
	void SignalSelectionChanged__DelegateSignature(TEnumAsByte<ENudity> Nudity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
