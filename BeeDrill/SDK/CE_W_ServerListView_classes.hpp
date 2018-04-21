#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_ServerListView_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_ServerListView.W_ServerListView_C
// 0x0030 (0x0550 - 0x0520)
class UW_ServerListView_C : public UServerListView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (Transient, DuplicateTransient)
	class UW_NavigatableGridPanel_C*                   ServerList;                                               // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ScrollToMe;                                               // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalCloseActiveDialog;                                  // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ServerListView.W_ServerListView_C");
		return ptr;
	}


	bool CloseActiveSubDialog();
	void BndEvt__ServerList_K2Node_ComponentBoundEvent_0_SignalEntrySelectedDelegate__DelegateSignature(class URootWidget* entry);
	void ResetLastSelected();
	void ExecuteUbergraph_W_ServerListView(int EntryPoint);
	void SignalCloseActiveDialog__DelegateSignature();
	void ScrollToMe__DelegateSignature(class URootWidget* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
