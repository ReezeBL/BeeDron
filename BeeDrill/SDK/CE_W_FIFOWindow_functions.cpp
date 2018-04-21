// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_W_FIFOWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FIFOWindow.W_FIFOWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UW_FIFOWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOWindow.W_FIFOWindow_C.Tick");

	UW_FIFOWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FIFOWindow.W_FIFOWindow_C.ShowMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// EFIFOStyle*                    Style                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  Header                         (ConstParm, Parm, OutParm, ReferenceParm)

void UW_FIFOWindow_C::ShowMessage(EFIFOStyle* Style, struct FText* Text, struct FText* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOWindow.W_FIFOWindow_C.ShowMessage");

	UW_FIFOWindow_C_ShowMessage_Params params;
	params.Style = Style;
	params.Text = Text;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FIFOWindow.W_FIFOWindow_C.Event Add To Parent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFIFOStyle                     Style                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// struct FText                   Header                         (Parm)

void UW_FIFOWindow_C::Event_Add_To_Parent(EFIFOStyle Style, const struct FText& Text, const struct FText& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOWindow.W_FIFOWindow_C.Event Add To Parent");

	UW_FIFOWindow_C_Event_Add_To_Parent_Params params;
	params.Style = Style;
	params.Text = Text;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FIFOWindow.W_FIFOWindow_C.ExecuteUbergraph_W_FIFOWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_FIFOWindow_C::ExecuteUbergraph_W_FIFOWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FIFOWindow.W_FIFOWindow_C.ExecuteUbergraph_W_FIFOWindow");

	UW_FIFOWindow_C_ExecuteUbergraph_W_FIFOWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
