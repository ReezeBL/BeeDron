#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_IntentionPicker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_IntentionPicker.W_IntentionPicker_C
// 0x0060 (0x0400 - 0x03A0)
class UW_IntentionPicker_C : public UWindowRoot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class UW_CommunityButton_C*                        B_Experimental;                                           // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_CommunityButton_C*                        B_HardCore;                                               // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_CommunityButton_C*                        B_Purist;                                                 // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_CommunityButton_C*                        B_Random;                                                 // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_CommunityButton_C*                        B_Relaxed;                                                // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UW_CommunityButton_C*                        B_RolePlaying;                                            // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Description;                                              // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ServerIntention;                                          // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                serverType;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalCommunitySelected;                                  // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_IntentionPicker.W_IntentionPicker_C");
		return ptr;
	}


	void SetupKeyNavigation(class URootWidget* SkipButton);
	void SetCommunityDescription(int Index);
	void BndEvt__Balanced_K2Node_ComponentBoundEvent_1121_SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__Roleplaying_K2Node_ComponentBoundEvent_1369_SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__CreativeBuilding_K2Node_ComponentBoundEvent_1399_SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__Casual_K2Node_ComponentBoundEvent_1430_SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__Hardcore_K2Node_ComponentBoundEvent_1462_SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__Experimental_K2Node_ComponentBoundEvent_1495_SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__Balanced_K2Node_ComponentBoundEvent_2528_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__Roleplaying_K2Node_ComponentBoundEvent_2548_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__CreativeBuilding_K2Node_ComponentBoundEvent_2569_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__Casual_K2Node_ComponentBoundEvent_2591_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__Hardcore_K2Node_ComponentBoundEvent_2614_SignalClicked__DelegateSignature(class UFCButton* Button);
	void BndEvt__Experimental_K2Node_ComponentBoundEvent_2638_SignalClicked__DelegateSignature(class UFCButton* Button);
	void StartState(class URootWidget* SkipButton);
	void BndEvt__B_Purist_K2Node_ComponentBoundEvent_91_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__B_Relaxed_K2Node_ComponentBoundEvent_140_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__B_HardCore_K2Node_ComponentBoundEvent_192_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__B_RolePlaying_K2Node_ComponentBoundEvent_247_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__B_Experimental_K2Node_ComponentBoundEvent_273_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__B_Random_K2Node_ComponentBoundEvent_300_SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void BndEvt__B_Purist_K2Node_ComponentBoundEvent_309_SignalDescription__DelegateSignature(const struct FText& Description);
	void BndEvt__B_Relaxed_K2Node_ComponentBoundEvent_341_SignalDescription__DelegateSignature(const struct FText& Description);
	void BndEvt__B_HardCore_K2Node_ComponentBoundEvent_374_SignalDescription__DelegateSignature(const struct FText& Description);
	void BndEvt__B_RolePlaying_K2Node_ComponentBoundEvent_408_SignalDescription__DelegateSignature(const struct FText& Description);
	void BndEvt__B_Experimental_K2Node_ComponentBoundEvent_443_SignalDescription__DelegateSignature(const struct FText& Description);
	void BndEvt__B_Random_K2Node_ComponentBoundEvent_479_SignalDescription__DelegateSignature(const struct FText& Description);
	void ExecuteUbergraph_W_IntentionPicker(int EntryPoint);
	void SignalCommunitySelected__DelegateSignature(TEnumAsByte<EServerCommunity> Community);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
