#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_ConanSandbox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ConanSandbox.AddGuildMemberCallProxy
// 0x0040 (0x0068 - 0x0028)
class UAddGuildMemberCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UUniqueID*                                   PlayerId;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   guildId;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AddGuildMemberCallProxy");
		return ptr;
	}


	class UAddGuildMemberCallProxy* STATIC_AddGuildMember(class UObject* WorldContextObject, class UUniqueID* PlayerId, class UUniqueID* guildId, int Rank);
};


// Class ConanSandbox.AdjustableCameraComponent
// 0x0010 (0x0870 - 0x0860)
class UAdjustableCameraComponent : public UCameraComponent
{
public:
	float                                              PerspectiveNearClipPlane;                                 // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0864(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AdjustableCameraComponent");
		return ptr;
	}

};


// Class ConanSandbox.BuildingSocketComponent
// 0x0060 (0x09B0 - 0x0950)
class UBuildingSocketComponent : public UInstancedStaticMeshComponent
{
public:
	TArray<struct FSocketStaticData>                   PerInstanceStaticSocketData;                              // 0x0950(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0960(0x003C) MISSED OFFSET
	int                                                m_CachedTargetSocketTypesMask;                            // 0x099C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_HasCachedTargetSocketTypesMask;                         // 0x09A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x09A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildingSocketComponent");
		return ptr;
	}


	bool GetSocketData(int InstanceIndex, struct FBuildingSocketData* SocketData);
	TArray<int> GetIndexesOfSocketTypes(int SocketTypes);
	int GetBestAttachStabilityForSocket(int InstanceIndex);
	TArray<TEnumAsByte<EBuildingSocketType>> GetAllSocketTypes();
};


// Class ConanSandbox.SuspendableInterface
// 0x0000 (0x0028 - 0x0028)
class USuspendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SuspendableInterface");
		return ptr;
	}


	bool TickIndependentPauseResume();
	void ReceiveOnResume();
	void ReceiveOnPause();
	void ReceiveOnLODChanged(int newLOD);
	bool HasCustomTickInterval();
	float GetCustomTickInterval(int newLOD);
};


// Class ConanSandbox.HasReplicatedSubobjectsInterface
// 0x0000 (0x0028 - 0x0028)
class UHasReplicatedSubobjectsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HasReplicatedSubobjectsInterface");
		return ptr;
	}


	void OnDisableReplication();
};


// Class ConanSandbox.LandClaim
// 0x0078 (0x0448 - 0x03D0)
class ALandClaim : public AActor
{
public:
	int                                                CellSize;                                                 // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	TArray<struct FLandClaimCellData>                  CellData;                                                 // 0x03D8(0x0010) (ZeroConstructor)
	TMap<uint32_t, class ULandClaimCell*>              Cells;                                                    // 0x03E8(0x0050) (ZeroConstructor)
	EClaimChannel                                      Channel;                                                  // 0x0438(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	float                                              RadiusCoefficient;                                        // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ScaledCellSize;                                           // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               NoOwnership;                                              // 0x0444(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0445(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LandClaim");
		return ptr;
	}


	bool GetLandClaimCellsFromLine(const struct FVector& A, const struct FVector& B, float RequiredCoverage, TArray<class ULandClaimCell*>* InOutCells);
	bool GetLandClaimCells(const struct FBoxSphereBounds& Bounds, TArray<class ULandClaimCell*>* InOutCells);
	class ULandClaimCell* GetLandClaimCell(const struct FVector& Position);
	bool GetCellBounds(class ULandClaimCell* Cell, float MinZ, float MaxZ, struct FBoxSphereBounds* Bounds);
	bool STATIC_AllowClaim(const struct FClaimOwnershipParams& ExistingParams, const struct FClaimOwnershipParams& RequestedParams);
};


// Class ConanSandbox.LandClaimSystem
// 0x0000 (0x0028 - 0x0028)
class ULandClaimSystem : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LandClaimSystem");
		return ptr;
	}


	void STATIC_ReleaseClaimSphere(class UObject* WorldContextObject, EClaimChannel Channel, const struct FVector& Location, float Radius);
	void STATIC_ReleaseClaimBox(class UObject* WorldContextObject, EClaimChannel Channel, const struct FBox& Box);
	void STATIC_GetLandOwner(class UObject* WorldContextObject, EClaimChannel Channel, const struct FVector& WorldLocation, struct FClaimOwnershipParams* outParams);
	class ALandClaim* STATIC_GetLandClaim(class UObject* WorldContextObject, EClaimChannel Channel);
	void STATIC_ClaimSphere(class UObject* WorldContextObject, EClaimChannel Channel, const struct FClaimOwnershipParams& OwnershipParams, const struct FVector& Location, float Radius);
	void STATIC_ClaimBox(class UObject* WorldContextObject, EClaimChannel Channel, const struct FClaimOwnershipParams& OwnershipParams, const struct FBox& Box);
	bool STATIC_CanClaimSphere(class UObject* WorldContextObject, EClaimChannel Channel, const struct FClaimOwnershipParams& OwnershipParams, const struct FVector& Location, float Radius);
	bool STATIC_CanClaimBox(class UObject* WorldContextObject, EClaimChannel Channel, const struct FClaimOwnershipParams& OwnershipParams, const struct FBox& Box);
};


// Class ConanSandbox.BuildableBase
// 0x0128 (0x04F8 - 0x03D0)
class ABuildableBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	int                                                SourceItemTemplateID;                                     // 0x03E0(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsABrush;                                                 // 0x03E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBypassBuildingBlockerVolumes;                          // 0x03E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	class ABuildableBase*                              m_PlacementHelper;                                        // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UBuildingSocketComponent*                    BuildSockets;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IsSnappedToSocket;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EBuildingSocketType>>           TargetSocketTypes;                                        // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxHealth;                                                // 0x0410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHealth;                                            // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AffectedByDamageTiers;                                    // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClaimRadiusBuilding;                                      // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClaimRadiusFoliage;                                       // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceLandclaim;                                         // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	struct FVector                                     ClaimLocation;                                            // 0x0428(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	int                                                TemplateId;                                               // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   OwnerUniqueID;                                            // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresForcedGhostRefresh;                               // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class ABuildableBase*                              m_MasterBuildable;                                        // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSocketlessConnection>               m_SocketlessConnections;                                  // 0x0450(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	class UBuildingModuleData*                         AttachedToModule;                                         // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BuildingPieceScore;                                       // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BuildingScore;                                            // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               DecayDisabled;                                            // 0x0478(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	int                                                DecayState;                                               // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0480(0x0004) MISSED OFFSET
	float                                              DecayTimestamp;                                           // 0x0484(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalReceivedOwnerUniqueID;                              // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FBuildableHealthEntry>               m_HealthPool;                                             // 0x04A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FHitResult>                          LastCanBePlacedOverlapResults;                            // 0x04B0(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<ESocketConfiguration>                       ValidSocketRotations;                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                TargetSocketTypesMask;                                    // 0x04D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FText                                       OwnerName;                                                // 0x04D8(0x0018) (Net)
	unsigned char                                      UnknownData10[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildableBase");
		return ptr;
	}


	void SignalReceivedOwnerUniqueID__DelegateSignature();
	void SetOwnerUniqueID(class UUniqueID* UID);
	void SetOwnerName(const class FString& newOwnerName, bool FromLoad);
	void SetBuildingScore(int score);
	void OnRep_OwnerUniqueID();
	void OnRep_HealthPool();
	void LoadBuildingOwner();
	bool IsOwner(class APawn* Pawn, bool bSendGuiNotification);
	bool IsInAllowedSplineBuildLimit();
	bool IsCompletelyInsideCollision();
	struct FText GetOwnerName();
	float GetDecayTimestamp();
	int GetBuildingScore();
	void DecayBuildable();
	void CleanUp();
	int ChangeBuildingScore(int amount);
	TEnumAsByte<ECanBePlacedResult> CanBePlaced(class ABuildableBase* AttachTo, int InstanceIndex, class FString* FailedMessage);
	bool CanAccessPlaceableInventory(class APawn* accessingPawn);
};


// Class ConanSandbox.BuildingModuleData
// 0x0138 (0x0160 - 0x0028)
class UBuildingModuleData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0028(0x000C) MISSED OFFSET
	int                                                CurrentHealth;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int8_t                                             Stability;                                                // 0x0038(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsFoundation;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsPillar;                                                 // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	class UInstancedBuildingComponent*                 OwnerComponent;                                           // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FVector                                     WorldLocation;                                            // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FQuat                                       WorldRotation;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<class UBuildingModuleData*>                 m_BestPath;                                               // 0x0080(0x0010) (ZeroConstructor)
	TArray<int8_t>                                     m_SocketBestStabilities;                                  // 0x0090(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	TArray<struct FSocketlessConnection>               m_SocketlessConnections;                                  // 0x00A8(0x0010) (ZeroConstructor)
	struct FSocketlessConnection                       m_ConnectedTo;                                            // 0x00B8(0x0010)
	TArray<struct FBuildableHealthEntry>               m_HealthPool;                                             // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<float>                                      m_HealthPoolPercentages;                                  // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData06[0x78];                                      // 0x00E8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildingModuleData");
		return ptr;
	}


	void OnRep_SocketBestStabilities();
	void OnRep_HealthPoolPercentages();
	int GetStability();
};


// Class ConanSandbox.InteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InteractableInterface");
		return ptr;
	}


	void InteractableSelectionChanged(bool isSelected, class APlayerController* Instigator, int InstanceIndex);
	void InteractableOnCancel(class APlayerController* Instigator);
	bool InteractableMenuDisabled();
	void InteractableMenu(class URadialMenu* RadialMenu, int HitIndex);
	struct FName InteractableGetUIModuleName();
	struct FName InteractableGetSimpleDisplayText();
	struct FName InteractableGetRepairUIModuleName();
	void InteractableDefaultAction(struct FText* Name, class UTexture2D** Icon);
	void InteractableActivate(class UPrimitiveComponent* Component, class APlayerController* Instigator, int HitIndex);
	void ClientInteractableActivate(class UPrimitiveComponent* Component, class APlayerController* Instigator, int HitIndex);
};


// Class ConanSandbox.TooltipWidget
// 0x0008 (0x0248 - 0x0240)
class UTooltipWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TooltipWidget");
		return ptr;
	}

};


// Class ConanSandbox.RootWidget
// 0x00E0 (0x0320 - 0x0240)
class URootWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    KeyNavOnSelectedEvent;                                    // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class URootWidget>                  KeyNavLeft;                                               // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavRight;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavAbove;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavBelow;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavTab;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavChildLeft;                                          // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavChildRight;                                         // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavChildAbove;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavChildBelow;                                         // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavChildTab;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  KeyNavChildren;                                           // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               KeyNavFocusOnClick;                                       // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeyNavAutoSetBack;                                        // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02AA(0x0006) MISSED OFFSET
	class UClass*                                      TooltipWidgetClass;                                       // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      KeyNavIndicatorClass;                                     // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PositiveFeedbackColor;                                    // 0x02C0(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                NegativeFeedbackColor;                                    // 0x02D0(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                NeutralFeedbackColor;                                     // 0x02E0(0x0010) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET
	class UWindowRoot*                                 m_Window;                                                 // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class URootWidget>                  m_Parent;                                                 // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeyNavIndicator*                            m_KeyNavIndicator;                                        // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RootWidget");
		return ptr;
	}


	class UWidget* SlotGetTooltipWidget();
	void SignalKeyNavSelectionChanged__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void SetWindow(class UWindowRoot* newWindow);
	void SetupUI();
	void SetupNewChild(class UUserWidget* child);
	bool NavigateToSiblingBP(TEnumAsByte<EGUINavDirection> Direction);
	void KeyNavOnSelected(bool selected, TEnumAsByte<EGUINavDirection> Direction, class URootWidget* previousOrNextWidget);
	bool KeyNavOnInvokeBP(bool Pressed);
	bool KeyNavOnAnalogInputEventBP(const struct FAnalogInputEvent& AnalogInputEvent);
	void KeyNavMakeSelected(TEnumAsByte<EGUINavDirection> Direction, class URootWidget* prevSelection);
	void STATIC_KeyNavLinkWidgetArray(TEnumAsByte<EOrientation> Orientation, TArray<class UWidget*> array);
	void STATIC_KeyNavLinkPanelChildren(class UPanelWidget* panel, TEnumAsByte<EOrientation> Orientation, class URootWidget* precedingWidget, class URootWidget* followingWidget);
	void KeyNavHighlight(bool highlight);
	class URootWidget* STATIC_GetRootWidgetFromContentWidget(class UContentWidget* ContentWidget);
};


// Class ConanSandbox.GUIModule_Activate_CallProxy
// 0x0030 (0x0058 - 0x0028)
class UGUIModule_Activate_CallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginLoad;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGUIModule*                                  GUIModule;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GUIModule_Activate_CallProxy");
		return ptr;
	}


	class UGUIModule_Activate_CallProxy* STATIC_GUIModule_Activate(class UGUIModule* GUIModule, bool Activate, bool Force, bool blocking);
};


// Class ConanSandbox.GUIModule
// 0x00D8 (0x0100 - 0x0028)
class UGUIModule : public UObject
{
public:
	struct FName                                       ModuleName;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToggleActionName;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 ToggleActionSound;                                        // 0x0038(0x0018) (Edit, BlueprintVisible)
	bool                                               CloseOnShortcutRelease;                                   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnESC;                                               // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnEndPlay;                                           // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreloadOnStartup;                                         // 0x0053(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NonBlockingLoad;                                          // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPersistent;                                             // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_ShowWhenDead;                                           // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MustBeBasePlayerChar;                                     // 0x0057(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGUIModuleCategory>                    Category;                                                 // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            WidgetClass;                                              // 0x0060(0x0020) (Edit, BlueprintVisible)
	class UWindowRoot*                                 RootWidget;                                               // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsFullscreen;                                             // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableShortcutWhenPlayerInputBlocked;                    // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalActivated;                                          // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginLoad;                                              // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGUIModuleController*                        m_ModuleController;                                       // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GUIModule");
		return ptr;
	}


	void Toggle();
	bool SlotESCPressed();
	void SlotActionShortcutReleased();
	void SlotActionShortcutPressed();
	void SignalActivated__DelegateSignature(class UGUIModule* module, bool IsActive);
	bool IsActive();
	int GetZOrder();
	TEnumAsByte<EGUIModuleState> GetModuleState();
	TEnumAsByte<EGUIModuleActivationReason> GetActivationReason();
	void Enable(bool Enabled);
	class UWindowRoot* Activate(bool Activate, bool Force);
};


// Class ConanSandbox.WindowRoot
// 0x0080 (0x03A0 - 0x0320)
class UWindowRoot : public URootWidget
{
public:
	bool                                               CloseOnClick;                                             // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlockPlayerInput;                                         // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0322(0x0006) MISSED OFFSET
	struct FSlateSound                                 OpeningSlateSound;                                        // 0x0328(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 ClosingSlateSound;                                        // 0x0340(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    SignalClosing;                                            // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalOpened;                                             // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FGamepadHotkeyHelp>                  m_WindowHotkeys;                                          // 0x0378(0x0010) (ZeroConstructor)
	class UInputComponent*                             m_InputComponent;                                         // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGUIModule*                                  m_GUIModule;                                              // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.WindowRoot");
		return ptr;
	}


	void SignalOpened__DelegateSignature(class UWindowRoot* Window);
	void SignalClosing__DelegateSignature(class UWindowRoot* Window);
	void SetNeedMouseInput(bool useMouse);
	void SetInteractionActor(class AActor* Actor);
	void SetBlockMoveInput(bool block);
	void SetBlockLookInput(bool block);
	void Open(int ZOrder);
	bool IsOpen();
	bool GetNeedMouseInput();
	bool GetBlockMoveInput();
	bool GetBlockLookInput();
	void Close(bool Force);
};


// Class ConanSandbox.FCButton
// 0x0908 (0x0C28 - 0x0320)
class UFCButton : public URootWidget
{
public:
	struct FText                                       Label;                                                    // 0x0320(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<ETextJustify>                          LabelJustification;                                       // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FName                                       KeyShortcutName;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       GamepadKeyShortcutName;                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        GamepadIconKey;                                           // 0x0350(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               ShowOnlyGamepadIcon;                                      // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FFCButtonStyle                              Style;                                                    // 0x0370(0x06C0) (Edit, BlueprintVisible)
	bool                                               IsCheckable;                                              // 0x0A30(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ToggleWhenClicked;                                        // 0x0A31(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFCButtonToggleAction>                 ToggleAction;                                             // 0x0A32(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsChecked;                                                // 0x0A33(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              LabelFont;                                                // 0x0A38(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 HoveredFontColor;                                         // 0x0AA0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 PressedFontColor;                                         // 0x0AC8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 PressedHoveredFontColor;                                  // 0x0AF0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 FontColor;                                                // 0x0B18(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0B40(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalClicked;                                            // 0x0B58(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalPressed;                                            // 0x0B68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalReleased;                                           // 0x0B78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalToggled;                                            // 0x0B88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalMouseEnter;                                         // 0x0B98(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalMouseLeave;                                         // 0x0BA8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0BB8(0x0030) MISSED OFFSET
	class UMenuAnchor*                                 m_MenuAnchor;                                             // 0x0BE8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0BF0(0x0018) MISSED OFFSET
	TArray<class UFCButton*>                           m_SubButtons;                                             // 0x0C08(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0C18(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCButton");
		return ptr;
	}


	void UpdateVisualState();
	void SlotSubMenuOpenChanged(bool IsOpen);
	void SlotSubButtonClicked(class UFCButton* Button);
	class UWidget* SlotGetMenuContent();
	bool SlotESCPressed();
	void SignalToggled__DelegateSignature(class UFCButton* Button, bool IsChcked);
	void SignalReleased__DelegateSignature(class UFCButton* Button);
	void SignalPressed__DelegateSignature(class UFCButton* Button);
	void SignalMouseLeave__DelegateSignature(class UFCButton* Button, const struct FPointerEvent& MouseEvent);
	void SignalMouseEnter__DelegateSignature(class UFCButton* Button, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void SignalClicked__DelegateSignature(class UFCButton* Button);
	void SetLabel(const struct FText& buttonLabel);
	void SetIsChecked(bool checked, bool sendEvent);
	void SetIsCheckable(bool checkable);
	bool IsPressed();
	bool IsHovered();
	bool GetIsChecked();
	bool GetIsCheckable();
	void AddSubButton(class UFCButton* child);
};


// Class ConanSandbox.MessageBoxHotkeyHandler
// 0x0008 (0x0030 - 0x0028)
class UMessageBoxHotkeyHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MessageBoxHotkeyHandler");
		return ptr;
	}


	void SlotActionTriggered();
};


// Class ConanSandbox.MessageBoxWidget
// 0x00C0 (0x0460 - 0x03A0)
class UMessageBoxWidget : public UWindowRoot
{
public:
	struct FScriptMulticastDelegate                    SignalUserActionPerformed;                                // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      GamepadHelpEntryClass;                                    // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CustomButtonClass;                                        // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x03C0(0x0080) MISSED OFFSET
	TArray<class UMessageBoxHotkeyHandler*>            m_HotkeyHandlers;                                         // 0x0440(0x0010) (ZeroConstructor)
	TArray<struct FGamepadHotkeyHelp>                  m_MessageboxHotkeys;                                      // 0x0450(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MessageBoxWidget");
		return ptr;
	}


	void SlotControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SignalUserActionDelegate__DelegateSignature(EMessageBoxDialogResult Result);
	void ShowMessageBox();
	void SetTitle(const class FString& Title);
	void SetMessageBoxID(int ID);
	void SetMessage(const class FString& Message);
	void SetButtons(EMessageBoxButtons Buttons);
	void OnGamepadClick_Yes();
	void OnGamepadClick_OK();
	void OnGamepadClick_No();
	void OnGamepadClick_Custom();
	void OnGamepadClick_Cancel();
	void OnClick_Yes(class UFCButton* Button);
	void OnClick_OK(class UFCButton* Button);
	void OnClick_No(class UFCButton* Button);
	void OnClick_Custom(class UFCButton* Button);
	void OnClick_Cancel(class UFCButton* Button);
	void OnBackButtonPressed();
	void HideMessageBox();
	int GetMessageBoxID();
	class UMessageBoxWidget* STATIC_CreateMessageBoxFromWidget(class UObject* WorldContext, class UClass* WidgetClass, EMessageBoxButtons Buttons, const class FString& Title, const class FString& Message);
	class UMessageBoxWidget* STATIC_CreateMessageBox(class UObject* WorldContext, EMessageBoxButtons Buttons, const class FString& Title, const class FString& Message);
	void CloseMessageBox(bool bDoSuppressSignalUserActionEvent);
};


// Class ConanSandbox.InstancedBuildingComponent
// 0x0060 (0x09B0 - 0x0950)
class UInstancedBuildingComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0950(0x0010) MISSED OFFSET
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0960(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxHealth;                                                // 0x0968(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsPurgeTarget;                                            // 0x096C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	class UClass*                                      m_SourceClass;                                            // 0x0970(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0978(0x0008) MISSED OFFSET
	TArray<class UBuildingModuleData*>                 m_BuildingModules;                                        // 0x0980(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0990(0x0010) MISSED OFFSET
	TArray<class UBuildingModuleData*>                 m_RadialDamageDestroyedModules;                           // 0x09A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InstancedBuildingComponent");
		return ptr;
	}


	void SlotReceivedOwnerUniqueID();
	void RepairModuleWithIngredient(class AConanCharacter* Repairer, int InstanceId, int amount, bool ReplicateNow, TArray<int>* Ingredients);
	void RepairModuleWithAllIngredients(class AConanCharacter* Repairer, int InstanceId, int amount);
	void OnRep_SourceClass();
	void OnRep_Modules();
	void OnRep_MaxHealth();
	void OnDelegateDismantle(class URadialMenuEntry* menuEntry);
	void OnDelegateDecayDemolishDialog(class URadialMenuEntry* menuEntry);
	void OnDelegateDecayDemolish(EMessageBoxDialogResult Result);
	void InteractableMenu(class URadialMenu* RadialMenu, int HitIndex);
	int GetTemplateId();
	struct FVector GetSpawnLocation(int InstanceIndex, bool bWorldSpace);
	class UClass* GetSourceClass();
	TArray<struct FBuildableHealthEntry> GetSourceBuildingHealthEntry();
	struct FText GetOwnerName();
	float GetDecayTimestamp();
	int GetDecayStage();
	int GetBuildingScore();
	class UBuildingModuleData* GetBuildingData(int InstanceIndex);
	struct FVector GetAsSpawnLocation(const struct FTransform& MeshTransform);
	bool CanBeDamagedByTier(int Tier);
};


// Class ConanSandbox.BuildingBase
// 0x01C8 (0x06C0 - 0x04F8)
class ABuildingBase : public ABuildableBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04F8(0x0030) MISSED OFFSET
	class UInstancedBuildingComponent*                 InstancedBuildingMesh;                                    // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IsFoundation;                                             // 0x0530(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPillar;                                                 // 0x0531(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPurgeTarget;                                            // 0x0532(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0533(0x0001) MISSED OFFSET
	float                                              ShelterTemperature;                                       // 0x0534(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0538(0x0008) MISSED OFFSET
	TArray<class UStaticMesh*>                         CanUpgradeFrom;                                           // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInstancedBuildingComponent*>         m_InstancedBuildingMeshes;                                // 0x0550(0x0010) (ExportObject, ZeroConstructor)
	bool                                               m_IsLoading;                                              // 0x0560(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	TMap<uint32_t, class ABuildingBase*>               m_Buildings;                                              // 0x0568(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x05B8(0x0010) MISSED OFFSET
	class ABuildingBase*                               m_NextBuilding;                                           // 0x05C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABuildingBase*                               m_PrevBuilding;                                           // 0x05D0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_BuildingKey;                                            // 0x05D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5C];                                      // 0x05DC(0x005C) MISSED OFFSET
	TArray<class UClass*>                              m_BuildingClasses;                                        // 0x0638(0x0010) (ZeroConstructor)
	class UBuildSystemComponent*                       m_RandomizingBuildSystem;                                 // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                m_NumStartingPiecesForRandomization;                      // 0x0650(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_NumPiecesForRandomization;                              // 0x0654(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_NumFoundationPiecesForRandomization;                    // 0x0658(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	TArray<class UBuildingModuleData*>                 m_RandomizationModulesList;                               // 0x0660(0x0010) (ZeroConstructor)
	TMap<class UNetConnection*, bool>                  m_InitialReplicationCompletedForConnection;               // 0x0670(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildingBase");
		return ptr;
	}


	void SetBuildingScore(int Value);
	void RemoveBuildingInstance(class UStaticMesh* StaticMesh, int InstanceIndex);
	void RandomizeBuilding(class UBuildSystemComponent* BuildingSystem, int NumPieces);
	class ABuildingBase* GetRootMasterBuilding();
	float GetModifiedDamage(float DamageAmount, class UDamageType* DamageType, class AController* EventInstigator, class AActor* DamageCauser);
	void GetFloors(float MaxHeight, TArray<struct FBuildingModuleReference>* Modules);
	int GetBuildingScore();
	int ChangeBuildingScore(int amount);
	class UBuildingModuleData* AddModule(class UClass* Class, const struct FTransform& Transform, const struct FTransform& MeshTransform, TArray<struct FBuildableHealthEntry> StartingHealthPool, int BuildingFlags, class UUniqueID* PlacingPlayerUUID);
};


// Class ConanSandbox.TargetAreaHelpers
// 0x0000 (0x0028 - 0x0028)
class UTargetAreaHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetAreaHelpers");
		return ptr;
	}


	void STATIC_TransformTargetArea(const struct FTargetArea& Area, const struct FTransform& Transform, struct FTargetArea* TransformedArea);
	void STATIC_SetInvalid(struct FTargetArea* Area);
	void STATIC_MakeTargetAreaFromSurfaceDetails(const struct FVector& CenterOnSurface, const struct FVector& NormalOnSurface, float RadiusOnSurface, float ShellDepth, struct FTargetArea* NewArea);
	void STATIC_MakeTargetAreaFromSphere(const struct FVector& SphereCenter, float SphereRadius, const struct FVector& Normal, float ConeHalfAngleDegrees, struct FTargetArea* NewArea);
	void STATIC_IsValid(const struct FTargetArea& Area, bool* IsValid);
	void STATIC_IsInsideArea(const struct FTargetArea& Area, const struct FVector& Probe, bool* IsInside);
	void STATIC_GetSurfaceDetailsFromTargetArea(const struct FTargetArea& Area, struct FVector* CenterOnSurface, struct FVector* NormalOnSurface, float* RadiusOnSurface, float* ShellDepth);
	void STATIC_GetClosestPointOnSurface(const struct FVector& ViewLocation, const struct FTargetArea& Area, struct FVector* ClosestPointOnSurface, bool* InsideCone, bool* SurfaceOccluded);
	void STATIC_GetCenterOnSurface(const struct FTargetArea& Area, struct FVector* CenterOnSurface);
	void STATIC_DebugDrawTargetArea(class UObject* WorldContextObject, const struct FTargetArea& Area, int NumSides, const struct FLinearColor& Color, float LifeTime, float Thickness);
};


// Class ConanSandbox.AIFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AIFunctionLibrary");
		return ptr;
	}


	void STATIC_SnapToNavMesh(class UObject* WorldContextObject, float TraceZExtent, class UClass* FilterClass, class AController* Querier, TArray<struct FVector>* Points);
	void STATIC_SetMaxSampleAge(float NewMaxSampleAge, struct FMotionHistory* History);
	void STATIC_ReleaseInitialNavigationBuildLock(class UObject* WorldContextObject);
	void STATIC_NormalizeDestinationAngleForBlendDegrees(float sourceAngleDegrees, float* destinationAngleDegrees);
	void STATIC_LureSurroundingNPCs(class UObject* WorldContextObject, int Community, const struct FVector& LureOrigin, float LureRadius);
	bool STATIC_IsSpawningEnabled();
	bool IsNPCsTargetPlayersEnabled();
	bool IsNPCsTargetNPCsEnabled();
	bool IsNPCsTargetBuildingsEnabled();
	bool STATIC_IsInitialAISpawningPassEnabled();
	void STATIC_IncrementIntWithWrapAround(int Min, int Limit, int* Counter, int* ValueBeforeIncrement);
	void STATIC_GetYawAngleUtilities(class AActor* MainActor, TArray<struct FPredictedObstacle> SortedPredictedObstacles, float MinTimeUntilImpact, float MaxTimeUntilImpact, const struct FVector& ProbeVelocity, float MinDistance, struct FPolarUtilityVector* YawAngleUtilities);
	void STATIC_GetSnapToSurfaceRotator(const struct FVector& Right, const struct FVector& SurfaceImpactNormal, struct FRotator* SnapToSurfaceRotator);
	int STATIC_GetRemainingTilesToBuild(class UObject* WorldContextObject);
	struct FVector STATIC_GetRandomUnitVectorXY(float Z);
	int STATIC_GetRandomIndex(int Min, int Limit);
	void STATIC_GetProjectileLaunchVelocity(float InitialSpeed, const struct FVector& LaunchLocation, const struct FVector& TargetLocation, float MinAngle, float MaxAngle, float MinAngleDelta, float MinOffsetZ, float GravityScale, struct FVector* LaunchVelocity, float* OffsetZ);
	class UPathPoints* STATIC_GetOrAddPath(class APawn* BlackboardOwner, const struct FBlackboardKeySelector& BlackboardKey);
	void STATIC_GetLocationAndHeading(const struct FTransform& Transform, const struct FVector& LocalHeading, struct FVector* Location, struct FVector* Heading);
	bool STATIC_GetClosestPointsOnLines(const struct FVector& A1, const struct FVector& B1, const struct FVector& A2, const struct FVector& B2, struct FVector* P1, struct FVector* P2);
	bool STATIC_GetClosestPointsOfCollisionXY(const struct FVector& P1, const struct FVector& v1, const struct FVector& P2, const struct FVector& v2, float MinDistance, float* T, struct FVector* CPA1, struct FVector* CPA2);
	bool STATIC_GetClosestPointsOfApproachXY(const struct FVector& P1, const struct FVector& v1, const struct FVector& P2, const struct FVector& v2, float* T, struct FVector* CPA1, struct FVector* CPA2);
	struct FVector STATIC_GetClosestPointOnLineXY(const struct FVector& A, const struct FVector& B, const struct FVector& P);
	struct FVector STATIC_GetClosestPointOnLine(const struct FVector& A, const struct FVector& B, const struct FVector& P);
	bool STATIC_GetClosestPointOfApproachXY(const struct FVector& MovingPoint, const struct FVector& Velocity, const struct FVector& StationaryPoint, float* T, struct FVector* CPA);
	void STATIC_GetAvoidanceYawAngle(class AActor* MainActor, TArray<struct FPredictedObstacle> SortedPredictedObstacles, float MinDistance, float* YawAngle, int* NumTargetsAvoided);
	void STATIC_GetAverageVelocities(float IgnoreSeconds, struct FMotionHistory* History, struct FVector* AverageLinearVelocity, struct FVector* AverageAngularVelocity, bool* Success);
	bool STATIC_FindStraightPath(class UObject* WorldContextObject, const struct FVector& SourceLocation, const struct FVector& DestinationLocation, class UClass* FilterClass, class AController* Querier, TArray<struct FVector>* PathPoints, bool* Partial);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToWithPathProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class UPathPoints* Path, float AcceptanceRadius);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, bool AllowPartialPath, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap, class UClass* Filter);
	void STATIC_ClearMotionHistory(struct FMotionHistory* History);
	void STATIC_ClampToRadius(const struct FVector& Location, const struct FVector& Center, float Radius, struct FVector* ClampedLocation, bool* IsWithinRange);
	void STATIC_ClampDestinationToNavmesh(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Destination, class UClass* FilterClass, class AController* Querier, struct FVector* SnappedDestination, bool* Success);
	void STATIC_AppendSightSenseActorsInRange(class UObject* WorldContextObject, const struct FVector& Center, float Radius, TArray<class AActor*>* Matches);
	void STATIC_AppendSample(class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, struct FMotionHistory* History);
	bool STATIC_AppendPredictedObstaclesXY(class AActor* MainActor, const struct FVector& MainActorVelocity, TArray<class AActor*> CandidateObstacles, float TimeHorizonSeconds, float MinDistance, float MaxSearchAngle, TArray<struct FPredictedObstacle>* SortedPredictedObstacles);
	bool STATIC_AppendApproachAndTurnPath(class UObject* WorldContextObject, const struct FVector& SourceLocation, const struct FVector& SourceHeading, const struct FVector& DestinationLocation, const struct FVector& DestinationHeading, float MaxYawDegreesPerSecond, float MaxYawDegreesPerSegment, float MaxCurvedToLinearRatio, class UClass* FilterClass, class AController* Querier, float* MovementUnitsPerSecond, TArray<struct FVector>* PathPoints, float* PathLength);
	void STATIC_AddReachableBuildingModuleAttackPoints(class UObject* WorldContextObject, TArray<struct FBuildingModuleReference> Modules, float AttackRange, float ShellDepth, float MinAttackHeight, float MaxAttackHeight, float TraceZExtent, class UClass* FilterClass, class AController* Querier, TArray<struct FTargetArea>* ReachableAttackPoints);
};


// Class ConanSandbox.AILODComponent
// 0x00B8 (0x01B0 - 0x00F8)
class UAILODComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	float                                              AILOD2DistanceOverride;                                   // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AILOD1Distance;                                           // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AILOD2Distance;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AILOD3Distance;                                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SuspendAtMaxAILOD;                                        // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AILOD;                                                    // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TargetAILODWithOutstandingConfirmation;                   // 0x0112(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6D];                                      // 0x0113(0x006D) MISSED OFFSET
	TArray<struct FPausedComponent>                    pausedComponents;                                         // 0x0180(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0190(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AILODComponent");
		return ptr;
	}


	void SetSuspendCallback(float TimeoutSeconds, const struct FScriptDelegate& Callback);
	void SetAILOD2DistanceOverride(float newAILOD2DistanceOverride, bool ClampToAILOD3Distance);
	void ReapplyAILOD();
	void OnAILODChanged(int NewAILOD);
	void NotifyReadyForLodChange(int LodLevel);
	bool IsAILOD2DistanceOverrideActive();
	float GetEffectiveAILOD3Distance();
	float GetEffectiveAILOD2Distance();
	void ClearSuspendCallback(const struct FScriptDelegate& Callback);
	void ClearAILOD2DistanceOverride();
};


// Class ConanSandbox.IntStatChangeSignalNode
// 0x0010 (0x0038 - 0x0028)
class UIntStatChangeSignalNode : public UObject
{
public:
	struct FScriptMulticastDelegate                    SignalStatChanged;                                        // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.IntStatChangeSignalNode");
		return ptr;
	}


	void SignalStatChanged__DelegateSignature(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
};


// Class ConanSandbox.FloatStatChangeSignalNode
// 0x0010 (0x0038 - 0x0028)
class UFloatStatChangeSignalNode : public UObject
{
public:
	struct FScriptMulticastDelegate                    SignalStatChanged;                                        // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FloatStatChangeSignalNode");
		return ptr;
	}


	void SignalStatChanged__DelegateSignature(class AActor* Actor, ECharFloatStatID statID, float NewValue, float deltaValue);
};


// Class ConanSandbox.StatHolder
// 0x01E0 (0x0338 - 0x0158)
class UStatHolder : public UPersistenceComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalIntStatChanged;                                     // 0x0168(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalFloatStatChanged;                                   // 0x0178(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, BlueprintAssignable)
	struct FStatArrayInt32                             m_IntStatArray;                                           // 0x0188(0x0010) (Net, Transient, DuplicateTransient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0198(0x0010) MISSED OFFSET
	struct FStatArrayFloat                             m_FloatStatArray;                                         // 0x01A8(0x0010) (Net, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x01B8(0x00A0) MISSED OFFSET
	TArray<class UIntStatChangeSignalNode*>            m_IntStatChangeNodeList;                                  // 0x0258(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UFloatStatChangeSignalNode*>          m_FloatStatChangeNodeList;                                // 0x0268(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData03[0xC0];                                      // 0x0278(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StatHolder");
		return ptr;
	}


	void SignalIntStatChanged__DelegateSignature(class UStatHolder* StatHolder, ECharIntStatID statID, int NewValue, int deltaValue);
	void SignalFloatStatChanged__DelegateSignature(class UStatHolder* StatHolder, ECharFloatStatID statID, float NewValue, float deltaValue);
	void SetIntStatFlags(ECharIntStatID statID, int Flags);
	bool SetIntStat(ECharIntStatID statID, int Value);
	void SetFloatStatFlags(ECharFloatStatID statID, int Flags);
	bool SetFloatStat(ECharFloatStatID statID, float Value);
	bool RemoveIntStatModifier(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID);
	bool RemoveFloatStatModifier(ECharFloatStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID);
	bool RemoveAllIntStatModifiers(ECharIntStatID statID);
	bool RemoveAllFloatStatModifiers(ECharFloatStatID statID);
	void OnRep_IntStats();
	void OnRep_FloatStats();
	void GetTotalIntStatModification(ECharIntStatID statID, float* totalMultiplier, int* totalAdder);
	void GetTotalFloatStatModification(ECharFloatStatID statID, float* totalMultiplier, float* totalAdder);
	void GetIntStatModification(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, float* totalMultiplier, int* totalAdder);
	int GetIntStatFlags(ECharIntStatID statID);
	class UIntStatChangeSignalNode* GetIntStatChangeSignal(ECharIntStatID statID);
	int GetIntStat(ECharIntStatID statID, TEnumAsByte<EStatModifierMode> mode);
	void GetFloatStatModification(ECharFloatStatID statID, TEnumAsByte<EStatModifierID> modifierID, float* totalMultiplier, float* totalAdder);
	int GetFloatStatFlags(ECharFloatStatID statID);
	class UFloatStatChangeSignalNode* GetFloatStatChangeSignal(ECharFloatStatID statID);
	float GetFloatStat(ECharFloatStatID statID, TEnumAsByte<EStatModifierMode> mode);
	void AddToIntStat(ECharIntStatID statID, int Value);
	void AddToFloatStat(ECharFloatStatID statID, float Value);
	bool AddIntStatMultiplier(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID, float Value, TEnumAsByte<EStatModifierUpdateMode> updateMode);
	bool AddIntStatModifier(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID, int Value, TEnumAsByte<EStatModifierUpdateMode> updateMode);
	bool AddFloatStatModifier(ECharFloatStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID, float Value, TEnumAsByte<EStatModifierUpdateMode> updateMode);
};


// Class ConanSandbox.EnergyHeatmapData
// 0x0038 (0x0060 - 0x0028)
class UEnergyHeatmapData : public UObject
{
public:
	TAssetPtr<class UTexture2D>                        SourceTexture;                                            // 0x0028(0x0020) (Edit)
	TArray<unsigned char>                              HeatmapData;                                              // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Width;                                                    // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnergyHeatmapData");
		return ptr;
	}

};


// Class ConanSandbox.EnergyReceiverComponent
// 0x00C8 (0x01C0 - 0x00F8)
class UEnergyReceiverComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F8(0x0088) MISSED OFFSET
	int                                                ListeningToTypes;                                         // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	TArray<float>                                      Energies;                                                 // 0x0188(0x0010) (ZeroConstructor, SaveGame)
	TArray<float>                                      CurrentHeatmapForce;                                      // 0x0198(0x0010) (ZeroConstructor, Transient)
	class UDataTable*                                  EnergyDataTable;                                          // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  EnergyEventTable;                                         // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnergyReceiverComponent");
		return ptr;
	}


	float SetEnergy(EnergyTypes Type, float NewValue, float heatmapForce);
	float ModifyEnergy(EnergyTypes Type, float change);
	float GetHeatmapForce(EnergyTypes Type);
	float GetEnergy(EnergyTypes Type);
	struct FEnergyEventTableRow GetCurrentEvent(EnergyTypes Type);
	void EnergyThreshold(class UClass* oldBuff, int oldBuffPotency, class UClass* newBuff, int newBuffPotency);
	void EnergyReceived(EnergyTypes Type, float energy);
	void ClientSetEnergy(EnergyTypes Type, float Value, float heatmapForce);
};


// Class ConanSandbox.EnergyReceiverRegistry
// 0x0020 (0x03F0 - 0x03D0)
class AEnergyReceiverRegistry : public AActor
{
public:
	TArray<class UEnergyReceiverComponent*>            EnergyListeners;                                          // 0x03D0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnergyReceiverRegistry");
		return ptr;
	}

};


// Class ConanSandbox.StaticNavigation
// 0x0080 (0x00A8 - 0x0028)
class UStaticNavigation : public UObject
{
public:
	TArray<struct FSpawnerIndex>                       m_SpawnerIndices;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             m_SampledSpawnPoints;                                     // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRoamingPath>                        m_SampledRoamingPaths;                                    // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StaticNavigation");
		return ptr;
	}


	class UStaticNavigation* STATIC_GetStaticNavigation(class UObject* WorldContextObject);
	void AddSpawnPointsNearLocation(const struct FVector& Location, float Radius, TArray<struct FVector>* SpawnPoints);
	void AddRoamingPathsNearLocation(const struct FVector& Location, float Radius, TArray<struct FRoamingPath>* RoamingPaths);
};


// Class ConanSandbox.NPCTerritorySpawnerInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCTerritorySpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NPCTerritorySpawnerInterface");
		return ptr;
	}


	void SpawnFakePlayer();
	bool SpawnEnemy(class AGameMode* CallingGameMode);
	void SpawnAll();
	void SampleSpawnPoints(TArray<struct FVector>* SpawnPoints, bool* LastBatch);
	void SampleRoamingPath(TArray<struct FVector>* RoamingPath, bool* LastBatch);
	void OnSamplingComplete();
	void GetSpawnerSchedule(ESpawnerSchedule* SpawnSchedule);
	void GetMaxCaps(TArray<int>* MaxCaps);
	struct FBoxBounds GetBounds();
	void GenerateNavMesh();
	bool CanSpawn();
};


// Class ConanSandbox.NPCRegistry
// 0x00A0 (0x0470 - 0x03D0)
class ANPCRegistry : public AActor
{
public:
	TArray<TScriptInterface<class UNPCTerritorySpawnerInterface>> m_ActiveSpawners;                                         // 0x03D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x90];                                      // 0x03E0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NPCRegistry");
		return ptr;
	}


	void STATIC_UnregisterNPCTerritorySpawner(class UObject* WorldContextObject, const TScriptInterface<class UNPCTerritorySpawnerInterface>& Spawner);
	void STATIC_RegisterNPCTerritorySpawner(class UObject* WorldContextObject, const TScriptInterface<class UNPCTerritorySpawnerInterface>& Spawner);
	void STATIC_LogStaticNavigationHealth(class UObject* WorldContextObject);
	bool STATIC_HasStaticNavigation(class UObject* WorldContextObject);
	struct FVector STATIC_GetRandomSpawnPoint(class UObject* WorldContextObject, class AActor* Spawner, ENavigationPrimitiveQueryStatus* Status);
	void STATIC_GetRandomSpawner(class UObject* WorldContextObject, TScriptInterface<class UNPCTerritorySpawnerInterface>* Spawner);
	struct FRoamingPath STATIC_GetRandomRoamingPath(class UObject* WorldContextObject, class AActor* Spawner, ENavigationPrimitiveQueryStatus* Status);
	int STATIC_GetDrawStaticNavigationRadius();
	TArray<TScriptInterface<class UNPCTerritorySpawnerInterface>> STATIC_GetActiveNPCTerritorySpawners(class UObject* WorldContextObject, ESpawnerSchedule SpawnerSchedule);
	void STATIC_DebugGetSpawnerProbabilityGroups(class UObject* WorldContextObject, TArray<struct FDebugSpawnProbabilityGroup>* Groups);
};


// Class ConanSandbox.PurgeSystem
// 0x01B8 (0x0588 - 0x03D0)
class APurgeSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class APurgeVolume*                                PurgeVolume;                                              // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1A8];                                     // 0x03E0(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PurgeSystem");
		return ptr;
	}


	void StartNextPurgePhase();
	bool IsPurgeRestricted(class AActor* TestActor);
	void InitPurgeSystem();
	float GetPurgeMeterValue(class UUniqueID* Clan);
	void AddPurgeEvent(EPurgeMeterEvent EventType, class UUniqueID* ClanID);
};


// Class ConanSandbox.SpatialHashSystem
// 0x00B8 (0x0488 - 0x03D0)
class ASpatialHashSystem : public AInfo
{
public:
	float                                              UpdateInterval;                                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03D4(0x000C) MISSED OFFSET
	TMap<uint32_t, struct FSpatialObjectSet>           Components;                                               // 0x03E0(0x0050) (ZeroConstructor)
	TMap<class USceneComponent*, float>                ComponentMaxRadius;                                       // 0x0430(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SpatialHashSystem");
		return ptr;
	}

};


// Class ConanSandbox.ConanWorldSettings
// 0x0098 (0x0618 - 0x0580)
class AConanWorldSettings : public AWorldSettings
{
public:
	int                                                BuildingGridSize;                                         // 0x0580(0x0004) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
	int                                                FoliageGridSize;                                          // 0x0584(0x0004) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              FoliagePhysicsRangeClient;                                // 0x0588(0x0004) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              FoliagePhysicsRangeServer;                                // 0x058C(0x0004) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              AILODBoundary;                                            // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AILODMaxRaycastDistance;                                  // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BuildingStabilityDecrease;                                // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetCullDistanceScaling;                                   // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticNavigation*                           StaticNavigation;                                         // 0x05A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASpatialHashSystem*                          SpatialHashSystem[0x2];                                   // 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnProbabilityBand>               SpawnProbabilityBands;                                    // 0x05B8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSpawnProbabilityBand>               SpawnProbabilityBandsListenServer;                        // 0x05C8(0x0010) (Edit, ZeroConstructor)
	class ANPCRegistry*                                m_NPCRegistry;                                            // 0x05D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class APurgeSystem*                                m_PurgeSystem;                                            // 0x05E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerPawnRegistry*                         m_PlayerPawnRegistry;                                     // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ALandClaim*>                          LandClaim;                                                // 0x05F0(0x0010) (ZeroConstructor)
	class AEnergyReceiverRegistry*                     m_EnergyReceiverRegistry;                                 // 0x0600(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASoundRegistry*                              SoundRegistry;                                            // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGlobalMarkerRegistry*                       m_GlobalMarkerRegistry;                                   // 0x0610(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanWorldSettings");
		return ptr;
	}


	void SwapLandClaim(class UUniqueID* oldOwner, class UUniqueID* NewOwner);
	void MulticastSwapLandClaim(class UUniqueID* oldOwner, class UUniqueID* NewOwner);
	TArray<struct FSpawnProbabilityBand> GetSpawnProbabilityBandsBPCopy();
	class ASpatialHashSystem* GetSpatialHashSystem(ESpatialHashGridSize SelectedGridSize);
	class ASoundRegistry* GetSoundRegistry();
	class APurgeSystem* GetPurgeSystem();
	class APlayerPawnRegistry* GetPlayerPawnRegistry();
	class ANPCRegistry* GetNPCRegistry();
	class ALandClaim* GetLandClaim(EClaimChannel Channel);
	class AGlobalMarkerRegistry* GetGlobalMarkerRegistry();
	class AEnergyReceiverRegistry* GetEnergyReceiverRegistry();
	class AAILODSystem* GetAILODSystem();
	void ChangeMaxRelevancyScaling(float Scaling);
};


// Class ConanSandbox.AILODSystem
// 0x0128 (0x04F8 - 0x03D0)
class AAILODSystem : public AActor
{
public:
	TArray<class UAILODComponent*>                     ActiveLODComponents;                                      // 0x03D0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UAILODComponent*>                     m_AILODComponents;                                        // 0x03E0(0x0010) (ExportObject, ZeroConstructor)
	TMap<class UAILODComponent*, struct FSuspendCallbackComponentEntry> m_SuspendCallbacks;                                       // 0x03F0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0440(0x0080) MISSED OFFSET
	TArray<int>                                        m_LODCounter;                                             // 0x04C0(0x0010) (Net, ZeroConstructor)
	TArray<struct FAILODInfo>                          m_DebugAILODs;                                            // 0x04D0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      m_ShowAILOD : 1;                                          // 0x04E0(0x0001) (Net)
	unsigned char                                      UnknownData01[0x17];                                      // 0x04E1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AILODSystem");
		return ptr;
	}


	void SpawnFakePlayers(int Count);
	void ShowAILODOverlay(int NewShowAILOD);
	void SetAILODDistance(int LodLevel, int LODDistance);
	void ProcessAllActors();
	void KillAllFakePlayers();
	void KillAILODGroup(ELODCounterType Type);
	bool STATIC_IsAILODSystemEnabled();
	void GetLODCounters(ELODCounterType Type, TArray<int>* LodCounters);
	void STATIC_GetAILODActorsInRange(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AActor*>* ActorsInRange);
	void ForceAILOD(int NewForcedAILOD, int Type);
	void STATIC_AppendAILODActorsInRange(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AActor*>* ActorsInRange);
};


// Class ConanSandbox.ConanCharacterComponent
// 0x0008 (0x0100 - 0x00F8)
class UConanCharacterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanCharacterComponent");
		return ptr;
	}


	void ReceiveDataLoaded();
};


// Class ConanSandbox.AINavigationComponent
// 0x0038 (0x0130 - 0x00F8)
class UAINavigationComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       NavDataConfigName;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD0NavmeshTileGenerationRadius;                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD0NavmeshTileRemovalRadius;                          // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD1NavmeshTileGenerationRadius;                       // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD1NavmeshTileRemovalRadius;                          // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD2NavmeshTileGenerationRadius;                       // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD2NavmeshTileRemovalRadius;                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD3NavmeshTileGenerationRadius;                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              npcLOD3NavmeshTileRemovalRadius;                          // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AINavigationComponent");
		return ptr;
	}

};


// Class ConanSandbox.AISense_NewSight
// 0x0140 (0x0260 - 0x0120)
class UAISense_NewSight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0120(0x0128) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x0248(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x024C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0250(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x0254(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x0258(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AISense_NewSight");
		return ptr;
	}

};


// Class ConanSandbox.AISenseConfig_NewSight
// 0x0020 (0x0068 - 0x0048)
class UAISenseConfig_NewSight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AISenseConfig_NewSight");
		return ptr;
	}

};


// Class ConanSandbox.AnimationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AnimationFunctionLibrary");
		return ptr;
	}


	struct FName STATIC_GetCurrentStateName(class UAnimInstance* AnimSequence, int MachineIndex);
	void STATIC_GetAnimSequenceLength(class UAnimSequence* AnimSequence, float* AnimationLength);
};


// Class ConanSandbox.AnimInstanceHumanMale
// 0x0038 (0x0390 - 0x0358)
class UAnimInstanceHumanMale : public UAnimInstance
{
public:
	bool                                               AnimHasBegunPlay;                                         // 0x0358(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPassive;                                                // 0x0359(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAggressive;                                             // 0x035A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isEquipping;                                              // 0x035B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isDead;                                                   // 0x035C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnconscious;                                            // 0x035D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWalking;                                                // 0x035E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSwimming;                                               // 0x035F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFlying;                                                 // 0x0360(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0361(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OldIsPassive;                                             // 0x0362(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isThirdPerson;                                            // 0x0363(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isClimbing;                                               // 0x0364(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isClimbSliding;                                           // 0x0365(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isNotSlidingAndNotClimbing;                               // 0x0366(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isHangingFromCeiling;                                     // 0x0367(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isCurrentlySitting;                                       // 0x0368(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResetIK;                                                  // 0x0369(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	struct FVector                                     ActorLocation;                                            // 0x036C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              GroundPitch;                                              // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbDirection;                                           // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbSpeed;                                               // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PenisRuntimeScale;                                        // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CharacterLayoutHash;                                      // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AnimInstanceHumanMale");
		return ptr;
	}


	void UpdateVarsFromConanCharacter(class AConanCharacter* Character);
};


// Class ConanSandbox.CharacterCustomizationComponent
// 0x0390 (0x0488 - 0x00F8)
class UCharacterCustomizationComponent : public UActorComponent
{
public:
	struct FCharacterLayout                            Layout;                                                   // 0x00F8(0x0138) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                LayoutHash;                                               // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	struct FCharacterResolvedMeshes                    Meshes;                                                   // 0x0238(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FCharacterMaterialParams                    MaterialParams;                                           // 0x0288(0x0118) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USkeletalMeshComponent*                      Master;                                                   // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshes;                                           // 0x03A8(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xCF];                                      // 0x03B9(0x00CF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterCustomizationComponent");
		return ptr;
	}


	void SetSkeletalMeshComponentsTickEnabled(bool bEnabled);
	void SetMeshes(const struct FCharacterResolvedMeshes& NewMeshes, bool Deferred);
	void SetMaterialParams(const struct FCharacterMaterialParams& NewMaterialParams, bool Deferred);
	void SetMasterSkeletalMeshComponent(class USkeletalMeshComponent* MasterComp, bool Deferred);
	void SetEnabled(bool Enabled);
	void SetCharacterLayout(const struct FCharacterLayout& InLayout, bool Deferred, bool Force);
	void ResolveCharacterDataInternal(const struct FCharacterLayout& InLayout, bool AllowHighQualityHair, struct FCharacterResolvedTextures* ResolvedTextures, struct FCharacterResolvedTints* ResolvedTints, TArray<TAssetPtr<class USkeletalMesh>>* MeshAssetIds, TArray<TAssetPtr<class UPhysicalMaterial>>* PhysicalMaterialIds);
	void ResolveCharacterData(const struct FCharacterLayout& InLayout, bool AllowHighQualityHair, struct FCharacterResolvedTextures* ResolvedTextures, struct FCharacterResolvedTints* ResolvedTints, TArray<TAssetPtr<class USkeletalMesh>>* MeshAssetIds, TArray<TAssetPtr<class UPhysicalMaterial>>* PhysicalMaterialIds);
	void OnMeshesChanged();
	void OnMaterialsChanged();
	void OnLayoutChanged();
	void ArmourDyeUpdated();
};


// Class ConanSandbox.AsyncSpawnNPCProxy
// 0x0078 (0x00A0 - 0x0028)
class UAsyncSpawnNPCProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    SpawnSucceeded;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SpawnFailed;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnTableID;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0060(0x0030) (IsPlainOldData)
	class USpawnTableComponent*                        SpawnTableComponent;                                      // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsWeightedTable;                                          // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AsyncSpawnNPCProxy");
		return ptr;
	}


	void OnSpawningCompleted(class APawn* SpawnedPawn, class UClass* NPCBehaviorParameters, struct FCharacterLayout* ResultLayout);
	class UAsyncSpawnNPCProxy* STATIC_AsyncSpawnNPCFromWeightedTable(class UObject* WorldContextObject, class USpawnTableComponent* SpawnTableComponent, const struct FName& WeightedTableID, const struct FTransform& SpawnTransform);
	class UAsyncSpawnNPCProxy* STATIC_AsyncSpawnNPC(class UObject* WorldContextObject, class USpawnTableComponent* SpawnTableComponent, const struct FName& SpawnTableID, const struct FTransform& SpawnTransform);
};


// Class ConanSandbox.AsyncTaskQueryPurchases
// 0x0020 (0x0048 - 0x0028)
class UAsyncTaskQueryPurchases : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSucceeded;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AsyncTaskQueryPurchases");
		return ptr;
	}


	class UAsyncTaskQueryPurchases* STATIC_QueryPurchases(class ULocalPlayer* LocalPlayer);
};


// Class ConanSandbox.AsyncTaskQueryUserPrivilege
// 0x00E8 (0x0110 - 0x0028)
class UAsyncTaskQueryUserPrivilege : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AsyncTaskQueryUserPrivilege");
		return ptr;
	}


	void STATIC_ValidateUserPrivilegeFailure(EConanOnlinePermissions BlockedPermission, class FString* ErrorMessage);
	void STATIC_ShowUserPrivilegeFailureMessage(EConanOnlinePermissions BlockedPermission, class UObject* WorldContext);
	class UAsyncTaskQueryUserPrivilege* STATIC_QueryUserPrivilege(EConanOnlinePermissions PermissionQuery, class APlayerController* PlayerController);
};


// Class ConanSandbox.AsyncTaskShowStoreForCensoredDlc
// 0x0010 (0x0038 - 0x0028)
class UAsyncTaskShowStoreForCensoredDlc : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnReturned;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AsyncTaskShowStoreForCensoredDlc");
		return ptr;
	}


	class UAsyncTaskShowStoreForCensoredDlc* STATIC_ShowStore(const class FString& ProductId, class ULocalPlayer* LocalPlayer);
};


// Class ConanSandbox.AudioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AudioFunctionLibrary");
		return ptr;
	}


	bool STATIC_UsesTimeOfDay(class USoundBase* Sound);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, TAssetPtr<class USoundBase> Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool HintToUseTimeOfDay);
	void STATIC_GetWeaponMaterialSoundCue(const struct FName& RowName, TAssetPtr<class USoundCue>* SoundToPlay, class UMaterial** DecalToShow, class UParticleSystem** ParticleToShow);
	TAssetPtr<class USoundCue> STATIC_GetVoiceSoundCue(const struct FName& RowName, TEnumAsByte<ESoundTable> SoundTable);
};


// Class ConanSandbox.AvatarSpawnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAvatarSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AvatarSpawnerInterface");
		return ptr;
	}


	bool SpawnAvatar(class UClass* AvatarType, class UAvatarItem* AvatarItem);
};


// Class ConanSandbox.AvoidanceComponent
// 0x0010 (0x0108 - 0x00F8)
class UAvoidanceComponent : public UActorComponent
{
public:
	float                                              NotifyApproachInterval;                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NotifyApproachRange;                                      // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AvoidanceComponent");
		return ptr;
	}

};


// Class ConanSandbox.BuffTracker
// 0x0050 (0x0148 - 0x00F8)
class UBuffTracker : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuffTracker");
		return ptr;
	}


	int UnregisterBuffsInternal(class UClass* BuffClass, TArray<class UActorComponent*>* RemovedBuffs);
	void UnregisterBuffInternal(class UActorComponent* BuffComponent);
	void RegisterBuffInternal(class UActorComponent* BuffComponent);
	bool FindBuffInternal(class UClass* BuffClass, class UActorComponent** FoundBuffComponent);
};


// Class ConanSandbox.PlaceableBase
// 0x0070 (0x0568 - 0x04F8)
class APlaceableBase : public ABuildableBase
{
public:
	TAssetPtr<class UTexture2D>                        MapMarkerIcon;                                            // 0x04F8(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0518(0x0008) MISSED OFFSET
	TArray<int>                                        CraftingGroups;                                           // 0x0520(0x0010) (Edit, ZeroConstructor)
	bool                                               DestroyActorOnZeroHealth;                                 // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DropInventoryContentOnDestroyed;                          // 0x0531(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0532(0x0006) MISSED OFFSET
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LootContainerClass;                                       // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoNotRespectOwnership;                                    // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTakeDamage;                                            // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreCanDamagePlayerOwnedStucture;                       // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x054B(0x0005) MISSED OFFSET
	TArray<class UClass*>                              UpgradeTargets;                                           // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasHitGround;                                             // 0x0560(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               ReturnableToInventory;                                    // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WasPlacedAsUpgrade;                                       // 0x0562(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               DisableDecayWhenOnGround;                                 // 0x0563(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0564(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlaceableBase");
		return ptr;
	}


	void StabilityLost();
	void SetCanEverAffectNavigation(class UActorComponent* ActorComp, bool bAffect);
	void RepairModuleWithIngredient(class AConanCharacter* Repairer, int amount, TArray<int>* repairIngredients);
	void RepairModuleWithAllIngredients(class AConanCharacter* Repairer, int amount);
	void OnCancelInteraction(class APlayerController* playerInstigator);
	float GetModifiedDamage(float DamageAmount, class UDamageType* DamageType, class AController* EventInstigator, class AActor* DamageCauser);
	void DoneLoading();
	bool CanIgnoreOwnership();
	bool CanBeDamagedByTier(int Tier);
	void CanAccessContainer(class APawn* InteractingPawn, bool* CanAccess, bool* ContainerIsLocked, bool* InstigatorIsOwner);
};


// Class ConanSandbox.BuildableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBuildableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildableFunctionLibrary");
		return ptr;
	}


	bool STATIC_HasStaticGroundInHitResults(TArray<struct FHitResult> InHitResults);
};


// Class ConanSandbox.BuildingBlockerVolumeBase
// 0x0000 (0x03D0 - 0x03D0)
class ABuildingBlockerVolumeBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildingBlockerVolumeBase");
		return ptr;
	}

};


// Class ConanSandbox.BuildingBoundsComponent
// 0x0000 (0x0310 - 0x0310)
class UBuildingBoundsComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildingBoundsComponent");
		return ptr;
	}

};


// Class ConanSandbox.BuildSystemComponent
// 0x0258 (0x0350 - 0x00F8)
class UBuildSystemComponent : public UActorComponent
{
public:
	bool                                               isBuilding;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               developerMode;                                            // 0x00F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	class UClass*                                      CurrentBuildBrushClass;                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBuildingItem*                               SourceBuildItem;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EBuildingMode>                         buildingMode;                                             // 0x0110(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FPotentialBuildGhost>                ValidSocketResults;                                       // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	int                                                CurrentSocketResultIndex;                                 // 0x0138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class ABuildableBase*                              BuildingBrushBase;                                        // 0x0140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlacementGhostRadius;                                     // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     PlacementGhostObjectType;                                 // 0x014C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     PlacementGhostLineTraceChannel;                           // 0x014D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x014E(0x0002) MISSED OFFSET
	class UMaterialInterface*                          PlacementGhostMaterial;                                   // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PlacementUpgradeGhostMaterial;                            // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PlacementInvalidGhostMaterial;                            // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBuildingSockets;                                      // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	class UTexture2D*                                  IconDismantle;                                            // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               m_GhostBuildingComponent;                                 // 0x0178(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               m_GhostBuildingUpgradeablesComponent;                     // 0x0180(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               m_InvalidGhostBuildingComponent;                          // 0x0188(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FPotentialBuildGhost>                m_GhostSocketIndexedResults;                              // 0x0190(0x0010) (ZeroConstructor)
	TArray<struct FPotentialBuildGhost>                m_GhostUpgradeSocketIndexedResults;                       // 0x01A0(0x0010) (ZeroConstructor)
	TArray<struct FPotentialBuildGhost>                m_GhostInvalidSocketIndexedResults;                       // 0x01B0(0x0010) (ZeroConstructor)
	TArray<struct FPotentialBuildGhost>                m_DistanceSortedQueuedPotentialGhosts;                    // 0x01C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x94];                                      // 0x01D0(0x0094) MISSED OFFSET
	struct FVector                                     m_LastGhostOrigin;                                        // 0x0264(0x000C) (IsPlainOldData)
	bool                                               m_bDirtyGhosts;                                           // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_bStillDirtyGhosts;                                      // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xDE];                                      // 0x0272(0x00DE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildSystemComponent");
		return ptr;
	}


	bool TraceClosestGhost(const struct FVector& Start, const struct FVector& End, float Radius, const struct FVector& visibilityTraceVector, struct FHitResult* Result);
	bool StopBuilding();
	bool StartBuilding(TEnumAsByte<EBuildingMode> buildingMode, bool developerMode);
	class ABuildableBase* SnapToGhost(int ItemIndex, class UPrimitiveComponent* Component, int* attachIndex, bool* isUpgrade);
	bool ShowPlacementGhosts(const struct FVector& StartLocation, bool Force, bool* stillDirty);
	void ServerDismantleBuilding(class ABuildingBase* buildingActor, class UInstancedBuildingComponent* instBuildComp, int InstanceIndex, bool entireBuilding);
	void ServerDecayDemolishBuilding(class ABuildingBase* buildingActor);
	void ReEvaluateSocketResult(int Index);
	void InitGhostMesh();
	bool CreateRandomBuilding(const struct FVector& StartLocation, int NumPieces);
};


// Class ConanSandbox.CensoredContentHelper
// 0x0010 (0x0038 - 0x0028)
class UCensoredContentHelper : public UObject
{
public:
	class FString                                      DlcProductId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CensoredContentHelper");
		return ptr;
	}


	void ShowStorePageForCensoredDlc(class ULocalPlayer* LocalPlayer);
	void QueryForPurchasesAsync(class ULocalPlayer* LocalPlayer, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	void OnQueryForPurchasesComplete__DelegateSignature();
	bool HasCensoredDlcReceipt(class ULocalPlayer* LocalPlayer);
};


// Class ConanSandbox.ConsoleSettingsHelper
// 0x0000 (0x0028 - 0x0028)
class UConsoleSettingsHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConsoleSettingsHelper");
		return ptr;
	}


	class UConsoleSettingsHelper* STATIC_GetConsoleSettingsHelper(class UObject* WorldContextObject);
};


// Class ConanSandbox.SettingsEventDispatchers
// 0x0010 (0x0038 - 0x0028)
class USettingsEventDispatchers : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnNudityChanged;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsEventDispatchers");
		return ptr;
	}

};


// Class ConanSandbox.ConsoleUserSettingsSave
// 0x0178 (0x01A0 - 0x0028)
class UConsoleUserSettingsSave : public USaveGame
{
public:
	int                                                MotionBlur;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrain;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GammaValue;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SafeZonePadding;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SoundVolumeMaster;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundVolumeMusic;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundVolumeVoice;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundVolumeVoiceChat;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundVolumeSFX;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SubtitlesEnabled;                                         // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AreFloatingNamesEnabled;                                  // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	class FString                                      Language;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ENudity>                               Nudity;                                                   // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDDot;                                               // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               showBuildingHelp;                                         // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableAutomaticWield;                                    // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowJourneySteps;                                         // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowWeaponTrails;                                         // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowFirstPersonCameraInCombat;                           // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableAutoFacingOnAttack;                                 // 0x006F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InvertY;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              RightAxisSensitivity;                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftAxisDeadzone;                                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightAxisDeadzone;                                        // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftTriggerDeadzone;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightTriggerDeadzone;                                     // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RightAxisInvertY;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FName                                       GamepadPreset;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ShowUIGamma;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SavePasswords;                                            // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideCommunityPicker;                                      // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	TMap<class FString, class FString>                 SavedServers;                                             // 0x00B0(0x0050) (ZeroConstructor)
	class FString                                      LastConnected;                                            // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FFavoriteServer>                     FavoriteServers;                                          // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FHistoricServer>                     HistoricServers;                                          // 0x0120(0x0010) (ZeroConstructor)
	TMap<class FString, class FString>                 ServerSettings_3;                                         // 0x0130(0x0050) (ZeroConstructor)
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0190(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConsoleUserSettingsSave");
		return ptr;
	}


	void STATIC_MarkConsoleSettingsAsDirty();
};


// Class ConanSandbox.UserSettingsLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserSettingsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.UserSettingsLibrary");
		return ptr;
	}


	void STATIC_VerifyAndForceWindowedMode();
	bool STATIC_ShouldShowGammaUI();
	void STATIC_SetWindowMode(TEnumAsByte<EWindowMode> windowMode);
	void STATIC_SetVsync(bool vsync);
	void STATIC_SetViewDistanceQuality(int ViewDistanceQuality);
	void STATIC_SetVFOV(float vFOV, class APlayerController* PlayerController, bool Save);
	void STATIC_SetUseGamepadStyleMovement(bool Enable);
	void STATIC_SetToggleDebugInfo(bool active);
	void STATIC_SetTextureQuality(int TextureQuality);
	void STATIC_SetTerrianShadowQuality(int ShadowQuality);
	void STATIC_SetSubtitlesEnabled(bool Enabled, bool Save);
	void STATIC_SetSoundVolume(class USoundClass* SoundClass, float Volume, bool Save);
	void STATIC_SetShowWeaponTrails(bool show);
	void STATIC_SetShowJourneyStepsUI(class UObject* WorldContextObject, bool show);
	void STATIC_SetShowHUDDot(bool active);
	void STATIC_SetShowBuildingHelp(bool show, class APlayerController* PlayerController);
	void STATIC_SetSensitivity(float Sensitivity, class APlayerController* PlayerController, bool Save);
	void STATIC_SetScreenResolution(const struct FIntPoint& Resolution);
	void STATIC_SetSavedInThirdPerson(bool inThirdPerson);
	void STATIC_SetSafeZonePadding(class UObject* WorldContextObject, const struct FVector2D& SafeZonePadding, bool saveToConfig);
	void STATIC_SetRightTriggerDeadzone(float DeadZone, class APlayerController* PlayerController, bool Save);
	void STATIC_SetRightAxisSensitivity(float DeadZone, class APlayerController* PlayerController, bool Save);
	void STATIC_SetRightAxisInvertY(bool Invert, class APlayerController* PlayerController, bool Save);
	void STATIC_SetRightAxisDeadzone(float DeadZone, class APlayerController* PlayerController, bool Save);
	void STATIC_SetPostProcessQuality(int PostProcessQuality);
	void STATIC_SetOverridingGraphicsQuality(const class FString& graphicsQualityType);
	void STATIC_SetNudityLevel(class UObject* WorldContextObject, TEnumAsByte<ENudity> NudityLevel);
	void STATIC_SetMotionBlurValue(int motionBlurValue, bool Save);
	void STATIC_SetMotionBlur(bool bMotionBlur);
	void STATIC_SetMaxFPS(int maxFPS, bool Save);
	void STATIC_SetLowEndLaptopMode(bool checked);
	void STATIC_SetLeftTriggerDeadzone(float DeadZone, class APlayerController* PlayerController, bool Save);
	void STATIC_SetLeftAxisDeadzone(float DeadZone, class APlayerController* PlayerController, bool Save);
	void STATIC_SetLanguage(const class FString& Language, bool Save);
	void STATIC_SetIsToggleDogdeActive(bool active);
	void STATIC_SetIsFloatingNamesEnabled(bool floatingNames, class APlayerController* PlayerController, bool Save);
	void STATIC_SetInvertY(bool Invert, class APlayerController* PlayerController, bool Save);
	void STATIC_SetGeneralShadowQuality(int ShadowQuality);
	void STATIC_SetGamma(float gamma, bool Save);
	void STATIC_SetFoliageQuality(int FoliageQuality);
	void STATIC_SetFilmGrainValue(float FilmGrain, bool Save);
	void STATIC_SetFilmGrain(bool bFilmGrain);
	void STATIC_SetEnableAutoFacingOnAttack(bool show);
	void STATIC_SetEffectsQuality(int EffectsQuality);
	void STATIC_SetDisableAutomaticWield(bool Disable);
	void STATIC_SetChatVisibilityCondition(class UObject* WorldContextObject, EChatVisibilityCondition chatVisibility);
	void STATIC_SetChatShowTimeStamps(bool fontSize, bool Save);
	void STATIC_SetChatShowChannelName(bool fontSize, bool Save);
	void STATIC_SetChatFontSize(int fontSize, bool Save);
	void STATIC_SetAttackTowardsCamera(bool Enable);
	void STATIC_SetAntiAliasingQuality(int AntiAliasingQuality);
	void STATIC_SetAllowFirstPersonCameraInCombat(bool show);
	void STATIC_SaveVideoSettingsToFile();
	void STATIC_SaveCommand(int Index, const class FString& Command);
	bool STATIC_RestoreDefaultVideoSettings(class APlayerController* PlayerController);
	bool STATIC_RestoreDefaultKeyBindings();
	bool STATIC_RestoreDefaultGameplaySettings(class APlayerController* PlayerController);
	bool STATIC_RestoreDefaultControlSettings(class APlayerController* PlayerController);
	bool STATIC_RestoreDefaultAudioSettings();
	TEnumAsByte<EWindowMode> STATIC_GetWindowMode();
	bool STATIC_GetVsync();
	float STATIC_GetVoiceChatVolume();
	int STATIC_GetViewDistanceQuality();
	float STATIC_GetVFOV();
	bool STATIC_GetUseGamepadStyleMovement();
	bool STATIC_GetToggleDebugInfo();
	int STATIC_GetTextureQuality();
	int STATIC_GetTerrianShadowQuality();
	bool STATIC_GetSubtitlesEnabled();
	class FString STATIC_GetSteamLanguage();
	float STATIC_GetSoundVolume(class USoundClass* SoundClass);
	bool STATIC_GetShowWeaponTrails();
	bool STATIC_GetShowJourneyStepsUI();
	bool STATIC_GetShowHUDDot();
	bool STATIC_GetShowBuildingHelp();
	float STATIC_GetSensitivity();
	struct FIntPoint STATIC_GetScreenResolution();
	bool STATIC_GetSavedInThirdPerson();
	struct FVector2D STATIC_GetSafeZonePadding();
	float STATIC_GetRightTriggerDeadzone();
	float STATIC_GetRightAxisSensitivity();
	bool STATIC_GetRightAxisInvertY();
	float STATIC_GetRightAxisDeadzone();
	int STATIC_GetPostProcessQuality();
	class FString STATIC_GetOverridingGraphicsQuality();
	TEnumAsByte<ENudity> STATIC_GetNudityLevel();
	int STATIC_GetMotionBlurValue();
	int STATIC_GetMaxFPS();
	bool STATIC_GetLowEndLaptopMode();
	float STATIC_GetLeftTriggerDeadzone();
	float STATIC_GetLeftAxisDeadzone();
	class FString STATIC_GetLanguage();
	bool STATIC_GetIsToggleDogdeActive();
	bool STATIC_GetIsFloatingNamesEnabled();
	bool STATIC_GetInvertY();
	float STATIC_GetHFOV(class UWorld* World, float vFOV);
	int STATIC_GetGeneralShadowQuality();
	float STATIC_GetGamma();
	int STATIC_GetFPSUncapped();
	float STATIC_GetFOV(class UObject* WorldContextObject);
	int STATIC_GetFoliageQuality();
	float STATIC_GetFilmGrainValue();
	bool STATIC_GetEnableAutoFacingOnAttack();
	int STATIC_GetEffectsQuality();
	bool STATIC_GetDisableAutomaticWield();
	struct FIntPoint STATIC_GetDesktopResolution();
	class FString STATIC_GetDefaultLanguage();
	class FString STATIC_GetCommand(int Index);
	EChatVisibilityCondition STATIC_GetChatVisibilityCondition();
	bool STATIC_GetChatShowTimeStamps();
	bool STATIC_GetChatShowChannelName();
	int STATIC_GetChatFontSize();
	TArray<struct FIntPoint> STATIC_GetAvailableScreenResolutions();
	TArray<int> STATIC_GetAvailableMaxFPSValues();
	bool STATIC_GetAttackTowardsCamera();
	int STATIC_GetAntiAliasingQuality();
	bool STATIC_GetAllowFirstPersonCameraInCombat();
	TEnumAsByte<ENudity> STATIC_ClampNudity(TEnumAsByte<ENudity> Value, TEnumAsByte<ENudity> Min, TEnumAsByte<ENudity> Max);
	bool STATIC_BenchmarkAndSaveQualityLevels();
	void STATIC_ApplyVideoSettings(class APlayerController* PlayerController);
	void STATIC_ApplySettingsOnStart(class APlayerController* PlayerController);
	void STATIC_ApplyLowEndLaptopModeSettings(bool apply);
	void STATIC_ApplyGameplaySettings(class APlayerController* PlayerController);
	void STATIC_ApplyControlSettings(class APlayerController* PlayerController);
	void STATIC_ApplyAudioSettings();
};


// Class ConanSandbox.CharacterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterFunctionLibrary");
		return ptr;
	}


	void STATIC_TraceIKFoot(class UObject* WorldContextObject, class AActor* Actor, class USkeletalMeshComponent* SkeletalMeshComponent, const struct FName& BoneName, float TraceStartOffset, float TraceDistance, TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes, float HeelOffset, bool bDebug, const struct FTransform& BoneComponentTransform, struct FTransform* BoneWorldTransform, struct FVector* TargetVector, float* FloorDistance, struct FVector* ImpactNormal, struct FHitResult* OutHit, struct FVector* ComponentWorldLocation);
	void STATIC_TakePoseSnapshot(class USkeletalMeshComponent* SkeletalMeshComponent, struct FFuncomPoseSnapshot* Snapshot);
	void STATIC_SetMinDrawDistance(class UPrimitiveComponent* PrimitiveComponent, float MinDrawDistance);
	void STATIC_SetHitLocationPhysicalMaterialOverride(class AActor* Owner, class UPhysicalMaterial* NewMaterial);
	void STATIC_SetCharacterTintSlot(ECharacterTintSlots Slot, int Colour, struct FCharacterTintLayout* Tints);
	void STATIC_SetCharacterTextureSlot(ECharacterTextureSlots Slot, int Texture, struct FCharacterTextureLayout* TextureLayout);
	void STATIC_SetCharacterScalarSlot(ECharacterScalarSlots Slot, float Scalar, struct FCharacterScalarParameters* ScalarParams);
	void STATIC_SetCharacterMeshSlot(ECharacterBodySlots Slot, int Mesh, struct FCharacterMeshLayout* MeshLayout);
	void STATIC_SetCharacterIntSlot(ECharacterIntSlots Slot, int Integer, struct FCharacterIntParameters* IntParams);
	void STATIC_SetCharacterEnumSlot(ECharacterEnumSlots Slot, unsigned char Enum, struct FCharacterEnumParameters* EnumParams);
	void STATIC_SetCharacterBoolSlot(ECharacterBoolSlots Slot, bool Bool, struct FCharacterBoolParameters* BoolParams);
	void STATIC_SetCharacterArmourTint(ECharacterBodySlots Slot, unsigned char DyeChannel, int ColourIndex, struct FCharacterLayout* CharacterLayout);
	void STATIC_OverridePhysicsMaterialForBodySlot(class USkeletalMeshComponent* Component, ECharacterBodySlots Slot, class UPhysicalMaterial* PhysicsMaterial);
	bool STATIC_OverridePhysicsMaterialForBody(class USkeletalMeshComponent* Component, const struct FName& BodyName, class UPhysicalMaterial* PhysicsMaterial);
	bool STATIC_MergeSkeletalMeshes(TArray<class USkeletalMesh*> SkeletalMeshes, class AActor* Outer, class USkeletalMesh** OutMesh);
	int STATIC_LengthDataTable(class UDataTable* table);
	struct FVector STATIC_HipsAdjustment(class UObject* WorldContextObject, class USkeletalMeshComponent* SkeletalMeshComponent, const struct FTransform& HipsTransform, float HipsOffsetDistance, const struct FVector& rightFootTarget, const struct FVector& leftFootTarget, float HipsXSwing, float Proximity, float RightLegIdleExtension, float LeftLegIdleExtension);
	bool STATIC_GetWorldLocationForHitLocation(class UPrimitiveComponent* Component, TEnumAsByte<EHitlocation> HitLocation, struct FVector* OutWorldLocation);
	void STATIC_GetWorldComponentTransform(class UObject* WorldContextObject, class USkeletalMeshComponent* SkeletalMeshComponent, struct FTransform* WorldComponentTransform);
	void STATIC_GetSimpleRelaxedFootHipDistance(class UObject* WorldContextObject, const struct FTransform& HipTransform, const struct FTransform& RightFootTransform, const struct FTransform& LeftFootTransform, float* RightLegIdleExtension, float* LeftLegIdleExtension);
	void STATIC_GetRightFootRotatorFromNormal(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FTransform& RightBoneTransform, const struct FVector& WorldNormal, struct FRotator* rightFootRotator, struct FRotator* RightFootComponentRotator);
	TArray<class UPhysicalMaterial*> STATIC_GetPhysicsMaterials(class USkeletalMeshComponent* Component);
	class UPhysicalMaterial* STATIC_GetPhysicsMaterialForBody(class USkeletalMeshComponent* Component, const struct FName& BodyName);
	void STATIC_GetLeftFootRotatorFromNormal(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FTransform& LeftBoneTransform, const struct FVector& WorldNormal, struct FRotator* leftFootRotator, struct FRotator* LeftFootComponentRotator);
	TEnumAsByte<EHitlocation> STATIC_GetHitlocationForBodyIndex(class UPrimitiveComponent* Component, int BodyIndex);
	TEnumAsByte<EHitlocation> STATIC_GetHitlocationForBody(class USkeletalMeshComponent* Component, const struct FName& BodyName);
	float STATIC_GetHipsOffset(class UObject* WorldContextObject, class USkeletalMeshComponent* SkeletalMeshComponent, const struct FTransform& RightFootBoneTransform, const struct FTransform& LeftFootBoneTransform, const struct FVector& rightFootTarget, const struct FVector& leftFootTarget);
	void STATIC_GetFootRotator(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FName& SocketName, const struct FVector& NormalZ, struct FRotator* FootToNormalRotator, struct FRotator* FootToNormalRotator4);
	TAssetPtr<class USkeletalMesh> STATIC_GetDefaultSkeletalMeshForBodyPart(bool IsFemale, ECharacterBodySlots Slot, TEnumAsByte<ENudity> NudityLevel);
	int STATIC_GetCharacterArmourTint(const struct FCharacterLayout& CharacterLayout, ECharacterBodySlots Slot, unsigned char DyeChannel);
	struct FRotator STATIC_FindZLookAtRotator(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& Target);
	class FString STATIC_CharacterLayoutToString(const struct FCharacterLayout& Layout);
	void STATIC_CharacterLayoutToClipboard(const struct FCharacterLayout& Layout);
	int STATIC_CharacterLayoutHash(const struct FCharacterLayout& Layout);
	class USkeletalMeshComponent* STATIC_AddSkeletalMeshComponent(class AActor* Owner, bool bManualAttachment, const struct FTransform& RelativeTransform, class UClass* Class);
};


// Class ConanSandbox.CharacterCreationActorBase
// 0x00E8 (0x04B8 - 0x03D0)
class ACharacterCreationActorBase : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCharacterSelected;                                      // 0x03D0(0x0010) (ZeroConstructor, InstancedReference)
	class USpotLightComponent*                         m_Spotlight;                                              // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             m_Voice;                                                  // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxIntensity;                                             // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultIntensity;                                         // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x03F8(0x0068) MISSED OFFSET
	class USkeletalMeshComponent*                      m_MeshComponents[0xA];                                    // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      m_CharacterBase;                                          // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterCreationActorBase");
		return ptr;
	}

};


// Class ConanSandbox.CharacterIKCollectionHelper
// 0x0000 (0x0028 - 0x0028)
class UCharacterIKCollectionHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterIKCollectionHelper");
		return ptr;
	}


	void STATIC_UpdateJointTargets(class USkeletalMeshComponent* SkeletalMeshComponent, class AActor* Actor, float DeltaTime, struct FCharacterIKCollection* Collection);
	void STATIC_ResetCollection(struct FCharacterIKCollection* Collection);
	void STATIC_GetIdleSkeletonPosition(class USkeletalMeshComponent* SkeletalMesh, const struct FName& rightFootName, const struct FName& leftFootName, struct FCharacterIKCollection* Collection);
	struct FVector STATIC_CalculateLimbIK(class USkeletalMeshComponent* SkeletalMeshComponent, class AActor* Actor, float DeltaTime, const struct FName& LimbBoneName, struct FCharacterIKCollection* Collection);
	bool STATIC_CalculateLegIK(class USkeletalMeshComponent* SkeletalMeshComponent, class AActor* Actor, float DeltaTime, bool wasClamped, float HipsXSwing, float feetInterpSpeed, float hipsInterpSpeed, struct FCharacterIKCollection* Collection);
};


// Class ConanSandbox.CharacterLayoutInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterLayoutInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterLayoutInterface");
		return ptr;
	}


	void SetCharacterLayoutFromCode(const struct FCharacterLayout& Layout);
};


// Class ConanSandbox.CharacterCreationBase
// 0x0010 (0x03B0 - 0x03A0)
class UCharacterCreationBase : public UWindowRoot
{
public:
	bool                                               CanRandomize;                                             // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x03A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterCreationBase");
		return ptr;
	}


	void SlotInvokePressed();
	void ShowRotationIcon(bool show);
	void ShowRandom(bool show);
	void ShowEdit(bool show);
	void ShowCommit(bool show);
	void RotateHeadYAxis(float AxisValue);
	void RotateHeadXAxis(float AxisValue);
	void RemoveHotkeys();
	void RemoveEscapeNode();
	void Randomize();
	bool OnEscapeNodeRemoved();
	void OnBeginInitialCinematic();
	void GoToPrev();
	void GoToNext();
	bool GoBackToOption();
	void EditName();
	void AddEscapeNode();
};


// Class ConanSandbox.CharacterLodSystem
// 0x0100 (0x04D0 - 0x03D0)
class ACharacterLodSystem : public AInfo
{
public:
	int                                                SimultaneousIK;                                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              IKLodUpdateInterval;                                      // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              IKRange;                                                  // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                SimultaneousHighQualityHair;                              // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HairLodUpdateInterval;                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03E4(0x000C) MISSED OFFSET
	TArray<class AActor*>                              IKActors;                                                 // 0x03F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	TArray<class UCharacterCustomizationComponent*>    HighQualityHairComponents;                                // 0x0408(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0418(0x0018) MISSED OFFSET
	TMap<class AActor*, struct FEmpty>                 m_EnabledClothSimActors;                                  // 0x0430(0x0050) (ZeroConstructor)
	TMap<class AActor*, struct FEmpty>                 m_AllClothSimActors;                                      // 0x0480(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterLodSystem");
		return ptr;
	}


	void UpdateClothSimAdjustmentRegistration(class AActor* Actor, bool* WasRegistered);
	void STATIC_UnregisterIKInterface(class AActor* Object);
	void STATIC_RegisterIKInterface(class AActor* Actor);
	bool RegisterForHighQualityHair(class UCharacterCustomizationComponent* Component);
	bool STATIC_HasClothingActors(class AActor* Actor);
	void STATIC_EnableClothSimulation(class AActor* Actor, bool Enable);
};


// Class ConanSandbox.CharacterMapMarkerComponent
// 0x0228 (0x0320 - 0x00F8)
class UCharacterMapMarkerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F8(0x0088) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAllMarkersDiscovered;                                   // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FMapMarker                                  m_PlayerLocationMarker;                                   // 0x0190(0x0058) (Edit, DisableEditOnInstance)
	struct FStringAssetReference                       DeathMarkerIcon;                                          // 0x01E8(0x0010) (Edit, DisableEditOnInstance)
	struct FStringAssetReference                       DeathMarkerIconLooted;                                    // 0x01F8(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0208(0x0004) MISSED OFFSET
	int                                                m_NumDeathMarkerIDsAssigned;                              // 0x020C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                m_LastLootedDeathMarkerID;                                // 0x0210(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	TArray<int>                                        m_DiscoveredMarkers;                                      // 0x0218(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FMapMarker>                          m_DynamicMarkers;                                         // 0x0228(0x0010) (ZeroConstructor)
	TArray<struct FMapMarker>                          m_PlayerMarkers;                                          // 0x0238(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FMapMarker>                          m_DeathMarkers;                                           // 0x0248(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0258(0x0018) MISSED OFFSET
	TMap<ETransientMarkerType, struct FStringAssetReference> TransientIcons;                                           // 0x0270(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class AActor*>                           m_CorrespondingCorpses;                                   // 0x02C0(0x0050) (ZeroConstructor)
	class UDataTable*                                  m_StaticMapMarkers;                                       // 0x0310(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterMapMarkerComponent");
		return ptr;
	}


	void UpdateDynamicMarkerLocationToClient(int ID, const struct FVector2D& Location);
	void UpdateDeathMarkerLootedToClient(int ID);
	void UpdateDeathMarkerCorrespondingCorpseToClient(int ID, class AActor* correspondingCorpse);
	void SignalAllMarkersDiscovered__DelegateSignature();
	void SetDeathMarkerLooted(int ID);
	void ServerSetCorpseDestroyed(int ID, float lifeSpanSeconds);
	void ServerRequestInitialMarkerUpdate();
	void ServerRequestDeathMarkerCorrespondingActor(int ID);
	void RemoveTransientMarkerByType(ETransientMarkerType MarkerType);
	void RemovePlayerMarkerToClient(int ID);
	void RemovePlayerMarker(int ID);
	void RemoveDynamicMarkerToClient(int ID);
	void RemoveDeathMarkerToClient(int ID);
	void OnPossessedBy();
	void OnDataLoaded();
	void InitialMarkerUpdate(TArray<int> discoveredMarkers, TArray<struct FMapMarker> playerMarkers, TArray<struct FMapMarker> dynamicMarkers, TArray<struct FMapMarker> deathMarkers);
	int AddTransientMarker(const class FString& Name, ETransientMarkerType MarkerType, const struct FVector2D& Location);
	void AddPlayerMarkerToClient(const struct FMapMarker& marker);
	void AddPlayerMarker(const class FString& Name, const struct FStringAssetReference& Icon, const struct FVector2D& Location);
	void AddDynamicMarkerToClient(const struct FMapMarker& marker);
	void AddDiscoveryMarkerToClient(const struct FMapMarker& marker);
	void AddDeathMarkerToClient(const struct FMapMarker& marker);
	int AddDeathMarker(class UUniqueID* correspondingCorpseID);
};


// Class ConanSandbox.GlobalMarkerRegistry
// 0x0080 (0x0450 - 0x03D0)
class AGlobalMarkerRegistry : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GlobalMarkerRegistry");
		return ptr;
	}


	void UpdateGlobalMarkerLocation(int ID, const struct FVector2D& Location);
	void RemoveGlobalMarker(int ID);
	struct FMapMarker AddGlobalMarker(const class FString& Name, const struct FStringAssetReference& Icon, const struct FVector2D& Location, float ExpiryTime);
};


// Class ConanSandbox.ChatCommandHelper
// 0x0010 (0x0038 - 0x0028)
class UChatCommandHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ChatCommandHelper");
		return ptr;
	}

};


// Class ConanSandbox.CollisionStaticMeshComponent
// 0x0000 (0x08B0 - 0x08B0)
class UCollisionStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CollisionStaticMeshComponent");
		return ptr;
	}


	void GetProperOverlapInfos(TArray<struct FOverlapInfo>* OverlapInfos);
	struct FHitResult GetOverlapHitResult(int Index, bool* Success);
};


// Class ConanSandbox.CollisionSystemComponent
// 0x0128 (0x0220 - 0x00F8)
class UCollisionSystemComponent : public UActorComponent
{
public:
	TArray<class AActor*>                              DefendingActors;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TMap<class AActor*, int>                           SweepAttackGroupsHit;                                     // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               HasDoneLineTrace;                                         // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FHitResult                                  LineTraceHitResult;                                       // 0x0160(0x0088) (Edit, BlueprintVisible, Transient, IsPlainOldData)
	TArray<struct FHitResult>                          SweepHitResults;                                          // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FHitResult>                          VisitedFeedbackResults;                                   // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FHitResult>                          FinishedFeedbackResults;                                  // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	bool                                               HasSweepHitAnything;                                      // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               LineTraceWasAHit;                                         // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x021A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CollisionSystemComponent");
		return ptr;
	}


	bool SweepAttack(class UPrimitiveComponent* SweepComponent, const struct FTransform& StartTransform, const struct FTransform& EndTransform, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool OverlapInsteadOfBlocking, bool TwoSweeps, TArray<struct FHitResult>* OutHits);
	void CheckAlreadyExistingHit(const struct FHitResult& HitResult, bool IsLineTrace, bool* Existed, int* ItemIndex);
	void AddSweepResultLowLevel(const struct FHitResult& SweepResult, bool IsDefended, int SweepAttackGroup, bool* DoHitFeedback);
	void AddLineTraceResult(const struct FHitResult& LineTraceHitResult);
};


// Class ConanSandbox.ConanAIPerceptionComponent
// 0x0010 (0x01E0 - 0x01D0)
class UConanAIPerceptionComponent : public UAIPerceptionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAIPerceptionComponent");
		return ptr;
	}


	float GetRecentDamageTakenFromActor(class AActor* Actor);
	float GetCallForHelpRating(class AActor* Actor);
};


// Class ConanSandbox.ConanAISystem
// 0x0000 (0x0110 - 0x0110)
class UConanAISystem : public UAISystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAISystem");
		return ptr;
	}

};


// Class ConanSandbox.ConanPathFollowingComponent
// 0x0120 (0x04D0 - 0x03B0)
class UConanPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              AccelerationFactor;                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMinSpeed;                                     // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshSearchExtent;                                      // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceMaxTimeHorizonSeconds;                           // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceMinTimeHorizonSeconds;                           // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceMinDistance;                                     // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceSearchRadius;                                    // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialAvoidanceYawSearchRange;                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceMinSpeed;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondsUntilFullAvoidanceYawSearchRange;                  // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AvoidPlayerCharacters : 1;                                // 0x03D8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TArray<struct FPredictedObstacle>                  PredictedObstacles;                                       // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FPolarUtilityVector                         YawAngleWeights;                                          // 0x03F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0408(0x00A8) MISSED OFFSET
	TArray<class AActor*>                              m_CandidateObstacles;                                     // 0x04B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanPathFollowingComponent");
		return ptr;
	}


	void SetUseAvoidance(bool UseAvoidance);
	void SetEnforceRotationRate(bool EnforceRotationRate);
	void GetUseAvoidance(bool* UseAvoidance);
	void GetEnforceRotationRate(bool* EnforceRotationRate);
	void DrawDebugPath(const struct FLinearColor& LineColor1, const struct FLinearColor& LineColor2, float Duration, float Thickness);
};


// Class ConanSandbox.ConanAITask_Move
// 0x0000 (0x0108 - 0x0108)
class UConanAITask_Move : public UAITask_MoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAITask_Move");
		return ptr;
	}

};


// Class ConanSandbox.ConanAmbientSound
// 0x0008 (0x03D8 - 0x03D0)
class AConanAmbientSound : public AActor
{
public:
	class UConanAudioComponent*                        AudioComponent;                                           // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAmbientSound");
		return ptr;
	}


	void Stop();
	void Play(float StartTime);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};


// Class ConanSandbox.ConanAudioComponent
// 0x0030 (0x05F0 - 0x05C0)
class UConanAudioComponent : public UAudioComponent
{
public:
	TAssetPtr<class USoundBase>                        SoundAsset;                                               // 0x05C0(0x0020) (Edit, BlueprintVisible)
	float                                              CachedMaxAudibleDistance;                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseAttachParentMobility : 1;                             // 0x05E4(0x0001) (BlueprintVisible)
	unsigned char                                      bUsesTimeOfDay : 1;                                       // 0x05E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0xB];                                       // 0x05E5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAudioComponent");
		return ptr;
	}


	class UConanAudioComponent* STATIC_SpawnConanSound2D(class UObject* InWorldContextObject, class USoundBase* InSound, float InVolumeMultiplier, float InPitchMultiplier, float InStartTime, class USoundConcurrency* InConcurrencySettings);
	void LoadAndPlay(float StartTime);
	void LoadAndFadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	class UConanAudioComponent* STATIC_CreateConanSound2D(class UObject* InWorldContextObject, class USoundBase* InSound, float InVolumeMultiplier, float InPitchMultiplier, float InStartTime, class USoundConcurrency* InConcurrencySettings);
};


// Class ConanSandbox.PointOfInterestCollectionHelper
// 0x0000 (0x0028 - 0x0028)
class UPointOfInterestCollectionHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PointOfInterestCollectionHelper");
		return ptr;
	}


	void STATIC_OnReceiveDamageFromPOI(class AActor* DamageInstigator, float DamageAmount, struct FPointOfInterestCollection* Collection);
	void STATIC_OnPOISensedChanged(class AActor* poi, ESenseUpdateAction UpdateAction, struct FPointOfInterestCollection* Collection);
	void STATIC_OnPOIDestroyed(class AActor* poi, struct FPointOfInterestCollection* Collection);
	class AActor* STATIC_GetMostHatedPOI(class AActor* Hater, struct FPointOfInterestCollection* Collection);
	void STATIC_AppendPOIsWithinRadius(const struct FPointOfInterestCollection& Collection, const struct FVector& PointOfReference, float Radius, TArray<class AActor*>* MatchingPOIs);
	void STATIC_AppendAllPOIs(const struct FPointOfInterestCollection& Collection, TArray<class AActor*>* AllPOIs);
};


// Class ConanSandbox.ConanBaseAIController
// 0x0048 (0x0510 - 0x04C8)
class AConanBaseAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	bool                                               NavMeshIgnoreComponentUpdate;                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NavMeshIgnoreChildComponentUpdate;                        // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04D2(0x0006) MISSED OFFSET
	class UBehaviorTree*                               DeferredBTAsset;                                          // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x04E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBaseAIController");
		return ptr;
	}

};


// Class ConanSandbox.ConanAIController
// 0x00D0 (0x05E0 - 0x0510)
class AConanAIController : public AConanBaseAIController
{
public:
	struct FPointOfInterestCollection                  PointOfInterestCollection;                                // 0x0510(0x00C0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAIController");
		return ptr;
	}


	void SetPlannedRotation(float TargetYaw, float YawVelocity);
	void OnMoveBlockedBy(class AConanCharacter* BlockedCharacter, const struct FHitResult& Impact);
	int STATIC_GetDefaultPathFollowingBlockDetectionNumSamples();
	float STATIC_GetDefaultPathFollowingBlockDetectionInterval();
	float STATIC_GetDefaultPathFollowingBlockDetectionDistanceThreshold();
	struct FName STATIC_GetBBKeyName(EConanBBKey Key);
	void GetBBKey(EConanBBKey Key, struct FBlackboardKeySelector* Selector);
	void ClearPlannedRotation();
};


// Class ConanSandbox.ServerReport
// 0x0028 (0x0050 - 0x0028)
class UServerReport : public UObject
{
public:
	class FString                                      IPv4;                                                     // 0x0028(0x0010) (ZeroConstructor)
	int                                                SPort;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x003C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerReport");
		return ptr;
	}

};


// Class ConanSandbox.ServerStartupReport
// 0x0058 (0x00A8 - 0x0050)
class UServerStartupReport : public UServerReport
{
public:
	class FString                                      MacAddress;                                               // 0x0050(0x0010) (ZeroConstructor)
	int                                                RevisionNumber;                                           // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SnapshotID;                                               // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                QPort;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSlotCount;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ServerRegion;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                serverType;                                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartupTime;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class FString                                      ServerName;                                               // 0x0080(0x0010) (ZeroConstructor)
	class FString                                      Platform;                                                 // 0x0090(0x0010) (ZeroConstructor)
	int                                                IsOfficial;                                               // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerStartupReport");
		return ptr;
	}

};


// Class ConanSandbox.ServerStatusReport
// 0x0070 (0x00C0 - 0x0050)
class UServerStatusReport : public UServerReport
{
public:
	int                                                PlayerCount;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class FString                                      FrameRate;                                                // 0x0058(0x0010) (ZeroConstructor)
	uint32_t                                           Uptime;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class FString                                      MemoryUsage;                                              // 0x0070(0x0010) (ZeroConstructor)
	class FString                                      CpuTime;                                                  // 0x0080(0x0010) (ZeroConstructor)
	class FString                                      NPCAILODs;                                                // 0x0090(0x0010) (ZeroConstructor)
	class FString                                      BuildingAILODs;                                           // 0x00A0(0x0010) (ZeroConstructor)
	class FString                                      PlaceablesAILODs;                                         // 0x00B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerStatusReport");
		return ptr;
	}

};


// Class ConanSandbox.ServerStatReporter
// 0x0058 (0x0080 - 0x0028)
class UServerStatReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerStatReporter");
		return ptr;
	}

};


// Class ConanSandbox.ConanGameSession
// 0x0008 (0x03F0 - 0x03E8)
class AConanGameSession : public AGameSession
{
public:
	class UServerStatReporter*                         m_serverStatReporter;                                     // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanGameSession");
		return ptr;
	}

};


// Class ConanSandbox.ServerSettings
// 0x0320 (0x06F0 - 0x03D0)
class AServerSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	int                                                BlueprintConfigVersion;                                   // 0x03D8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ConfigVersion;                                            // 0x03DC(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EServerRegion>                         ServerRegion;                                             // 0x03E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               PVPEnabled;                                               // 0x03E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RestrictPVPTime;                                          // 0x03E2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03E3(0x0001) MISSED OFFSET
	int                                                PVPTimeWeekdayStart;                                      // 0x03E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PVPTimeWeekdayEnd;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PVPTimeWeekendStart;                                      // 0x03EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PVPTimeWeekendEnd;                                        // 0x03F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RestrictPVPBuildingDamageTime;                            // 0x03F4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	int                                                PVPBuildingDamageTimeWeekdayStart;                        // 0x03F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PVPBuildingDamageTimeWeekdayEnd;                          // 0x03FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PVPBuildingDamageTimeWeekendStart;                        // 0x0400(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PVPBuildingDamageTimeWeekendEnd;                          // 0x0404(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<ECombatModeModifier>                   CombatModeModifier;                                       // 0x0408(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               NoOwnership;                                              // 0x0409(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               ContainersIgnoreOwnership;                                // 0x040A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x040B(0x0001) MISSED OFFSET
	float                                              LandClaimRadiusMultiplier;                                // 0x040C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BuildingPreloadRadius;                                    // 0x0410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               CanDamagePlayerOwnedStructures;                           // 0x0414(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class FString                                      ServerPassword;                                           // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, SaveGame)
	class FString                                      AdminPassword;                                            // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, SaveGame)
	class FString                                      ServerMessageOfTheDay;                                    // 0x0438(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame)
	bool                                               LogoutCharactersRemainInTheWorld;                         // 0x0448(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                OfflinePlayersUnconsciousBodiesHours;                     // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DurabilityMultiplier;                                     // 0x0450(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               DropEquipmentOnDeath;                                     // 0x0454(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               EverybodyCanLootCorpse;                                   // 0x0455(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0456(0x0002) MISSED OFFSET
	int                                                CorpsesPerPlayer;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MaxPlayerCorpsesInArea;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCorpsesAreaRadiusCheckedOnDeath;                    // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemConvertionMultiplier;                                 // 0x0464(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ThrallConversionMultiplier;                               // 0x0468(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              FuelBurnTimeMultiplier;                                   // 0x046C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              TetheringMinLimit;                                        // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              TetheringMaxLimit;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              CoopTetheringLimit;                                       // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, SaveGame, IsPlainOldData)
	float                                              TetheringRangeDelta;                                      // 0x047C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DayCycleSpeedScale;                                       // 0x0480(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DayTimeSpeedScale;                                        // 0x0484(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              NightTimeSpeedScale;                                      // 0x0488(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DawnDuskSpeedScale;                                       // 0x048C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ClientCatchUpTime;                                        // 0x0490(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               UseClientCatchUpTime;                                     // 0x0494(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	float                                              PlayerHealthMultiplier;                                   // 0x0498(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              PlayerStaminaMultiplier;                                  // 0x049C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              StaminaCostMultiplier;                                    // 0x04A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ThrallCorruptionRemovalMultiplier;                        // 0x04A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              PlayerCorruptionGainMultiplier;                           // 0x04A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ItemSpoilRateScale;                                       // 0x04AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              HarvestAmountMultiplier;                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ResourceRespawnSpeedMultiplier;                           // 0x04B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BuildingDamageMultiplier;                                 // 0x04B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	ENPCMindReadingMode                                NPCMindReadingMode;                                       // 0x04BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               PathFollowingSendsAngularVelocity;                        // 0x04BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x04BE(0x0002) MISSED OFFSET
	float                                              UnconsciousTimeSeconds;                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ConciousnessDamageMultiplier;                             // 0x04C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               DisableBuildingAbandonment;                               // 0x04C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	float                                              MaxBuildingDecayTime;                                     // 0x04CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              MaxDecayTimeToAutoDemolish;                               // 0x04D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BuildingDecayTimePerScore;                                // 0x04D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BuildingDecayTimeMultiplier;                              // 0x04D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DecayCleanupTimeMultiplier;                               // 0x04DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DecayBonusTimeRate;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               DecayShowBuildingScore;                                   // 0x04E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               EnableAutoFacingOnAttack;                                 // 0x04E5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               EnableTargetLock;                                         // 0x04E6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               CachedPVPEnabled;                                         // 0x04E7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ValidatePhysNavWalkWithRaycast;                           // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              LocalNavMeshVisualizationFrequency;                       // 0x04EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              LocalLandClaimVisualizationFrequency;                     // 0x04F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                LocalLandClaimVisualizationRadius;                        // 0x04F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	EClaimChannel                                      LocalLandClaimVisualizationChannel;                       // 0x04F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               UseLocalQuadraticAngularVelocityPrediction;               // 0x04F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x04FA(0x0002) MISSED OFFSET
	float                                              LQAVPUseTime;                                             // 0x04FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              LQAVPFadeTime;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	ELQAVPMethod                                       LQAVPMethod;                                              // 0x0504(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	float                                              NetworkSimulatedSmoothRotationTimeWithLQAVP;              // 0x0508(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<ENudity>                               MaxNudity;                                                // 0x050C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EServerCommunity>                      ServerCommunity;                                          // 0x050D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x050E(0x0002) MISSED OFFSET
	int                                                clanMaxSize;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsLoadErrorsFatal;                                        // 0x0514(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               ChatHasGlobal;                                            // 0x0515(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0516(0x0002) MISSED OFFSET
	float                                              ChatLocalRadius;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ChatMaxMessageLength;                                     // 0x051C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ChatFloodControlAheadCounter;                             // 0x0520(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EServerVoiceChat>                      serverVoiceChat;                                          // 0x0524(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               EnableSandStorm;                                          // 0x0525(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               AvatarsDisabled;                                          // 0x0526(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RestrictAvatarSummoningTime;                              // 0x0527(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                AvatarSummoningTimeWeekdayStart;                          // 0x0528(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                AvatarSummoningTimeWeekdayEnd;                            // 0x052C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                AvatarSummoningTimeWeekendStart;                          // 0x0530(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                AvatarSummoningTimeWeekendEnd;                            // 0x0534(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              AvatarLifetime;                                           // 0x0538(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              AvatarSummonTime;                                         // 0x053C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MaxDeathMapMarkers;                                       // 0x0540(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsBattlEyeEnabled;                                        // 0x0544(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsVACEnabled;                                             // 0x0545(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0546(0x0006) MISSED OFFSET
	int                                                MaxAllowedPing;                                           // 0x054C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowAfrica;                                        // 0x0550(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowAsia;                                          // 0x0551(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowCentralEurope;                                 // 0x0552(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowEasternEurope;                                 // 0x0553(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowWesternEurope;                                 // 0x0554(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowNorthAmerica;                                  // 0x0555(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowOceania;                                       // 0x0556(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RegionAllowSouthAmerica;                                  // 0x0557(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	class FString                                      RegionBlockList;                                          // 0x0558(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame)
	class FString                                      ServerModList;                                            // 0x0568(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame)
	TArray<class FString>                              IPBlackList;                                              // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData16[0xB0];                                      // 0x0588(0x00B0) MISSED OFFSET
	int                                                PurgeLevel;                                               // 0x0638(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PurgePeriodicity;                                         // 0x063C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RestrictPurgeTime;                                        // 0x0640(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	int                                                PurgeRestrictionWeekdayStart;                             // 0x0644(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PurgeRestrictionWeekdayEnd;                               // 0x0648(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PurgeRestrictionWeekendStart;                             // 0x064C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PurgeRestrictionWeekendEnd;                               // 0x0650(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              PurgePreparationTime;                                     // 0x0654(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              PurgeDuration;                                            // 0x0658(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MinPurgeOnlinePlayers;                                    // 0x065C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               AllowBuilding;                                            // 0x0660(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	float                                              ClanPurgeTrigger;                                         // 0x0664(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ClanScoreUpateFrequency;                                  // 0x0668(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               EnablePurge;                                              // 0x066C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData19[0x83];                                      // 0x066D(0x0083) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerSettings");
		return ptr;
	}


	void UpdateBlueprintConfig(int OldVersion, int NewVersion);
	void UpdateAllSessionSettings();
	void SetUseClientCatchUpTime(bool Value);
	void SetTetheringRange(float MaximumTetheringRange);
	void SetStaminaCostMultiplier(float Multiplier);
	bool SetSoldierSettings();
	void SetServerVoiceChat(TEnumAsByte<EServerVoiceChat> serverVoiceChat);
	void SetServerSettingString(const class FString& serverSetting, const class FString& Value, class AConanPlayerController* PC, bool canModifyInGame, bool updateSession);
	void SetServerSetting(const class FString& serverSetting, float Value, class AConanPlayerController* PC, bool canModifyInGame, bool updateSession);
	void SetServerRegion(TEnumAsByte<EServerRegion> ServerRegion);
	void SetServerMessageOfTheDay(const class FString& Message);
	void SetServerCommunity(TEnumAsByte<EServerCommunity> Community);
	void SetResourceRespawnSpeedMultiplier(float Scale);
	void SetPVPEnabled(bool Enabled);
	void SetPlayerStaminaMultiplier(float Multiplier);
	void SetPlayerHealthMultiplier(float Multiplier);
	bool SetPeasantSettings();
	void SetNoOwnership(bool no_ownership);
	void SetNightTimeSpeedScale(float Scale);
	void SetMaxNudity(TEnumAsByte<ENudity> Nudity);
	void SetLandClaimRadiusMultiplier(float Coefficient);
	void SetItemSpoilRateScale(float Scale);
	void SetIsLoadErrorsFatal(bool Value);
	void SetHarvestAmountMultiplier(float Scale);
	void SetDayTimeSpeedScale(float Scale);
	void SetDayCycleSpeedScale(float Scale);
	void SetDawnDuskSpeedScale(float Scale);
	void SetClientCatchUpTime(float Value);
	void SetClanMaxSize(int clanMaxSize);
	void SetCanDamagePlayerOwnedStructures(bool canDamage);
	void SetBuildingPreloadRadius(float Radius);
	bool SetBarbarianSettings();
	void SaveSettings();
	void PrintServerSetting(class AConanPlayerController* PC, const class FString& serverSetting);
	void PrintAllServerSettings(class AConanPlayerController* PlayerController);
	void OnRep_MaxNudity();
	void OnOverwriteAdminPasswordWarningClosed(class UWindowRoot* WindowRoot);
	void OnAgreeToResetDefaultSettings(EMessageBoxDialogResult Result);
	void K2_ResetVariable(const struct FName& VariableName);
	bool GetUseClientCatchUpTime();
	float GetUnconsciousTimeSeconds();
	float GetThrallCorruptionRemovalMultiplier();
	float GetThrallConversionMultiplier();
	float GetTetheringRangeDelta();
	float GetTetheringRange();
	float GetTetheringMaxLimit();
	float GetStaminaCostMultiplier();
	TEnumAsByte<EServerVoiceChat> GetServerVoiceChat();
	class FString GetServerSettingString(class UProperty* Property);
	class UProperty* GetServerSettingProperty(const class FString& serverSetting);
	TEnumAsByte<EServerRegion> GetServerRegion();
	class FString GetServerMessageOfTheDay();
	TEnumAsByte<EServerCommunity> GetServerCommunity();
	bool GetRestrictPVPTime();
	bool GetRestrictPVPBuildingDamageTime();
	bool GetRestrictPurgeTime();
	bool GetRestrictAvatarSummoningTime();
	float GetResourceRespawnSpeedMultiplier();
	class FString GetRegionBlockList();
	bool GetRegionAllowWesternEurope();
	bool GetRegionAllowSouthAmerica();
	bool GetRegionAllowOceania();
	bool GetRegionAllowNorthAmerica();
	bool GetRegionAllowEasternEurope();
	bool GetRegionAllowCentralEurope();
	bool GetRegionAllowAsia();
	bool GetRegionAllowAfrica();
	int GetPVPTimeWeekendStart();
	int GetPVPTimeWeekendEnd();
	int GetPVPTimeWeekdayStart();
	int GetPVPTimeWeekdayEnd();
	bool GetPVPEnabled();
	int GetPVPBuildingDamageTimeWeekendStart();
	int GetPVPBuildingDamageTimeWeekendEnd();
	int GetPVPBuildingDamageTimeWeekdayStart();
	int GetPVPBuildingDamageTimeWeekdayEnd();
	int GetPurgeTimeWeekendStart();
	int GetPurgeTimeWeekendEnd();
	int GetPurgeTimeWeekdayStart();
	int GetPurgeTimeWeekdayEnd();
	int GetPurgePreparationTime();
	int GetPurgePeriodicity();
	int GetPurgeLevel();
	int GetPurgeDuration();
	struct FName GetPropertyKey(const class FString& setting);
	float GetPlayerXPRateMultiplier();
	float GetPlayerStaminaMultiplier();
	float GetPlayerIdleThirstMultiplier();
	float GetPlayerIdleHungerMultiplier();
	float GetPlayerHealthMultiplier();
	float GetPlayerCorruptionGainMultiplier();
	float GetPlayerCorpsesAreaRadiusCheckedOnDeath();
	float GetPlayerActiveThirstMultiplier();
	float GetPlayerActiveHungerMultiplier();
	int GetOfflinePlayersUnconsciousBodiesHours();
	bool GetNoOwnership();
	float GetNightTimeSpeedScale();
	int GetMinPurgeOnlinePlayers();
	int GetMaxPlayerCorpsesInArea();
	TEnumAsByte<ENudity> GetMaxNudity();
	float GetMaxDecayTimeToAutoDemolish();
	int GetMaxDeathMapMarkers();
	float GetMaxBuildingDecayTime();
	int GetMaxAllowedPing();
	bool GetLogoutCharactersRemainInTheWorld();
	int GetLatestBlueprintConfigVersion();
	float GetLandClaimRadiusMultiplier();
	float GetItemSpoilRateScale();
	float GetItemConvertionMultiplier();
	bool GetIsVACEnabled();
	bool GetIsLoadErrorsFatal();
	bool GetIsBattlEyeEnabled();
	TArray<class FString> GetIPBlackList();
	float GetHarvestAmountMultiplier();
	float GetFuelBurnTimeMultiplier();
	bool GetEverybodyCanLootCorpse();
	bool GetEnableTargetLock();
	bool GetEnablePurge();
	bool GetEnableAutoFacingOnAttack();
	float GetDurabilityMultiplier();
	bool GetDropEquipmentOnDeath();
	bool GetDisableBuildingAbandonment();
	bool GetDecayShowBuildingScore();
	float GetDecayCleanupTimeMultiplier();
	float GetDecayBonusTimeRate();
	float GetDayTimeSpeedScale();
	float GetDayCycleSpeedScale();
	float GetDawnDuskSpeedScale();
	int GetCorpsesPerPlayer();
	bool GetContainersIgnoreOwnership();
	float GetConciousnessDamageMultiplier();
	TEnumAsByte<ECombatModeModifier> GetCombatModeModifier();
	float GetClientCatchUpTime();
	float GetClanScoreUpateFrequency();
	float GetClanPurgeTriggerValue();
	int GetClanMaxSize();
	int GetChatMaxMessageLength();
	float GetChatLocalRadius();
	bool GetChatHasGlobal();
	int GetChatFloodControlAheadCounter();
	bool GetCanDamagePlayerOwnedStructures();
	float GetBuildingPreloadRadius();
	float GetBuildingDecayTimePerScore();
	float GetBuildingDecayTimeMultiplier();
	float GetBuildingDamageMultiplier();
	float GetAvatarSummonTime();
	int GetAvatarSummoningTimeWeekendStart();
	int GetAvatarSummoningTimeWeekendEnd();
	int GetAvatarSummoningTimeWeekdayStart();
	int GetAvatarSummoningTimeWeekdayEnd();
	bool GetAvatarsDisabled();
	float GetAvatarLifetime();
	bool GetAllowBuilding();
	class FString GetAdminPassword();
};


// Class ConanSandbox.EmoteController
// 0x0020 (0x0118 - 0x00F8)
class UEmoteController : public UActorComponent
{
public:
	ECharacterEmotes                                   CurrentEmote;                                             // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UAnimMontage*                                CurrentEmoteAnimMontage;                                  // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentEmoteFlags;                                        // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                m_ReplicatedEmote;                                        // 0x010C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EmoteController");
		return ptr;
	}


	void StopEmoteAnimation();
	void StopEmote(bool bForceStop);
	void StartEmoteAnimation();
	void StartEmote(ECharacterEmotes emoteToStart);
	void SetWaitingForLoopEmoteMontageFinished(bool bWaiting);
	void ServerStopEmote(bool bForceStop);
	void ServerStartEmote(int emoteToStart);
	void OnRep_ReplicatedEmote();
	void OnEmoteStopped();
	void OnEmoteEnded();
	void OnCharacterMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void MulticastStopEmote(bool bForceStop);
	void MulticastStartEmote(int NewEmote);
	void LearnEmote(ECharacterEmotes EmoteToLearn, bool ShowNotification);
	bool IsWaitingForLoopEmoteMontageFinished();
	void GiveStartupEmotes();
	void ClientNotifyLearnedEmote(ECharacterEmotes emoteLearned);
};


// Class ConanSandbox.ConanCheatManager
// 0x0050 (0x00C8 - 0x0078)
class UConanCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0078(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanCheatManager");
		return ptr;
	}


	void WhatsMyName();
	void Weapon();
	void UpdateClanPergeMeter();
	void TrackFrameRate(bool TrackFrameRate);
	void TestFIFO(int Style, const class FString& Text, const class FString& Header);
	void TeleportToPlayer(const class FString& PlayerId);
	void TeleportPlayer(float X, float Y, float Z);
	void SummonPlayer(const class FString& PlayerId);
	void Suicide();
	void StartNextPurgePhase();
	void SpawnItem(int TemplateId, int quantity);
	void ShowPurgeFIFO();
	void ShowPlayers();
	void SetStat(const class FString& stat, float Value);
	void SetServerSetting(const class FString& Value, class FString* serverSetting);
	void SetServerMaxFPS(float maxFPS);
	void SetMaxNudity(int Value);
	void SetInventoryItemIntStat(int Slot, int stat, int Value);
	void SetEnergy(int Type, float Value);
	void SetDefaultDayCycle();
	void SaveServerSettings();
	void ReportLeaks();
	void RemovePlayerMarker(int ID);
	void RemoveGlobalMarker(int ID);
	void PrintPlayerInfo(const class FString& playerNameOrID);
	void PrintBuffs();
	void PlayerMessage(const class FString& playerName, const class FString& Message);
	void PlayerCanBuildEverywhere(const class FString& PlayerId);
	void NoSprintCost();
	void MakeMeNormal();
	void LogServerPhysicsSceneInfo(bool SynchronousScene, bool AsynchronousScene, bool DynamicObjects, bool StaticObjects);
	void LearnRecipe(int TemplateId);
	void LearnEmote(ECharacterEmotes EmoteToLearn);
	void KillNPCs(float range, class FString* Filter);
	bool IsAdmin();
	void Invisibility();
	void GetTimeOfDay();
	void GetStat(const class FString& stat);
	void GetServerSetting(class FString* serverSetting);
	void GetServerHealth();
	void GetAllServerSettings();
	void FillClanPergeMeter();
	void EmptyClanPergeMeter();
	void DumpVirtualAllocStats();
	void DumpTrackedPhysXActiveBodies();
	void DumpAllPhysXBodies();
	void DebugCurrentPlayer();
	void DayNightCycle(const class FString& PropertyName, float Value);
	void CreateRandomBuilding(float X, float Y, float Z, int NumPieces, class FString* password);
	void CrashServer(const class FString& Message);
	void Cloak();
	void ClearVirtualAllocStats();
	void ClearTrackedPhysXActiveBodies();
	void ClearAllJourneyEvents();
	void BroadcastMessage(const class FString& Message);
	void BreakMyItems(float newPercentage);
	void AddPlayerMarker(const class FString& Name, float X, float Y);
	void AddJourneyEvent(const class FString& EventName);
	void AddGlobalMarker(const class FString& Name, float X, float Y, float Timeout);
	void ActivateGuiModule(bool Activate, class FString* module);
};


// Class ConanSandbox.ServerInfoBase
// 0x0250 (0x0570 - 0x0320)
class UServerInfoBase : public URootWidget
{
public:
	struct FBlueprintSessionResult                     m_Session;                                                // 0x0320(0x00C8) (BlueprintVisible)
	bool                                               m_IsBattlEyeEnabled;                                      // 0x03E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	struct FServerModList                              m_ServerModList;                                          // 0x03F0(0x0018) (BlueprintVisible)
	bool                                               m_IsValid;                                                // 0x0408(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0409(0x0017) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalSelected;                                           // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalInvoked;                                            // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0440(0x0058) MISSED OFFSET
	struct FServerListViewEntry                        m_Entry;                                                  // 0x0498(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerInfoBase");
		return ptr;
	}


	void SignalSelectedDelegate__DelegateSignature(class UServerInfoBase* server);
	void SignalInvokedDelegate__DelegateSignature();
	void SignalFavoriteChangedDelegate__DelegateSignature(bool bFavorite, const struct FBlueprintSessionResult& session);
	void ShowAsSelected(bool isSelected);
	void SetIsFavorite(bool IsFavorite, bool PlayAnimation);
	void PlayFavoriteAnimation();
	bool IsFavorite();
};


// Class ConanSandbox.ConanTicker
// 0x0040 (0x0068 - 0x0028)
class UConanTicker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanTicker");
		return ptr;
	}

};


// Class ConanSandbox.Guild
// 0x0280 (0x0650 - 0x03D0)
class AGuild : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x03D0(0x0180) MISSED OFFSET
	class UUniqueID*                                   m_GuildId;                                                // 0x0550(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int64_t                                            m_NameLastChangedBy;                                      // 0x0558(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int64_t                                            m_MOTDLastChangedBy;                                      // 0x0560(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class FString                                      m_GuildName;                                              // 0x0568(0x0010) (Net, ZeroConstructor)
	struct FText                                       m_MessageOfTheDay;                                        // 0x0578(0x0018) (Net)
	int64_t                                            m_GuildMasterPlayerId;                                    // 0x0590(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerInfo>                         m_GuildMembers;                                           // 0x0598(0x0010) (Net, ZeroConstructor)
	TArray<struct FEventInfo>                          m_GuildEvents;                                            // 0x05A8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x98];                                      // 0x05B8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.Guild");
		return ptr;
	}


	void UpdateMemberRank(class UUniqueID* PlayerId, TEnumAsByte<ERank> newRank);
	bool ShowRecreationWarning(class AConanCharacter* Character);
	void RemoveMember(class UUniqueID* PlayerId);
	void PromoteToGuildMaster(class UUniqueID* oldGuildMaster, class UUniqueID* newGuildMaster);
	void OnNameChangedByReplicated();
	void OnMOTDChangedByReplicated();
	void OnMessageOfTheDayReplicated();
	void OnGuildNameReplicated();
	void OnGuildMembersReplicated();
	void OnGuildMasterPlayerIdReplicated();
	void OnGuildEventsReplicated();
	void MemberRemoved(class UUniqueID* guildId, class UUniqueID* PlayerId);
	void MemberRankUpdated(class UUniqueID* guildId, class UUniqueID* PlayerId);
	void MemberAdded(class UUniqueID* guildId, class UUniqueID* PlayerId);
	bool IsOfficer(class AConanCharacter* Character);
	bool IsGuildMaster(class AConanCharacter* Character);
	TEnumAsByte<ERank> GetPlayerRank(class UUniqueID* PlayerId);
	struct FText GetMessageOfTheDay();
	class UUniqueID* GetId();
	class FString GetGuildName();
	TArray<struct FPlayerInfo> GetGuildMembers();
	TArray<struct FEventInfo> GetGuildEvents();
	void CreateGuildLogEvent(class AConanPlayerController* Player, const struct FText& EventMessages);
};


// Class ConanSandbox.FuncomGenericLibrary
// 0x0000 (0x0028 - 0x0028)
class UFuncomGenericLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FuncomGenericLibrary");
		return ptr;
	}


	void STATIC_UpdateOverlaps(class AActor* Actor);
	void STATIC_UltraDynamicSkyHelper_UpdateRelevantAreaIndices(class UObject* WorldContextObject, const struct FVector& DefaultEnvAreaPos, TArray<struct FEnvironmentArea> EnvAreas, TArray<float>* OutRelevantAreaCoeffs, TArray<int>* OutRelevatAreaIndices, float* OutSummedAreaWeights);
	void STATIC_TraceDownToNearestSurface(class UWorld* World, TArray<TEnumAsByte<EObjectTypeQuery>> collisionChannels, float TraceDistance, struct FVector* coordinate);
	bool STATIC_TimerEquals(const struct FTimerHandle& Timer1, const struct FTimerHandle& Timer2);
	class UObject* STATIC_SyncLoadAsset(TAssetPtr<class UObject> Asset);
	class AActor* STATIC_SpawnActorFromPath(const class FString& Path, const struct FTransform& Transform);
	void STATIC_SortStringKeyIntValueMap(TMap<class FString, int> mapToSort);
	void STATIC_SnapToNearestSurface(class ACharacter* TargetCharacter, TArray<TEnumAsByte<EObjectTypeQuery>> collisionChannels, float TraceDistance, float DistanceThreshold, bool logIfLongDistance);
	void STATIC_ShowXboxHelp();
	void STATIC_SetWidgetComponentScreenSpace(class UWidgetComponent* WidgetComponent, bool ScreenSpace);
	void STATIC_SetWidgetComponentPivot(class UWidgetComponent* WidgetComponent, const struct FVector2D& Pivot);
	void STATIC_SandAffectedByWindHelper(class AActor* Actor, const struct FName& ParameterName, const struct FTransform& InverseTransform, float Extension, class UParticleSystemComponent* ParticleComponent);
	void STATIC_RemoveTickerDelegateHandle(class UObject* WorldContextObject, struct FTickerHandle* Handle);
	void STATIC_OpenStorePage(class APlayerController* Controller);
	bool STATIC_NotifyPurgeEvent(class UObject* WorldContextObject, EPurgeMeterEvent EventType, class UUniqueID* ClanID);
	void STATIC_LogGameEventWithTimestampAndLocation(class UObject* WorldContextObject, unsigned char HeatmapEventType, EDebugLevel DebugLevel, const struct FVector& Location, const class FString& Detail);
	void STATIC_LogGameEventWithTimestamp(class UObject* WorldContextObject, unsigned char HeatmapEventType, EDebugLevel DebugLevel, const class FString& Detail);
	void STATIC_LogGameEventWithLocation(class UObject* WorldContextObject, unsigned char HeatmapEventType, EDebugLevel DebugLevel, const struct FVector& Location, const class FString& Detail);
	void STATIC_LogGameEvent(class UObject* WorldContextObject, unsigned char HeatmapEventType, EDebugLevel DebugLevel, const class FString& Detail);
	class UClass* STATIC_LoadClassFromPath(const class FString& Path);
	class UObject* STATIC_LoadAssetFromPath(const class FString& Path);
	class FString STATIC_ListMaterialInstances(const struct FName& AssetPath, bool bDebug);
	bool STATIC_IsValidMontageSlot(class UAnimMontage* AnimMontage, const struct FName& SlotName);
	bool STATIC_IsValidMontageSection(class UAnimMontage* Montage, const struct FName& SectionName);
	bool STATIC_IsStreamInstallFinished(class UObject* WorldContextObject);
	bool STATIC_IsRunningOnXbox();
	bool STATIC_IsRunningOnPS4();
	bool STATIC_IsRunningOnConsole();
	bool STATIC_IsRunningFromEditor(class UObject* WorldContextObject);
	bool STATIC_IsPurgeDisabled();
	bool STATIC_IsPointCompletelyInsideCollision(class UObject* WorldContextObject, const struct FVector& Point, TArray<class AActor*> ActorsToIgnore, bool DrawDebug);
	bool STATIC_IsNudityDisabled();
	bool STATIC_IsMapNameValid(class UObject* WorldContextObject, const struct FName& LevelName);
	bool STATIC_IsIpAdressValid(const class FString& IPAdress);
	bool STATIC_IsCensored();
	bool STATIC_IsAllowedToDisplayPlayerNetId();
	bool STATIC_IsActionMappingDown(class APlayerController* Controller, const struct FName& ActionName);
	class AConanWorldSettings* STATIC_GetWorldSettings(class UObject* WorldContextObject);
	void STATIC_GetWindParameters(class UObject* WorldContextObject, const struct FVector& Position, struct FVector* OutDirection, float* OutSpeed, float* OutMinGustAmt, float* OutMaxGustAmt);
	class FString STATIC_GetVoiceChatDisplayName(TEnumAsByte<EServerVoiceChat> VoiceChat);
	class UUniqueID* STATIC_GetUniqueIDFromPlayerInfo(class UObject* WorldContextObject, const struct FPlayerInfo& PlayerInfo);
	class FString STATIC_GetTimeOfDayDisplayName(TEnumAsByte<ETimeOfDay> Time);
	class FString STATIC_GetThrallTierDisplayName(TEnumAsByte<EThrallTier> ThrallTier);
	class FString STATIC_GetThrallProfessionDisplayName(TEnumAsByte<EThrallProfession> ThrallProfession);
	class FString STATIC_GetTeleportDisplayName(TEnumAsByte<ETeleportLocation> Teleport);
	class FString STATIC_GetSteamFiltersDisplayName(TEnumAsByte<ESteamFilters> steamFilters);
	class ASpatialHashSystem* STATIC_GetSpatialHashSystem(class UObject* WorldContextObject, ESpatialHashGridSize GridSize);
	class FString STATIC_GetSourceString(const struct FText& Value);
	class ASoundRegistry* STATIC_GetSoundRegistry(class UObject* WorldContextObject);
	class AServerSettings* STATIC_GetServerSettings(class UObject* WorldContextObject);
	class FString STATIC_GetRegionDisplayName(TEnumAsByte<EServerRegion> region);
	struct FVector STATIC_GetRandomPointInBox(class UBoxComponent* BoxCollision);
	struct FText STATIC_GetRaceDisplayName(ECharacterRace Race);
	class FString STATIC_GetPlatformName();
	EPlatformID STATIC_GetPlatformID();
	class FString STATIC_GetPhysicsSceneInfo(class UObject* WorldContextObject, bool SynchronousScene, bool AsynchronousScene, bool DynamicObjects, bool StaticObjects);
	class UPhysicalMaterial* STATIC_GetPhysicalMaterial(class UPrimitiveComponent* Component);
	void STATIC_GetOverlappingActorsAsHitResults(class UPrimitiveComponent* PrimComp, class UClass* ClassFilter, TArray<struct FHitResult>* OutOverlappingActors);
	struct FName STATIC_GetOutermostName(class UObject* Object);
	class FString STATIC_GetNudityOptionDisplayName(TEnumAsByte<ENudity> nudityOptions);
	float STATIC_GetMontageSectionDuration(class ACharacter* Character, const struct FName& SectionName, bool AdjustForPlayRate);
	struct FLootTableWeightedRow STATIC_GetLootTableWeightedRow(class UDataTable* DataTable, const struct FName& RowName, bool* Result);
	struct FLootTableRow STATIC_GetLootTableRow(class UDataTable* DataTable, const struct FName& RowName, bool* Result);
	TArray<struct FOverlapResult> STATIC_GetInstancedMeshOverlaps(class UInstancedStaticMeshComponent* InstancedComponent, int Index);
	struct FHitResult STATIC_GetHitResultFromOverlapInfoByIndex(class UPrimitiveComponent* PrimitiveComponent, int Index);
	struct FHitResult STATIC_GetHitResultFromOverlapInfo(const struct FOverlapInfo& OverlapInfoElement);
	struct FText STATIC_GetGodDisplayName(ECharacterGod God);
	struct FKey STATIC_GetFirstKeyForActionMapping(class UObject* WorldContextObject, class APlayerController* Controller, const struct FName& ActionName);
	struct FText STATIC_GetFailureDetailsText(TEnumAsByte<EFailureDetails> FailureDetails, const class FString& additionalInfo);
	int STATIC_GetDayOfYear(const struct FDateTime& A);
	struct FText STATIC_GetCrimeDisplayName(ECharacterCrime Crime);
	class AConanPlayerController* STATIC_GetControllerFromUniqueId(class UObject* WorldContextObject, class UUniqueID* UniqueID);
	class FString STATIC_GetCommunityDisplayName(TEnumAsByte<EServerCommunity> Community);
	class FString STATIC_GetCombatModeDisplayName(TEnumAsByte<EServerType> CombatMode);
	class ACharacterLodSystem* STATIC_GetCharacterLodSystem(class UObject* WorldContextObject);
	class AConanCharacter* STATIC_GetCharacterFromUniqueId(class UObject* WorldContextObject, class UUniqueID* UniqueID);
	class FString STATIC_GetAssetsByPathName(const struct FName& AssetPath, bool bPrintToLog);
	class FString STATIC_GetAssetsByClass(class UClass* Class, bool bPrintToLog);
	int STATIC_GetAssetInstallationProgress(class UObject* WorldContextObject, const struct FName& ObjectPath);
	int STATIC_GetActiveGamepadId(class UObject* WorldContextObject);
	void STATIC_GenerateBugReport();
	class FString STATIC_FilterAssetsByPathName(const struct FName& AssetPath, bool bPrintToLog);
	bool STATIC_DoesIntHaveFlag(int flagContainer, int flagID);
	class FString STATIC_CountryToRegion(const class FString& Country);
	float STATIC_ComputeSignedAngleOnXYPlane(const struct FVector& Vec1, const struct FVector& Vec2);
	void STATIC_ChangeApplicationWindowTitle(const class FString& myNewTitle);
	void STATIC_ChangeApplicationWindowIcon();
	TArray<struct FHitResult> STATIC_CapHitResultListLength(TArray<struct FHitResult> objectList, const struct FVector& Location, const struct FRotator& charRotation, int MaxCount);
	bool STATIC_CanItemBeMovedToInventory(class UGameItem* Item, class UItemInventory* targetInventory);
	void STATIC_ApplyFCDamage(class AActor* DamagedActor, float BaseDamage, TEnumAsByte<EFCDamageType> FCDamageType, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	bool STATIC_AmISupposeToRunMulticastCall(class UActorComponent* Component, class UUniqueID* initiatingPlayer);
	struct FTickerHandle STATIC_AddTickerDelegate(const struct FScriptDelegate& Delegate, float Delay);
	struct FTickerHandle STATIC_AddTicker(class UObject* Object, const class FString& FunctionName, float Delay);
	int STATIC_AddFlagToInt(int flagContainer, int flagID);
	class UActorComponent* STATIC_AddComponentByClass(class AActor* TargetActor, class UClass* ComponentClass, const struct FTransform& RelativeTransform);
};


// Class ConanSandbox.GuildInviteBase
// 0x0080 (0x0420 - 0x03A0)
class UGuildInviteBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03A0(0x0040) MISSED OFFSET
	class UClass*                                      ListEntryClass;                                           // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x03E8(0x0028) MISSED OFFSET
	class UUniqueID*                                   m_GuildId;                                                // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GuildInviteBase");
		return ptr;
	}


	void InviteTimedOut();
	void InviteDeclined(class UFCButton* Button);
	void InviteAccepted(class UFCButton* Button);
};


// Class ConanSandbox.InviteControllerParing
// 0x00E8 (0x0110 - 0x0028)
class UInviteControllerParing : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InviteControllerParing");
		return ptr;
	}


	void ShowExternalLoginUI(class UFCButton* Button);
	void InvitationPairingComplete(class APlayerController* PlayerController);
	void InvitationDeclined(class UFCButton* Button);
};


// Class ConanSandbox.InGameJoinOrInvite
// 0x00F8 (0x0120 - 0x0028)
class UInGameJoinOrInvite : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET
	class UMessageBoxWidget*                           m_MessageBox;                                             // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InGameJoinOrInvite");
		return ptr;
	}


	void OnUserActionPerformed(EMessageBoxDialogResult Result);
};


// Class ConanSandbox.ConanGameInstance
// 0x0390 (0x04A0 - 0x0110)
class UConanGameInstance : public UDWGameInstance
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0110(0x0090) MISSED OFFSET
	class AServerSettings*                             ServerSettings;                                           // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalPendingConnectionFalure;                            // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalOtherConnectionFalure;                              // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalGamepadChanged;                                     // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalLiveConnectionLost;                                 // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalLiveConnectionRestored;                             // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalTrailStatusChanged;                                 // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalClientStateChanged;                                 // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               m_GameStartedOffline;                                     // 0x0228(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_ActiveUserIsGuestAccount;                               // 0x0229(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x022A(0x0006) MISSED OFFSET
	class UConanTicker*                                Ticker;                                                   // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	class UConsoleSettingsHelper*                      m_ConsoleSettingsHelper;                                  // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGUIModuleController*                        m_GUIModuleController;                                    // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x100];                                     // 0x0250(0x0100) MISSED OFFSET
	TAssetPtr<class UClass>                            m_SettingsBPClass;                                        // 0x0350(0x0020) (Edit, DisableEditOnInstance)
	class FString                                      m_NextMapName;                                            // 0x0370(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x40];                                      // 0x0380(0x0040) MISSED OFFSET
	class UShowLoginUICallbackProxy*                   m_ShowLoginUIProxy;                                       // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UConanOnlineEventsLibrary*                   m_OnlineEventsLibrary;                                    // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInGameJoinOrInvite*                         m_InGameJoinOrInvite;                                     // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInviteControllerParing*                     m_InviteParing;                                           // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x03E8(0x0020) MISSED OFFSET
	TArray<class UMessageBoxWidget*>                   ErrorMessageBoxStack;                                     // 0x0408(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData08[0x78];                                      // 0x0418(0x0078) MISSED OFFSET
	TArray<class UGraniteTileSet*>                     PreloadedGraniteTilesets;                                 // 0x0490(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanGameInstance");
		return ptr;
	}


	void UnloadAsset(TAssetPtr<class UObject> Asset);
	class UObject* SyncLoadAsset(TAssetPtr<class UObject> Asset);
	void StartMultiplayerNow();
	void SignalTrailStatusChangedDelegate__DelegateSignature(bool isInTrial);
	void SignalPendingConnectionFailure__DelegateSignature(TEnumAsByte<ENetworkFailure> FailureType, const class FString& ErrorString);
	void SignalOtherConnectionFailure__DelegateSignature(TEnumAsByte<ENetworkFailure> FailureType, const class FString& ErrorString);
	void SignalLiveConnectionRestoredDelegate__DelegateSignature();
	void SignalLiveConnectionLostDelegate__DelegateSignature();
	void SignalGamepadChangedDelegate__DelegateSignature(int ControllerId);
	void SignalClientStateChanged__DelegateSignature(EClientState newState, EClientState prevState);
	void ShowVoiceChatBlockedMessage();
	void ShowExternalLoginUI(class UFCButton* Button);
	void SetClientState(EClientState ClientState);
	void ReturnToMainMenu(class UFCButton* Button);
	bool RequestUserMessage(EXboxUserStateError errorType);
	bool RequestCloseUserMessage(EXboxUserStateError errorType);
	void OnUserActionForErrorBox(EMessageBoxDialogResult Result);
	void OnPostLoadMap();
	void OnPlayTogetherDedicated(class UFCButton* Button);
	void OnPlayTogetherCoop(class UFCButton* Button);
	void OnOfflineStatusAcknowledged(class UFCButton* Button);
	void OnGamepadKeyDown(const struct FKeyEvent& KeyEvent);
	void OnDLCChanged();
	void OnAccountPickerCloseSuccess(class APlayerController* PlayerController);
	void OnAccountPickerCloseFail(class APlayerController* PlayerController);
	void OnAccountPickerClose(class APlayerController* PlayerController);
	void LeavingGame();
	bool IsLoadingFinished();
	void HandleOwnerDiedEvent(class AConanCharacter* DeadCharacter);
	void HandleLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus);
	void HandleClientNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, TEnumAsByte<EFailureDetails> FailureDetails, const class FString& additionalInformation);
	void GoToMainMenu();
	class UMessageBoxWidget* GetTopErrorBoxInStack();
	float GetLoadingProgress();
	EXboxUserStateError GetLastErrorType();
	class UMessageBoxWidget* GetErrorBoxForType(EXboxUserStateError Error);
	class UMessageBoxWidget* GetErrorBoxAndStackIndexForType(EXboxUserStateError Error, int* StackIndexOut);
	class UConanGameInstance* STATIC_GetConanGameInstance(class UObject* WorldContextObject);
	EClientState GetClientState();
	bool ForceCloseErrorBoxForType(EXboxUserStateError Error);
	void ForceCloseAllErrorBoxes();
	void BlockVoiceChat();
	void ASyncLoadAsset(TAssetPtr<class UObject> Asset);
	void ActivateVoiceChat();
};


// Class ConanSandbox.EscapeStackNode
// 0x0028 (0x0050 - 0x0028)
class UEscapeStackNode : public UObject
{
public:
	struct FScriptDelegate                             SignalActivated;                                          // 0x0028(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SignalActivatedBP;                                        // 0x0038(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	bool                                               ShouldEatInput;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EscapeStackNode");
		return ptr;
	}


	void SignalActivatedBP__DelegateSignature(bool* wasHandled);
	bool SignalActivated__DelegateSignature();
};


// Class ConanSandbox.GUIModuleController_Activate_CallProxy
// 0x0048 (0x0070 - 0x0028)
class UGUIModuleController_Activate_CallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotActivated;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginLoad;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGUIModuleController*                        GUIModuleController;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GUIModuleController_Activate_CallProxy");
		return ptr;
	}


	class UGUIModuleController_Activate_CallProxy* STATIC_GUIModuleController_Activate(class UGUIModuleController* ModuleController, const struct FName& ModuleName, bool Activate, bool blocking);
};


// Class ConanSandbox.GUIModuleController
// 0x0180 (0x01A8 - 0x0028)
class UGUIModuleController : public UObject
{
public:
	struct FScriptMulticastDelegate                    SignalMouseEnabled;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalGUIControlModeChanged;                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalGamepadKeyDown;                                     // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalKeyBindingsChanged;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalUserInactive;                                       // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalResetGamepadOverlay;                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	TArray<class UWindowRoot*>                         m_WindowList;                                             // 0x0090(0x0010) (ExportObject, ZeroConstructor)
	class UWindowRoot*                                 m_MouseBlockWindow;                                       // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWindowRoot*                                 m_HotkeyHelpOverlay;                                      // 0x00A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UGUIModule*>                          m_Modules;                                                // 0x00B0(0x0010) (ZeroConstructor)
	TArray<class UEscapeStackNode*>                    m_EscapeStack;                                            // 0x00C0(0x0010) (ZeroConstructor)
	class UDataTable*                                  m_GUIModuleTable;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	class URootWidget*                                 m_KeyNavSelectedWidget;                                   // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET
	class AConanPlayerController*                      m_PlayerController;                                       // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInputComponent*                             m_InputComponent;                                         // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0148(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GUIModuleController");
		return ptr;
	}


	void UpdateLastUserInteractionTime(double lastInteractionTime);
	void UpdateHotkeyOnGamepadHelpOverlay(const class FString& ID, const struct FText& newLabel, class UWindowRoot* Window);
	void ToggleModule(const struct FName& ModuleName);
	bool ToggleGlobalVisibility();
	void StopMusic(int soundID);
	void SlotGenderChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SignalUserInactiveDelegates__DelegateSignature(bool Inactive);
	void SignalResetGamepadOverlay__DelegateSignature();
	void SignalMouseEnabled__DelegateSignature(bool IsEnabled);
	void SignalKeyBindingsChanged__DelegateSignature();
	void SignalGUIControlModeChanged__DelegateSignature(TEnumAsByte<EGUIControlMode> mode);
	void SignalGamepadKeyDownDelegate__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void ShowURL(const class FString& URL);
	void SetPlayerController(class APlayerController* PlayerController);
	void SetGlobalVisibility(bool visible);
	void SetGamepadHelpOverlay(class UWindowRoot* Window);
	void RemoveWindow(class UWindowRoot* RootWidget);
	void RemoveHotkeyFromGamepadHelpOverlay(const class FString& ID, class UWindowRoot* Window);
	bool RemoveEscapeStackNode(class UEscapeStackNode* Node);
	class UEscapeStackNode* PushEscapeStackNode();
	bool ProcessEscapeStack();
	class UEscapeStackNode* PopEscapeStackNode();
	int PlayMusic(const struct FSlateSound& Sound);
	void MainMenuPressed();
	void LoadModules();
	void KeyNavSelectWidget(class URootWidget* Widget, TEnumAsByte<EGUINavDirection> Direction);
	class URootWidget* KeyNavGetSelectedWidget();
	bool IsModuleActive(const struct FName& ModuleName);
	bool IsCategoryEnabled(TEnumAsByte<EGUIModuleCategory> Category);
	class UGUIModule* GetModule(const struct FName& Name);
	class UGUIModuleController* STATIC_GetGUIModuleController(class UObject* WorldContextObject);
	TEnumAsByte<EGUIControlMode> GetGUIControlMode();
	bool GetGlobalVisibility();
	void EnableModule(const struct FName& ModuleName, bool Enable);
	void EnableCategory(TEnumAsByte<EGUIModuleCategory> Category, bool Enable);
	void DeactivateFullscreenModules(class UGUIModule* moduleToIgnore);
	void AddWindow(class UWindowRoot* RootWidget, int ZOrder);
	void AddHotkeyToGamepadHelpOverlay(const struct FGamepadHotkeyHelp& newHotkey, class UWindowRoot* Window);
	class UWindowRoot* ActivateModule(const struct FName& ModuleName, bool Activate, bool Force);
};


// Class ConanSandbox.ConanCharacter
// 0x0940 (0x1130 - 0x07F0)
class AConanCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07F0(0x0018) MISSED OFFSET
	class AActor*                                      m_InteractingActor;                                       // 0x0808(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0810(0x0008) MISSED OFFSET
	bool                                               WeaponChangeDisabled;                                     // 0x0818(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_IsReparing;                                             // 0x0819(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasTimeCatchedUp;                                         // 0x081A(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x081B(0x0001) MISSED OFFSET
	int                                                FeatVersion;                                              // 0x081C(0x0004) (BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	class UUniqueID*                                   CharacterUniqueID;                                        // 0x0820(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   CharacterGuildID;                                         // 0x0828(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSpawnTable;                                         // 0x0830(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TMap<TEnumAsByte<EWeaponArcheTypes>, struct FComboPresetTableRow> ComboPresetsMap;                                          // 0x0838(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               isAlive;                                                  // 0x0888(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	struct FDateTime                                   lastTimeOnline;                                           // 0x0890(0x0008) (BlueprintVisible, BlueprintReadOnly)
	int                                                Community;                                                // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAggressive;                                             // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsThrall;                                                 // 0x089D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDialogNPC;                                              // 0x089E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x089F(0x0001) MISSED OFFSET
	float                                              MinEmoteTime;                                             // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEmoteTime;                                             // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmoteChance;                                              // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasCombatTarget;                                          // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	struct FVector                                     CombatTargetLocation;                                     // 0x08B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class UEmoteController*                            EmoteController;                                          // 0x08C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetDistributionComponent*                TargetingComponent;                                       // 0x08C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UConanBehaviorComponent*                     BehaviorComponent;                                        // 0x08D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAvoidanceComponent*                         AvoidanceComponent;                                       // 0x08D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x08E0(0x0008) MISSED OFFSET
	int                                                WalkSpeed;                                                // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RunSpeed;                                                 // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRotationRate;                                      // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoubleJumpTimeoutTime;                                    // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isDoubleJumpTimoutTimerActive;                            // 0x08F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDoubleJumped;                                          // 0x08F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      currentSurfaceType;                                       // 0x08FA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x5];                                       // 0x08FB(0x0005) MISSED OFFSET
	struct FHitResult                                  CachedHitResultForGroundSurface;                          // 0x0900(0x0088) (IsPlainOldData)
	bool                                               bShouldUseDirectionalMovement;                            // 0x0988(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x17];                                      // 0x0989(0x0017) MISSED OFFSET
	bool                                               SprintNoCost;                                             // 0x09A0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               SenseDetection;                                           // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               PlayerInvisibility;                                       // 0x09A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsDemiGod;                                                // 0x09A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterStateChanged;                                  // 0x09A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              AdditionalInteractionExtent;                              // 0x09B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x09BC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalClientOnDamageTaken;                                // 0x09C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0x140];                                     // 0x09D0(0x0140) MISSED OFFSET
	TArray<class AConanCharacter*>                     CarriedPeople;                                            // 0x0B10(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                              BeingCarriedWeight;                                       // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableFloorTilt;                                          // 0x0B24(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0B25(0x0007) MISSED OFFSET
	bool                                               EnableTiltRoll;                                           // 0x0B2C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0B2D(0x0003) MISSED OFFSET
	float                                              TiltAdjust;                                               // 0x0B30(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTiltPitch;                                             // 0x0B34(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTiltRoll;                                              // 0x0B38(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRootMotionAutoFreeze;                                    // 0x0B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRootMotionAutoFrozen;                                   // 0x0B40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                ClimbingBlockingVolumeCount;                              // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData16[0xC];                                       // 0x0B54(0x000C) MISSED OFFSET
	struct FCharacterIKCollection                      CharacterIKCollection;                                    // 0x0B60(0x0290) (Edit, BlueprintVisible)
	bool                                               ReplicatedHangingFromCeiling;                             // 0x0DF0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ReplicatedIsInSlidingMode;                                // 0x0DF1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               NavMeshIgnoreComponentUpdate;                             // 0x0DF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NavMeshIgnoreChildComponentUpdate;                        // 0x0DF3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0DF4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterPossessedOnClient;                             // 0x0DF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalCharacterIsBuilding;                                // 0x0E08(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0E18(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData19[0x50];                                      // 0x0E18(0x0050) UNKNOWN PROPERTY: SetProperty ConanSandbox.ConanCharacter.m_PendingStreams
	unsigned char                                      UnknownData20[0x50];                                      // 0x0E70(0x0050) MISSED OFFSET
	ECharacterState                                    m_CharacterState;                                         // 0x0EC0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0EC1(0x0007) MISSED OFFSET
	struct FText                                       m_KillerName;                                             // 0x0EC8(0x0018)
	class UStatHolder*                                 m_StatHolder;                                             // 0x0EE0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AConanGameState*                             m_GameState;                                              // 0x0EE8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UHungerSystem*                               m_HungerSystem;                                           // 0x0EF0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorPersistenceComponent*                  m_ActorPersistence;                                       // 0x0EF8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEmoteInventory*                             m_EmoteInventory;                                         // 0x0F00(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       m_CharacterName;                                          // 0x0F08(0x0018) (Net)
	unsigned char                                      UnknownData22[0x8];                                       // 0x0F20(0x0008) MISSED OFFSET
	TEnumAsByte<EGUIControlMode>                       m_GUIControlMode;                                         // 0x0F28(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0F29(0x0007) MISSED OFFSET
	class AConanCharacter*                             m_CurrentTarget;                                          // 0x0F30(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1F8];                                     // 0x0F38(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanCharacter");
		return ptr;
	}


	void WaitForServerdDayCycleToCatchUp();
	void ValidateFeatVersion();
	bool UseItem();
	void UpdateRotationWhenThirdPersonPassiveGamepad();
	void UpdateMaxMovementSpeed();
	void UpdateClientGUIControlMode(TEnumAsByte<EGUIControlMode> newMode);
	void TakeAllLootItems(class AActor* LootContainer);
	void SurfaceTypeChanged(const struct FHitResult& HitResult);
	void StartDoubleJumpTimeoutTimer();
	bool SpawnTemplateItem(int TemplateId, int quantity, float durabilityPercentage, float durability, bool ShowNotification);
	void SlotInteractioActorGUIModuleActivated(class UGUIModule* module, bool activated);
	void SlotInteractingActorDestroyed(class AActor* DestroyedActor);
	void SignalClientOnDamageTakenDelegate__DelegateSignature(class AActor* Attacker);
	void SignalCharacterIsBuildingDelegate__DelegateSignature(bool isBuilding);
	void SetUROEnabled(bool enableURO);
	void SetStat(const class FString& stat, float Value);
	void SetKillerName(const struct FText& killerNameInput);
	void SetIntStat(ECharIntStatID statID, int Value);
	void SetInteractingActor(class AActor* Actor, const struct FName& guiModuleName, class UObject* WorldContextObject);
	void SetGuildId(class UUniqueID* guildId);
	void SetFloatStat(ECharFloatStatID statID, float Value);
	void SetDirectionalMovementMode(bool bUseDirectionalMovementMode, bool Force);
	bool SetCharacterState(ECharacterState newState);
	void SetCharacterSpawnTableID(const struct FName& SpawnTableID);
	void SetCharacterName(const struct FText& Name);
	void SetCharacterIsBuilding(bool isBuilding);
	void ServerUpdateGuildRank(int64_t playerToUpdate, int newRank);
	void ServerUpdateFeatVersion();
	void ServerUpdateClientGUIControlMode(TEnumAsByte<EGUIControlMode> newMode);
	void ServerSetIntStat(ECharIntStatID statID, int Value);
	void ServerSetFloatStat(ECharFloatStatID statID, float Value);
	void ServerSetDirectionalMovementMode(bool bMovementMode);
	void ServerSendGuildInvite(int64_t PlayerId);
	void ServerResetAllFeats();
	void ServerRepairItem(int itemID);
	void ServerRepairCraftingQueueItem(class UItemInventory* inventory, uint32_t Slot, class UCraftingQueue* CraftingQueue);
	void ServerRemoveRecipeFromQueue(class UCraftingQueue* queue, int Index, int Count);
	void ServerRemoveAllRecipes(class UCraftingQueue* queue);
	void ServerPurchaseFeat(int featID);
	void ServerPromoteToGuildMaster(int64_t newGuildMaster);
	void ServerProcessGuildInviteResponse(TEnumAsByte<EInviteResponse> response, class UUniqueID* guildId, class UUniqueID* senderId);
	void ServerLeaveGuild();
	void ServerKickPlayer(int64_t playerToKick);
	void ServerIsFeatVersionUpToDate();
	void ServerInteractionDisabled(class AActor* Actor, class APlayerController* playerInstigator);
	void ServerGetThrallCharacterLayout(class UItemInventory* inventory, int Index);
	void ServerGetPlayersValidForGuildInvite(class UUniqueID* guildId);
	void ServerExitClimbing();
	void ServerEditMessageOfTheDay(const struct FText& newMessage);
	void ServerEditGuildName(const struct FText& newName);
	void ServerDyeItem(int Index, class UItemInventory* inventory, int Color, int Channel);
	void ServerDropInventoryItem(class UItemInventory* inventory, int Index);
	void ServerDestroyGuild(EMessageBoxDialogResult Result);
	void ServerDecaySystemOwnerOnline(class ABuildableBase* buildable);
	void ServerCreateGuild(const class FString& guildName);
	void ServerCheckTimeOfDay();
	void ServerAddRecipeToQueue(class UCraftingQueue* queue, int Index, int Count);
	void ServerAddArtisanRecipeToQueue(class UCraftingQueue* queue, class UItemInventory* sourceInventory, int Index, int Count);
	void RootMotionAutoFrozen__DelegateSignature();
	bool RemoveIntStatModifier(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID);
	bool RemoveFloatStatModifier(ECharFloatStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID);
	void RemoveCarriedCharacter(class AConanCharacter* Character);
	bool RemoveAllIntStatModifiers(ECharIntStatID statID);
	bool RemoveAllFloatStatModifiers(ECharFloatStatID statID);
	void ReceivePossessCompleted();
	void ReceiveFCDamageEvent(float Damage, TEnumAsByte<EFCDamageType> FCDamageType, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveDataLoaded();
	void RecalculateCarriedPeopleWeight();
	void PrintStat(const class FString& stat);
	void OnRootMotionEnd();
	void OnRootMotionBegin();
	void OnPurgeEventTrigered(EPurgeEventType EventType);
	void OnPlayerTargeted(class AActor* TargetingActor);
	void OnPlayerTargetCleared(class AActor* TargetingActor);
	void OnMouseEnabled(bool IsEnabled);
	void OnItemRepairFinished(class UGameItem* Item, float repairXp);
	void OnGuildIdReplicated();
	void OnDoubleJumpTimeout();
	void OnDoubleJumped();
	void OnCorruptionChanged(EnergyTypes Type, float Value);
	void OnCharacterIdReplicated();
	void OnAttemptedToWalkOffNavMesh(class UCharacterMovementComponent* MovementComponent, const struct FVector& OldLocation, const struct FVector& NewLocation, bool IsContinuousCheck);
	void OnAttackEnd();
	void OnAttackBegin();
	void MulticastOnTargetChanged(class AConanCharacter* NewTarget);
	void MulticastInvisibility();
	void MulticastClimbingEdgeTransition(float EdgeRelativeHeight, bool WasInitialTrace);
	void MoveUp();
	class UItemInventory* MoveLootToInventory(class UItemInventory* lootInventory);
	void MoveDown();
	int KillCharacter(TEnumAsByte<EHitlocation> HitLocation, const struct FText& killerNameInput);
	bool IsThirdPersonPassiveGamepad();
	bool IsPlayer();
	bool IsGuildFull(class AGuild* Guild);
	bool InSubstateInternal(unsigned char NumSubState);
	void STATIC_HUDShowFIFO(class UObject* WorldContextObject, const struct FText& Text);
	bool HasWeaponsEquipped();
	bool HasShieldEquipped();
	bool HasDLC(const struct FName& DLCPackageName);
	void GiveDismantleReimbursement(TArray<struct FBuildableHealthEntry> HealthPool);
	void GetTotalIntStatModification(ECharIntStatID statID, float* totalMultiplier, int* totalAdder);
	void GetTotalFloatStatModification(ECharFloatStatID statID, float* totalMultiplier, float* totalAdder);
	struct FRotator GetTiltRotator();
	struct FRotator GetTargetTiltRotator();
	TArray<unsigned char> GetSubstateList();
	class UStatHolder* GetStatHolder();
	class UShortcutBarInventory* GetShortcutBarInventory();
	class URecipeManager* GetRecipeInventory();
	class UProgressionSystem* GetProgressionSystem();
	class UUniqueID* GetPrioritizedUID();
	class FString GetNPCKillerPrefix();
	class UClass* GetNavigationFilter();
	struct FText GetKillerName();
	bool GetIsInThirdPerson();
	void GetIntStatModification(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, float* totalMultiplier, int* totalAdder);
	class UIntStatChangeSignalNode* GetIntStatChangeSignal(ECharIntStatID statID);
	int GetIntStat(ECharIntStatID statID, TEnumAsByte<EStatModifierMode> mode);
	class AActor* GetInteractingActor();
	class UHungerSystem* GetHungerSystem();
	class UUniqueID* GetGuildId();
	class AGuild* GetGuild();
	struct FVector GetGroundNormal();
	class AConanGameState* GetGameState();
	struct FVector GetFocusPoint();
	void GetFloatStatModification(ECharFloatStatID statID, TEnumAsByte<EStatModifierID> modifierID, float* totalMultiplier, float* totalAdder);
	class UFloatStatChangeSignalNode* GetFloatStatChangeSignal(ECharFloatStatID statID);
	float GetFloatStat(ECharFloatStatID statID, TEnumAsByte<EStatModifierMode> mode);
	class UFeatInventory* GetFeatInventory();
	struct FVector GetFallbackPlayerStartLocation();
	class UEquipmentInventory* GetEquipmentInventoryNative();
	class UEmoteInventory* GetEmoteInventory();
	float GetDistanceFromCamera();
	TArray<class AConanCharacter*> GetDamageCausers();
	class UCraftingQueue* GetCraftingQueueInventory();
	TEnumAsByte<EGUIControlMode> GetClientGUIControlMode();
	TArray<class AActor*> GetChildren();
	ECharacterState GetCharacterState();
	class FString GetCharacterName();
	void GetCachedHitResultForGroundSurface(TEnumAsByte<EPhysicalSurface>* OutSurfaceType, class AActor** HitActor, bool* Success);
	class UItemInventory* GetBackpackInventory();
	class UActorPersistenceComponent* GetActorPersistenceComponent();
	void ForceTickPoseAndRefreshBonesWhenRendered();
	void ForceAlwaysTickPoseAndRefreshBones();
	void ForceAlwaysTickPose();
	bool ExitSubstateInternal(unsigned char NumSubState);
	bool EnterSubstateInternal(unsigned char NumSubState);
	void ClientSignalUIofGuildFailure();
	void ClientSignalUIofDBFailure(const struct FText& Text);
	void ClientSignalPlayerListReady(TArray<struct FPlayerInfo> playerList);
	void ClientSignalGuildCreated();
	void ClientShowRecreationWarning(int guildMembers);
	void ClientShowMessage(const struct FText& Title, const struct FText& Text);
	void ClientSetTimeofDayToServerTime();
	void ClientSetInteractingActor(class AActor* Actor, const struct FName& guiModuleName, class UObject* WorldContextObject);
	void ClientSetFloatStat(ECharFloatStatID statID, float Value);
	void ClientSendThrallCharacterLayout(class UItemInventory* inventory, int Index, const struct FCharacterLayout& CharacterLayout);
	void ClientReceiveGuildInvite(class UUniqueID* senderId, class UUniqueID* guildId, const class FString& senderName, const class FString& guildName);
	void ClientPossessedBy(class AController* NewController);
	void ClientHUDShowNotification(const struct FText& Text, bool positive);
	void ClientHUDShowFIFOEx(EFIFOStyle Style, const struct FText& Text, const struct FText& Header);
	void ClientHUDShowFIFO(const struct FText& Text);
	void ClientHUDLootNotification(int TemplateId, int quantity);
	void ClientEventUnpossessed();
	void ClearDoubleJumpTimeoutTimer();
	void ClampCharacterMovementIfNeeded(const struct FVector& Location, const struct FVector& Direction, float Scale, struct FVector* modifiedDirection, float* modifiedScale);
	void CheckIfWaterVolume(class APhysicsVolume* NewVolume);
	void CharacterStateChangedEvent__DelegateSignature(ECharacterState OldState, ECharacterState newState);
	void CharacterPossessedOnClient__DelegateSignature(class AController* NewController, class AConanCharacter* Character);
	void CharacterDeleted();
	void CharacterCreated();
	bool CanEnterState(ECharacterState OldState, ECharacterState newState);
	bool CanDoubleJump();
	void ApplyPitchRoll(float DeltaTime);
	void AddToIntStat(ECharIntStatID statID, int Value);
	void AddToFloatStat(ECharFloatStatID statID, float Value);
	bool AddIntStatMultiplier(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, float Value, TEnumAsByte<EStatModifierUpdateMode> updateMode);
	bool AddIntStatModifier(ECharIntStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID, int Value, TEnumAsByte<EStatModifierUpdateMode> updateMode);
	bool AddFloatStatModifier(ECharFloatStatID statID, TEnumAsByte<EStatModifierID> modifierID, TEnumAsByte<EStatModifierOperator> operatorID, float Value, TEnumAsByte<EStatModifierUpdateMode> updateMode);
	void AddCarriedCharacter(class AConanCharacter* Character);
};


// Class ConanSandbox.ConanBasicAIController
// 0x0170 (0x0680 - 0x0510)
class AConanBasicAIController : public AConanBaseAIController
{
public:
	TArray<class UClass*>                              AllowedNavAreaClasses;                                    // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              ExcludedNavAreaClasses;                                   // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FleeRange;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRoamingRange;                                          // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldReturnHome;                                         // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	class UObject*                                     BehaviorParameters;                                       // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CheckIfOffNavmeshInterval;                                // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalTimeToCheckIfOffNavmesh;                             // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomeRange;                                                // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0554(0x003C) MISSED OFFSET
	class AConanCharacter*                             FleeActor;                                                // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE8];                                      // 0x0598(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBasicAIController");
		return ptr;
	}


	void StopEmote(bool bForceStop);
	void SetHomeLocation(const struct FVector& NewHomeLocation);
	void RequestBestMoveSpeed();
	void PlayEmote(ECharacterEmotes EmoteToPLay);
	void MoveToAvoidBlocking(class AActor* BlockingSource);
	bool IsInHomeRange();
	bool IsEmoting();
	bool IsAtHome(float Tolerance);
	ECharacterEmotes GetRandomIdleEmote();
};


// Class ConanSandbox.ConanAttackerAIController
// 0x00D0 (0x0750 - 0x0680)
class AConanAttackerAIController : public AConanBasicAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0680(0x0010) MISSED OFFSET
	class UConanAIPerceptionComponent*                 ConanPerceptionComponent;                                 // 0x0690(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetDistributionComponent*                TargetingComponent;                                       // 0x0698(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UConanBehaviorComponent*                     BehaviorComponent;                                        // 0x06A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AConanCharacter*>                     HateList;                                                 // 0x06A8(0x0010) (ZeroConstructor)
	float                                              BlockActionMinDuration;                                   // 0x06B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockOnAttackedMinDuration;                               // 0x06BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockMaxDuration;                                         // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockChance;                                              // 0x06C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockChanceWhenAttacked;                                  // 0x06C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeAtBlockStart;                                         // 0x06CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentBlockMinDuration;                                  // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x64];                                      // 0x06D4(0x0064) MISSED OFFSET
	class APurgeVolume*                                CurrentPurgeVolume;                                       // 0x0738(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0740(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanAttackerAIController");
		return ptr;
	}


	void TeleportControlledPawnToPlayer();
	void StartBlocking();
	void StartAttackCooldown();
	void SetOwnerIsDialogNPC();
	void RequestBestMoveSpeed();
	void NotifyKnockbacked();
	void NotifyAttackStarted();
	void NotifyAttackFinished();
	bool IsOrdered();
	bool IsBlocking();
	bool IsAttacking();
	bool IsAttackCooldownDone();
	bool HasTargetInAttackRange();
	bool HasChargeAttack();
	void HandleKnockbackResponse();
	void GetProjectileLaunchDirection(const struct FVector& StartLocation, float ProjectileSpeed, float ProjectileGravity, struct FVector* Result);
	float GetAttackOrientationYaw();
	void FindNextWanderLocation(bool bBiasTowardsHome, float WanderRange);
	void FindFleeLocation(float FleeDistance);
	void FindBackOffLocation(float BackoffDistance);
	void ClearPOI(bool bForceClear);
	void ClearNPCState();
	void AddOwnerID(class UUniqueID* OwnerID);
};


// Class ConanSandbox.ConanHumanAIController
// 0x0000 (0x0750 - 0x0750)
class AConanHumanAIController : public AConanAttackerAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanHumanAIController");
		return ptr;
	}

};


// Class ConanSandbox.ConanCritterAIController
// 0x0000 (0x0680 - 0x0680)
class AConanCritterAIController : public AConanBasicAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanCritterAIController");
		return ptr;
	}

};


// Class ConanSandbox.ConanBehaviorComponent
// 0x0020 (0x0118 - 0x00F8)
class UConanBehaviorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	class AConanCharacter*                             InteractingPlayer;                                        // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanCharacter*                             ConanPawn;                                                // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanAttackerAIController*                  OwnerController;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBehaviorComponent");
		return ptr;
	}


	void SetOrder(ENPCOrder OrderType, class AConanCharacter* OrderRequester);
	bool IsOrdered();
	void ClearOrder();
};


// Class ConanSandbox.ConanBehaviorTreeComponent
// 0x0008 (0x0298 - 0x0290)
class UConanBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBehaviorTreeComponent");
		return ptr;
	}


	void GetActiveNodeName(const class FString& DefaultText, class FString* ActiveNodeName);
};


// Class ConanSandbox.ConanBTDecorator_Base
// 0x0008 (0x0070 - 0x0068)
class UConanBTDecorator_Base : public UBTDecorator
{
public:
	float                                              UpdateRate;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTDecorator_Base");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTDecorator_BackOff
// 0x0008 (0x0078 - 0x0070)
class UConanBTDecorator_BackOff : public UConanBTDecorator_Base
{
public:
	float                                              BackOffTriggerDistance;                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTDecorator_BackOff");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTDecorator_HasCombatTarget
// 0x0000 (0x0070 - 0x0070)
class UConanBTDecorator_HasCombatTarget : public UConanBTDecorator_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTDecorator_HasCombatTarget");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTDecorator_Taunt
// 0x0008 (0x0078 - 0x0070)
class UConanBTDecorator_Taunt : public UConanBTDecorator_Base
{
public:
	float                                              TauntTriggerDistance;                                     // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTDecorator_Taunt");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTDecorator_WeaponStatus
// 0x0000 (0x0070 - 0x0070)
class UConanBTDecorator_WeaponStatus : public UConanBTDecorator_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTDecorator_WeaponStatus");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTTask_ConanMoveTo
// 0x0010 (0x00C0 - 0x00B0)
class UConanBTTask_ConanMoveTo : public UBTTask_MoveTo
{
public:
	unsigned char                                      bRun : 1;                                                 // 0x00B0(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector2D                                   MoveSpeedPercentageRange;                                 // 0x00B4(0x0008) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTTask_ConanMoveTo");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTTask_BackOff
// 0x0008 (0x00C8 - 0x00C0)
class UConanBTTask_BackOff : public UConanBTTask_ConanMoveTo
{
public:
	float                                              MaxBackOffPath;                                           // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTTask_BackOff");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTTask_Chase
// 0x0000 (0x00C0 - 0x00C0)
class UConanBTTask_Chase : public UConanBTTask_ConanMoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTTask_Chase");
		return ptr;
	}

};


// Class ConanSandbox.ConanBTTask_Wander
// 0x0008 (0x00C8 - 0x00C0)
class UConanBTTask_Wander : public UConanBTTask_ConanMoveTo
{
public:
	float                                              MaxWanderPath;                                            // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBTTask_Wander");
		return ptr;
	}

};


// Class ConanSandbox.ConanBuildingPersistenceComponent
// 0x0020 (0x0178 - 0x0158)
class UConanBuildingPersistenceComponent : public UActorPersistenceComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET
	TArray<class UBuildingModuleData*>                 SocketlessConnectionModuleList;                           // 0x0168(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanBuildingPersistenceComponent");
		return ptr;
	}

};


// Class ConanSandbox.AvatarCharacter
// 0x0030 (0x1160 - 0x1130)
class AAvatarCharacter : public AConanCharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1130(0x0010) MISSED OFFSET
	class AConanCharacter*                             m_Summoner;                                               // 0x1140(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              m_RemainingAvatarLifetime;                                // 0x1148(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              m_MaximumAvatarLifetime;                                  // 0x114C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               m_AvatarTimerStarted;                                     // 0x1150(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x1151(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AvatarCharacter");
		return ptr;
	}


	void StartAvatarTimer();
	bool ShouldAvatarBeBanished();
	void SetSummoner(class AConanCharacter* Summoner);
	class AConanCharacter* GetSummoner();
	float GetRemainingLifetime();
	void ApplyDamagePenaltyToTimer(float TimePenalty);
};


// Class ConanSandbox.EncumbranceSystem
// 0x0018 (0x0118 - 0x0100)
class UEncumbranceSystem : public UConanCharacterComponent
{
public:
	TArray<float>                                      EncumbranceTierThresholds;                                // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEncumbranceTiers>                     CurrentEncumbranceTier;                                   // 0x0110(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EncumbranceSystem");
		return ptr;
	}


	void OnRep_CurrentEncumbranceTier();
};


// Class ConanSandbox.HungerSystem
// 0x0020 (0x0120 - 0x0100)
class UHungerSystem : public UConanCharacterComponent
{
public:
	struct FScriptMulticastDelegate                    SignalHungerChanged;                                      // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalThirstChanged;                                      // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HungerSystem");
		return ptr;
	}


	void SignalThirstChangedDelegate__DelegateSignature(float NewThirst, float MaxThirst);
	void SignalHungerChangedDelegate__DelegateSignature(float NewHunger, float MaxHunger);
};


// Class ConanSandbox.ProgressionSystem
// 0x00B8 (0x01B8 - 0x0100)
class UProgressionSystem : public UConanCharacterComponent
{
public:
	struct FScriptMulticastDelegate                    SignalUndistributedPointsChanged;                         // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalDistributedPointsChanged;                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalTotalPointsChanged;                                 // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalHealthChanged;                                      // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalStaminaChanged;                                     // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalEncumbranceChanged;                                 // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalMightChanged;                                       // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalAccuracyChanged;                                    // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalAthleticismChanged;                                 // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalMetabolismChanged;                                  // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalResilienceChanged;                                  // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ProgressionSystem");
		return ptr;
	}


	void SignalUndistrubutedPointsChanged__DelegateSignature(int currentPoints);
	void SignalTotalPointsChanged__DelegateSignature(int currentPoints);
	void SignalDistrubutedPointsChanged__DelegateSignature(int currentPoints);
	void SignalAttributeStaminaChanged__DelegateSignature(int currentStamina);
	void SignalAttributeResilienceChanged__DelegateSignature(int currentResilience);
	void SignalAttributeMightChanged__DelegateSignature(int currentMight);
	void SignalAttributeMetabolismChanged__DelegateSignature(int currentMetabolism);
	void SignalAttributeHealthChanged__DelegateSignature(int CurrentHealth);
	void SignalAttributeEncumbranceChanged__DelegateSignature(int currentEncumbrance);
	void SignalAttributeAthleticismChanged__DelegateSignature(int currentAthleticism);
	void SignalAttributeAccuracyChanged__DelegateSignature(int currentAccuracy);
	void SetStartingGod(ECharacterGod God);
	void ServerResetFeat(int featTemplateID);
	void ServerResetAllFeats();
	void ServerPurchaseFeat(int featTemplateID);
	void ServerGiveStartupFeats();
	void ServerForceLearnFeat(int featTemplateID, bool fromNPC);
	void ResetAttributeAll();
	bool IsFeatPurchased(int featTemplateID);
	void GiveRepairXP(float xp);
	void GiveNextPerk(ECharIntStatID attribute);
	void GiveMapDiscoveryXP(int discovered);
	void GiveCraftingXP(class URecipeItem* recipe);
	void GiveAttribute(TEnumAsByte<EAttributeType> attribute);
	bool CheckFeatPrerequisite(int featTemplateID);
	bool CheckFeatLevel(int featTemplateID);
	bool CheckFeatCost(int featTemplateID);
	bool CanPurchaseFeat(class UFeatItem* feat);
};


// Class ConanSandbox.ConanCharacterMovementComponent
// 0x0260 (0x0A10 - 0x07B0)
class UConanCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	struct FFindFloorResult                            CurrentWall;                                              // 0x07B0(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	float                                              ClimbDirection;                                           // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	class UClass*                                      ClimbingDamageClass;                                      // 0x0850(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingDamageCooldown;                                   // 0x0858(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlidingPassiveFriction;                                   // 0x085C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlidingActiveFriction;                                    // 0x0860(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInSlidingMode;                                          // 0x0864(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               HangingFromCeiling;                                       // 0x0865(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0866(0x0002) MISSED OFFSET
	float                                              MaxReachUpHeight;                                         // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HoldToClimb;                                              // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	float                                              HoldingClimbButtonTime;                                   // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0874(0x0001) MISSED OFFSET
	bool                                               DirectionalFromBP;                                        // 0x0875(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0876(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalClimbingFromCeilingChanged;                         // 0x0878(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalEdgeTransitionTriggered;                            // 0x0888(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalKnockbackRagdollingStart;                           // 0x0898(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	float                                              ServerKnockbackFloorTraceDist;                            // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientKnockbackFloorTraceDist;                            // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackAnimationMaxDuration;                            // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockdownSlideSqrVelocityThreshold;                       // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockdownSlideFrictionFactor;                             // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanGetUpFromKnockback;                                    // 0x08BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	float                                              KnockbackEndMinDelay;                                     // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackDuration;                                        // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FallOnKnockbackEnd;                                       // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               KnockbackHasLandedOnServer;                               // 0x08C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               KnockbackAllowRagdolling;                                 // 0x08CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSteering;                                              // 0x08CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKnockbackStage                                    m_KnockbackStage;                                         // 0x08CC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x143];                                     // 0x08CD(0x0143) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanCharacterMovementComponent");
		return ptr;
	}


	void StartKnockback(EKnockbackStage knockbackStage);
	void SignalEdgeTransitionTriggered__DelegateSignature(float EdgeRelativeHeight, bool WasInitialTrace);
	bool RotateCharacterTowardsTarget(class AActor* TargetActor, bool bDebug, struct FRotator* SelfRotation);
	void OnClimbingTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, int DamageEventID);
	bool NeedsKnockbackGetUpAnim();
	void MulticastKnockbackOnLand();
	void KnockbackRagdollingStart__DelegateSignature();
	void KnockbackEnterRagdollingInAir();
	void KnockbackEnterRagdolling();
	float GetYawFromInput();
	bool GetRootMotionLockEnabled();
	bool GetAttackTarget(bool bDebug, bool bInIdleUseControlRotation, float SweepSize, class AActor** OutTargetActor, struct FRotator* SelfRotation);
	void ExitClimbing();
	void EnterKnockbackStage(EKnockbackStage knockbackStage);
	void EnableRootMotionLock(float lockTriggerDistance);
	void DisableRootMotionLock();
	void ClimbingFromCeilingChanged__DelegateSignature(bool isHangingFromCeiling, bool isClimbing);
	void ClientTookClimbingDamage();
};


// Class ConanSandbox.ConanCharacterPersistenceComponent
// 0x0000 (0x0160 - 0x0160)
class UConanCharacterPersistenceComponent : public UCharacterPersistenceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanCharacterPersistenceComponent");
		return ptr;
	}

};


// Class ConanSandbox.CorpseBase
// 0x0038 (0x0408 - 0x03D0)
class ACorpseBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x03D8(0x0018) (BlueprintVisible)
	float                                              DefaultDespawnTimeSeconds;                                // 0x03F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class UUniqueID*                                   DeadPlayerID;                                             // 0x03F8(0x0008) (BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CorpseBase");
		return ptr;
	}


	void WakePhysics();
	void UpdateLoot();
};


// Class ConanSandbox.ConanGameMode
// 0x03A0 (0x0980 - 0x05E0)
class AConanGameMode : public ADWGameMode
{
public:
	class USpawnTableComponent*                        SpawnTableSystem;                                         // 0x05E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               m_DatabaseOK;                                             // 0x05E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               RunInsideCollisionCheckOnLoad;                            // 0x05E9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05EA(0x0006) MISSED OFFSET
	class UClass*                                      PurgeVolumeClass;                                         // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SharedDebugInfoClass;                                     // 0x05F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0600(0x0050) MISSED OFFSET
	TArray<class FString>                              CountryBlackList;                                         // 0x0650(0x0010) (ZeroConstructor, Config)
	bool                                               BlockVPNConnections;                                      // 0x0660(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	uint32_t                                           MaxPeriodicBackupsToKeep;                                 // 0x0664(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PeriodicBackupInterval;                                   // 0x0668(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxUpgradeBackupstoKeep;                                  // 0x066C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UFrameRateReporter*                          m_ServerFrameRateReporter;                                // 0x0670(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB4];                                      // 0x0678(0x00B4) MISSED OFFSET
	float                                              CorpsesHarvestTimeLockSeconds;                            // 0x072C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x0730(0x00A8) MISSED OFFSET
	TMap<int64_t, class ULoadCharacterCallProxy*>      m_LoadOfflineCharacterCallbacks;                          // 0x07D8(0x0050) (ZeroConstructor)
	TMap<int64_t, class ULoadInventoryCallProxy*>      m_LoadOfflineInventoryCallbacks;                          // 0x0828(0x0050) (ZeroConstructor)
	TArray<class UUniqueID*>                           m_LoadOfflineInventoryActiveUIDs;                         // 0x0878(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0xA0];                                      // 0x0888(0x00A0) MISSED OFFSET
	unsigned char                                      UnknownData06[0x50];                                      // 0x0888(0x0050) UNKNOWN PROPERTY: SetProperty ConanSandbox.ConanGameMode.m_PlaceablesForValidation
	unsigned char                                      UnknownData07[0x8];                                       // 0x0978(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanGameMode");
		return ptr;
	}


	void SpawnOfflineCharacter(class UUniqueID* UID, const struct FTransform& SpawnTransform, TArray<struct FDBResult> CharacterData, TArray<struct FDBResult> CharacterInventoryData);
	void SpawnFakePlayers(int Count);
	void SetLastCorpseHarvest(class UUniqueID* killerID, class UUniqueID* victimID, const struct FDateTime& TimeStamp);
	void SetCrashDumpModeFullDumpAlways();
	void SetCrashDumpModeFullDump();
	void SetCrashDumpModeDefault();
	void ServerSetCrashDumpMode(int mode);
	void RegisterNewCorpse(class UUniqueID* UniqueID, class ACorpseBase* Corpse);
	bool RegionAllowed(const class FString& Country);
	void OnUserUniqueIDList(const class FString& UserID, class APlayerController* Controller, TArray<struct FCharacterListData> CharacterListData);
	void OnLoadOfflineInventoryDataFailure(class UUniqueID* UID, TArray<struct FDBResult> Results);
	void OnLoadOfflineInventoryData(class UUniqueID* UID, TArray<struct FDBResult> Results);
	void OnLoadOfflineCharacterDataFailure(class UUniqueID* UID, TArray<struct FDBResult> Results, const struct FTransform& Transform);
	void OnLoadOfflineCharacterData(class UUniqueID* UID, TArray<struct FDBResult> Results, const struct FTransform& Transform);
	void OnCharacterData(class UUniqueID* UID, TArray<struct FDBResult> Results, const struct FTransform& Transform);
	void LogPropertyDestruction(class UUniqueID* OwnerID, const struct FPropertyDestructionLogEntry& LogEntry);
	void KillAllFakePlayers();
	class AServerBlacklist* GetServerBlacklist();
	struct FDateTime GetLastCorpseHarvest(class UUniqueID* killerID, class UUniqueID* victimID);
	int GetFeatVersion();
	void DumpVirtualAllocStats();
	void DumpTrackedPhysXActiveBodies();
	class FString DebugCamps(class AConanPlayerController* PC, const class FString& Args);
	bool CountryBlocked(const class FString& Country);
	void ClearVirtualAllocStats();
	void ClearTrackedPhysXActiveBodies();
};


// Class ConanSandbox.ConanGameState
// 0x0938 (0x0DE0 - 0x04A8)
class AConanGameState : public ADWGameState
{
public:
	class ACharacterLodSystem*                         CharacterLodSystem;                                       // 0x04A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x04B0(0x0040) MISSED OFFSET
	bool                                               IsServerDedicated;                                        // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	int                                                ServerTimezoneHours;                                      // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PlayerHealthMultiplier;                                   // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PlayerStaminaMultiplier;                                  // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseListenServerHostPlayerLocation : 1;                    // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	struct FVector                                     ListenServerHostPlayerLocation;                           // 0x0504(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	class USettingsEventDispatchers*                   UserSettingsEventDispatcher;                              // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0518(0x0008) MISSED OFFSET
	float                                              FloatServerRuntime;                                       // 0x0520(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class UChatCommandHelper*                          m_ChatCommandHelper;                                      // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AGuild*>                              guildList;                                                // 0x0530(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	class UDataTable*                                  m_SpawnDataTable;                                         // 0x0548(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_NPCList;                                                // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ServerSettingsClass;                                      // 0x0558(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UUniqueID*>                           ReplicatedIds;                                            // 0x0560(0x0010) (Edit, Net, ZeroConstructor)
	class AServerSettings*                             ServerSettings;                                           // 0x0570(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x848];                                     // 0x0578(0x0848) MISSED OFFSET
	TArray<struct FDeferredEquip>                      DeferredEquip;                                            // 0x0DC0(0x0010) (ZeroConstructor)
	unsigned char                                      ListenServerWorldIsLoaded : 1;                            // 0x0DD0(0x0001) (Net)
	unsigned char                                      UnknownData07[0xF];                                       // 0x0DD1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanGameState");
		return ptr;
	}


	void SetTimeOfDay(float NewSpeedScale);
	void SetSkyTimeOfDay(float NewTimeOfDay);
	void SetServerSetting(class AConanPlayerController* PC, const class FString& serverSetting, float Value, bool updateSession);
	void SetMaxClothSimulatingActors_Notify(uint32_t NumActors);
	void SetMaxClothSimulatingActors(uint32_t NumActors);
	void SetDayLength(float NewDayLength);
	void PrintTimeOfDay(class AConanPlayerController* PC);
	void PrintServerSetting(class AConanPlayerController* PC, const class FString& serverSetting);
	void PrintAllServerSettings(class AConanPlayerController* PC);
	void OnServerSettingsReplicated();
	void OnRepServerRuntime();
	void OnGuildListReplicated();
	void OnGuildDeleted(class AGuild* Guild);
	bool IsPVPBuildingDamageAllowed();
	bool IsPVPAllowed();
	bool IsLocalGame();
	bool IsAvatarSummoningAllowed();
	void GuildMasterAddedSuccess(class UUniqueID* guildId, class UUniqueID* UniqueID);
	float GetTimeOfDay();
	class AServerSettings* GetServerSettings();
	struct FDateTime GetServerLocalTime();
	struct FServerCommandHistory GetServerCommandHistory();
	struct FText GetNPCNameFromRowName(const struct FName& RowName);
	bool GetIsTimeEnabled();
	bool GetIsServerDedicated();
	bool GetIsDayNightAnimationEnabled();
	TArray<class AGuild*> GetGuilds();
	class AGuild* GetGuildFromId(class UUniqueID* guildId);
	float GetDayLength();
	float GetBPServerRuntime();
	void EnableTime(bool Enable);
	void EnableSkySimulation(bool Enable);
	void DeleteGuild(class AConanCharacter* Character);
};


// Class ConanSandbox.ConanGameViewportClient
// 0x0050 (0x0560 - 0x0510)
class UConanGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0510(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanGameViewportClient");
		return ptr;
	}


	float STATIC_GetPostfilterBlendWeight(class UObject* WorldContextObject, const struct FName& PostfilterGameplayTag);
};


// Class ConanSandbox.ConanHUD
// 0x0018 (0x04D0 - 0x04B8)
class AConanHUD : public AHUD
{
public:
	struct FText                                       LoadingScreenText;                                        // 0x04B8(0x0018) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanHUD");
		return ptr;
	}


	void ShowTextNotification(const struct FText& Message);
	void ShowNotification(const struct FText& Message, bool positive);
	void ShowIngameLoadingScreen();
	void SetHUDVisibility(ESlateVisibility Visibility);
	void SetHUDSafeZonePadding(const struct FVector2D& safePaddingSize);
	void RemoveIngameLoadingScreen();
	void LootRemovedFromLog(class UWidget* Widget);
	class UUserWidget* GetPlayerHUDWidget();
	void AddItemToLootLog(int TemplateId, int quantity, int totalQuantity);
};


// Class ConanSandbox.ConanLevelScriptActor
// 0x0000 (0x03D8 - 0x03D8)
class AConanLevelScriptActor : public ADWLevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanLevelScriptActor");
		return ptr;
	}

};


// Class ConanSandbox.ConanHeightmapLevelScriptActor
// 0x0000 (0x03D8 - 0x03D8)
class AConanHeightmapLevelScriptActor : public AConanLevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanHeightmapLevelScriptActor");
		return ptr;
	}

};


// Class ConanSandbox.ConanSandboxLevelScriptActor
// 0x0000 (0x03D8 - 0x03D8)
class AConanSandboxLevelScriptActor : public AConanLevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanSandboxLevelScriptActor");
		return ptr;
	}

};


// Class ConanSandbox.ConanLocalPlayer
// 0x0000 (0x01B8 - 0x01B8)
class UConanLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanLocalPlayer");
		return ptr;
	}

};


// Class ConanSandbox.ConanOnlineEventsLibrary
// 0x00D8 (0x0100 - 0x0028)
class UConanOnlineEventsLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET
	class UDataTable*                                  m_richPresenceTextTable;                                  // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanOnlineEventsLibrary");
		return ptr;
	}


	void STATIC_TriggerEvent(class UObject* WorldContextObject, const class FString& EventId, int TriggerCount);
	void STATIC_SetPresenceText(class UObject* WorldContextObject, const class FString& PresenceId);
};


// Class ConanSandbox.ConanNewPathFollowingComponent
// 0x0000 (0x04D0 - 0x04D0)
class UConanNewPathFollowingComponent : public UConanPathFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanNewPathFollowingComponent");
		return ptr;
	}

};


// Class ConanSandbox.ConanPlayerCameraManager
// 0x0000 (0x1A50 - 0x1A50)
class AConanPlayerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanPlayerCameraManager");
		return ptr;
	}

};


// Class ConanSandbox.PlayerControllerInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerControllerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerControllerInterface");
		return ptr;
	}


	void ToggleActiveCamera();
	void SetPlayerRespawnLocation(class AActor* RespawnActor, bool LimitedUseSpawnPoint);
	void PlayCinematicDeathByCursedWall(class ATriggerBox* CinematicBox);
	void DeleteCharacter();
	void DeathByCursedWall(float Delay);
	void CreateCharacter(const struct FCharacterLayout& CharacterLayout, const struct FText& CharacterName);
};


// Class ConanSandbox.GameItemInterface
// 0x0000 (0x0028 - 0x0028)
class UGameItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GameItemInterface");
		return ptr;
	}

};


// Class ConanSandbox.GameItem
// 0x0390 (0x03B8 - 0x0028)
class UGameItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EGameItemType>                         TypeID;                                                   // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EGameItemGUICategory>                  GUICategory;                                              // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                TemplateId;                                               // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FText                                       ShortDesc;                                                // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FText                                       LongDesc;                                                 // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0080(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TAssetPtr<class UClass>                            VisualObject;                                             // 0x00A0(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TAssetPtr<class UClass>                            ActionBlueprint_Use;                                      // 0x00C0(0x0020) (BlueprintVisible, BlueprintReadOnly, Transient)
	TEnumAsByte<EPhysicalSurface>                      SoundPhysicalSurface;                                     // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EWeaponArcheTypes>                     WeaponArcheType;                                          // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	int                                                SoundTransmitterType;                                     // 0x00E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               KnockbackResponseWeapon;                                  // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	int                                                WarPaintID;                                               // 0x00EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       FirstModifier;                                            // 0x00F0(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FText                                       SecondModifier;                                           // 0x0108(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FText                                       ThirdModifier;                                            // 0x0120(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FText                                       FourthModifier;                                           // 0x0138(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	class UDestructibleMesh*                           ActualDestructibleMesh;                                   // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AInventoryItemBase*                          VisualActor;                                              // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       VisualStaticMesh;                                         // 0x0168(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TAssetPtr<class USkeletalMesh>                     VisualSkeletalMesh;                                       // 0x0188(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TAssetPtr<class UDestructibleMesh>                 VisualDestructibleMesh;                                   // 0x01A8(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FScriptMulticastDelegate                    SignalIntStatChanged;                                     // 0x01C8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalFloatStatChanged;                                   // 0x01D8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalEnableStateChanged;                                 // 0x01E8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalForceUnequip;                                       // 0x01F8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalIconChanged;                                        // 0x0208(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalColorChanged;                                       // 0x0218(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalBorderChanged;                                      // 0x0228(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalVisualMeshLoaded;                                   // 0x0238(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalRepairCompleted;                                    // 0x0248(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	int                                                ItemFlags;                                                // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	TArray<int>                                        CompatableAmmunitions;                                    // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FGameItemStatModification>           StatModifications;                                        // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               CanUseWhileClimbing;                                      // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x13];                                      // 0x0281(0x0013) MISSED OFFSET
	int                                                m_MapMarkerIconID;                                        // 0x0294(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  m_ActualIcon;                                             // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  m_BorderIcon;                                             // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02A8(0x0004) MISSED OFFSET
	TWeakObjectPtr<class AConanPlayerController>       m_OwnerController;                                        // 0x02AC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xB4];                                      // 0x02B4(0x00B4) MISSED OFFSET
	class UClass*                                      VisualObjectClass;                                        // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	class UItemInventory*                              m_OwnerInventory;                                         // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               m_IsEnabled;                                              // 0x0380(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x37];                                      // 0x0381(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GameItem");
		return ptr;
	}


	void UpdateDyeOnCharacterLayout(unsigned char DyeChannel, int ColourIndex);
	class AInventoryItemBase* SpawnVisualItem(class AActor* Owner, const struct FTransform& Transform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, bool respawn);
	void SignalVisualMeshLoaded__DelegateSignature(class UGameItem* Item);
	void SignalRepairCompleted__DelegateSignature(class UGameItem* Item, float repairXp);
	void SignalIntStatChanged__DelegateSignature(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int NewValue, int deltaValue);
	void SignalIconChanged__DelegateSignature(class UTexture2D* iconUNREALSUCKS);
	void SignalForceUnequip__DelegateSignature(class UGameItem* Item);
	void SignalFloatStatChanged__DelegateSignature(class UGameItem* Item, TEnumAsByte<EItemFloatStatID> statID, float NewValue, float deltaValue);
	void SignalEnableStateChanged__DelegateSignature(class UGameItem* Item, bool IsEnabled);
	void SignalColorChanged__DelegateSignature(class UGameItem* Item);
	void SignalBorderChanged__DelegateSignature(class UTexture2D* Border);
	void SetOwner(class AActor* Owner);
	void SetIntStatDefault(TEnumAsByte<EItemIntStatID> statID, int Value, bool replicate);
	void SetIntStat(TEnumAsByte<EItemIntStatID> statID, int Value, bool replicate);
	void SetInRepairState(float totalRepairProsentage);
	void SetFrameColor(const struct FLinearColor& Color);
	void SetFloatStatDefault(TEnumAsByte<EItemFloatStatID> statID, float Value, bool replicate);
	void SetFloatStat(TEnumAsByte<EItemFloatStatID> statID, float Value, bool replicate);
	void SetDynamicItemFlag(EDynamicItemFlags Flag);
	bool SetDurability(float newDurability);
	void SetData(int TemplateId, const struct FItemTableRow& Data);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void RepairStateTick();
	void OnUseItem(class AConanCharacter* invokingCharacter);
	void OnUnEquip(class ACharacter* Owner);
	bool OnItemDroppedOnItem(class UGameItem* droppedItem, class UItemInventory* srcInventory, int srcIndex, class AConanPlayerController* Controller);
	void OnEquip(class ACharacter* Owner);
	bool ModifyDurability(float durabilityModifier);
	bool IsWeapon();
	bool IsShortcut();
	bool IsItemBroken();
	bool IsEnabled();
	bool IsArmor();
	bool HasDynamicItemFlag(EDynamicItemFlags Flag);
	bool GetWeaponIsItem();
	class UClass* GetVisualObjectClass();
	void GetStatTexts(struct FText* statOne, struct FText* statTwo, struct FText* statThree);
	struct FText GetShortDesc();
	EAttackType GetPrimaryAttackType();
	class UItemInventory* GetOwnerInventory();
	class AActor* GetOwner();
	bool GetOriginalDyeChannelColor(int Channel, bool male, struct FLinearColor* Color);
	struct FText GetLongDesc();
	int GetItemFlags();
	bool GetIsInRepairState();
	int GetIntStat(TEnumAsByte<EItemIntStatID> statID);
	class UTexture2D* GetIcon();
	struct FLinearColor GetFrameColor();
	float GetFloatStat(TEnumAsByte<EItemFloatStatID> statID);
	class UTexture2D* GetBorderTexture();
	struct FLinearColor GetBackgroundColor();
	void ForceUnequip();
	void Enable(bool Enabled);
	void DestroyVisualItem();
	void ClearDynamicItemFlag(EDynamicItemFlags Flag);
	bool CanUseItem(class AConanCharacter* invokingCharacter);
	bool CanItemBeDroppedOnItem(class UGameItem* droppedItem, class UItemInventory* srcInventory, int srcIndex);
	bool CanDyeItem(bool male);
	bool CanBeActivated();
	bool AllowsMoveTo(int srcIndex, class UItemInventory* targetInventory, int targetIndex, int quantity);
	int AddToIntStat(TEnumAsByte<EItemIntStatID> statID, int Value, bool replicate);
	float AddToFloatStat(TEnumAsByte<EItemFloatStatID> statID, float Value, bool replicate);
};


// Class ConanSandbox.ConanWidgetComponent
// 0x0010 (0x0970 - 0x0960)
class UConanWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0960(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanWidgetComponent");
		return ptr;
	}


	void SetNameColor(class AConanCharacter* Observer);
	void SetFloatingNameVisibility(bool bNewVisibility, bool bPropagateToChildren);
};


// Class ConanSandbox.TargetingSystemComponent
// 0x0058 (0x0150 - 0x00F8)
class UTargetingSystemComponent : public UActorComponent
{
public:
	int                                                NumHealthBars;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealthBarFadeout;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HealthbarWidgetClass;                                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HealthbarMaterial;                                        // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetLockWidgetClass;                                    // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TargetLockMaterial;                                       // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FTargetingWidgetStatus>              Healthbars;                                               // 0x0120(0x0010) (ZeroConstructor)
	struct FTargetingWidgetStatus                      TargetLock;                                               // 0x0130(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetingSystemComponent");
		return ptr;
	}


	void TargetLockUpdate(class AActor* ForThisActor, bool Enabled);
	void HealthbarUpdate(class AActor* ForThisActor, bool Enabled);
};


// Class ConanSandbox.ConanPlayerController
// 0x04B8 (0x0B90 - 0x06D8)
class AConanPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06D8(0x0008) MISSED OFFSET
	bool                                               m_SpawnComplete;                                          // 0x06E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x06E1(0x0001) MISSED OFFSET
	bool                                               m_ClientWorldLoaded;                                      // 0x06E2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x06E3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventTeleportDone;                                        // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventSpawnTeleportDone;                                   // 0x06F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             OverridenStreamingLocations;                              // 0x0708(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0718(0x0010) MISSED OFFSET
	int                                                CachedConnectionPing;                                     // 0x0728(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DebugHudBitMask;                                          // 0x072C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    DebugHudBitMaskUpdated;                                   // 0x0730(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xC8];                                      // 0x0740(0x00C8) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventClientReady;                                         // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalCharacterReady;                                     // 0x0818(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalCharacterReadyClient;                               // 0x0828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalInventoryReplicated;                                // 0x0838(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalFloatingNamesChanged;                               // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalClientReceivePurgeData;                             // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UCameraComponent*>                    m_OwnedCameraComponents;                                  // 0x0868(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	class AActor*                                      InitialPlayerStart;                                       // 0x0878(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               CanBypassBuildingBlockerVolumes;                          // 0x0880(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x17];                                      // 0x0881(0x0017) MISSED OFFSET
	class FString                                      UserIDFromURLOptions;                                     // 0x0898(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    SignalCheatStatus;                                        // 0x08A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              NetConnectionLostTimeout;                                 // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              NetConnectionLostForcedKickTimeout;                       // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FScriptMulticastDelegate                    SignalPlayerListDataReady;                                // 0x08C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalBannedPlayerListReady;                              // 0x08D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UConanCheatManager*                          ConanCheatManager;                                        // 0x08E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowInteraction;                                         // 0x08E8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class ACorpseBase*                                 CorpseToFreeze;                                           // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_ServerDoneLoadingBuildings;                             // 0x08F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3F];                                      // 0x08F9(0x003F) MISSED OFFSET
	TArray<class AConanCharacter*>                     m_NearbyNPCs;                                             // 0x0938(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x50];                                      // 0x0948(0x0050) UNKNOWN PROPERTY: SetProperty ConanSandbox.ConanPlayerController.m_PendingNPCStreamOperations
	TArray<struct FPendingInventoryUpdate>             m_PendingInventoryRequests;                               // 0x0998(0x0010) (ZeroConstructor)
	TArray<class UItemInventory*>                      m_PendingInventoryUnregisterRequests;                     // 0x09A8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData09[0x20];                                      // 0x09B8(0x0020) MISSED OFFSET
	TMap<int, class UGameItem*>                        m_UniqueIDToInventoryItemMap;                             // 0x09D8(0x0050) (ZeroConstructor)
	bool                                               m_bShowDebugText;                                         // 0x0A28(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               m_IsAdmin;                                                // 0x0A29(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x9E];                                      // 0x0A2A(0x009E) MISSED OFFSET
	struct FPropertyDestructionHistory                 m_PropertyDestructionHistory;                             // 0x0AC8(0x0018) (Net)
	unsigned char                                      UnknownData11[0x18];                                      // 0x0AE0(0x0018) MISSED OFFSET
	class FString                                      m_RandomDLCKey;                                           // 0x0AF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               m_HasRequestedDLCs;                                       // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               m_HasOngoingDLCRequest;                                   // 0x0B09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x0B0A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData13[0x50];                                      // 0x0B0A(0x0050) UNKNOWN PROPERTY: SetProperty ConanSandbox.ConanPlayerController.m_OwnedDLCs
	unsigned char                                      UnknownData14[0x20];                                      // 0x0B60(0x0020) MISSED OFFSET
	class UTargetingSystemComponent*                   TargetingComponent;                                       // 0x0B80(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0B88(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanPlayerController");
		return ptr;
	}


	void VoiceRange(float centimeters);
	void UnbanPlayer(const class FString& SteamId);
	void TryRotateBulding(int rotationModifier);
	void ToggleSpeaking(bool bInSpeaking);
	void ToggleDebugHUD(const class FString& DebugBitMask);
	void TeleportTriggerboxActivated(const struct FVector& TargetLocation);
	void TeleportSpawningPlayer(const struct FTransform& TargetTransform);
	void TeleportPlayerServer(const struct FVector& TargetLocation, bool RunCheatCheck, bool SnapToGround, bool ForceTeleportClients);
	void StartStopCraftingQueue(class UCraftingQueue* CraftingQueue, bool Start);
	void SignalPlayerListDataReady__DelegateSignature(TArray<struct FPlayerListData> PlayerData);
	void SignalPasswordReplicated__DelegateSignature();
	void SignalInventoryReplicatedDelegate__DelegateSignature(class UItemInventory* inventory);
	void SignalFloatingNamesChangedDelegate__DelegateSignature(bool bShow);
	void SignalDebugCheatStatus__DelegateSignature(bool validConanCheatManager, bool validCheatManager, bool IsAdmin);
	void SignalClientReceivePurgeDataDelegate__DelegateSignature(const struct FPurgeData& PurgeData);
	void SignalBuildingHelpSettingChangedDelegate__DelegateSignature(bool showBuildingHelp);
	void SignalBannedPlayerListReadyDelegate__DelegateSignature(TArray<class FString> PlayerData);
	void SetServerSettingString(const class FString& SettingName, const class FString& Value, bool updateSession);
	void SetServerSetting(const class FString& SettingName, float Value, bool updateSession);
	void SetCraftingQueueFuelTemplateID(class UCraftingQueue* CraftingQueue, int TemplateId);
	void ServerWaitForNearbyBuildings();
	void ServerUseInventoryItem(int itemID);
	void ServerUpdateAvailablePhysicalMemory(int AvailablePhysicalMemoryInMB);
	void ServerUpdateAllSessionSettings();
	void ServerUnregisterInventory(class UItemInventory* inventory);
	void ServerSwapInventoryItems(class UItemInventory* inventory1client, int index1client, int itemID1, class UItemInventory* inventory2client, int index2client, int itemID2);
	void ServerSplitInventoryItem(int itemID, class UItemInventory* targetInventory, int targetIndex, int quantity);
	void ServerSignalWorldLoaded();
	void ServerSignalSpawnComplete();
	void ServerSetServerPassword(const class FString& password);
	void ServerSetAsAdmin(class AConanPlayerController* PC, const class FString& password);
	void ServerSendDLCs(TArray<unsigned char> EncryptedOwnedDLCs);
	void ServerSendChatMessage(const struct FChatRpcData& chatData);
	void ServerSendBattlEyePlayingStatus(bool playerIsInPlay);
	void ServerSendBattlEyeData(TArray<int8_t> battlEyeData);
	void ServerRequestTetherTeleport(const struct FVector& TargetLocation);
	void ServerRequestServerCommandHistory();
	void ServerRequestPropertyDestructionHistory();
	void ServerRequestInventoryItems(class UItemInventory* inventory);
	void ServerRequestInventoryIDPool();
	void ServerRemoveInventoryItem(class UItemInventory* inventoryClient, int indexClient, int itemID);
	void ServerMoveInventoryItem(class UItemInventory* srcInventoryClient, int srcIndexClient, int itemID, class UItemInventory* targetInventory, int targetIndex);
	void ServerMoveAllInventoryItems(class UItemInventory* srcInventory, class UItemInventory* dstInventory, TArray<int> ignoredItems);
	void ServerMergeItemStacks(class UItemInventory* dstInventory, int itemID, int targetIndex);
	void ServerInventoryHandleItemDroppedOnItem(int srcItemID, int targetItemID);
	void ServerGetServerPassword();
	void ServerGetPlayerList();
	void ServerGetBannedPlayerList();
	void ServerForceReplicateNearbyNPCs(const struct FVector& Origin, int Radius);
	void ServerDLCChanged();
	void ServerDebugSetTarget(class AConanCharacter* TargetCharacter);
	void ServerDebugCamps(const class FString& Args);
	void ServerAddInventoryRefItem(class UItemInventory* inventory, int Index, int newItemID, int targetItemID);
	void ServerAcknowledgeWorldLoaded();
	void ServerAcknowledgeSpawnComplete();
	void ScatterPlayersServer();
	void ScatterPlayers();
	void SanitizeSpawnTransform(const struct FTransform& InTransform, struct FTransform* outTransform);
	void RequestPropertyDestructionHistory(const struct FScriptDelegate& HistoryUpdatedCallback);
	void ReceiveCheatWeapon();
	void PrintPropertyDestructionHistoryInternal(bool WasUpdated);
	void PrintPropertyDestructionHistory();
	void PrepareForTeleportClient(const struct FVector& TargetLocation);
	void OpenFriendInvite();
	void OnStreamingFinished();
	void OnRep_PropertyDestructionHistory();
	void OnNetConnectionRecovered();
	void OnNetConnectionLost(bool KickClient);
	void OnDebugDraw(class AConanCharacter* TargetCharacter);
	void OnCharacterDataLoaded();
	void MessageCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void MessageChanged(const struct FText& Text);
	void MakeMeAdmin(const class FString& AdminPassword);
	void MakeClientWaitForStreamingWhenCloseTo(const struct FVector& InLocation);
	void LearnOwnedDLCAfterRecipeManagerHasLoaded();
	void LearnOwnedDLC();
	bool IsStressClient();
	bool IsAdminTeleporting();
	bool IsAdmin();
	void HideActor(class AActor* Actor);
	bool HasDLC(const struct FName& DLCPackageName);
	struct FPropertyDestructionHistory GetPropertyDestructionHistory();
	struct FText GetPropertyDestroyer(const struct FPropertyDestructionLogEntry& DestructionEntry);
	EConanPlayerType GetPlayerType();
	class FString GetPlayerNetID();
	class FString GetPlayerName();
	bool GetKeepPawnAliveOnControllerDeath();
	void GetDebugCheatStatus();
	class AConanHUD* GetConanHUD();
	class AConanCharacter* GetConanCharacter();
	class FString GetCharacterName();
	void EventDebugHudBitMaskUpdated__DelegateSignature();
	void EnableCharacterTilt(int param);
	void STATIC_DebugTrackTransform(class APawn* TargetCharacter, const struct FTransform& Value, TEnumAsByte<ETransformMask> Mask);
	void DebugSetTarget(class AConanCharacter* TargetCharacter);
	bool STATIC_DebugIsTarget(class UObject* WorldContextObject, class APawn* TargetCharacter);
	void DebugInfo();
	void DebugCurrentPlayer();
	void DebugCamps(const class FString& Args);
	void CopyServerSettingsToClipboard(const class FString& ServerSettings);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientUseInventoryItem(int itemID);
	void ClientUnregisterInventoryDone(class UItemInventory* inventory);
	void ClientShowMessageBox(const struct FText& Title, const struct FText& Message);
	void ClientSetServerPassword(const class FString& password);
	void ClientSetServerCommandHistory(const struct FServerCommandHistory& CommandHistory);
	void ClientReplyInventoryItems(class UItemInventory* inventory, TArray<unsigned char> itemData, bool Final);
	void ClientReplyInventoryIDPool(int firstID, int Count);
	void ClientRemoveInventoryItem(int itemID);
	void ClientReceivePurgeData(const struct FPurgeData& PurgeData);
	void ClientReceiveChatMessage(const struct FChatRpcData& chatData);
	void ClientReceiveBattlEyeData(TArray<int8_t> battlEyeData);
	void ClientOnPropertyDestructionHistoryAlreadyUpdated();
	void ClientOnForceReplicateNearbyNPCsCompleted(TArray<class AConanCharacter*> NPCs);
	void ClientMoveInventoryItem(int itemID, class UItemInventory* targetInventory, int targetIndex);
	void ClientLogRotationDebug(const struct FFrameTransformData& Transforms);
	void ClientInventoryItemIntStatChanged(int itemID, TEnumAsByte<EItemIntStatID> statID, int Value);
	void ClientInventoryItemFloatStatChanged(int itemID, TEnumAsByte<EItemFloatStatID> statID, float Value);
	void ClientHUDShowNotification(const struct FText& Text, bool positive);
	void ClientHUDLootNotification(int TemplateId, int quantity);
	void ClientGetPlayerList(TArray<struct FPlayerListData> PlayerData);
	void ClientGetDLCs(const class FString& Key);
	void ClientGetBannedPlayerList(TArray<class FString> BannedPlayerIds);
	void ClientEnableNetworkVoice(bool bEnable);
	void ClientDrawNavMeshDebug(TArray<struct FNavMeshTileDrawData> Tiles);
	void ClientDrawLandClaimDebug(TArray<struct FLandClaimChannelDrawData> Channels);
	void ClientDebugDrawTargetPath(const struct FVector& PathDestination, const struct FVector& PathNextDest);
	void ClientDebugDrawTargetLocation(const struct FVector& ServerLocation);
	void ClientDebugDrawCustom();
	void ClientDebugCheatStatus(bool validConanCheatManager, bool validCheatManager, bool IsAdmin);
	void ClientDebugActivateGUIModule(const class FString& module, bool Activate);
	void ClientCompleteSpawn();
	void ClientClearInventorySlot(class UItemInventory* inventory, int Index);
	void ClientAddInventoryItem(class UItemInventory* ItemInventory, TArray<unsigned char> itemData, int itemID, int Index);
	void CheatSpawnItem(int TemplateId, int quantity);
	void CheatNoSprintCost();
	void CheatMakeMeNormal();
	void CheatInvisibility();
	void CheatCloak();
	bool CanSpawnAtLocation(const struct FTransform& SpawnTransform);
	void CancelPendingNetGame();
	void BlockOnStreamingClient();
	void BanPlayer(const class FString& SteamId);
	void AdminTeleportPlayerServer(const struct FVector& TargetLocation);
	void AcknowledgeTeleportLocationServer();
};


// Class ConanSandbox.ConanPlayerState
// 0x00A0 (0x0500 - 0x0460)
class AConanPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0460(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanPlayerState");
		return ptr;
	}


	void ShowMainMenu();
};


// Class ConanSandbox.ConanProjectileMovementComponent
// 0x0000 (0x01B8 - 0x01B8)
class UConanProjectileMovementComponent : public UProjectileMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanProjectileMovementComponent");
		return ptr;
	}


	void AppendPredictedProjectilePath(float TimeStep, int MaxStepCount, TArray<struct FVector>* PathPoints);
};


// Class ConanSandbox.ConanSoundStage
// 0x0210 (0x05E0 - 0x03D0)
class AConanSoundStage : public ASoundStage
{
public:
	TArray<struct FGroupDefinition>                    GroupDefinition;                                          // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UConanAudioComponent*>                AudioComponents;                                          // 0x03E0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FSoundStageInfo>                     AudioInfo;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0400(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanSoundStage");
		return ptr;
	}


	void RegisterSound(const struct FName& Name, const struct FSoundStageAudioDesc& SoundDescriptor);
};


// Class ConanSandbox.ConanStaticEmitter
// 0x0000 (0x0420 - 0x0420)
class AConanStaticEmitter : public AEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanStaticEmitter");
		return ptr;
	}

};


// Class ConanSandbox.ConanTimeOfDayManager
// 0x0020 (0x03F0 - 0x03D0)
class AConanTimeOfDayManager : public AActor
{
public:
	float                                              DayLength;                                                // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeOfDay;                                           // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TimeEnabled;                                              // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              TimeOfDay;                                                // 0x03DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanTimeOfDayManager");
		return ptr;
	}


	void SetTimeOfDay(float NewTimeOfDay);
	void NotifyNewHour();
	float GetTimeOfDay();
	float GetDayLength();
};


// Class ConanSandbox.ConanWorldComposition
// 0x0010 (0x0078 - 0x0068)
class UConanWorldComposition : public UWorldComposition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanWorldComposition");
		return ptr;
	}


	TArray<struct FVector> GetStreamingPositions();
};


// Class ConanSandbox.CraftingStationInterface
// 0x0000 (0x0028 - 0x0028)
class UCraftingStationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CraftingStationInterface");
		return ptr;
	}


	class UItemInventory* GetResourceInventory();
	class UItemInventory* GetArtisanThrallInventory();
	class UItemInventory* GetArtisanRecipeInventory();
};


// Class ConanSandbox.CustomRenderWidget
// 0x0010 (0x0128 - 0x0118)
class UCustomRenderWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CustomRenderWidget");
		return ptr;
	}

};


// Class ConanSandbox.PieRenderWidget
// 0x0028 (0x0150 - 0x0128)
class UPieRenderWidget : public UCustomRenderWidget
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              StartAngle;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleSpan;                                                // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PieRenderWidget");
		return ptr;
	}


	void SetTexture(class UTexture2D* Texture);
	void SetStartAngle(float Angle);
	void SetOuterRadius(float Radius);
	void SetInnerRadius(float Radius);
	void SetColorAndOpacity(const struct FLinearColor& ColorAndOpacity);
	void SetAngleSpan(float Angle);
};


// Class ConanSandbox.DamageMonitorInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageMonitorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.DamageMonitorInterface");
		return ptr;
	}


	void OnDamageCaused(class AActor* DamagedActor, class AController* DamagedActorController, float DamageAmount);
};


// Class ConanSandbox.DamageMonitorHelper
// 0x0000 (0x0028 - 0x0028)
class UDamageMonitorHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.DamageMonitorHelper");
		return ptr;
	}


	void STATIC_NotifyDamageCaused(class AController* DamageCauserController, class AActor* DamageCauser, class AActor* DamagedActor, class AController* DamagedActorController, float DamageAmount);
};


// Class ConanSandbox.DynamicSkyBase
// 0x0010 (0x03E0 - 0x03D0)
class ADynamicSkyBase : public AActor
{
public:
	class AConanTimeOfDayManager*                      TimeManager;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnimateDayNight;                                          // 0x03D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              TimeOfDay;                                                // 0x03DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.DynamicSkyBase");
		return ptr;
	}


	void SetTimeOfDay(float NewTimeOfDay);
	void SetSolarAngle();
	void EnableDayNightAnimation(bool Enable);
};


// Class ConanSandbox.EgocentricParticleSpawnerComponent
// 0x0098 (0x0190 - 0x00F8)
class UEgocentricParticleSpawnerComponent : public UActorComponent
{
public:
	float                                              MinSpawnInterval;                                         // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceStartZ;                                              // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceEndZ;                                                // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              m_SpawnedParticles;                                       // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0120(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EgocentricParticleSpawnerComponent");
		return ptr;
	}


	class UClass* GetActorClassToSpawn(const struct FHitResult& Hit);
};


// Class ConanSandbox.EnergyReceiverInterface
// 0x0000 (0x0028 - 0x0028)
class UEnergyReceiverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnergyReceiverInterface");
		return ptr;
	}


	float GetModifiedForceAbsorption(EnergyTypes EnergyType, float InForce);
	float GetForceModification(const struct FBaseEnergy& Source, float InForce);
};


// Class ConanSandbox.EnergySourceComponent
// 0x0018 (0x0110 - 0x00F8)
class UEnergySourceComponent : public UActorComponent
{
public:
	float                                              TickInterval;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<struct FBaseEnergy>                         RegisterAsSourceForEnergies;                              // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnergySourceComponent");
		return ptr;
	}


	void SetIsSubMapEnabled(bool Enabled);
};


// Class ConanSandbox.EnergySourceInterface
// 0x0000 (0x0028 - 0x0028)
class UEnergySourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnergySourceInterface");
		return ptr;
	}


	float GetModifiedForceEmission(EnergyTypes EnergyType, float InForce);
};


// Class ConanSandbox.EnvironmentFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEnvironmentFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EnvironmentFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateImprintSceneCapturers(class ACharacter* Character);
	bool STATIC_PickupGatheringOneInstance(class UObject* WorldContextObject, class AActor* Actor, class AController* Controller, const struct FVector& Eye, const struct FVector& ViewDir, float TraceLength, float TraceRadius, class UPickupFoliage** OutFoliage, int* OutInstance);
	bool STATIC_IsFoliageInstanceHidden(class UFoliageInstancedStaticMeshComponent* FoliageComponent, int InstanceIndex);
	bool STATIC_HideFoliageInstance(class UFoliageInstancedStaticMeshComponent* FoliageComponent, int InstanceIndex, bool WorldSpaceTranform, struct FTransform* OutOldTransform);
	bool STATIC_EncompassesPointInVolume(class AVolume* Volume, const struct FVector& Point, float Radius, float* OutDistanceToPoint);
	bool STATIC_DoesMaterialHaveVectorParameter(class UMaterialInterface* Material, const struct FName& ParamName);
	bool STATIC_DoesMaterialHaveTextureParameter(class UMaterialInterface* Material, const struct FName& ParamName);
	bool STATIC_DoesMaterialHaveScalarParameter(class UMaterialInterface* Material, const struct FName& ParamName);
};


// Class ConanSandbox.ExilesJourneyComponent
// 0x0058 (0x0150 - 0x00F8)
class UExilesJourneyComponent : public UActorComponent
{
public:
	TAssetPtr<class USoundBase>                        NewEventSound;                                            // 0x00F8(0x0020) (Edit)
	struct FScriptMulticastDelegate                    SignalNewJourneyEvent;                                    // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalChapterComplete;                                    // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FExilesJourneyEvent>                 m_JourneyEvents;                                          // 0x0138(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyComponent");
		return ptr;
	}


	void SignalNewJourneyEventDelegate__DelegateSignature(class UExilesJourneyItem* Item);
	void SignalChapterComplete__DelegateSignature(EJourneyChapter chapter);
	void ServerRequestInitialUpdate();
	void OnDataLoaded();
	bool HasJourneyEvent(const struct FName& Name);
	void ClientInitialUpdate(TArray<struct FExilesJourneyEvent> events);
	void ClearAllJourneyEvents();
	void AddJourneyEventToClient(const struct FName& Name, const struct FVector& Location);
	void AddJourneyEvent(const struct FName& Name, const struct FVector& Location);
};


// Class ConanSandbox.FCRichTextBlock
// 0x0000 (0x0408 - 0x0408)
class UFCRichTextBlock : public URichTextBlock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCRichTextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
};


// Class ConanSandbox.FuncomSkeletalMeshComponent
// 0x0010 (0x0F70 - 0x0F60)
class UFuncomSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	struct FFuncomPoseSnapshot                         CachedPose;                                               // 0x0F60(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FuncomSkeletalMeshComponent");
		return ptr;
	}


	void CopyPose(const struct FFuncomPoseSnapshot& Pose);
	void ClearPose();
};


// Class ConanSandbox.AvatarItem
// 0x0018 (0x03D0 - 0x03B8)
class UAvatarItem : public UGameItem
{
public:
	struct FStringAssetReference                       AvatarMapMarkerIcon;                                      // 0x03B8(0x0010) (Edit, DisableEditOnInstance)
	class UClass*                                      m_AvatarType;                                             // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AvatarItem");
		return ptr;
	}


	class UClass* GetAvatarType();
};


// Class ConanSandbox.ItemInventoryClientMonitor
// 0x0008 (0x0030 - 0x0028)
class UItemInventoryClientMonitor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ItemInventoryClientMonitor");
		return ptr;
	}


	void SetInventory(class UItemInventory* inventory);
};


// Class ConanSandbox.ItemInventory
// 0x00F8 (0x0250 - 0x0158)
class UItemInventory : public UPersistenceComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalItemsRequestedFromClient;                           // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalInventoryRecivedOnClient;                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalItemAdded;                                          // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalItemRemoved;                                        // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalItemIntStatChanged;                                 // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalItemFloatStatChanged;                               // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             DelegateCanBeDropped;                                     // 0x01C0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    SignalCannotMoveItem;                                     // 0x01D0(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	TArray<class UGameItem*>                           ItemList;                                                 // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bReplicatesToEveryone;                                    // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInventoryType>                        inventoryType;                                            // 0x01F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	int                                                MaxItemCount;                                             // 0x01F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PerishModifier;                                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4C];                                      // 0x01FC(0x004C) MISSED OFFSET
	class UClass*                                      LootContainerClass;                                       // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ItemInventory");
		return ptr;
	}


	bool ValidatedDeleteItemsByTemplate(int TemplateId, int quantity);
	void SignalItemsRequestedFromClient__DelegateSignature(class UItemInventory* inventory);
	void SignalItemRemovedEvent__DelegateSignature(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SignalItemAddedEvent__DelegateSignature(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SignalCannotMove__DelegateSignature(int Index, class UItemInventory* srcInventory);
	void SetReplicatesToEveryone(bool replicates);
	void SetMaxItemCount(int Count);
	void SetInventoryItems(class UItemInventory* inventory);
	void SetForceReplication(bool Force);
	class UGameItem* RemoveItem(int Index);
	void PrintInventory();
	bool MoveItem(int srcIndex, class UItemInventory* targetInventory, int targetIndex, int quantity, bool ignoreSizeLimit);
	void ItemIntStatChangedEvent__DelegateSignature(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int statValue, int deltaValue);
	void ItemFloatStatChangedEvent__DelegateSignature(class UGameItem* Item, TEnumAsByte<EItemFloatStatID> statID, float statValue, float deltaValue);
	bool IsInitialContentReceived();
	void InventoryRecivedOnClientEvent__DelegateSignature();
	bool HasItemByTemplateID(int TemplateId, int quantity);
	bool HasItem(int Index, int quantity);
	void GrowItemList(int desiredSize);
	int GetResourceCount(int TemplateId);
	int GetPopulatedItemCount(int firstSlot, int slotsToTest);
	int GetNumberOfItemsByTemplate(int TemplateId);
	int GetItemIndex(class UGameItem* Item);
	int GetItemCountByClass(class UClass* Class);
	int GetItemCount();
	class UGameItem* GetItemByTemplateID(int TemplateId, int startIndex);
	class UGameItem* GetItem(int Index);
	struct FName STATIC_GetInventoryTag(TEnumAsByte<EInventoryType> inventoryType);
	class UItemInventory* STATIC_GetInventoryByType(class AActor* Owner, TEnumAsByte<EInventoryType> inventoryType);
	int GetFirstFreeIndex(bool ignoreMaxItemCount);
	class AConanCharacter* GetConanCharacterOwner();
	int FindItemByTemplateID(int TemplateId, int startIndex);
	void DropItem(int Index, class AConanCharacter* invokingCharacter);
	bool DeleteItemsByTemplate(int TemplateId, int quantity);
	bool DeleteItems(int Index, int quantity);
	bool DelegateCanBeDropped__DelegateSignature(class UGameItem* Item);
	void ClientIntStatChanged(int Index, TEnumAsByte<EItemIntStatID> statID, int Value);
	void ClientFloatStatChanged(int Index, TEnumAsByte<EItemFloatStatID> statID, float Value);
	bool AllowsVisualActors();
	int AddItemTemplate(int TemplateId, int Index, int quantity, bool loot, float durabilityPercentage, float durability);
	int AddItem(class UGameItem* Item, int Index);
};


// Class ConanSandbox.ItemInventoryReplicateToAll
// 0x0000 (0x0250 - 0x0250)
class UItemInventoryReplicateToAll : public UItemInventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ItemInventoryReplicateToAll");
		return ptr;
	}

};


// Class ConanSandbox.EquipmentInventory
// 0x0040 (0x0290 - 0x0250)
class UEquipmentInventory : public UItemInventoryReplicateToAll
{
public:
	struct FScriptMulticastDelegate                    SignalUnequipAllWeapons;                                  // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalUnequipWeaponInSlot;                                // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalUnequipWeaponToSlot;                                // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalEquipPreviouslyEquipedWeapons;                      // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EquipmentInventory");
		return ptr;
	}


	void UnequipWeaponInSlot(TEnumAsByte<EquipmentSlots> equipmentSlot);
	void UnequipRFist();
	void UnequipLFist();
	void UnequipFists();
	void UnequipAllWeapons();
	void SignalUnequipWeaponToSlot__DelegateSignature(class UItemInventory* Item, TEnumAsByte<EquipmentSlots> equipmentSlot);
	void SignalUnequipWeaponInSlot__DelegateSignature(class UItemInventory* Item, TEnumAsByte<EquipmentSlots> equipmentSlot);
	void SignalUnequipAllWeapons__DelegateSignature(class UItemInventory* Item);
	void RemoveFromEquipmentInventory(class UGameItem* Item);
	bool IsRHandEmpty();
	bool IsRFistEquipped();
	bool IsLHandEmpty();
	bool IsLFistEquipped();
	bool IsDualHandEquipped();
	bool HasWeaponEquippedThatIsNotAFist();
	bool HashItemWithFlagAtSlot(TEnumAsByte<EquipmentSlots> slotID, int Flags);
	int GetSlotIndex(TEnumAsByte<EquipmentSlots> slotID);
	TEnumAsByte<EquipmentSlots> GetSlotAtIndex(int Index);
	class UGameItem* GetItemAtSlot(TEnumAsByte<EquipmentSlots> slotID);
	struct FName STATIC_GetEquipSocketName(TEnumAsByte<EquipmentSlots> slotID);
	bool EquipRFist();
	void EquipPreviouslyEquipedWeapons__DelegateSignature(class UItemInventory* Item);
	void EquipPreviouslyEquipedWeapons();
	bool EquipLFist();
	void CreateFistItems();
	int AddItemToSlot(TEnumAsByte<EquipmentSlots> slotID, class UGameItem* Item);
	int AddItemTemplateToSlot(TEnumAsByte<EquipmentSlots> slotID, int TemplateId, int quantity, bool loot, float durabilityPercentage, float durability);
};


// Class ConanSandbox.BuildingItem
// 0x0030 (0x03E8 - 0x03B8)
class UBuildingItem : public UGameItem
{
public:
	TAssetPtr<class UClass>                            BuildingObject;                                           // 0x03B8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      BuildingObjectClass;                                      // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.BuildingItem");
		return ptr;
	}

};


// Class ConanSandbox.EmoteItem
// 0x0050 (0x0408 - 0x03B8)
class UEmoteItem : public UGameItem
{
public:
	ECharacterEmotes                                   emoteID;                                                  // 0x03B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	int                                                EmoteFlags;                                               // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UAnimMontage>                      EmoteAnimMontageMale;                                     // 0x03C0(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UAnimMontage>                      EmoteAnimMontageFemale;                                   // 0x03E0(0x0020) (BlueprintVisible, BlueprintReadOnly)
	EEmoteCategories                                   EmoteCategory;                                            // 0x0400(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EmoteItem");
		return ptr;
	}


	void SetEmoteData(int emoteTemplateID, const struct FEmoteTableRow& Data);
};


// Class ConanSandbox.ExilesJourneyItem
// 0x0038 (0x03F0 - 0x03B8)
class UExilesJourneyItem : public UGameItem
{
public:
	struct FName                                       TemplateName;                                             // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      AchievementName;                                          // 0x03C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EJourneyChapter                                    chapter;                                                  // 0x03D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FText                                       DescriptionDiscovered;                                    // 0x03D8(0x0018) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyItem");
		return ptr;
	}

};


// Class ConanSandbox.FeatItem
// 0x0070 (0x0428 - 0x03B8)
class UFeatItem : public UGameItem
{
public:
	TAssetPtr<class UTexture2D>                        IconOverlay;                                              // 0x03B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               GiveOnSpawn;                                              // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                LevelRequirement;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FeatCost;                                                 // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EFeatCategory>>                 Categories;                                               // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        PrerequisiteFeat;                                         // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        RewardRecipe;                                             // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               LearnedFromNPC;                                           // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               ShowInFeatWindow;                                         // 0x0419(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	int                                                CornerStoneLevel;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               WasSetVisibleManually;                                    // 0x0420(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0421(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FeatItem");
		return ptr;
	}


	void SetFeatData(int recipeTemplateID, const struct FFeatTableRow& Data);
};


// Class ConanSandbox.RecipeItem
// 0x00A0 (0x0458 - 0x03B8)
class URecipeItem : public UGameItem
{
public:
	int                                                RecipeType;                                               // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CraftXP;                                                  // 0x03C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CraftingStations;                                         // 0x03C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredFuel;                                             // 0x03C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class UClass*                                      BuildingModuleClass;                                      // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   CraftingCharacterUID;                                     // 0x03D8(0x0008) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FIngredientEntry>                    Ingredients;                                              // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FIngredientEntry>                    Results;                                                  // 0x03F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            BuildingModule;                                           // 0x0400(0x0020)
	bool                                               DestroyStationOnComplete;                                 // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                ThrallRecipeRequirement;                                  // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsThrallMachineRecipe;                                    // 0x0428(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsRecipeEnabled;                                          // 0x0429(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        MapMarkerIcon;                                            // 0x0430(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ExilesJourneyTrigger;                                     // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RecipeItem");
		return ptr;
	}


	void SetRecipeData(int recipeTemplateID, const struct FRecipeTableRow& Data);
};


// Class ConanSandbox.ThrallRecipeItem
// 0x0010 (0x0468 - 0x0458)
class UThrallRecipeItem : public URecipeItem
{
public:
	class UThrallItem*                                 SourceThrallItem;                                         // 0x0458(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SourceThrallItemIndex;                                    // 0x0460(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SourceThrallInventoryIndex;                               // 0x0464(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallRecipeItem");
		return ptr;
	}

};


// Class ConanSandbox.ShortcutRefItem
// 0x0020 (0x03D8 - 0x03B8)
class UShortcutRefItem : public UGameItem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	class UGameItem*                                   m_TargetItem;                                             // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ShortcutRefItem");
		return ptr;
	}


	void SlotIconChanged(class UTexture2D* newIcon);
	void SetRefItemData(class UGameItem* targetItem);
	void IntStatChangedOnItem(class UGameItem* GameItem, TEnumAsByte<EItemIntStatID> statID, int Value, int deltaValue);
	void FloatStatChangedOnItem(class UGameItem* GameItem, TEnumAsByte<EItemFloatStatID> statID, float Value, float deltaValue);
	void EnableStateChanged(class UGameItem* GameItem, bool IsEnabled);
};


// Class ConanSandbox.ThrallBase
// 0x0000 (0x03D0 - 0x03D0)
class AThrallBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallBase");
		return ptr;
	}

};


// Class ConanSandbox.ThrallItem
// 0x01F8 (0x05B0 - 0x03B8)
class UThrallItem : public UGameItem
{
public:
	struct FCharacterLayout                            ThrallCharLayout;                                         // 0x03B8(0x0138) (Edit, BlueprintVisible, BlueprintReadOnly, SaveGame)
	TArray<int>                                        EquipmentTemplateIDs;                                     // 0x04F0(0x0010) (Edit, ZeroConstructor, Transient)
	TArray<int>                                        BackpackTemplateIDs;                                      // 0x0500(0x0010) (Edit, ZeroConstructor, Transient)
	struct FThrallInfo                                 ThrallInfo;                                               // 0x0510(0x0080) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FScriptMulticastDelegate                    SignalReceivedCharacterLayout;                            // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDataTable*                                  m_ThrallTable;                                            // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               m_bHasRequestedCharLayout;                                // 0x05A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallItem");
		return ptr;
	}


	void SlotIntStatChanged(class UGameItem* GameItem, TEnumAsByte<EItemIntStatID> statID, int Value, int deltaValue);
	void SignalReceivedCharacterLayout__DelegateSignature();
	void SetupThrallFromItem(class AConanCharacter* ThrallNPC);
	struct FThrallTableRow STATIC_GetThrallTableRowByID(int ThrallTemplateID, bool* WasFound);
	struct FThrallTableRow GetThrallTableRow();
	class UBehaviorTree* GetThrallBehaviorTree();
	class UClass* GetThrallActorClass();
	void DestroyThrallMessageResult(EMessageBoxDialogResult Result);
};


// Class ConanSandbox.GameItemSelection
// 0x0000 (0x0028 - 0x0028)
class UGameItemSelection : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GameItemSelection");
		return ptr;
	}


	void SignalSelectionChangedDelegate__DelegateSignature(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SignalMoveItemDelegate__DelegateSignature(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SignalItemMarkedForMoveDelegate__DelegateSignature(class UItemInventory* inventory, const struct FVirtualIndex& Index, bool marked);
	void MarkedForMoveItemRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
};


// Class ConanSandbox.TemplateIdTableAccessor
// 0x00A8 (0x00D0 - 0x0028)
class UTemplateIdTableAccessor : public UObject
{
public:
	class UDataTable*                                  table;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TemplateIdTableAccessor");
		return ptr;
	}


	void OnDataTableModified(class UDataTable* DataTable);
};


// Class ConanSandbox.GameItemSpawner
// 0x0190 (0x01B8 - 0x0028)
class UGameItemSpawner : public UBlueprintFunctionLibrary
{
public:
	TMap<class FString, class UClass*>                 m_PreLoadedItemClasses;                                   // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0078(0x00F8) MISSED OFFSET
	class UTemplateIdTableAccessor*                    m_ItemTableAccessor;                                      // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_RecipeTableAccessor;                                    // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_EmoteTableAccessor;                                     // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_FeatTableAccessor;                                      // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_CraftingStationTableAccessor;                           // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_DyeItemTableAccessor;                                   // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_EquipmentVariationTableAccessor;                        // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_ItemStatModificationTableAccessor;                      // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTemplateIdTableAccessor*                    m_ExilesJourneyTableAccessor;                             // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GameItemSpawner");
		return ptr;
	}


	class UThrallItem* STATIC_SpawnThrallItem(class UObject* WorldContextObject, class UClass* Class, class AConanCharacter* ThrallNPC, const struct FCharacterLayout& Layout);
	class UShortcutRefItem* STATIC_SpawnShortcutRefItem(class UObject* WorldContextObject, class UGameItem* targetItem);
	class URecipeItem* STATIC_SpawnRecipeItem(class UObject* WorldContextObject, int TemplateId);
	class UExilesJourneyItem* STATIC_SpawnJourneyItem(class UObject* WorldContextObject, const struct FName& TemplateName);
	TArray<class UExilesJourneyItem*> STATIC_SpawnJourneyChapterItems(class UObject* WorldContextObject, EJourneyChapter chapter);
	class UGameItem* STATIC_SpawnItem(class UObject* WorldContextObject, TEnumAsByte<EGameItemType> Type, int TemplateId);
	class UGameItem* STATIC_SpawnGameItem(class UObject* WorldContextObject, int TemplateId);
	class UFeatItem* STATIC_SpawnFeatItem(class UObject* WorldContextObject, int TemplateId);
	class UEmoteItem* STATIC_SpawnEmoteItem(class UObject* WorldContextObject, int TemplateId);
	TArray<class UFeatItem*> STATIC_SpawnAllFeatItems(class UObject* WorldContextObject);
	TArray<int> STATIC_GetRecipesThatCraftTemplate(class UObject* WorldContextObject, int TemplateId);
	TArray<int> STATIC_GetFeatIDList(class UObject* WorldContextObject);
	struct FText STATIC_GetCraftingStationName(int stationID);
	struct FItemTableRow STATIC_FindBuildingItem(class UObject* WorldContextObject, class UClass* BuildingClass, int* TemplateId);
};


// Class ConanSandbox.GetGuildMembersListCallProxy
// 0x0030 (0x0058 - 0x0028)
class UGetGuildMembersListCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GetGuildMembersListCallProxy");
		return ptr;
	}


	class UGetGuildMembersListCallProxy* STATIC_GetGuildMembersList(class UObject* WorldContextObject, int guildId);
};


// Class ConanSandbox.GetOwnerCallProxy
// 0x0038 (0x0060 - 0x0028)
class UGetOwnerCallProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GetOwnerCallProxy");
		return ptr;
	}

};


// Class ConanSandbox.HarvestFoliageSystem
// 0x0060 (0x0430 - 0x03D0)
class AHarvestFoliageSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HarvestFoliageSystem");
		return ptr;
	}

};


// Class ConanSandbox.HealthbarInterface
// 0x0000 (0x0028 - 0x0028)
class UHealthbarInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HealthbarInterface");
		return ptr;
	}


	void OnTargetlockUpdate(class UConanWidgetComponent* Component, bool Enabled);
	void OnHealthbarUpdate(class UConanWidgetComponent* Component, bool Enabled);
};


// Class ConanSandbox.HeatmapDataGeneration
// 0x0000 (0x0028 - 0x0028)
class UHeatmapDataGeneration : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HeatmapDataGeneration");
		return ptr;
	}


	bool STATIC_GenerateHeatmap(const class FString& slackName, TArray<class FString> Data, const class FString& DataName);
};


// Class ConanSandbox.IKInterface
// 0x0000 (0x0028 - 0x0028)
class UIKInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.IKInterface");
		return ptr;
	}


	void ToggleIK(bool Enable);
};


// Class ConanSandbox.InteractableFoliageBase
// 0x0100 (0x0BB0 - 0x0AB0)
class UInteractableFoliageBase : public UFoliageInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0AB0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InteractableFoliageBase");
		return ptr;
	}


	void RemoveAndRespawnInstanceServer(int InstanceIndex, float RespawnTime);
};


// Class ConanSandbox.HarvestFoliage
// 0x0060 (0x0C10 - 0x0BB0)
class UHarvestFoliage : public UInteractableFoliageBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0BB0(0x0050) MISSED OFFSET
	class AHarvestFoliageSystem*                       HarvestSystem;                                            // 0x0C00(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0C08(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HarvestFoliage");
		return ptr;
	}


	void RespawnInstanceServer(int InstanceIndex, float RespawnTime);
	void RemoveAndRespawnInstance(int InstanceIndex, float RespawnTime);
	void HideInstanceServer(int InstanceIndex);
	void HideInstance(int InstanceIndex);
	int AddInstanceHACK(const struct FTransform& InstanceTransform);
};


// Class ConanSandbox.PickupFoliage
// 0x0000 (0x0BB0 - 0x0BB0)
class UPickupFoliage : public UInteractableFoliageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PickupFoliage");
		return ptr;
	}


	void RespawnInstanceServer(int InstanceIndex, float RespawnTime);
	void RemoveAndRespawnInstance(int InstanceIndex, float RespawnTime);
	void HideInstanceServer(int InstanceIndex);
	void HideInstance(int InstanceIndex);
};


// Class ConanSandbox.InventoryItemInterfaceBase
// 0x0000 (0x0028 - 0x0028)
class UInventoryItemInterfaceBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryItemInterfaceBase");
		return ptr;
	}


	bool IsProjectile();
};


// Class ConanSandbox.VisualItemInterface
// 0x0000 (0x0028 - 0x0028)
class UVisualItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.VisualItemInterface");
		return ptr;
	}


	void SetStaticMesh(class UStaticMesh* StaticMesh);
	void SetSkeletalMesh(class USkeletalMesh* SkeletalMesh);
	void SetDestructibleMesh(class UDestructibleMesh* DestructibleMesh);
};


// Class ConanSandbox.InventoryItemBase
// 0x0030 (0x0400 - 0x03D0)
class AInventoryItemBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	struct FName                                       EquipSocketName;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseInWater;                                            // 0x03E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class UGameItem*                                   OwnerItem;                                                // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EVisualMeshType                                    MeshType;                                                 // 0x03F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryItemBase");
		return ptr;
	}


	void OnVisualsChanged();
};


// Class ConanSandbox.IsInThirdPersonInterface
// 0x0000 (0x0028 - 0x0028)
class UIsInThirdPersonInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.IsInThirdPersonInterface");
		return ptr;
	}


	bool GetIsInThirdPerson();
};


// Class ConanSandbox.CraftingQueue
// 0x0178 (0x03C8 - 0x0250)
class UCraftingQueue : public UItemInventory
{
public:
	TArray<int>                                        AcceptedFuels;                                            // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              BurnTimeMultiplier;                                       // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               AutoScheduleRecipes;                                      // 0x0264(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	TArray<int>                                        MachineRecipes;                                           // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                MaxAutoCraftQueueSize;                                    // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UTexture2D*                                  MachineBannerImage;                                       // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   MachineLabelVisibility;                                   // 0x0288(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanConvertThralls;                                        // 0x0289(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x028A(0x0006) MISSED OFFSET
	TArray<int>                                        ThrallConversionRecipeIDs;                                // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    SignalFuelTypeChanged;                                    // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalRunningStateChanged;                                // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalArtisanSlotChanged;                                 // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalRecipeCrafted;                                      // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             DelegateCanRecipeBeCrafted;                               // 0x02E0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	TArray<class UItemInventory*>                      m_ResourceInventories;                                    // 0x02F0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UItemInventory*>                      m_TargetInventories;                                      // 0x0300(0x0010) (ExportObject, ZeroConstructor)
	class UEquipmentInventory*                         m_EquipmentInventory;                                     // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class URecipeItem*>                         m_MachineRecipeList;                                      // 0x0318(0x0010) (ZeroConstructor)
	class UItemInventory*                              m_ArtisanThrallInventory;                                 // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_ArtisanRecipeInventory;                                 // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventoryClientMonitor*                 m_ArtisanThrallInventoryMonitor;                          // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0340(0x0004) MISSED OFFSET
	bool                                               m_IsStarted;                                              // 0x0344(0x0001) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                m_FuelTemplateID;                                         // 0x0348(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              m_CurrentBurnTimePerFuelItem;                             // 0x034C(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              m_RemainingBurnTime;                                      // 0x0350(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              m_CurrentBurnTimePerFuelItemBase;                         // 0x0354(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x70];                                      // 0x0358(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CraftingQueue");
		return ptr;
	}


	void SlotResourceStatChanged(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int statValue, int deltaValue);
	void SlotResourceRemoved(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SlotResourceAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SlotArtisanRemoved(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SlotArtisanAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SignalRunningStateChanged__DelegateSignature(class UCraftingQueue* CraftingQueue, bool IsStarted, bool IsRunning);
	void SignalRecipeCrafted__DelegateSignature(class URecipeItem* RecipeItem);
	void SignalFuelTypeChanged__DelegateSignature(class UCraftingQueue* CraftingQueue, int fuelTemplateID);
	void SignalArtisanSlotChanged__DelegateSignature(class UThrallItem* ThrallItem);
	void OnPreComponentSave();
	void MulticastStartStop(bool doRun);
	void MulticastSetFuelTemplateID(int TemplateId);
	void MulticastRunningStateChanged(bool IsStarted, bool IsRunning);
	bool IsStarted();
	bool IsRunning();
	float GetRemainingBurnTime(bool total);
	int GetFuelTemplateID();
	float GetBurnTimePerFuelItem();
	void DelegateCanRecipeBeCrafted__DelegateSignature(class UCraftingQueue* CraftingQueue, class URecipeItem* RecipeItem, bool* isAllowed);
	bool CraftItems(class URecipeItem* recipe);
	bool ConsumeResources(class URecipeItem* recipe);
	bool CanCraftRecipe(class URecipeItem* recipe);
};


// Class ConanSandbox.EmoteInventory
// 0x0010 (0x0260 - 0x0250)
class UEmoteInventory : public UItemInventory
{
public:
	struct FScriptMulticastDelegate                    SignalEmoteLearned;                                       // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EmoteInventory");
		return ptr;
	}


	void SignalEmoteLearned__DelegateSignature(int TemplateId);
	bool LearnEmoteByEmoteID(class UObject* WorldContextObject, ECharacterEmotes emoteID);
	bool LearnEmote(class UObject* WorldContextObject, int emoteTemplateID);
	int GetTemplateIDFromEmoteID(ECharacterEmotes emoteID);
	void ForgetEmote(int emoteTemplateID);
};


// Class ConanSandbox.FeatInventory
// 0x0000 (0x0250 - 0x0250)
class UFeatInventory : public UItemInventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FeatInventory");
		return ptr;
	}

};


// Class ConanSandbox.RecipeManager
// 0x0020 (0x0270 - 0x0250)
class URecipeManager : public UItemInventory
{
public:
	struct FScriptMulticastDelegate                    SignalItemCrafted;                                        // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalRecipeExecuted;                                     // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RecipeManager");
		return ptr;
	}


	void SignalRecipeExecuted__DelegateSignature(class URecipeItem* recipe);
	void SignalItemCrafted__DelegateSignature(int Index, class UGameItem* Item, int Count);
	void ServerLearnRecipe(class UObject* WorldContextObject, int recipeTemplateID);
	void ServerForgetRecipe(int recipeTemplateID);
	void LearnOwnedDLCRecipes();
	TArray<class URecipeItem*> GetBuildingModuleRecipes(class UClass* ParentClass);
};


// Class ConanSandbox.ShortcutBarInventory
// 0x0070 (0x02C0 - 0x0250)
class UShortcutBarInventory : public UItemInventory
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0250(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ShortcutBarInventory");
		return ptr;
	}


	void UseShortcutItem(int SlotIndex);
	void StopActiveUsableItem();
	void SlotUnequipWeapon(class UItemInventory* srcInventory, TEnumAsByte<EquipmentSlots> equipmentSlot);
	void SlotUnequipAllWeapons(class UItemInventory* srcInventory);
	void SlotEquipPreviouslyEquipedWeapons(class UItemInventory* srcInventory);
	void SlotEquipmentRemoved(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* dstInventory, int dstIndex);
	void SlotEquipmentAdded(int Index, class UGameItem* GameItem, class UItemInventory* srcInventory, int srcIndex);
	void SignalActiveItemChanged__DelegateSignature(int oldIndex, int newIndex);
	void FindAndClearWeaponShortcut(TEnumAsByte<EquipmentSlots> equipmentSlot);
	bool EquipPreviouslyEquipedWeapons();
};


// Class ConanSandbox.LandClaimCell
// 0x0098 (0x00C0 - 0x0028)
class ULandClaimCell : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEmpty;                                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET
	int                                                CellDataIndex;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RefCount;                                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LandClaimCell");
		return ptr;
	}

};


// Class ConanSandbox.LoadCharacterCallProxy
// 0x0050 (0x0078 - 0x0028)
class ULoadCharacterCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   UID;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNPC;                                                    // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0059(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LoadCharacterCallProxy");
		return ptr;
	}


	void STATIC_ProcessPreSpawnCharacterData(class UObject* WorldContextObject, TArray<struct FDBResult> Data, class UUniqueID** bedID, class UUniqueID** bedrollID, bool* lastBoundToBedroll, bool* diedByPlayer);
	void STATIC_ProcessNPCData(class UObject* WorldContextObject, class AActor* Actor, TArray<struct FDBResult> Data);
	void STATIC_ProcessCharacterData(class UObject* WorldContextObject, class AActor* Actor, TArray<struct FDBResult> Data);
	class ULoadCharacterCallProxy* STATIC_LoadNPC(class UObject* WorldContextObject, class UUniqueID* UID);
	class ULoadCharacterCallProxy* STATIC_LoadCharacter(class UObject* WorldContextObject, class UUniqueID* UID);
};


// Class ConanSandbox.LoadGuildIdCallProxy
// 0x0030 (0x0058 - 0x0028)
class ULoadGuildIdCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LoadGuildIdCallProxy");
		return ptr;
	}


	class ULoadGuildIdCallProxy* STATIC_LoadGuildId(class UObject* WorldContextObject, class APlayerController* Player);
};


// Class ConanSandbox.LoadGuildsCallProxy
// 0x0028 (0x0050 - 0x0028)
class ULoadGuildsCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LoadGuildsCallProxy");
		return ptr;
	}


	class ULoadGuildsCallProxy* STATIC_LoadGuilds(class UObject* WorldContextObject);
};


// Class ConanSandbox.LoadInventoryCallProxy
// 0x0048 (0x0070 - 0x0028)
class ULoadInventoryCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LoadInventoryCallProxy");
		return ptr;
	}


	void STATIC_ProcessInventoryData(class UObject* WorldContextObject, class AActor* Actor, TArray<struct FDBResult> Data);
	class ULoadInventoryCallProxy* STATIC_LoadInventory(class UObject* WorldContextObject, class UUniqueID* UID);
};


// Class ConanSandbox.LoadStatHolderCallProxy
// 0x0098 (0x00C0 - 0x0028)
class ULoadStatHolderCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LoadStatHolderCallProxy");
		return ptr;
	}


	class ULoadStatHolderCallProxy* STATIC_LoadStatHolder(class UObject* WorldContextObject, class AActor* Actor);
};


// Class ConanSandbox.LootContainer
// 0x0018 (0x03E8 - 0x03D0)
class ALootContainer : public AActor
{
public:
	class UItemInventoryClientMonitor*                 m_InventoryMonitor;                                       // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UItemInventory*                              m_Inventory;                                              // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LootContainer");
		return ptr;
	}


	void SlotItemRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
};


// Class ConanSandbox.LootLogBase
// 0x0028 (0x0268 - 0x0240)
class ULootLogBase : public UUserWidget
{
public:
	class UClass*                                      LogEntryClassTemplate;                                    // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                LogVerticalBox;                                           // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UWidget*>                             LogEntryPool;                                             // 0x0250(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LootLogBase");
		return ptr;
	}


	class UWidget* GetNewLogEntryFromPool();
	void AddLogEntry(class UWidget* WidgetToAdd);
};


// Class ConanSandbox.LootLogElementBase
// 0x0040 (0x0280 - 0x0240)
class ULootLogElementBase : public UUserWidget
{
public:
	class UTextBlock*                                  T_Total;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  T_Quantity;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  T_Type;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      I_Icon;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Brd_Background;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  RemoveTexture;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AddTexture;                                               // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DefaultFontSize;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LootLogElementBase");
		return ptr;
	}


	void CreateLogElementNative(int quantity, const struct FText& Name, int totalQuantity, class UTexture2D* Icon);
};


// Class ConanSandbox.LoreMeshActor
// 0x0010 (0x03F0 - 0x03E0)
class ALoreMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	int                                                LoreId;                                                   // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LoreMeshActor");
		return ptr;
	}

};


// Class ConanSandbox.NavArea_Doorway
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Doorway : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NavArea_Doorway");
		return ptr;
	}

};


// Class ConanSandbox.NavArea_Walls
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Walls : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NavArea_Walls");
		return ptr;
	}

};


// Class ConanSandbox.NPCCommunicationInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCCommunicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NPCCommunicationInterface");
		return ptr;
	}


	void OnReceiveNPCCommunicationMessage(class AActor* SourceActor, class UObject* Message);
};


// Class ConanSandbox.NPCCommunicationHelper
// 0x0000 (0x0028 - 0x0028)
class UNPCCommunicationHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NPCCommunicationHelper");
		return ptr;
	}


	void STATIC_BroadcastNPCCommunicationMessage(class AActor* SourceActor, float Radius, class UObject* Message);
};


// Class ConanSandbox.NpcSpawnerComponent
// 0x00B8 (0x01B0 - 0x00F8)
class UNpcSpawnerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NpcSpawnerComponent");
		return ptr;
	}


	void UpdateNumSpawnSlots(ENpcSpawnerType Type, int Index, int NumSpawnSlots);
	void Spawned(ENpcSpawnerType Type, int Index);
	void SetRespawnTimeCoefficient(float Coefficient);
	void SetMaxSpawnCoefficient(float Coefficient);
	int RegisterSpawner(ENpcSpawnerType Type, int CurrentCount, int NumSpawnSlots, float respawn);
	bool IsFull();
	bool GetRandomNotFullSpawner(int* Index, ENpcSpawnerType* Type);
	void Despawned(ENpcSpawnerType Type, int Index, bool DueToInactivity);
	void ClearSpawners();
};


// Class ConanSandbox.OnScreenInfoInterface
// 0x0000 (0x0028 - 0x0028)
class UOnScreenInfoInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.OnScreenInfoInterface");
		return ptr;
	}


	void UpdateUObject();
	void SetObject(class UObject* Object, int objectIndex);
};


// Class ConanSandbox.PathFollowingAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UPathFollowingAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PathFollowingAnimationInterface");
		return ptr;
	}


	void StartTurnInPlace(const struct FVector& InitialOrientation, const struct FVector& FinalOrientation);
	void AbortTurnInPlace();
};


// Class ConanSandbox.PathPoints
// 0x0020 (0x0048 - 0x0028)
class UPathPoints : public UObject
{
public:
	TArray<struct FVector>                             PathPoints;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PathPoints");
		return ptr;
	}


	void UpdateNavPath(class UObject* WorldContextObject);
	void ReversePath();
	bool IsValid();
	struct FVector GetDestination();
};


// Class ConanSandbox.PerkSystemComponent
// 0x00F0 (0x01E8 - 0x00F8)
class UPerkSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x00F8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PerkSystemComponent");
		return ptr;
	}


	void UpdatePerkStatus(TArray<struct FName> Perks);
	void SlotIntStatChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SlotFloatStatChanged(class AActor* Actor, ECharFloatStatID statID, float NewValue, float deltaValue);
	bool RemoveOwnedPerk(const struct FName& perkToRemove);
	void RegisterSeenIntPerkStat(ECharIntStatID intStat, const struct FName& perk);
	void RegisterSeenFloatPerkStat(ECharFloatStatID floatStat, const struct FName& perk);
	bool HasOwnedPerk(const struct FName& perkToFind);
	void ClearAllOwnedPerks();
	void ApplyAllPerks();
	bool AddOwnedPerk(const struct FName& perkToAdd);
};


// Class ConanSandbox.PlayerMarkerComponent
// 0x0000 (0x00F8 - 0x00F8)
class UPlayerMarkerComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerMarkerComponent");
		return ptr;
	}


	class APawn* GetPawn();
};


// Class ConanSandbox.PlayerPawnRegistry
// 0x0020 (0x03F0 - 0x03D0)
class APlayerPawnRegistry : public AActor
{
public:
	TArray<class APawn*>                               m_ExtraPlayerPawns;                                       // 0x03D0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              m_ExtraActors;                                            // 0x03E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerPawnRegistry");
		return ptr;
	}


	bool HasPawnWithinDistance(const struct FVector& Origin, float Radius);
	TArray<class APawn*> GetPlayerPawns();
	TArray<class APawn*> GetPawnsWithinDistance(const struct FVector& Origin, float Radius);
	void STATIC_AppendPawnsWithinDistance(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class APawn*>* Pawns);
};


// Class ConanSandbox.PurgeConfigData
// 0x0020 (0x0048 - 0x0028)
class UPurgeConfigData : public UDataAsset
{
public:
	TArray<struct FName>                               CommunityDataTable;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                SpawnCap;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnLocationCap;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PurgeSpawnDistance;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PurgeDuration;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PurgeConfigData");
		return ptr;
	}

};


// Class ConanSandbox.PurgeSpawnProbe
// 0x0038 (0x0408 - 0x03D0)
class APurgeSpawnProbe : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03D0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PurgeSpawnProbe");
		return ptr;
	}

};


// Class ConanSandbox.PurgeTargetComponent
// 0x0138 (0x0230 - 0x00F8)
class UPurgeTargetComponent : public UActorComponent
{
public:
	class UClass*                                      WallPathingFilterClass;                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultPathingFilterClass;                                // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PurgeCallRange;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PathProbeRange;                                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavGenerationRange;                                       // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<int>                                        PurgeCommunity;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PurgeSlots;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventTime;                                                // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0130(0x0040) MISSED OFFSET
	TArray<class UBuildingModuleData*>                 WallActors;                                               // 0x0170(0x0010) (ZeroConstructor)
	TArray<class UNavCollision*>                       PurgeCollision;                                           // 0x0180(0x0010) (ZeroConstructor)
	TArray<class UTargetDistributionComponent*>        CurrentAttackers;                                         // 0x0190(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x90];                                      // 0x01A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PurgeTargetComponent");
		return ptr;
	}


	void StopPurge();
	void StartPurge();
	void StartLure();
	bool IsPurgeActive();
	void GeneratePathsToTarget();
	bool CanStartPurge();
};


// Class ConanSandbox.PurgeVolume
// 0x0140 (0x0510 - 0x03D0)
class APurgeVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	class UDataTable*                                  PurgeConfigTable;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  PurgeEventConfigTable;                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AConanCharacter*>                     PurgeActors;                                              // 0x03F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AConanCharacter*                             PurgeBoss;                                                // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UNavCollision*>                       PurgeCollision;                                           // 0x0408(0x0010) (ZeroConstructor)
	class UClass*                                      NavigationQueryType;                                      // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnQueryType;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0428(0x00B8) MISSED OFFSET
	TArray<class ABuildingBase*>                       CandidateList;                                            // 0x04E0(0x0010) (ZeroConstructor)
	class ABuildingBase*                               SelectedBase;                                             // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PurgeVolume");
		return ptr;
	}


	void SpawnNextNPC(const struct FName& CharacterTableEntry, const struct FVector& SpawnLocation);
	void SpawnBoss(const struct FName& CharacterTableEntry, const struct FVector& SpawnLocation);
	void RegisterPurgeActorFailed(const struct FName& CharacterTableEntry);
	void RegisterPurgeActor(class APawn* NewAttacker, bool IsBoss);
	void KillPurgeActors();
	bool GetNextPurgeSpawnLocation(struct FVector* SpawnLocation, bool* OUTOffBase);
};


// Class ConanSandbox.QuadtreeComponent
// 0x0010 (0x0320 - 0x0310)
class UQuadtreeComponent : public USceneComponent
{
public:
	struct FName                                       TreeName;                                                 // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.QuadtreeComponent");
		return ptr;
	}

};


// Class ConanSandbox.QuadTreeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UQuadTreeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.QuadTreeFunctionLibrary");
		return ptr;
	}


	bool STATIC_GetOverlappingActors(class UObject* WorldContextObject, const struct FName& TreeName, const struct FVector& SpherePos, float SphereRadius, class UClass* ActorClass, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OverlappingActors);
};


// Class ConanSandbox.RadialMenuEntry
// 0x0090 (0x00B8 - 0x0028)
class URadialMenuEntry : public UObject
{
public:
	struct FText                                       Label;                                                    // 0x0028(0x0018)
	struct FText                                       subtitle;                                                 // 0x0040(0x0018)
	class UTexture2D*                                  IconTexture;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class URootWidget*                                 IconWidget;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                UserCategory;                                             // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UserValue;                                                // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     UserObject;                                               // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyShortcutName;                                          // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SignalClicked;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class URadialMenuEntry*>                    m_ChildEntries;                                           // 0x0098(0x0010) (ZeroConstructor)
	class URadialMenuEntry*                            m_Parent;                                                 // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RadialMenuEntry");
		return ptr;
	}


	void SlotKeyShortcutReleased();
	void SlotKeyShortcutPressed();
	void SignalClicked__DelegateSignature(class URadialMenuEntry* menuEntry);
	void SetLabel(const struct FText& newText);
	void SetIsEnabled(bool IsEnabled);
	int GetSubItemCount();
	class URadialMenuEntry* GetSubItem(int Index);
	class URadialMenuEntry* GetParent();
	bool GetIsEnabled();
	void AddSubItemEntry(class URadialMenuEntry* entry, int Index);
	class URadialMenuEntry* AddSubItem(const struct FText& Label, const struct FText& subtitle, class UTexture2D* Icon, const struct FName& KeyShortcutName, int Index);
};


// Class ConanSandbox.RadialMenu
// 0x01D8 (0x04F8 - 0x0320)
class URadialMenu : public URootWidget
{
public:
	float                                              AnimTime;                                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimFullRadiusThreshold;                                  // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartAngle;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CenterAroundStart;                                        // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconCenterRadius;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartCapOffset;                                           // 0x033C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   EndCapOffset;                                             // 0x0344(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StartCapScale;                                            // 0x034C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   EndCapScale;                                              // 0x0354(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SegmentSpacing;                                           // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelectedScale;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverScale;                                               // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SegmentViewClass;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SegmentTextureUnselected;                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SegmentTextureSelected;                                   // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SegmentTextureHovered;                                    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  StartCapTextureUnselected;                                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  StartCapTextureSelected;                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  StartCapTextureHovered;                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EndCapTextureUnselected;                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EndCapTextureSelected;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EndCapTextureHovered;                                     // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputAxisDeadZone;                                        // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03C0(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x03D8(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    SignalEntryClicked;                                       // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalEntryHighlighted;                                   // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalFadingDone;                                         // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               EnableLeftGamepadStick;                                   // 0x0420(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UInputComponent*                             m_InputComponent;                                         // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x98];                                      // 0x0430(0x0098) MISSED OFFSET
	class URadialMenuEntry*                            m_CurrentSubMenu;                                         // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class URadialMenuEntry*>                    m_RootEntries;                                            // 0x04D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class UInputComponent*                             m_ShortcutsInputComponent;                                // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RadialMenu");
		return ptr;
	}


	void SignalFadingDone__DelegateSignature(class URadialMenu* menu);
	void SignalEntryHighlighted__DelegateSignature(class URadialMenu* menu, class URadialMenuEntry* parentEntry, int Index);
	void SignalEntryClicked__DelegateSignature(class URadialMenu* menu, class URadialMenuEntry* parentEntry, int Index);
	void SetPressedSound(const struct FSlateSound& Sound);
	void SetHoveredSound(const struct FSlateSound& Sound);
	bool IsFaded();
	void GotoParent(bool activateHoveredItem);
	int GetRootItemCount();
	class URadialMenuEntry* GetRootItem(int Index);
	int GetItemCount();
	class URadialMenuEntry* GetItem(int Index);
	int GetHighlightedItem();
	void FadeOut();
	void AddItemEntry(class URadialMenuEntry* entry, int Index);
	class URadialMenuEntry* AddItem(const struct FText& Label, const struct FText& subtitle, class UTexture2D* Icon, const struct FName& KeyShortcutName, int Index);
};


// Class ConanSandbox.RandomWalkComponent
// 0x0000 (0x00F8 - 0x00F8)
class URandomWalkComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RandomWalkComponent");
		return ptr;
	}

};


// Class ConanSandbox.ResourceActorBase
// 0x0000 (0x03D0 - 0x03D0)
class AResourceActorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ResourceActorBase");
		return ptr;
	}

};


// Class ConanSandbox.ActionTutorial
// 0x00D8 (0x03F8 - 0x0320)
class UActionTutorial : public URootWidget
{
public:
	struct FText                                       TutorialText;                                             // 0x0320(0x0018) (Edit)
	float                                              IconSize;                                                 // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WrapPreTextAt;                                            // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WrapPostTextAt;                                           // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FName                                       ActionMapping;                                            // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              TextFont;                                                 // 0x0350(0x0068) (Edit)
	struct FSlateColor                                 TextColor;                                                // 0x03B8(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ActionTutorial");
		return ptr;
	}


	void SetTutorialText(const struct FText& Text);
	void SetIconSize(float newIconSize);
	void SetFont(const struct FSlateFontInfo& fontInfo);
	void CreateActionTutorial(const struct FText& Text, const struct FName& mapping);
};


// Class ConanSandbox.FCProgressbar
// 0x0030 (0x0350 - 0x0320)
class UFCProgressbar : public URootWidget
{
public:
	float                                              progress;                                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	TArray<struct FFCProgressbarSegment>               Segments;                                                 // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	TArray<class UProgressBar*>                        m_ProgressBars;                                           // 0x0340(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCProgressbar");
		return ptr;
	}


	void UpdateProgressBarStyle();
	void SetProgress(float progress);
};


// Class ConanSandbox.CharacterStatsStatBar
// 0x00B8 (0x03D8 - 0x0320)
class UCharacterStatsStatBar : public URootWidget
{
public:
	struct FSlateBrush                                 Icon;                                                     // 0x0320(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFCProgressbarSegment>               BarSegments;                                              // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterStatsStatBar");
		return ptr;
	}


	void SetValue(int currentValue, int MaxValue);
};


// Class ConanSandbox.CharHealthStaminaThirstHungerViewer
// 0x0058 (0x0378 - 0x0320)
class UCharHealthStaminaThirstHungerViewer : public URootWidget
{
public:
	class AConanCharacter*                             m_CharacterToInspect;                                     // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0328(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharHealthStaminaThirstHungerViewer");
		return ptr;
	}


	void SetCharacter(class AConanCharacter* Character);
	void OnThirstChanged(float NewThirst, float MaxThirst);
	void OnHungerChanged(float NewHunger, float MaxHunger);
	void IntStatUpdated(class UStatHolder* StatHolder, ECharIntStatID statID, int NewValue, int deltaValue);
};


// Class ConanSandbox.CircularProgressbar
// 0x00F0 (0x0410 - 0x0320)
class UCircularProgressbar : public URootWidget
{
public:
	float                                              progress;                                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SegmentSpacing;                                           // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartAngle;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleSpan;                                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 IconBrush;                                                // 0x0338(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                IconColorAndOpacity;                                      // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UTexture2D*                                  TextureEmpty;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacityEmpty;                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FCircularProgressbarSegment>         Segments;                                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CircularProgressbar");
		return ptr;
	}


	void SetStartAngle(float Angle);
	void SetProgress(float progress);
	void SetIconBrush(const struct FSlateBrush& Brush);
	void SetAngleSpan(float Angle);
	void ModifySegmentColor(int Segment, const struct FLinearColor& Color);
};


// Class ConanSandbox.CraftingManagerGUI
// 0x0008 (0x0328 - 0x0320)
class UCraftingManagerGUI : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CraftingManagerGUI");
		return ptr;
	}

};


// Class ConanSandbox.CraftingPanel
// 0x0128 (0x0448 - 0x0320)
class UCraftingPanel : public URootWidget
{
public:
	float                                              MinRecipeIconSize;                                        // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRecipeIconSize;                                        // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0328(0x00A8) MISSED OFFSET
	class UMessageBoxWidget*                           m_ActiveMessageBoxWidget;                                 // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_StationInventory;                                       // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_ShortcutBar;                                            // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_RecipeIngredientsInventory;                             // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlaceableBase*                              m_CraftingStation;                                        // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCraftingQueue*                              m_CraftingQueue;                                          // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_ArtisanThrallInventory;                                 // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_ArtisanRecipeInventory;                                 // 0x0408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URecipeItem*                                 m_CurrentlySelectedRecipe;                                // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVirtualIndex                               m_RecipeToConfirmIndex;                                   // 0x0418(0x0004)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x041C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CraftingPanel");
		return ptr;
	}


	bool SlotShowGlowOnRecipeItem(class UGameItem* Item);
	void SlotQueueRecipeStatChanged(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int Value, int deltaValue);
	void SlotQueueRecipeAddedOrRemoved(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SlotItemRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SlotItemIntStatChanged(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int Value, int deltaValue);
	void SlotItemAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	bool SlotFilterRecipeItem(class UGameItem* Item);
	void SlotFeatWindowButton(class UFCButton* Button);
	bool SlotDimRecipeItem(class UGameItem* Item);
	bool SlotDimIngredientsGrid(class UGameItem* Item);
	void SlotCraftTenButton(class UFCButton* Button);
	void SlotCraftingQueueScrollbarChanged(float Value);
	void SlotCraftDestructiveRecipe(EMessageBoxDialogResult Result);
	void SlotCraftCountSliderChanged(float Value);
	void SlotCraftButton(class UFCButton* Button);
	void SlotCraftAllButton(class UFCButton* Button);
	bool SlotCompareRecipeItems(class UGameItem* lhs, class UGameItem* rhs);
	void SlotClearQueueButton(class UFCButton* Button);
	bool SlotCanArtisanBeDropped(class UGameItem* Item);
	void SlotArtisanRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SlotArtisanRecipeRemoved(int Index, class UInventoryIconViewBase* Item);
	void SlotArtisanRecipeAdded(int Index, class UInventoryIconViewBase* Item);
	void SlotArtisanAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SetSortType(TEnumAsByte<EItemSortType> sortType);
	void SetSearchString(const struct FText& Text);
	void OnGridSelected(class URootWidget* SelectedWidget, bool selected);
	void GlobalItemSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	int STATIC_GetMaxCraftCount();
	void EnableFilter(TEnumAsByte<EGameItemGUICategory> Category, bool IsActive);
	void AddArtisanRecipeToQueue(int craftCount);
};


// Class ConanSandbox.EditableLabeledSlider
// 0x0AF0 (0x0E10 - 0x0320)
class UEditableLabeledSlider : public URootWidget
{
public:
	float                                              Value;                                                    // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MinFractionalDigits;                                      // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaxFractionalDigits;                                      // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FSliderStyle                                SliderWidgetStyle;                                        // 0x0338(0x0250) (Edit, BlueprintVisible)
	struct FEditableTextBoxStyle                       TextWidgetStyle;                                          // 0x0588(0x0870) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0DF8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EditableLabeledSlider");
		return ptr;
	}


	void UpdateTextValue(const struct FText& valuetext, TEnumAsByte<ETextCommit> Type);
	void SetValueFromText(const struct FText& valuetext);
	void SetValueFromSlider(float SliderValue);
	void SetValue(float Value);
	float STATIC_GetValueFromSliderValue(float SliderValue, float MinVal, float MaxVal);
	float GetValue();
	float STATIC_GetSliderValueFromValue(float RealValue, float MinVal, float MaxVal);
};


// Class ConanSandbox.ExilesJourneyChapter
// 0x0088 (0x03A8 - 0x0320)
class UExilesJourneyChapter : public URootWidget
{
public:
	struct FText                                       Header;                                                   // 0x0320(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	EJourneyChapter                                    chapter;                                                  // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        DisabledIcon;                                             // 0x0340(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisabledName;                                             // 0x0360(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisabledDescription;                                      // 0x0378(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0390(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyChapter");
		return ptr;
	}


	void SlotNewJourneyEvent(class UExilesJourneyItem* Item);
	void SlotIconClicked(const struct FVirtualIndex& Index, class UGameItem* Item, const struct FPointerEvent& MouseEvent);
	bool IsChapterComplete();
	void EnableChapter(bool Enabled);
};


// Class ConanSandbox.ExilesJourneyInfoPanel
// 0x0020 (0x0340 - 0x0320)
class UExilesJourneyInfoPanel : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0320(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyInfoPanel");
		return ptr;
	}

};


// Class ConanSandbox.InventoryFilterSelector
// 0x00F8 (0x0418 - 0x0320)
class UInventoryFilterSelector : public URootWidget
{
public:
	bool                                               ShowEncumbrance;                                          // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	int                                                AllowedSortModes;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SignalFilterToggled;                                      // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalSearchStringChanged;                                // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalSortTypeChanged;                                    // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FSlateSound                                 SortButtonPressedSound;                                   // 0x0358(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 FilterButtonPressedSound;                                 // 0x0370(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0388(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryFilterSelector");
		return ptr;
	}


	void SlotSortSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void SlotSearchTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void SlotSearchTextChanged(const struct FText& Text);
	void SlotFilterButtonToggled(class UFCButton* Button, bool IsChecked);
	void SignalSortTypeChanged__DelegateSignature(TEnumAsByte<EItemSortType> sortType);
	void SignalSearchStringChanged__DelegateSignature(const struct FText& searchText);
	void SignalFilterToggled__DelegateSignature(TEnumAsByte<EGameItemGUICategory> Category, bool IsActive);
	void OnShortcutSort();
	void OnShortcutFilter();
	void OnControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
};


// Class ConanSandbox.InventoryViewBase
// 0x01C0 (0x04E0 - 0x0320)
class UInventoryViewBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0320(0x0040) MISSED OFFSET
	class UItemInventory*                              inventory;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TAssetPtr<class USoundBase>                        SplitStackSound;                                          // 0x0368(0x0020) (Edit, BlueprintVisible)
	float                                              FilterButtonSpacing;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x154];                                     // 0x038C(0x0154) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryViewBase");
		return ptr;
	}


	bool SlotShowGlowRecipeItem(class UGameItem* Item);
	void SlotSelectionChanged(class UItemInventory* inventoryUNREALSUCKS, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemInfoPopupClosed(class UWindowRoot* Window);
	bool SlotFilterItem(class UGameItem* Item);
	void SlotDyeWindowClosed(class UWindowRoot* Window);
	bool SlotDimRecipeItem(class UGameItem* Item);
	bool SlotCompareItems(class UGameItem* lhs, class UGameItem* rhs);
	void SignalPopupClosedDelegate__DelegateSignature();
	void SignalGridSelectedDelegate__DelegateSignature(class URootWidget* SelectedWidget, bool selected);
	void SignalActionbarUpdateNeededDelegate__DelegateSignature();
	void ShowItemInfoPopup(class UGameItem* Item);
	void ShowDyeWindow(class UGameItem* Item);
	void SetSortType(TEnumAsByte<EItemSortType> sortType);
	void SetShowOnlyLootableItems(bool showLootableOnly);
	void SetSearchString(const struct FText& Text);
	void SetInventory(class UItemInventory* inventory, const struct FText& panelTitle);
	void OnGridSelected(class URootWidget* SelectedWidget, bool selected);
	void EnableFilter(TEnumAsByte<EGameItemGUICategory> Category, bool IsActive);
};


// Class ConanSandbox.InventoryItemActionBar
// 0x0068 (0x0388 - 0x0320)
class UInventoryItemActionBar : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0320(0x0018) MISSED OFFSET
	TArray<class UFCButton*>                           m_ButtonListLeft;                                         // 0x0338(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UFCButton*>                           m_ButtonListRight;                                        // 0x0348(0x0010) (ExportObject, ZeroConstructor)
	TArray<EInventoryActionShortcuts>                  m_ButtonListShortcutsLeft;                                // 0x0358(0x0010) (ZeroConstructor)
	TArray<EInventoryActionShortcuts>                  m_ButtonListShortcutsRight;                               // 0x0368(0x0010) (ZeroConstructor)
	class UFCButton*                                   m_MoreButton;                                             // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0380(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryItemActionBar");
		return ptr;
	}


	class UFCButton* CreateItemActionButton(TEnumAsByte<EInventoryItemAction> Action);
};


// Class ConanSandbox.ExternalInventoryView
// 0x0058 (0x0378 - 0x0320)
class UExternalInventoryView : public URootWidget
{
public:
	bool                                               CanItemBeDropedOn;                                        // 0x0320(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalCouldNotDrop;                                       // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0338(0x0030) MISSED OFFSET
	class UItemInventory*                              m_Inventory;                                              // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_TargetInventory;                                        // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExternalInventoryView");
		return ptr;
	}


	void SlotSortTypeChanged(TEnumAsByte<EItemSortType> sortType);
	void SlotSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotSearchStringChanged(const struct FText& Text);
	void SlotPopupClosed();
	void SlotItemRemoved(int Index, class UGameItem* Item, class UItemInventory* otherInventory, int otherIndex);
	void SlotItemDoubleClicked(const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemClicked(const struct FVirtualIndex& Index, class UGameItem* Item, const struct FPointerEvent& MouseEvent);
	void SlotItemAdded(int Index, class UGameItem* Item, class UItemInventory* otherInventory, int otherIndex);
	void SlotFilterToggled(TEnumAsByte<EGameItemGUICategory> Category, bool IsActive);
	bool SlotCanItemBeDropped(class UGameItem* Item);
	void SlotActionbarUpdateNeeded();
	void SignalCouldNotDropelegate__DelegateSignature();
	void SetTargetInventory(class UItemInventory* targetInventory);
	void SetInventory(class UItemInventory* inventory, const struct FText& panelTitle);
	void SelectionChanged(class UItemInventory* inventory, class UGameItem* Item);
	void OnItemActionButtonUse(class UFCButton* Button);
	void OnItemActionButtonUnEquip(class UFCButton* Button);
	void OnItemActionButtonSplitStack(class UFCButton* Button);
	void OnItemActionButtonRepair(class UFCButton* Button);
	void OnItemActionButtonInfo(class UFCButton* Button);
	void OnItemActionButtonGiveAll(class UFCButton* Button);
	void OnItemActionButtonGive(class UFCButton* Button);
	void OnItemActionButtonEquip(class UFCButton* Button);
	void OnItemActionButtonDye(class UFCButton* Button);
	void OnItemActionButtonDrop(class UFCButton* Button);
	class UInventoryViewBase* GetInventoryView();
	class UItemInventory* GetInventory();
	class UFCButton* CreateItemActionButton(TEnumAsByte<EInventoryItemAction> Action);
};


// Class ConanSandbox.CharacterInventoryView
// 0x0010 (0x0388 - 0x0378)
class UCharacterInventoryView : public UExternalInventoryView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0378(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterInventoryView");
		return ptr;
	}


	void SlotItemSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void OnGridSelected(class URootWidget* SelectedWidget, bool selected);
};


// Class ConanSandbox.ChestInventoryView
// 0x0000 (0x0378 - 0x0378)
class UChestInventoryView : public UExternalInventoryView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ChestInventoryView");
		return ptr;
	}

};


// Class ConanSandbox.CraftingStationInventoryView
// 0x0080 (0x03F8 - 0x0378)
class UCraftingStationInventoryView : public UExternalInventoryView
{
public:
	class APlaceableBase*                              m_CraftingStation;                                        // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCraftingQueue*                              m_CraftingQueue;                                          // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_ArtisanThrallInventory;                                 // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0390(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CraftingStationInventoryView");
		return ptr;
	}


	void SlotToggleOnOff();
	void SlotTakeButton(class UFCButton* Button);
	void SlotTakeAllButton(class UFCButton* Button);
	void SlotStationOnButtonClicked(class UFCButton* Button);
	void SlotStationOffButtonClicked(class UFCButton* Button);
	void SlotSortSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void SlotRunningStateChanged(class UCraftingQueue* CraftingQueue, bool IsStarted, bool IsRunning);
	void SlotRepairItem(class UFCButton* Button);
	bool SlotItemDroppedOnFuelSlot(class UInventoryGridSlotViewBase* slotView, class UGameItem* Item, const struct FPointerEvent& dragDropEvent);
	void SlotItemDoubleClicked(const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemClicked(const struct FVirtualIndex& Index, class UGameItem* Item, const struct FPointerEvent& MouseEvent);
	void SlotFuelTypeChanged(class UCraftingQueue* CraftingQueue, int TemplateId);
	void SlotFuelSlotClicked(class UInventoryGridSlotViewBase* slotView, const struct FPointerEvent& MouseEvent);
	bool SlotCanArtisanBeDropped(class UGameItem* Item);
	void SlotArtisanRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SlotArtisanAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SetInventory(class UItemInventory* inventory, class AActor* craftingStation, const struct FText& panelTitle);
};


// Class ConanSandbox.TabButtonBase
// 0x0008 (0x0C30 - 0x0C28)
class UTabButtonBase : public UFCButton
{
public:
	int                                                SwitcherIndex;                                            // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C2C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TabButtonBase");
		return ptr;
	}

};


// Class ConanSandbox.FCComboBoxString
// 0x0078 (0x0398 - 0x0320)
class UFCComboBoxString : public URootWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UComboBoxString*                             m_ComboBox;                                               // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0338(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCComboBoxString");
		return ptr;
	}


	void SlotSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void SetSelectedOption(const class FString& Option);
	void SetIsOpen(bool IsOpen, bool focusMenu);
	void SelectedOptionByID(int OptionID);
	bool RemoveOptionByID(int OptionID);
	bool RemoveOption(const class FString& Option);
	void RemoveFromEscapeStack();
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	bool OnBackPressed();
	bool IsOpen();
	int GetSelectedOptionID();
	class FString GetSelectedOption();
	int GetOptionCount();
	class FString GetOptionAtIndex(int Index);
	class UComboBoxString* GetComboBox();
	int FindOptionIndex(const class FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const class FString& Option, int OptionID);
};


// Class ConanSandbox.ShowVirtualKeyboardCallProxy
// 0x00F8 (0x0120 - 0x0028)
class UShowVirtualKeyboardCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStringVertifiedFailed;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCanceled;                                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0058(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ShowVirtualKeyboardCallProxy");
		return ptr;
	}


	class UShowVirtualKeyboardCallProxy* STATIC_ShowKeyboard(class UObject* WorldContextObject, int LocalUserId, const class FString& Title, const class FString& Description, const class FString& DefaultText, EVirtualKeyboardLayout Layout);
};


// Class ConanSandbox.FCEditableMultiLineText
// 0x02F8 (0x0618 - 0x0320)
class UFCEditableMultiLineText : public URootWidget
{
public:
	struct FText                                       Text;                                                     // 0x0320(0x0018) (Edit)
	struct FText                                       KeyboardTitle;                                            // 0x0338(0x0018) (Edit)
	struct FText                                       KeyboardDescription;                                      // 0x0350(0x0018) (Edit)
	EVirtualKeyboardLayout                             KeyboardLayout;                                           // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0370(0x0208) (Edit, BlueprintVisible)
	struct FText                                       HintText;                                                 // 0x0578(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0590(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               IsReadOnly;                                               // 0x05A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x05A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05A2(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TextMaxLength;                                            // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x05AD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x05AE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x05AF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x05B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x05B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05B2(0x0002) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x05B4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x05BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x05BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x05BE(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x05C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x05C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x05C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x05D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x05E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMaxLengthExceeded;                                      // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0610(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCEditableMultiLineText");
		return ptr;
	}


	void VirtualKeyboardStringVertifiedFailed(const struct FText& errorText);
	void VirtualKeyboardConfirm(const class FString& textEntry);
	void VirtualKeyboardCancel();
	void SlotTextCommited(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void SlotTextChanged(const struct FText& InText);
	void SetText(const struct FText& InText);
	void SetActive(bool active);
	void OnTextMaxLengthExceededEvent__DelegateSignature();
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	void OnFCEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnFCEditableTextBoxChangedEvent__DelegateSignature(const struct FText& InText);
	struct FText GetText();
};


// Class ConanSandbox.FCEditableTextBox
// 0x0970 (0x0C90 - 0x0320)
class UFCEditableTextBox : public URootWidget
{
public:
	struct FText                                       Text;                                                     // 0x0320(0x0018) (Edit)
	bool                                               RequiresCommunicationPrivileges;                          // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FScriptDelegate                             TextDelegate;                                             // 0x0340(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       KeyboardTitle;                                            // 0x0350(0x0018) (Edit)
	struct FText                                       KeyboardDescription;                                      // 0x0368(0x0018) (Edit)
	EVirtualKeyboardLayout                             KeyboardLayout;                                           // 0x0380(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0388(0x0870) (Edit, BlueprintVisible)
	struct FText                                       HintText;                                                 // 0x0BF8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0C10(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               IsReadOnly;                                               // 0x0C20(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0C21(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0C22(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0C24(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TextMaxLength;                                            // 0x0C28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0C2C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0C2D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0C2E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0C2F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0C30(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0C31(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0C32(0x0002) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0C34(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0C40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0C50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMaxLengthExceeded;                                      // 0x0C60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalActivated;                                          // 0x0C70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0C80(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCEditableTextBox");
		return ptr;
	}


	void VirtualKeyboardStringVertifiedFailed(const struct FText& errorText);
	void VirtualKeyboardConfirm(const class FString& textEntry);
	void VirtualKeyboardCancel();
	void SlotTextCommited(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void SlotTextChanged(const struct FText& InText);
	void SlotPrivilegeDenied();
	void SlotPrivilegeConfirmed();
	void SignalActivatedDelegate__DelegateSignature(bool IsActive);
	void SetText(const struct FText& InText);
	void SetActive(bool active);
	void OnTextMaxLengthExceededEvent__DelegateSignature();
	void OnFCEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnFCEditableTextBoxChangedEvent__DelegateSignature(const struct FText& InText);
	struct FText GetText();
	bool GetActive();
};


// Class ConanSandbox.FCSlider
// 0x02A0 (0x05C0 - 0x0320)
class UFCSlider : public URootWidget
{
public:
	float                                              Value;                                                    // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0328(0x0250) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0578(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x057C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x058C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x059C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x059D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x059E(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FCSlider");
		return ptr;
	}


	void SetValue(float Value, bool sendSignal);
	void SetStepSize(float Size);
	void OnMemberSliderValueChanged(float memberValue);
	float GetValue();
	float GetStepSize();
};


// Class ConanSandbox.InventoryGridViewBase
// 0x03C0 (0x06E0 - 0x0320)
class UInventoryGridViewBase : public URootWidget
{
public:
	class UClass*                                      GridSlotViewClass;                                        // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemViewClass;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemTooltipViewClass;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StackSplitDialogClass;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ItemViewClassEnabledColor;                                // 0x0340(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ItemViewClassDisabledColor;                               // 0x0350(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UItemInventory*                              inventory;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ColumnCount;                                              // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowCount;                                                 // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IconSlotSize;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     IconSlotPadding;                                          // 0x0374(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     IconSpacing;                                              // 0x0384(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableScrollBar;                                          // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SizeToFitVertically;                                      // 0x0396(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SizeToFitHorizontally;                                    // 0x0397(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_HideEmptySlots;                                         // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowItemProgress;                                         // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowItemDrag;                                            // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowItemDrop;                                            // 0x039B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FSlateSound                                 ItemsCombinedSound;                                       // 0x03A0(0x0018) (Edit, BlueprintVisible)
	struct FScriptDelegate                             DelegateGetItemTooltip;                                   // 0x03B8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateFilterItem;                                       // 0x03C8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateDimItem;                                          // 0x03D8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateShowGlowItem;                                     // 0x03E8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateCompareItems;                                     // 0x03F8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x238];                                     // 0x0408(0x0238) MISSED OFFSET
	struct FScriptMulticastDelegate                    SignalItemAdded;                                          // 0x0640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalItemRemoved;                                        // 0x0650(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0660(0x0030) MISSED OFFSET
	class UInventoryGridViewBase*                      m_InventoryOnLeft;                                        // 0x0690(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryGridViewBase*                      m_InventoryOnRight;                                       // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryGridViewBase*                      m_InventoryOnTop;                                         // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryGridViewBase*                      m_InventoryOnDown;                                        // 0x06A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStackSplitValueDialog*                      m_SplitStackDialog;                                       // 0x06B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventoryClientMonitor*                 m_InventoryMonitor;                                       // 0x06B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x06C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryGridViewBase");
		return ptr;
	}


	void SlotSplitStackDlgClosed(class UWindowRoot* dlg);
	void SlotItemSelectionChanged(class UItemInventory* inventoryUNREALSUCKS, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SlotItemMarkedForMove(class UItemInventory* markedInventory, const struct FVirtualIndex& Index, bool marked);
	bool SlotItemDropped(class UInventoryGridSlotViewBase* itemSlot, class UGameItem* Item, const struct FPointerEvent& dragDropEvent);
	void SlotItemAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	class UWidget* SlotGetItemTooltipWidget(class UGameItem* Item);
	void SlotCannotMoveItem(int Index, class UItemInventory* srcInventory);
	void SignalItemRemoved__DelegateSignature(int Index, class UInventoryIconViewBase* Item);
	void SignalItemAdded__DelegateSignature(int Index, class UInventoryIconViewBase* Item);
	void SetRowCount(int Count);
	void SetLinkedInventory(TEnumAsByte<EGUINavDirection> Direction, class UInventoryGridViewBase* linkedInventory);
	void SetInventory(class UItemInventory* inventory);
	void SetIconSlotSize(float Size);
	void SetIconSlotPadding(const struct FMargin& Margin);
	void SetColumnCount(int Count);
	void SelectItem(const struct FVirtualIndex& Index);
	void MoveSlotItem(class UItemInventory* markedInventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	class USizeBox* GetSizeBox();
	struct FVirtualIndex GetSelectedIndex();
	class UScrollBox* GetScrollBox();
	class UGridPanel* GetGridPanel();
	void ForceUpdate();
	bool DelegateShowGlowItem__DelegateSignature(class UGameItem* Item);
	class UWidget* DelegateGetItemTooltip__DelegateSignature(class UGameItem* Item);
	bool DelegateFilterItem__DelegateSignature(class UGameItem* Item);
	bool DelegateDimItem__DelegateSignature(class UGameItem* Item);
	bool DelegateCompareItems__DelegateSignature(class UGameItem* lhs, class UGameItem* rhs);
};


// Class ConanSandbox.FeatGroupView
// 0x0030 (0x0350 - 0x0320)
class UFeatGroupView : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0320(0x0020) MISSED OFFSET
	class UItemInventory*                              m_GroupInventory;                                         // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FeatGroupView");
		return ptr;
	}


	bool SlotFilterItem(class UGameItem* Item);
	void SlotFeatSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotCornerStoneSelected(class URootWidget* SelectedWidget, bool selected);
	void SlotCornerStoneInvoked(class UInventoryGridSlotViewBase* slotView, bool Pressed);
	void SlotCornerStoneDoubleClicked(class UInventoryGridSlotViewBase* slotView, const struct FPointerEvent& MouseEvent);
	void SlotCornerStoneClicked(class UInventoryGridSlotViewBase* slotView, const struct FPointerEvent& MouseEvent);
};


// Class ConanSandbox.FeatResultRecipeInfoView
// 0x0060 (0x0380 - 0x0320)
class UFeatResultRecipeInfoView : public URootWidget
{
public:
	class URecipeItem*                                 m_Item;                                                   // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0328(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FeatResultRecipeInfoView");
		return ptr;
	}

};


// Class ConanSandbox.FIFOMessageView
// 0x0000 (0x0320 - 0x0320)
class UFIFOMessageView : public URootWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FIFOMessageView");
		return ptr;
	}

};


// Class ConanSandbox.FloatingNameBase
// 0x0028 (0x0348 - 0x0320)
class UFloatingNameBase : public URootWidget
{
public:
	struct FLinearColor                                DefaultColor;                                             // 0x0320(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GuildColor;                                               // 0x0330(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FloatingNameBase");
		return ptr;
	}


	void SetSpeakingIconVisibility(bool visible);
	void SetCharacterNameColor(const struct FSlateColor& newColor);
};


// Class ConanSandbox.GamemodeHintsBase
// 0x00A0 (0x0440 - 0x03A0)
class UGamemodeHintsBase : public UWindowRoot
{
public:
	class UDataTable*                                  LabelsTable;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<EGamemode>, struct FModeMappings> ActionMappings;                                           // 0x03A8(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x03F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GamemodeHintsBase");
		return ptr;
	}


	void SlotCharacterStateChanged(ECharacterState OldState, ECharacterState newState);
	void SlotCharacterReady();
	void SlotCharacterMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void SlotCharacterBuildingModeChanged(bool isBuilding);
	void SlotBuildingHelpSettingsChanged(bool showBuildingHelp);
};


// Class ConanSandbox.GamemodeHintBase
// 0x0078 (0x0398 - 0x0320)
class UGamemodeHintBase : public URootWidget
{
public:
	struct FText                                       Label;                                                    // 0x0320(0x0018) (Edit, BlueprintVisible)
	struct FText                                       keyboardLabel;                                            // 0x0338(0x0018) (Edit, BlueprintVisible)
	struct FName                                       InputActionName;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       keyboardActionName;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeyboardShowHold;                                         // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GamepadShowHold;                                          // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MirrorWidget;                                             // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x35];                                      // 0x0363(0x0035) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GamemodeHintBase");
		return ptr;
	}


	void UpdateLabel(const struct FText& newLabel);
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SetHintData(const struct FText& gamepadLabel, const struct FText& keyboardLabel, const struct FName& InputActionName, const struct FName& keyboardActionName, bool GamepadShowHold, bool KeyboardShowHold);
};


// Class ConanSandbox.GamepadHelpEntryBase
// 0x0088 (0x03A8 - 0x0320)
class UGamepadHelpEntryBase : public URootWidget
{
public:
	class UClass*                                      ActionTutorialClass;                                      // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateFontInfo                              TextFont;                                                 // 0x0328(0x0068) (Edit, DisableEditOnInstance)
	float                                              IconSize;                                                 // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0394(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GamepadHelpEntryBase");
		return ptr;
	}

};


// Class ConanSandbox.GamepadHelpOverlayBase
// 0x0028 (0x03C8 - 0x03A0)
class UGamepadHelpOverlayBase : public UWindowRoot
{
public:
	class UClass*                                      GamepadHelpEntryClass;                                    // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GamepadHelpOverlayBase");
		return ptr;
	}


	void ControllerModeChanged(TEnumAsByte<EGUIControlMode> mode);
};


// Class ConanSandbox.GuildLogBase
// 0x0068 (0x0388 - 0x0320)
class UGuildLogBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
	class UClass*                                      ListEntryClass;                                           // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0338(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GuildLogBase");
		return ptr;
	}


	void SignalMessageOfTheDayChangedDelegate__DelegateSignature(const struct FText& Text);
	void OnUserCannotCommunicateOnline();
	void OnUserCanCommunicateOnline();
	void MessageOfTheDayChanged(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void AllowMOTDChange(class UFCButton* Button);
};


// Class ConanSandbox.GuildMembersBase
// 0x0050 (0x0370 - 0x0320)
class UGuildMembersBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
	class UClass*                                      ListEntryClass;                                           // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OptionsMenuClass;                                         // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0340(0x0028) MISSED OFFSET
	class UListEntryBase*                              m_SelectedEntry;                                          // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GuildMembersBase");
		return ptr;
	}


	void SlotSubmenuClose();
	void SlotLeaveGuild();
	void SignalShowLeaveGuildWarningDelegate__DelegateSignature(class UFCButton* Button);
	void ShowOptionsForEntry(class UListEntryBase* entry, const struct FVector2D& Position);
	void SetSelectedEntry(class UListEntryBase* entry);
};


// Class ConanSandbox.HealthBarBase
// 0x03E8 (0x0708 - 0x0320)
class UHealthBarBase : public URootWidget
{
public:
	float                                              AnimSpeed;                                                // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BarSizeImpact;                                            // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CatchUpOnRegen;                                           // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearOnZero;                                              // 0x0329(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	struct FSlateBrush                                 MainBarBrush;                                             // 0x0330(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 HitBarBrush;                                              // 0x03C0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 CorruptionBarBrush;                                       // 0x0450(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x04E0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 OverlayBrush;                                             // 0x0570(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 EdgeBrush;                                                // 0x0600(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0690(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HealthBarBase");
		return ptr;
	}


	void UpdateBar(float currentValue, float corruptedMaxValue, float corruptuionMult);
	void SetTintOverlayBrush(const struct FLinearColor& TintColor);
	void SetTintMainBar(const struct FLinearColor& TintColor);
	void SetTintHitBar(const struct FLinearColor& TintColor);
	void ClearBar();
};


// Class ConanSandbox.HotkeyIcon
// 0x0118 (0x0438 - 0x0320)
class UHotkeyIcon : public URootWidget
{
public:
	struct FKey                                        GamepadKey;                                               // 0x0320(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       BindingLabel;                                             // 0x0338(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       BindingLabelFormat;                                       // 0x0350(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       InputActionName;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowOnlyGamepadIcon;                                      // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              IconSize;                                                 // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0378(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FHotkeyIconPlatform>                 Platforms;                                                // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x03F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HotkeyIcon");
		return ptr;
	}


	void SlotKeyBindingsChanged();
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SetShowOnlyGamepadIcon(bool Value);
	void SetInputActionName(const struct FName& inputAction);
	void SetIconSize(float newIconSize);
	void SetGamepadKey(const struct FKey& Key);
	void SetFontColor(const struct FSlateColor& FontColor);
	void SetFont(const struct FSlateFontInfo& fontInfo);
	bool HasIconForButton(const struct FKey& keyToCheck);
	struct FName GetInputActionName();
	struct FKey GetGamepadKey();
};


// Class ConanSandbox.HungerIndicatorIcon
// 0x0000 (0x0320 - 0x0320)
class UHungerIndicatorIcon : public URootWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HungerIndicatorIcon");
		return ptr;
	}


	void SetCharacter(class AConanCharacter* Character);
};


// Class ConanSandbox.InventoryGridSlotViewBase
// 0x02B0 (0x05D0 - 0x0320)
class UInventoryGridSlotViewBase : public URootWidget
{
public:
	struct FSlateBrush                                 BackgrundBrush;                                           // 0x0320(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                BackgrundColor;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              IconSize;                                                 // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     IconPadding;                                              // 0x03C4(0x0010) (Edit)
	bool                                               m_HideWhenEmpty;                                          // 0x03D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class UWidgetAnimation*                            AnimationSelect;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            AnimationMouseOver;                                       // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryIconViewBase*                      IconView;                                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   DropSound;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x03F8(0x0018) (Edit, BlueprintVisible)
	class UNamedSlot*                                  m_IconSlot;                                               // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1A8];                                     // 0x0418(0x01A8) MISSED OFFSET
	class USizeBox*                                    m_SizeBox;                                                // 0x05C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryGridSlotViewBase");
		return ptr;
	}


	void SlotMouseEnabled(bool Enabled);
};


// Class ConanSandbox.InventoryIconViewBase
// 0x0130 (0x0450 - 0x0320)
class UInventoryIconViewBase : public URootWidget
{
public:
	bool                                               AllowItemDrag;                                            // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class USoundCue*                                   DragSound;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USoundBase>                        RepairFinishedSound;                                      // 0x0330(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        EquipAmmoSound;                                           // 0x0350(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        RiddleOfSteelSound;                                       // 0x0370(0x0020) (Edit, BlueprintVisible)
	struct FLinearColor                                EnabledColor;                                             // 0x0390(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DisabledColor;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DimmedColor;                                              // 0x03B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UWidgetAnimation*                            AnimationMarkedForMove;                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            AnimationFilterSelected;                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            AnimationInRepairState;                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            AnimationCannotMove;                                      // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	class UGameItem*                                   m_GameItem;                                               // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x03F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryIconViewBase");
		return ptr;
	}


	void SlotItemEnableChanged(class UGameItem* Item, bool IsEnabled);
	void SlotIntStatChanged(class UGameItem* statContainer, TEnumAsByte<EItemIntStatID> statID, int Value, int deltaValue);
	void SlotFloatStatChanged(class UGameItem* statContainer, TEnumAsByte<EItemFloatStatID> statID, float Value, float deltaValue);
	void SlotColorChanged(class UGameItem* Item);
	void SlotBorderChanged(class UTexture2D* Border);
	void ShowProgressBar(bool show);
	void ShowItemRepairIcon(bool show);
	void SetStackSize(int StackSize);
	void SetRepairAnimation();
	void SetProgress(float progress);
	void SetItem(class UGameItem* Item);
	void SetIcon(class UTexture2D* Texture);
	void SetActiveAmmunition(int TemplateId, bool PlaySound);
	void OnRepairStateChanged(bool inRepairState);
	void OnEnchantChanged(int newId, bool PlaySound);
	bool IsEnabled();
	class UGameItem* GetItem();
	void FadeIcon(bool FadeOut);
	void Enable(bool Enabled);
};


// Class ConanSandbox.InventoryItemInfoPanel
// 0x0090 (0x03B0 - 0x0320)
class UInventoryItemInfoPanel : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0320(0x0080) MISSED OFFSET
	class UGameItem*                                   m_GameItem;                                               // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryItemInfoPanel");
		return ptr;
	}


	void UpdateWeight(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int NewValue, int deltaValue);
	void UpdateDurability(class UGameItem* Item, TEnumAsByte<EItemFloatStatID> statID, float Value, float deltaValue);
};


// Class ConanSandbox.ItemStatView
// 0x0028 (0x0348 - 0x0320)
class UItemStatView : public URootWidget
{
public:
	int                                                fontSize;                                                 // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0324(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ItemStatView");
		return ptr;
	}


	void SetStats(const struct FText& StatName, const struct FText& Description, const struct FSlateColor& Color, bool showDesc);
	void SetName(const struct FText& StatName);
};


// Class ConanSandbox.ItemTemperatureBar
// 0x00D8 (0x03F8 - 0x0320)
class UItemTemperatureBar : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0320(0x0030) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        ColdIcon;                                                 // 0x0350(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ColdBar;                                                  // 0x0370(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        HeatIcon;                                                 // 0x0390(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        HeatBar;                                                  // 0x03B0(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        EmptyBar;                                                 // 0x03D0(0x0020) (Edit, DisableEditOnInstance)
	class UGameItem*                                   m_GameItem;                                               // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ItemTemperatureBar");
		return ptr;
	}


	void SetValue(float Value);
};


// Class ConanSandbox.KeyBindingsCategoryBase
// 0x0150 (0x0470 - 0x0320)
class UKeyBindingsCategoryBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0320(0x0140) MISSED OFFSET
	class UClass*                                      m_EntryClass;                                             // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.KeyBindingsCategoryBase");
		return ptr;
	}


	void SignalScrollToEntryDelegate__DelegateSignature(class URootWidget* entry);
	void OnSelectionChanged(class UKeyBindingsKeyBase* selectedEntry);
	void OnResetRequest(class UKeyBindingsKeyBase* keyToReset);
	void OnEntrySelected(class URootWidget* Widget);
};


// Class ConanSandbox.KeyBindingsCommandBase
// 0x00B0 (0x03D0 - 0x0320)
class UKeyBindingsCommandBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0320(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.KeyBindingsCommandBase");
		return ptr;
	}


	void OnSelectionChanged(class UKeyBindingsKeyBase* selectedEntry);
	void OnResetRequest(class UKeyBindingsKeyBase* keyToReset);
};


// Class ConanSandbox.KeyBindingsCommandEntryBase
// 0x00A0 (0x03C0 - 0x0320)
class UKeyBindingsCommandEntryBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0320(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.KeyBindingsCommandEntryBase");
		return ptr;
	}


	void SetHasChanged(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void ResetMapping(class UFCButton* Button);
	void OnKeySelected(class UKeyBindingsKeyBase* SelectedKey);
	void OnKeyChanged(bool isChanged);
};


// Class ConanSandbox.KeyBindingsEntryBase
// 0x0120 (0x0440 - 0x0320)
class UKeyBindingsEntryBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0320(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.KeyBindingsEntryBase");
		return ptr;
	}


	void SignalEntryNavigatedToDelegate__DelegateSignature(class URootWidget* entry);
	void OnSecoundKeyChanged(bool isChanged);
	void OnResetSecond(class UFCButton* Button);
	void OnResetFirst(class UFCButton* Button);
	void OnKeySelected(class UKeyBindingsKeyBase* SelectedKey);
	void OnFirstKeyChanged(bool isChanged);
	void OnEntrySelected(class URootWidget* SelectedWidget, bool selected);
	void OnClearSecondBinding(class UFCButton* Button);
	void OnClearFirstBinding(class UFCButton* Button);
};


// Class ConanSandbox.KeyBindingsKeyBase
// 0x0130 (0x0450 - 0x0320)
class UKeyBindingsKeyBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0320(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.KeyBindingsKeyBase");
		return ptr;
	}


	void OnKeySelected();
};


// Class ConanSandbox.KeyNavIndicator
// 0x0008 (0x0328 - 0x0320)
class UKeyNavIndicator : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.KeyNavIndicator");
		return ptr;
	}

};


// Class ConanSandbox.ListEntryBase
// 0x0140 (0x0460 - 0x0320)
class UListEntryBase : public URootWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelected;                                               // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShowOptions;                                            // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FSlateColor                                 m_HighlightedColor;                                       // 0x0340(0x0028) (Edit)
	struct FSlateColor                                 m_OnlineColor;                                            // 0x0368(0x0028) (Edit)
	struct FSlateColor                                 m_OfflineColor;                                           // 0x0390(0x0028) (Edit)
	class UTexture2D*                                  m_RankIconMember;                                         // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  m_RankIconGuildMaster;                                    // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  m_RankIconOfficer;                                        // 0x03C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  m_OnlineStatusIconOnline;                                 // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  m_OnlineStatusIconOffline;                                // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET
	int64_t                                            m_PlayerId;                                               // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            m_PlayerNetId;                                            // 0x0438(0x0018)
	class UUniqueID*                                   m_GuildId;                                                // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ListEntryBase");
		return ptr;
	}

};


// Class ConanSandbox.MapMarkerView
// 0x0020 (0x0340 - 0x0320)
class UMapMarkerView : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
	class UImage*                                      MapMarkerImage;                                           // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MapMarkerID;                                              // 0x0338(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MapMarkerView");
		return ptr;
	}


	void SignalMarkerEdit__DelegateSignature(int MarkerID, bool isControlDown);
};


// Class ConanSandbox.MapWithMarkerWidget
// 0x0210 (0x0530 - 0x0320)
class UMapWithMarkerWidget : public URootWidget
{
public:
	int                                                MinimumZoom;                                              // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ZoomSteps;                                                // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomFactor;                                               // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UClass*                                      MapMarkerView;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MapMaskBitmap;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IllegalPosTintColor;                                      // 0x0340(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FScriptMulticastDelegate                    SignalMarkerIsHovered;                                    // 0x0350(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0360(0x0024) MISSED OFFSET
	struct FVector2D                                   GamepadCursorOffset;                                      // 0x0384(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UScrollBox*                                  m_HScrollBox;                                             // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  m_VScrollBox;                                             // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    m_Overlay;                                                // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    m_MapSizeBox;                                             // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      m_MapImage;                                               // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      m_GamepadCursor;                                          // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, class UMapMarkerView*>                   m_Markers;                                                // 0x03C0(0x0050) (ExportObject, ZeroConstructor)
	class UPlayerMarkerDialog*                         m_PlayerMarkerDialog;                                     // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    m_DebugEnergyMapSizeBox;                                  // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      m_DebugEnergyMapImage;                                    // 0x0420(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   m_DebugImageTopLeft;                                      // 0x0428(0x0008) (IsPlainOldData)
	struct FVector2D                                   m_DebugImageBottomRight;                                  // 0x0430(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData03[0xF8];                                      // 0x0438(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MapWithMarkerWidget");
		return ptr;
	}


	void ZoomOut();
	void ZoomIn();
	void SlotPlayerMarkerDialogClosed(class UWindowRoot* Window);
	void SlotMessageDialogClosed(class UWindowRoot* Window);
	void SlotMarkerEdit(int ID, bool isControlDown);
	void SlotHideDebugEnergyMap();
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SlotDebugEnergyMap();
	void SignalMarkerIsHoveredDelegate__DelegateSignature(bool bIsHovered);
	void OnYKeyPressed();
	void OnReceivedMarkerRemoved(int ID);
	class UMapMarkerView* IsCursorOverMarkerView(const struct FVector2D& Position);
	int IsCursorOverMarker(const struct FVector2D& Position);
	void GamepadPanVertical(float Val);
	void GamepadPanHorizontal(float Val);
	void GamepadCursorVertical(float Val);
	void GamepadCursorHorizontal(float Val);
	void GamepadAdminTeleport();
	void GamepadAddNewMarker();
};


// Class ConanSandbox.NavigatableWidgetBase
// 0x0068 (0x0388 - 0x0320)
class UNavigatableWidgetBase : public URootWidget
{
public:
	struct FScriptMulticastDelegate                    SignalEntrySelected;                                      // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalSelected;                                           // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalNavigateVerticaly;                                  // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalDeselected;                                         // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	bool                                               DisableContainerNavigation;                               // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0369(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NavigatableWidgetBase");
		return ptr;
	}


	void SignalSelectedDelegate__DelegateSignature(bool isSelected);
	void SignalNavigateVerticalyDelegate__DelegateSignature(bool MoveUp);
	void SignalEntrySelectedDelegate__DelegateSignature(class URootWidget* entry);
	void SignalDeselectedDelegate__DelegateSignature();
	void SetupKeyNavigation();
	void RemoveFromEscapeStack();
	void OverrideLastSelected(class URootWidget* Widget);
	void OnChildSelected(class URootWidget* Widget, bool selected);
	void NavigateUp();
	bool NavigateToThis();
	void NavigateToChild(class UWidget* Widget);
	void NavigateDown();
	int GetChildrenCount();
	class UWidget* GetChildAt(int Index);
	void ClearWidget();
};


// Class ConanSandbox.NavigatableGridPanel
// 0x0028 (0x03B0 - 0x0388)
class UNavigatableGridPanel : public UNavigatableWidgetBase
{
public:
	int                                                RowLength;                                                // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	TArray<float>                                      ColumnFill;                                               // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NavigatableGridPanel");
		return ptr;
	}


	class UGridPanel* GetGridPanel();
	class UGridSlot* AddRootWidgetToGridPanel(class URootWidget* Widget);
};


// Class ConanSandbox.NavigatableVerticalBox
// 0x0000 (0x0388 - 0x0388)
class UNavigatableVerticalBox : public UNavigatableWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.NavigatableVerticalBox");
		return ptr;
	}


	class UVerticalBox* GetVerticalBox();
	class UVerticalBoxSlot* AddRootWidgetToVerticalBox(class URootWidget* Widget);
};


// Class ConanSandbox.PaperdollIconSlot
// 0x0050 (0x0370 - 0x0320)
class UPaperdollIconSlot : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0320(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PaperdollIconSlot");
		return ptr;
	}

};


// Class ConanSandbox.PaperdollPanel
// 0x00C0 (0x03E0 - 0x0320)
class UPaperdollPanel : public URootWidget
{
public:
	class UEquipmentInventory*                         m_EquipmentInventory;                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventoryClientMonitor*                 m_InventoryMonitor;                                       // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanCharacter*                             m_CharacterToInspect;                                     // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0338(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PaperdollPanel");
		return ptr;
	}


	void SlotTakeButton(class UFCButton* Button);
	void SlotTakeAllButton(class UFCButton* Button);
	void SlotPrevPanel();
	void SlotNextPanel();
	void SlotItemSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemSelected(class URootWidget* selectedSlot, bool selected);
	void SlotItemRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SlotItemMarkedForMove(class UItemInventory* markedInventory, const struct FVirtualIndex& Index, bool marked);
	void SlotItemInvoked(class UInventoryGridSlotViewBase* selectedSlot, bool Pressed);
	bool SlotItemDropped(class UInventoryGridSlotViewBase* itemSlot, class UGameItem* Item, const struct FPointerEvent& dragDropEvent);
	void SlotItemDoubleClicked(class UInventoryGridSlotViewBase* slotUNREALSUCKS, const struct FPointerEvent& MouseEvent);
	void SlotItemClicked(class UInventoryGridSlotViewBase* slotUNREALSUCKS, const struct FPointerEvent& MouseEvent);
	void SlotItemAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SlotClientReceivePurgeData(const struct FPurgeData& PurgeData);
	void SetKnockbackDefense();
	void SetKeyNavigation();
	void SetCharacter(class AConanCharacter* Character);
	void SetArmor();
	void MoveSlotItem(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void IntStatUpdated(class UStatHolder* StatHolder, ECharIntStatID statID, int NewValue, int deltaValue);
	void FloatStatUpdated(class UStatHolder* StatHolder, ECharFloatStatID statID, float NewValue, float deltaValue);
	void FeatPointsChanged();
	void AddActionButtons(class UGameItem* Item);
	void ActivateNewWidget(class UFCButton* Button, bool IsChecked);
};


// Class ConanSandbox.PatchNotesEntryView
// 0x0060 (0x0380 - 0x0320)
class UPatchNotesEntryView : public URootWidget
{
public:
	struct FLinearColor                                TextColorDate;                                            // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                TextColorTitle;                                           // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                TextColorNote;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UWidgetAnimation*                            AnimationSelected;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            AnimationDeselected;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PatchNotesEntryView");
		return ptr;
	}

};


// Class ConanSandbox.PatchNotesView
// 0x0058 (0x0378 - 0x0320)
class UPatchNotesView : public URootWidget
{
public:
	class FString                                      PatchNotesXMLURL;                                         // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      PatchNotesPageURL;                                        // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      NoteViewClass;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0348(0x0020) MISSED OFFSET
	class UGUIModule*                                  m_SettingsGUIModule;                                      // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PatchNotesView");
		return ptr;
	}


	void SlotSettingsGUIActivated(class UGUIModule* module, bool IsActive);
	void SlotMoreButtonClicked(class UFCButton* Button);
	void LoadNotes(const class FString& Language);
};


// Class ConanSandbox.PlayerInventoryView
// 0x0040 (0x0360 - 0x0320)
class UPlayerInventoryView : public URootWidget
{
public:
	class UItemInventory*                              m_BackpackInventory;                                      // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_ShortcutbarInventory;                                   // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChestInventoryView*                         m_BackpackInventoryView;                                  // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChestInventoryView*                         m_ShortcutbarInventoryView;                               // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0340(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerInventoryView");
		return ptr;
	}


	void SlotPrevPanel();
	void SlotNextPanel();
	void SetShortcutbarInventory(class UItemInventory* ShortcutBarInventory);
	void SetInventoryView(class UCharacterInventoryView* InventoryView);
	void SetBackpackInventory(class UItemInventory* BackpackInventory);
	void ActivateSelectedInventoryView(class UFCButton* Button, bool IsChecked);
};


// Class ConanSandbox.PlayerListGameEntry
// 0x0050 (0x0370 - 0x0320)
class UPlayerListGameEntry : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0320(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerListGameEntry");
		return ptr;
	}


	void SlotMuteSoundButton(class UFCButton* Button, bool isToggled);
	void SlotMuteChatButton(class UFCButton* Button, bool isToggled);
};


// Class ConanSandbox.QuickLootPanel
// 0x0030 (0x0350 - 0x0320)
class UQuickLootPanel : public URootWidget
{
public:
	class AActor*                                      m_Actor;                                                  // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.QuickLootPanel");
		return ptr;
	}


	void SlotTakeOne();
	void SlotTakeAll();
	void SlotNavigateUp();
	void SlotNavigateRight();
	void SlotNavigateLeft();
	void SlotNavigateDown();
	void SlotItemSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemAddedOrRemoved(int Index, class UGameItem* Item, class UItemInventory* otherInventory, int otherIndex);
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SlotCycleSelectionPrev();
	void SlotCycleSelectionNext();
	bool SlotCompareItems(class UGameItem* lhs, class UGameItem* rhs);
	void SlotCancel();
	void SetActor(class AActor* Actor);
};


// Class ConanSandbox.RadialMenuSegment
// 0x0050 (0x0370 - 0x0320)
class URadialMenuSegment : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0320(0x0030) MISSED OFFSET
	class UTexture2D*                                  m_IconTexture;                                            // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  m_StartCapTexture;                                        // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  m_EndCapTexture;                                          // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RadialMenuSegment");
		return ptr;
	}

};


// Class ConanSandbox.ServerListView
// 0x0200 (0x0520 - 0x0320)
class UServerListView : public URootWidget
{
public:
	struct FScriptMulticastDelegate                    SignalServerSearchDone;                                   // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalServerSelected;                                     // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalRegionFound;                                        // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalServerInvoked;                                      // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EFindSessionServerSet>                 m_CurrentSteamFilter;                                     // 0x0360(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFindSessionOfficial>                  m_CurrentOfficialFilter;                                  // 0x0361(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0362(0x0006) MISSED OFFSET
	class URootWidget*                                 FirstWidget;                                              // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0370(0x0078) MISSED OFFSET
	class UClass*                                      m_ServerInfoClass;                                        // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextBlock*                                  m_ListUpdateProgressView;                                 // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	TArray<class UServerInfoBase*>                     m_UnusedListEntryWidgets;                                 // 0x0400(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FServerListViewEntry>                m_ListViewEntries;                                        // 0x0410(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x100];                                     // 0x0420(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerListView");
		return ptr;
	}


	void SortServerList(TEnumAsByte<ESortCategories> sortOn);
	void SignalServerSelectedDelegate__DelegateSignature(int Index);
	void SignalServerSearchDoneDelegate__DelegateSignature();
	void SignalServerInvokedDelegate__DelegateSignature();
	void SignalIPFoundDelegate__DelegateSignature(const struct FText& Label, bool bFoundRegion);
	bool ShouldShowBEWarning(class UServerInfoBase* SelectedWidget);
	void SetSteamFilter(int filterIndex);
	void SetShowServerType(TEnumAsByte<EServerType> serverType);
	void SetShowServersWithMods(bool show);
	void SetShowOnlyVACServers(bool show);
	void SetShowInvalidServers(bool show);
	void SetShowFullServers(bool show);
	void SetSelection(int Index);
	void SetSearchString(const struct FText& searchNameString);
	void SetRegionType(TEnumAsByte<EServerRegion> region);
	void SetOfficalFilter(TEnumAsByte<ESteamFilters> Filter);
	void SetMaximumPing(int maximumPing);
	void SetListUpdateProgressView(class UTextBlock* textView);
	void SetHideCommunityPicker(bool hide);
	bool SetFavoriteSession(bool bFavorite, const struct FBlueprintSessionResult& session, EFavoriteFlag Flag);
	bool SetFavoriteEntry(bool bFavorite, int Index, EFavoriteFlag Flag);
	void SetCommunity(TEnumAsByte<EServerCommunity> Community);
	void OnServerSelected(class UServerInfoBase* selectedServer);
	void OnServerInvoked();
	void OnOtherSuccess(TArray<struct FBlueprintSessionResult> Results, bool FinalResult);
	void OnOtherFailed(TArray<struct FBlueprintSessionResult> Results, bool FinalResult);
	void OnOfficialSuccess(TArray<struct FBlueprintSessionResult> Results, bool FinalResult);
	void OnOfficialFailed(TArray<struct FBlueprintSessionResult> Results, bool FinalResult);
	void OnFavoriteSuccess(TArray<struct FBlueprintSessionResult> Results, bool FinalResult);
	void OnFavoriteFailed(TArray<struct FBlueprintSessionResult> Results, bool FinalResult);
	void OnConnectionLostMessageBoxClosed(EMessageBoxDialogResult Result);
	bool IsSelectedSession(const class FString& sessionId);
	void InternetSessionsFound();
	TEnumAsByte<ESteamFilters> GetSteamFilter();
	bool GetSortingAscending();
	TArray<struct FText> GetServerInfo(const struct FBlueprintSessionResult& session);
	int GetSelection();
	class UServerInfoBase* GetSelectedWidget();
	class FString GetSelectedSessionId();
	bool GetSelectedSession(struct FBlueprintSessionResult* selectedSession);
	bool GetSelectedEntry(struct FServerListViewEntry* selectedEntry);
	void GetLabelFromClientIp();
	bool GetHideCommunityPicker();
	struct FServerListViewEntry GetEntry(int Index);
	void FindServers();
	bool DirectConnect(const struct FText& ipInput, const struct FText& passwordInput);
	void CreateHackyEscapeNode(bool Remove);
	bool CloseActiveSubDialog();
	void ClearServerList();
	bool CanJoinSession(const struct FBlueprintSessionResult& SessionResult, class FString* FailedMessage);
	void CancelFindSessions();
	void AppendToServerList(TArray<struct FBlueprintSessionResult> sessions, bool areFavorites);
};


// Class ConanSandbox.ServerRentalRequestConnection
// 0x0300 (0x0328 - 0x0028)
class UServerRentalRequestConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRequestCreateServerComplete;                            // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x280];                                     // 0x00A8(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerRentalRequestConnection");
		return ptr;
	}


	void StopLocationQueryTimer();
	void StartLocationQueryTimer(float FirstDelay);
	void SendLocationQuery();
	void SendHelpRequest(const class FString& OrderId, bool* Success);
	void OnUpdatedServer(bool Success, const class FString& Message, const struct FServerRentalGameServer& server);
	void OnRequestInventoryItemDetailsComplete(bool Success, const class FString& Message, const class FString& RequestedProductId, const struct FLiveInventoryItem& InventoryItem, bool ItemIsInInventory);
	void OnCreatedServer(bool Success, const class FString& Message, const struct FServerRentalGameServer& server);
	void OnCacheServerOffers(bool Success, const class FString& Message, const struct FServerRentalOffers& ServerOffers);
	void OnCacheServerLocations(bool Success, const class FString& Message, TArray<struct FServerRentalLocation> Locations);
	void OnCacheInventory(bool Success, const class FString& Message, TArray<struct FLiveInventoryItem> InventoryItems);
	void OnCacheCustomer(bool Success, const class FString& Message, const struct FServerRentalCustomer& Customer);
	class UServerRentalRequestConnection* STATIC_GetExistingOrCreateNew(class UObject* WorldContextObject);
	bool GetCachedServerLocation(int LocationID, struct FServerRentalLocation* Location);
};


// Class ConanSandbox.ServerRentalBase
// 0x0140 (0x04E0 - 0x03A0)
class UServerRentalBase : public UWindowRoot
{
public:
	class UServerRentalServerDetails*                  m_CurrentExpandedServerDetails;                           // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ServerRentalDetailClass;                                  // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UServerRentalRequestConnection*              m_ServerRentalRequestConnection;                          // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x128];                                     // 0x03B8(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerRentalBase");
		return ptr;
	}


	void UpdateServerDetailList(TArray<struct FServerRentalGameServer> GameServers);
	void ToggleGamepadServerButtons(bool show);
	void SelectServer(class UServerRentalServerDetails* SelectedServerDetails);
	void OnUserActionForHasInventoryItemsMessageBox(EMessageBoxDialogResult Result);
	void OnStopAllAnswer(EMessageBoxDialogResult Result);
	void OnStartAllAnswer(EMessageBoxDialogResult Result);
	void OnSetExpandedServerDetails(class UServerRentalServerDetails* ServerDetails, bool IsExpanded);
	void OnSelectServerNavList(bool selected);
	void OnRestartAllAnswer(EMessageBoxDialogResult Result);
	void OnRequestStopServer(const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void OnRequestStartServer(const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void OnRequestStart();
	void OnRequestRestartServer(const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void OnRequestLocationsComplete(bool Success, const class FString& Message, TArray<struct FServerRentalLocation> Locations);
	void OnRequestInventoryComplete(bool Success, const class FString& Message, TArray<struct FLiveInventoryItem> InventoryItems);
	void OnRequestHelpCompleted(bool Success, const class FString& Message, const class FString& OrderId);
	void OnRequestExtendServer(const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void OnRequestEditServer(const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void OnRequestCustomerComplete(bool Success, const class FString& Message, const struct FServerRentalCustomer& Customer);
	void OnCreatedServerAnswer(EMessageBoxDialogResult Result);
	void OnCreatedServer(bool Success, const class FString& Message, const struct FServerRentalGameServer& server);
	void OnCloseSetup(class UServerRentalServerSetupBase* SetupWidget);
	void OnClickStopAll(class UFCButton* Button);
	void OnClickStartAll(class UFCButton* Button);
	void OnClickRestartAll(class UFCButton* Button);
	void OnClickGamepadRentServer();
	void OnClickGamepadRefreshView();
};


// Class ConanSandbox.ServerRentalServerDetails
// 0x0158 (0x0478 - 0x0320)
class UServerRentalServerDetails : public URootWidget
{
public:
	struct FScriptMulticastDelegate                    SignalSelected;                                           // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestServerStart;                                     // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestServerStop;                                      // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestServerRestart;                                   // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestServerExtend;                                    // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestServerEdit;                                      // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetExpanded;                                            // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FServerRentalGameServer                     m_GameServer;                                             // 0x0390(0x0078) (BlueprintVisible, BlueprintReadOnly)
	class UServerRentalBase*                           m_ServerRentalBase;                                       // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UServerRentalRequestConnection*              m_ServerRentalRequestConnection;                          // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ButtonClass;                                              // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0420(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerRentalServerDetails");
		return ptr;
	}


	void UpdateVisuals();
	void SignalSetExpandDelegate__DelegateSignature(class UServerRentalServerDetails* ServerDetails, bool IsExpanded);
	void SignalSelectedDelegate__DelegateSignature(class UServerRentalServerDetails* server);
	void ShowAsSelected(bool isSelected);
	void SetHighlighted(bool Highlighted);
	void SetExpanded(bool IsExpanded);
	void OnServerActionErrorMessageBoxAnswer(EMessageBoxDialogResult Result);
	void OnServerActionComplete(bool Success, const class FString& Message, const struct FServerRentalGameServer& server, TEnumAsByte<EServerRentalActionType> ActionType);
	void OnRequestServerAction__DelegateSignature(const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void OnInvoke(bool IsInvoking);
	void OnConnectionRestored();
	void OnConnectionLost();
	void OnClickStop(class UFCButton* Button);
	void OnClickStart(class UFCButton* Button);
	void OnClickRestart(class UFCButton* Button);
	void OnClickExtend(class UFCButton* Button);
	void OnClickEdit(class UFCButton* Button);
	bool OnBackPressed();
	void HandleExpandNavigation(bool IsExpanded);
};


// Class ConanSandbox.ShortcutIconBase
// 0x0170 (0x0490 - 0x0320)
class UShortcutIconBase : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0320(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ShortcutIconBase");
		return ptr;
	}


	void UpdateActionMappingDisplay(class APlayerController* Owner);
	bool SlotItemDropped(class UInventoryGridSlotViewBase* slotUNREALSUCKS, class UGameItem* GameItem, const struct FPointerEvent& MouseEvent);
	void SignalClicked__DelegateSignature(class UShortcutIconBase* slotUNREALSUCKS, bool withMouse);
	void SetTimeToCraft(class UGameItem* Item, TEnumAsByte<EItemFloatStatID> statID, float NewValue, float deltaValue);
	void OnFloatStatChanged(class UGameItem* Item, TEnumAsByte<EItemFloatStatID> statID, float NewValue, float deltaValue);
};


// Class ConanSandbox.SiegeWeaponInventoryView
// 0x0048 (0x0368 - 0x0320)
class USiegeWeaponInventoryView : public URootWidget
{
public:
	class UItemInventory*                              CounterWeightInventory;                                   // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              ProjectileInventory;                                      // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0330(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SiegeWeaponInventoryView");
		return ptr;
	}


	void SlotTakeButton(class UFCButton* Button);
	void SlotTakeAllButton(class UFCButton* Button);
	void SlotSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotProjectileItemStatChanged(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int statValue, int deltaValue);
	void SlotProjectileItemRemoved(int Index, class UGameItem* Item, class UItemInventory* dstInventory, int dstIndex);
	void SlotProjectileItemAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void SlotProjectileInventoryScrollbarChanged(float Value);
	bool SlotCompareItems(class UGameItem* lhs, class UGameItem* rhs);
	void SetPayloadTemplateID(int TemplateId);
	int GetPayloadTemplateID();
};


// Class ConanSandbox.SubSettingsMaster
// 0x0008 (0x0328 - 0x0320)
class USubSettingsMaster : public URootWidget
{
public:
	bool                                               ShowRestoreDefaults;                                      // 0x0320(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDirty;                                                  // 0x0321(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0322(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SubSettingsMaster");
		return ptr;
	}

};


// Class ConanSandbox.SettingsAudioBase
// 0x00A8 (0x03D0 - 0x0328)
class USettingsAudioBase : public USubSettingsMaster
{
public:
	class USoundClass*                                 MasterClass;                                              // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 MusicClass;                                               // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 VoiceClass;                                               // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 VoiceChatClass;                                           // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 SFXClass;                                                 // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxVolume;                                                // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x74];                                      // 0x035C(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsAudioBase");
		return ptr;
	}


	void VoiceVolumeChanged(float NewValue);
	void VoiceChatVolumeChanged(float NewValue);
	void SubtitlesEnabledChanged(class UFCButton* Button, bool NewValue);
	void SFXVolumeChanged(float NewValue);
	void MusicVolumeChanged(float NewValue);
	void MasterVolumeChanged(float NewValue);
};


// Class ConanSandbox.SettingsControlBase
// 0x00A0 (0x03C8 - 0x0328)
class USettingsControlBase : public USubSettingsMaster
{
public:
	float                                              maxMouseSensitivity;                                      // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minMouseSensitivity;                                      // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxAxisSensitivity;                                       // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minAxisSensitivity;                                       // 0x0334(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxAxisDeadzone;                                          // 0x0338(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minAxisDeadzone;                                          // 0x033C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxTriggerDeadzone;                                       // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minTriggerDeadzone;                                       // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0348(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsControlBase");
		return ptr;
	}


	void RightAxisSensitivityUpdated(float NewValue);
	void RightAxisDeadzoneUpdated(float NewValue);
	void MouseSensitivityUpdated(float NewValue);
	void LeftAxisDeadzoneUpdated(float NewValue);
};


// Class ConanSandbox.SettingsGamepadPresetBase
// 0x0068 (0x0390 - 0x0328)
class USettingsGamepadPresetBase : public USubSettingsMaster
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET
	class UDataTable*                                  m_PresetTable;                                            // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_LabelsTable;                                            // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsGamepadPresetBase");
		return ptr;
	}


	void PresetBSelected(class UFCButton* Button, bool IsChcked);
	void PresetASelected(class UFCButton* Button, bool IsChcked);
	void DefaultSelected(class UFCButton* Button, bool IsChcked);
	void ClearAllTextFields();
};


// Class ConanSandbox.SettingsGameplayBase
// 0x0200 (0x0528 - 0x0328)
class USettingsGameplayBase : public USubSettingsMaster
{
public:
	struct FScriptMulticastDelegate                    SignalOnSettingsChanged;                                  // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<ENudity>                               m_LastNudity;                                             // 0x0338(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FText                                       English;                                                  // 0x0340(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       German;                                                   // 0x0358(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Italian;                                                  // 0x0370(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Spanish;                                                  // 0x0388(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       French;                                                   // 0x03A0(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Russian;                                                  // 0x03B8(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Polish;                                                   // 0x03D0(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Brazilian;                                                // 0x03E8(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Korean;                                                   // 0x0400(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Japanese;                                                 // 0x0418(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       SimplifiedChinese;                                        // 0x0430(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       TraditionalChinese;                                       // 0x0448(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x0460(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsGameplayBase");
		return ptr;
	}


	void SignalOnSettingsChanged__DelegateSignature();
	void SetSelectedNudity(TEnumAsByte<ENudity> NudityLevel);
	TEnumAsByte<ENudity> GetSelectedNudity();
};


// Class ConanSandbox.SettingsKeyBindingsBase
// 0x00A0 (0x03C8 - 0x0328)
class USettingsKeyBindingsBase : public USubSettingsMaster
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0328(0x0078) MISSED OFFSET
	class UClass*                                      m_CategoryClass;                                          // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UDataTable>                        m_CategoriesTable;                                        // 0x03A8(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsKeyBindingsBase");
		return ptr;
	}


	void ScrollToEntry(class URootWidget* entry);
	void OnSelectionChanged(class UKeyBindingsKeyBase* selectedEntry);
	void OnResetRequest(class UKeyBindingsKeyBase* selectedEntry);
	void OnDelegateRebindKey(EMessageBoxDialogResult Result);
	void OnAnyKeyConflict(class UKeyBindingsKeyBase* currentSelected, const struct FKey& Key, bool Shift, bool ctrl, bool Alt, bool Cmd, const struct FText& conflictWarning);
};


// Class ConanSandbox.SettingsServerBase
// 0x0488 (0x07B0 - 0x0328)
class USettingsServerBase : public USubSettingsMaster
{
public:
	bool                                               m_CoopTetheringLimitIsPlayerModifiable;                   // 0x0328(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              MaxPasswordLength;                                        // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFCButton*                                   m_LastSelectedCatButton;                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x478];                                     // 0x0338(0x0478) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsServerBase");
		return ptr;
	}


	void UpdateSwitcher(class UFCButton* Button);
	void SlotNeedServerCheckboxToggled(class UFCButton* Button, bool IsChecked);
	void SlotMakeMeAdminDialogActionPerformed(EInputBoxDialogResult Result, const class FString& resultString);
	void SlotMakeMeAdmin(class UFCButton* Button);
	void SetWindowEnableValues(bool Value);
	void SetDecadentSettings();
	void SetCivilizedSettings();
	void SetBarbaricSettings();
	void ServerClearAdminPassword();
	void ScrollWidgetIntoView(class URootWidget* SelectedWidget);
	void RemoveEscapeNode();
	void OnWidgetSelected(class URootWidget* SelectedWidget, bool selected);
	bool OnEscapeNodeRemoved();
	void OnDelegateClearAdminPassword(EMessageBoxDialogResult Result);
	void OnCategorySelected(class URootWidget* topCategoryWidget);
	void OnCategoryButtonSelected(class URootWidget* Widget, bool IsChecked);
	void OnCategoryButtonPressed(class UFCButton* Button);
	void OnAdminStatusChanged(bool validConanCheatManager, bool validCheatManager, bool IsAdmin);
	void NavigateToCategory(TEnumAsByte<EServerSettingsCategory> Category);
	void LoadServerSettings(class AServerSettings* ServerSettings, bool LoadDefaultSettings);
	float STATIC_GetValueFromSliderValue(float SliderValue, float MinValue, float MaxValue);
	float STATIC_GetSliderValueFromValue(float RealValue, float MinValue, float MaxValue);
	class URootWidget* GetFirstVisibleWidget();
	void ForceEnableServerPassword();
	void EnablePasswordField();
	void ClearServerPassword();
	void ClearAdminPassword();
	void ApplySelectedSettings();
	bool ApplyAndSaveSettings();
};


// Class ConanSandbox.SettingsVideoBase
// 0x0128 (0x0450 - 0x0328)
class USettingsVideoBase : public USubSettingsMaster
{
public:
	struct FScriptMulticastDelegate                    ShowConfirmDialog;                                        // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              maxGamma;                                                 // 0x0338(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minGamma;                                                 // 0x033C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxFOV;                                                   // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minFOV;                                                   // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVideoModeDirty;                                         // 0x0348(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x107];                                     // 0x0349(0x0107) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsVideoBase");
		return ptr;
	}


	void UpdateFOV();
	void SetCustomOverridingGraphicsQuality();
	void RevertVideoMode();
	void OnWidgetSelected(class URootWidget* SelectedWidget, bool selected);
	void OnOverridingGraphicsQualityChange(const class FString& quality, TEnumAsByte<ESelectInfo> SelectionType);
	void OnLowEndLaptopModeClicked(class UFCButton* Button, bool State);
	void OnGammaChanged(float NewValue);
	void OnFOVChanged(float NewValue);
	void ConfirmVideoMode();
};


// Class ConanSandbox.SubtitleEntryView
// 0x0010 (0x0330 - 0x0320)
class USubtitleEntryView : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SubtitleEntryView");
		return ptr;
	}


	void SetText(const struct FText& Text);
};


// Class ConanSandbox.ThirstIndicatorIcon
// 0x0000 (0x0320 - 0x0320)
class UThirstIndicatorIcon : public URootWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThirstIndicatorIcon");
		return ptr;
	}


	void SetCharacter(class AConanCharacter* Character);
};


// Class ConanSandbox.TimeInputBox
// 0x0038 (0x0358 - 0x0320)
class UTimeInputBox : public URootWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0320(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TimeInputBox");
		return ptr;
	}


	void SetMinutes(int Minutes);
	void SetHours(int Hours);
	void OnMinutesTextCommitted(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMinutesTextChanged(const struct FText& InText);
	void OnHoursTextCommitted(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnHoursTextChanged(const struct FText& InText);
	int GetMinutes();
	int GetHours();
};


// Class ConanSandbox.UICharacterDisplay
// 0x0000 (0x0320 - 0x0320)
class UUICharacterDisplay : public URootWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.UICharacterDisplay");
		return ptr;
	}

};


// Class ConanSandbox.AddMemberBase
// 0x00A0 (0x0440 - 0x03A0)
class UAddMemberBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03A0(0x0040) MISSED OFFSET
	class UClass*                                      ListEntryClass;                                           // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x03E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AddMemberBase");
		return ptr;
	}


	void UpdateAvailablePlayersList(TArray<struct FPlayerInfo> playerList);
	void SetSelectedEntry(class UListEntryBase* entry);
	void SendInvite(class UFCButton* Button);
	void Close();
};


// Class ConanSandbox.AttributesBase
// 0x0068 (0x0408 - 0x03A0)
class UAttributesBase : public UWindowRoot
{
public:
	class UWidget*                                     m_MouseControlBox;                                        // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressionSystem*                          m_ProgressionSystem;                                      // 0x03A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TAssetPtr<class USoundBase>                        GetPerkSound;                                             // 0x03B0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        ResetPointsSound;                                         // 0x03D0(0x0020) (Edit, BlueprintVisible)
	ECharIntStatID                                     m_AttributeSelected;                                      // 0x03F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_CanBuyPerks;                                            // 0x03F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x03F2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.AttributesBase");
		return ptr;
	}


	void UpdateEncumbrance();
	void UpdateAttributeInfo();
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SetUnspentPoints(int currentPoints);
	void ResetAllAttributesGamepad();
	void ResetAllAttributes(class UFCButton* Button);
	void PreventPerkPurchase();
	void GiveNextPerkGamepad();
	void EncumbranceChanged(int currentEncumbrance);
	bool BindAttributeDelegates(class UProgressionSystem* ProgressionSystem);
};


// Class ConanSandbox.CarouselWindow
// 0x00C8 (0x0468 - 0x03A0)
class UCarouselWindow : public UWindowRoot
{
public:
	TArray<struct FName>                               CarouselWindowNames;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class USoundBase>                        CarouselButtonSound;                                      // 0x03B0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        CarouselHiddenSound;                                      // 0x03D0(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x68];                                      // 0x03F0(0x0068) MISSED OFFSET
	class UInputComponent*                             m_ActiveInputComponent;                                   // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0460(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CarouselWindow");
		return ptr;
	}


	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SetCarouselIndex(int Index);
	void PrevCarouselWindow();
	void OnChildClosing(class UWindowRoot* Window);
	void OnChildActivated(class UGUIModule* module, bool IsActive);
	void NextCarouselWindow();
	void CloseOtherModules();
	void ButtonPressed(class UFCButton* Button, bool IsChecked);
};


// Class ConanSandbox.CharacterStatsWindow
// 0x0020 (0x03C0 - 0x03A0)
class UCharacterStatsWindow : public UWindowRoot
{
public:
	class AConanCharacter*                             m_Character;                                              // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CharacterStatsWindow");
		return ptr;
	}


	void SlotHealthMaxChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SlotHealthCurrentChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SetCharacter(class AConanCharacter* Character);
	void ScrollStatsView(float AxisValue);
};


// Class ConanSandbox.ChatWindow
// 0x0028 (0x03C8 - 0x03A0)
class UChatWindow : public UWindowRoot
{
public:
	class UClass*                                      ChatLineClass;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SystemMessageColor;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      GlobalMessageColor;                                       // 0x03AC(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      LocalMessageColor;                                        // 0x03B0(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      GuildMessageColor;                                        // 0x03B4(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      MeMessageColor;                                           // 0x03B8(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03BC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ChatWindow");
		return ptr;
	}

};


// Class ConanSandbox.ChestInventoryGUI
// 0x0018 (0x03B8 - 0x03A0)
class UChestInventoryGUI : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
	class UItemInventory*                              m_ChestInventory;                                         // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ChestInventoryGUI");
		return ptr;
	}

};


// Class ConanSandbox.ConanIngameLoadingScreen
// 0x0168 (0x0508 - 0x03A0)
class UConanIngameLoadingScreen : public UWindowRoot
{
public:
	class UClass*                                      m_HotkeyIconClass;                                        // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              m_HintSlateFontInfo;                                      // 0x03A8(0x0068) (Edit)
	struct FSlateColor                                 m_HintSlateColor;                                         // 0x0410(0x0028) (Edit)
	struct FLinearColor                                m_HintShadowColor;                                        // 0x0438(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   m_HintShadowffset;                                        // 0x0448(0x0008) (Edit, IsPlainOldData)
	struct FSlateFontInfo                              m_HintHotKeyTextSlateFontInfo;                            // 0x0450(0x0068) (Edit)
	struct FSlateColor                                 m_HintHotKeyTextSlateColor;                               // 0x04B8(0x0028) (Edit)
	float                                              m_HintIconSize;                                           // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x04E4(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ConanIngameLoadingScreen");
		return ptr;
	}


	void SplitAndAddTextUIHint(const class FString& HintDescription);
	void RandomizeBackgroundImage();
	bool IsPlatformCompatible(int Flag);
	class FString GetRandomHintDescription();
	class FString GetRandomBackgroundPath();
	class UConanIngameLoadingScreen* STATIC_GetIngameLoadingScreenWidget(class UObject* WorldContextObject);
	int GetCurrentPlatformFlag();
	void GenerateHintText();
	void AddTextUIHint(const class FString& HintDescription);
	void AddKeyIconUIHint(const class FString& ActionName);
};


// Class ConanSandbox.CraftingGUIBase
// 0x00A8 (0x0448 - 0x03A0)
class UCraftingGUIBase : public UWindowRoot
{
public:
	class UClass*                                      ChestInventoryViewClass;                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CraftingStationInventoryViewClass;                        // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SiegeWeaponInventoryViewClass;                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PaperDollViewClass;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerInventoryViewClass;                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NPCBackpackInventoryViewClass;                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CraftingPanelClass;                                       // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NPCPaperDollViewClass;                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     CarouselModePadding;                                      // 0x03E0(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x48];                                      // 0x03F0(0x0048) MISSED OFFSET
	class URootWidget*                                 m_CurrentCenterPanel;                                     // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URootWidget*                                 m_CurrentRightPanel;                                      // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.CraftingGUIBase");
		return ptr;
	}


	void SlotInteractingCharacterStateChanged(ECharacterState OldState, ECharacterState newState);
};


// Class ConanSandbox.DyeWindow
// 0x0050 (0x03F0 - 0x03A0)
class UDyeWindow : public UWindowRoot
{
public:
	TWeakObjectPtr<class UGameItem>                    DisplayedItem;                                            // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DyeIndices;                                               // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        SavedDyeIndices;                                          // 0x03B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SelectedTintChannel;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x03CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.DyeWindow");
		return ptr;
	}


	void UpdateState();
	void UpdateDisplayedItem();
	void SlotPrevPanel();
	void SlotNextPanel();
	void SetItem(class UGameItem* Item);
	void SaveDyeChanges(class UFCButton* Button);
	void ResetChannelSelectorWidget();
	bool GetOriginalDye(int Channel, class USkeletalMesh* Mesh, struct FLinearColor* Color);
	TArray<struct FDyeInfo> GetDyesFromBackpack();
	bool CloseWindow();
	void CancelDyeChanges(class UFCButton* Button);
	void ButtonStateChanged();
};


// Class ConanSandbox.EmotesMenu
// 0x0068 (0x0408 - 0x03A0)
class UEmotesMenu : public UWindowRoot
{
public:
	TArray<struct FEmotesMenuCategoryNode>             Categories;                                               // 0x03A0(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  CancelIcon;                                               // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BackIcon;                                                 // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UItemInventory*                              m_Inventory;                                              // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x03C8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.EmotesMenu");
		return ptr;
	}


	void SlotItemHighlighted(class URadialMenu* menu, class URadialMenuEntry* subMenu, int Index);
	void SlotItemClicked(class URadialMenu* menu, class URadialMenuEntry* subMenu, int Index);
	void SlotFadingDone(class URadialMenu* menu);
	void SetPersistLabelText(const struct FText& newText);
	void OnCharacterMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
};


// Class ConanSandbox.ExilesJourneyTrial
// 0x0018 (0x03B8 - 0x03A0)
class UExilesJourneyTrial : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
	class UClass*                                      m_JourneyStepClass;                                       // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyTrial");
		return ptr;
	}


	void RecreateStepsList();
	void PlayUpdateAnimation();
	void OnNewJourneyEvent(class UExilesJourneyItem* Item);
};


// Class ConanSandbox.ExilesJourneyTrialStep
// 0x0010 (0x03B0 - 0x03A0)
class UExilesJourneyTrialStep : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyTrialStep");
		return ptr;
	}


	void PlayCompletedAnimation();
};


// Class ConanSandbox.ExilesJourneyWindow
// 0x0030 (0x03D0 - 0x03A0)
class UExilesJourneyWindow : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ExilesJourneyWindow");
		return ptr;
	}


	void SlotSelectionChanged(const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotOnSelected(class URootWidget* SelectedWidget, bool selected);
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SlotCloseButtonClicked(class UFCButton* Button);
	void SlotChapterCompleted(EJourneyChapter chapter);
	void ResetGamepadOverlay();
};


// Class ConanSandbox.FeatWindow
// 0x01B8 (0x0558 - 0x03A0)
class UFeatWindow : public UWindowRoot
{
public:
	class UClass*                                      FeatResultRecipeInfoViewClass;                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FeatGroupViewClass;                                       // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USoundBase>                        UpgradeSound;                                             // 0x03B0(0x0020) (Edit, BlueprintVisible)
	float                                              ResultListItemSpacing;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColorNotPurchaseable;                           // 0x03D4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColorPurchaseable;                              // 0x03E4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColorPurchased;                                 // 0x03F4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FrameColorIsBlocking;                                     // 0x0404(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FrameColorIsUnlocking;                                    // 0x0414(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UTexture2D*                                  BorderOpen;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BorderNotPurchaseable;                                    // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BorderPurchaseable;                                       // 0x0438(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0440(0x00A8) MISSED OFFSET
	TArray<class UFeatGroupView*>                      m_FeatGroupViews;                                         // 0x04E8(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FFeatGroupNode>                      m_FeatGroups;                                             // 0x04F8(0x0010) (ZeroConstructor)
	TArray<struct FFeatGroupNode>                      m_CornerStoneGroups;                                      // 0x0508(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0518(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FeatWindow");
		return ptr;
	}


	void SlotUnlockButton(class UFCButton* Button);
	void SlotSearchTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void SlotSearchTextChanged(const struct FText& Text);
	void SlotResetAllFeatsGamepad();
	void SlotResetAllFeatsButton(class UFCButton* Button);
	void SlotPrevCategory();
	void SlotNextCategory();
	void SlotIntStatChanged(class UStatHolder* StatHolder, ECharIntStatID statID, int NewValue, int deltaValue);
	bool SlotFilterItem(class UGameItem* Item);
	void SlotFeatSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotFeatInvoked(bool Pressed);
	void SlotFeatDoubleClicked(const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotFeatClicked(const struct FVirtualIndex& Index, class UGameItem* Item, const struct FPointerEvent& MouseEvent);
	bool SlotDimItem(class UGameItem* Item);
	void SlotDependencyClicked(const struct FVirtualIndex& Index, class UGameItem* Item, const struct FPointerEvent& MouseEvent);
	void SlotControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	bool SlotCompareItems(class UGameItem* lhs, class UGameItem* rhs);
	void SlotCloseButton(class UFCButton* Button);
	void SlotCategoryTabToggled(class UFCButton* Button, bool IsChecked);
	void ScrollIngredientsView(float AxisValue);
};


// Class ConanSandbox.FIFOWindow
// 0x0000 (0x03A0 - 0x03A0)
class UFIFOWindow : public UWindowRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FIFOWindow");
		return ptr;
	}


	void ShowMessage(EFIFOStyle Style, const struct FText& Text, const struct FText& Header);
};


// Class ConanSandbox.FullscreenMap
// 0x0020 (0x03C0 - 0x03A0)
class UFullscreenMap : public UWindowRoot
{
public:
	class UMapWithMarkerWidget*                        m_MapWithMarkersWidget;                                   // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFCButton*                                   m_ZoomIn;                                                 // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFCButton*                                   m_ZoomOut;                                                // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     m_MouseControlBox;                                        // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.FullscreenMap");
		return ptr;
	}


	void SlotZoomOutClicked();
	void SlotZoomOutButtonClicked(class UFCButton* Button);
	void SlotZoomInClicked();
	void SlotZoomInButtonClicked(class UFCButton* Button);
	void SlotMarkerIsHovered(bool IsHovered);
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
};


// Class ConanSandbox.GammaBase
// 0x0028 (0x03C8 - 0x03A0)
class UGammaBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
	float                                              maxGamma;                                                 // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minGamma;                                                 // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GammaBase");
		return ptr;
	}


	void SignalGammaSelectedDelegate__DelegateSignature(class UGammaBase* gammaScreen);
	void OnGammaChanged(float NewValue);
	void OnContinueClicked(class UFCButton* Button);
};


// Class ConanSandbox.GuildViewBase
// 0x00A0 (0x0440 - 0x03A0)
class UGuildViewBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x03A0(0x0090) MISSED OFFSET
	class UMessageBoxWidget*                           m_InviteMessageBox;                                       // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.GuildViewBase");
		return ptr;
	}


	void SlotToggleShowOfflineMembers();
	void SlotShowOfflineMembers(class UFCButton* Button, bool IsChcked);
	void SlotShowLeaveGuildPopup(class UFCButton* Button);
	void SlotPrevPanel();
	void SlotNextPanel();
	void SlotMessageOfTheDayChanged(const struct FText& Text);
	void SlotMembersButtonToggled(class UFCButton* Button, bool IsChecked);
	void SlotLogButtonToggled(class UFCButton* Button, bool IsChecked);
	void SlotLeaveGuildAccept(EMessageBoxDialogResult Result);
	void SlotEnableNameEdit(class UFCButton* Button);
	void SlotEditGuildName(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void SlotEditActiveText();
	void SlotControlModeChange(TEnumAsByte<EGUIControlMode> newMode);
	void SetGuildNameLastModifiedBy(int64_t nameLastChangedBy);
	void SetGuildName(const class FString& Text);
	void SetGuildMOTDLastModifiedBy(int64_t MOTDLastChangedBy);
	void SetGuildMOTD(const struct FText& Text);
	void SetGuildMembers(TArray<struct FPlayerInfo> Members);
	void SetGuildEvents(TArray<struct FEventInfo> events);
	void GuildCreatedSuccess(class AConanCharacter* Character);
	void GetGuildData();
};


// Class ConanSandbox.HostLocalBase
// 0x0098 (0x0438 - 0x03A0)
class UHostLocalBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x03A0(0x0090) MISSED OFFSET
	class UClass*                                      ServerSettingsClass;                                      // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HostLocalBase");
		return ptr;
	}


	void StartNewGame();
	bool SetSoldierSettings();
	bool SetPeasantSettings();
	void SetCanRestoreToDefault(bool canRestore);
	bool SetBarbarianSettings();
	bool SaveServerName(const class FString& ServerName);
	void SaveMapName(const struct FName& mapName);
	void OnRestoreDefaultButtonPressed();
	void OnPlayButtonPressed();
	void OnGameStarted();
	void OnGameCanceled();
	void OnControlModeChange(TEnumAsByte<EGUIControlMode> newMode);
	void OnCategoryButtonSelected(class URootWidget* Widget, bool IsChecked);
	void OnCategoryButtonPressed(class UFCButton* Button);
	class AServerSettings* GetOrCreateServerSettings();
	int GetMaxPublicConnections();
	struct FName GetLastUsedMap();
	bool DoesLocalPlayDBFileExist();
	void DestroyServerSettings();
	EDeleteGameDBResult DeleteLocalPlayDBFile();
};


// Class ConanSandbox.HUDCharacterStatIndicators
// 0x0030 (0x03D0 - 0x03A0)
class UHUDCharacterStatIndicators : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HUDCharacterStatIndicators");
		return ptr;
	}


	void SlotStaminaMaxChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SlotStaminaCurrentChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SlotHealthMaxChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SlotHealthCurrentChanged(class AActor* Actor, ECharIntStatID statID, int NewValue, int deltaValue);
	void SlotCharacterStateChanged(ECharacterState OldState, ECharacterState newState);
	void SlotCharacterReady();
};


// Class ConanSandbox.HUDCraftingBase
// 0x0018 (0x03B8 - 0x03A0)
class UHUDCraftingBase : public UWindowRoot
{
public:
	class UCraftingQueue*                              m_CratfingQueue;                                          // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.HUDCraftingBase");
		return ptr;
	}


	void UpdateStackSize(class UGameItem* Item, TEnumAsByte<EItemIntStatID> statID, int NewValue, int deltaValue);
	void CreateCraftingHUD();
	void CraftingItemRemoved(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* srcInventory, int srcIndex);
	void CraftingItemAdded(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* srcInventory, int srcIndex);
};


// Class ConanSandbox.IconGridBase
// 0x0000 (0x03A0 - 0x03A0)
class UIconGridBase : public UWindowRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.IconGridBase");
		return ptr;
	}

};


// Class ConanSandbox.IngameMenuBase
// 0x0008 (0x03A8 - 0x03A0)
class UIngameMenuBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.IngameMenuBase");
		return ptr;
	}

};


// Class ConanSandbox.InputBoxWidget
// 0x0048 (0x03E8 - 0x03A0)
class UInputBoxWidget : public UWindowRoot
{
public:
	struct FScriptMulticastDelegate                    SignalInputUserActionPerformed;                           // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InputBoxWidget");
		return ptr;
	}


	void SignalUserInputActionDelegate__DelegateSignature(EInputBoxDialogResult Result, const class FString& resultString);
	void ShowInputBox();
	void SetTitle(const class FString& Title);
	void SetDescription(const class FString& Description);
	void OnClick_OkGamepad();
	void OnClick_OK(class UFCButton* Button);
	void OnClick_CancelGamepad();
	void OnClick_Cancel(class UFCButton* Button);
	bool OnBackButtonPressed();
	class UInputBoxWidget* STATIC_CreateInputBoxFromWidget(class UObject* WorldContext, class UClass* WidgetClass, const class FString& Title, const class FString& Description);
	class UInputBoxWidget* STATIC_CreateInputBox(class UObject* WorldContext, const class FString& Title, const class FString& Description);
	void CloseInputBox();
};


// Class ConanSandbox.ItemInfoPopup
// 0x0050 (0x03F0 - 0x03A0)
class UItemInfoPopup : public UWindowRoot
{
public:
	float                                              PressSpeed;                                               // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UClass*                                      ItemStatViewClass;                                        // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ItemInfoPopup");
		return ptr;
	}


	void SlotPaddingUpRepeat();
	void SlotPaddingUpPress();
	void SlotPaddingDownRepeat();
	void SlotPaddingDownPress();
	void SlotControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SetShowPlayButton(bool show);
	void SetName(const struct FText& ItemName);
	void SetItem(class UGameItem* Item);
	void PlaySound(class UFCButton* Button);
	void GamepadPlaySound();
	void ClosePopUp(class UFCButton* Button);
};


// Class ConanSandbox.LicenseInfoBase
// 0x0020 (0x03C0 - 0x03A0)
class ULicenseInfoBase : public UWindowRoot
{
public:
	float                                              PressSpeed;                                               // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepeatSpeed;                                              // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.LicenseInfoBase");
		return ptr;
	}


	void SlotScrollUpRepeat();
	void SlotScrollUpPress();
	void SlotScrollDownRepeat();
	void SlotScrollDownPress();
	void SlotControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SlotBackButtonPressed(class UFCButton* Button);
};


// Class ConanSandbox.ListMenu
// 0x0208 (0x05A8 - 0x03A0)
class UListMenu : public UWindowRoot
{
public:
	struct FScriptMulticastDelegate                    SignalMenuClosed;                                         // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalLeaveGuild;                                         // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      ButtonClass;                                              // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 NormalHovered;                                            // 0x03C8(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 NormalColor;                                              // 0x03F0(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 NormalPressedHovered;                                     // 0x0418(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 NormalPressed;                                            // 0x0440(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 GuildMasterHovered;                                       // 0x0468(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 GuildMasterColor;                                         // 0x0490(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 GuildMasterPressedHovered;                                // 0x04B8(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 GuildMasterPressed;                                       // 0x04E0(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0508(0x0068) MISSED OFFSET
	int64_t                                            m_selectedPlayerId;                                       // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0578(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ListMenu");
		return ptr;
	}


	void SignalMenuClosedDelegate__DelegateSignature();
	void SignalLeaveGuildDelegate__DelegateSignature();
	void ShowProfileCard(class UFCButton* Button);
	void PromoteToGuildMaster(EMessageBoxDialogResult Result);
	void PromotePlayer(class UFCButton* Button);
	void LeaveGuild(class UFCButton* Button);
	void KickPlayer(class UFCButton* Button);
	void DemotePlayer(class UFCButton* Button);
	bool CloseMenu();
	void Cancel(class UFCButton* Button);
};


// Class ConanSandbox.MainMenuBase
// 0x00C8 (0x0468 - 0x03A0)
class UMainMenuBase : public UWindowRoot
{
public:
	TArray<class UWidget*>                             m_KeyNavWidgets;                                          // 0x03A0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<ESlateVisibility>                           m_WidgetVisibilities;                                     // 0x03B0(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UMessageBoxWidget*                           m_CheckingPermissionsMessageBox;                          // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x03D0(0x0060) MISSED OFFSET
	struct FText                                       m_WarningText;                                            // 0x0430(0x0018)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0448(0x0008) MISSED OFFSET
	class UGUIModuleController*                        m_GUIModuleController;                                    // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMessageBoxWidget*                           m_InviteMessageBox;                                       // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0460(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MainMenuBase");
		return ptr;
	}


	void UserCannotContinue();
	void UserCanContinueOnline();
	void UserCanContinueOffline();
	void UpdateMenuForTrial(bool IsInTrialMode);
	void StartOnlineGame();
	void StartGame(bool VoiceChatAllowed);
	void StartCoopGame(bool OnlinePlayAllowed, bool IsContinuing);
	void ShowMainMenu();
	void ShowHelp(class UFCButton* Button);
	void ShowGamma();
	void ShowEAWarning();
	bool ShouldShowEAWarning();
	void SetUserId(const struct FText& UserID);
	void SetPlayerName(const class FString& playerName);
	bool SetGameOwner();
	bool RestoreDBFile();
	void OnVoiceChatBlockedAcknowledged(class UWindowRoot* WindowRoot);
	void OnVoiceChatBlocked();
	void OnVoiceChatAllowed();
	void OnTrialStatusChanged(bool IsInTrialMode);
	void OnPrivilegeCheckCompleted();
	void OnPlayOfflineAcknowledged(EMessageBoxDialogResult UserInput);
	void OnPlayButtonClicked(bool IsCoopGame, bool IsContinuing, bool bSkipConfirmation);
	void OnLiveConnectionLost();
	void OnGamepadKeyDown(const struct FKeyEvent& KeyEvent);
	void OnGamepadChange(int newGamepadId);
	void OnContinueOfflineClicked(class UFCButton* Button);
	void OnActivateCoopMessageClosed(class UWindowRoot* WindowRoot);
	void OnActivateCoopClicked(class UFCButton* Button);
	bool IsPlayerSignedIn();
	bool IsGameStreamedIn();
	bool IsGameOwnerValid();
	ESaveGameState GetSettingsFileStatus();
	ESaveGameState GetLocalPlayDBFileStatus();
	void GetFocusAfterGammaHack(class UGammaBase* gammaScreen);
	void EnableMainMenuInput(bool allowInput);
	bool DoesLocalPlayDBFileExist();
	void CloseSubMenues();
	void AskPlayerToActivateCoop();
	void AllowUserChange(bool allow);
};


// Class ConanSandbox.MainRadialMenu
// 0x0028 (0x03C8 - 0x03A0)
class UMainRadialMenu : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MainRadialMenu");
		return ptr;
	}


	void SlotItemHighlighted(class URadialMenu* menu, class URadialMenuEntry* subMenu, int Index);
	void SlotItemClicked(class URadialMenu* menu, class URadialMenuEntry* subMenu, int Index);
	void SlotInteractKeyReleased();
	void SlotFadingDone(class URadialMenu* menu);
	void SetObjectLabelText(const struct FText& newText);
};


// Class ConanSandbox.MouseBlockWindowBase
// 0x0000 (0x03A0 - 0x03A0)
class UMouseBlockWindowBase : public UWindowRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.MouseBlockWindowBase");
		return ptr;
	}

};


// Class ConanSandbox.PaperdollGUIBase
// 0x0000 (0x03A0 - 0x03A0)
class UPaperdollGUIBase : public UWindowRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PaperdollGUIBase");
		return ptr;
	}

};


// Class ConanSandbox.PasswordDialogBase
// 0x0270 (0x0610 - 0x03A0)
class UPasswordDialogBase : public UWindowRoot
{
public:
	struct FScriptMulticastDelegate                    SignalBack;                                               // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SignalOk;                                                 // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x70];                                      // 0x03C0(0x0070) MISSED OFFSET
	struct FBlueprintSessionResult                     m_Session;                                                // 0x0430(0x00C8)
	unsigned char                                      UnknownData01[0x118];                                     // 0x04F8(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PasswordDialogBase");
		return ptr;
	}


	void SlotSavePasswordToggleGamepad();
	void SlotSavePasswordToggle(class UFCButton* Button, bool IsChcked);
	void SlotOkClicked(class UFCButton* Button);
	void SlotControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	bool SlotBackPressed();
	void SlotBackClicked(class UFCButton* Button);
	void SignalOkDelegate__DelegateSignature(const struct FBlueprintSessionResult& session);
	void SignalBackDelegate__DelegateSignature();
	void SetSession(const struct FBlueprintSessionResult& session);
	void SetSavePassword(bool Save);
	bool SavePassword(const struct FBlueprintSessionResult& session, const struct FText& password, bool Save);
	bool GetSavePassword();
	struct FText GetPassword(const struct FBlueprintSessionResult& session);
	void GamepadSlotOkPressed();
	void GamepadSlotEditPressed();
	void GamepadSlotBackPressed();
	void Decline();
	void Accept();
};


// Class ConanSandbox.PlaceableInfoBase
// 0x0018 (0x03B8 - 0x03A0)
class UPlaceableInfoBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlaceableInfoBase");
		return ptr;
	}


	struct FText GetObjectName(int TemplateId);
};


// Class ConanSandbox.PlayerlistBase
// 0x0090 (0x0430 - 0x03A0)
class UPlayerlistBase : public UWindowRoot
{
public:
	TArray<class FString>                              PlayerNames;                                              // 0x03A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              PlayerIds;                                                // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              PlatformAccountNames;                                     // 0x03C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              BannedPlayers;                                            // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerlistBase");
		return ptr;
	}


	void SetData(TArray<struct FPlayerListData> PlayerData);
	void SetBannedPlayers(TArray<class FString> BannedPlayerId);
	void PlayerListReady();
	void BannedListReady();
};


// Class ConanSandbox.PlayerListGame
// 0x0070 (0x0410 - 0x03A0)
class UPlayerListGame : public UWindowRoot
{
public:
	class UClass*                                      EntryViewClass;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A8(0x0010) MISSED OFFSET
	class UFCButton*                                   m_CloseButton;                                            // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FUniqueNetIdRepl, struct FPlayerListData> Entries;                                                  // 0x03C0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerListGame");
		return ptr;
	}


	void UpdateGamepadOverlay();
	void SlotEntrySelected(class URootWidget* entry);
	void SlotEntryListDeselected();
	void SlotDataReceived(TArray<struct FPlayerListData> PlayerData);
	void SlotCloseButton(class UFCButton* Button);
	void OnControlModeChange(TEnumAsByte<EGUIControlMode> newMode);
};


// Class ConanSandbox.PlayerMarkerDialog
// 0x00C8 (0x0468 - 0x03A0)
class UPlayerMarkerDialog : public UWindowRoot
{
public:
	TArray<class UTexture2D*>                          Icons;                                                    // 0x03A0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x03B0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.PlayerMarkerDialog");
		return ptr;
	}


	void SlotSelectInputClicked();
	void SlotNameEditActivated(bool IsActive);
	void SlotItemInvoked(bool Pressed);
	void SlotIconClicked(const struct FVirtualIndex& Index, class UGameItem* Item, const struct FPointerEvent& MouseEvent);
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SlotDoneButtonPressed(class UFCButton* Button);
	void SlotCancelButtonPressed(class UFCButton* Button);
	bool CloseWindow();
};


// Class ConanSandbox.RadialShortcutBar
// 0x0070 (0x0410 - 0x03A0)
class URadialShortcutBar : public UWindowRoot
{
public:
	class UClass*                                      ItemIconSlotClass;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CancelIcon;                                               // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BackIcon;                                                 // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UShortcutBarInventory*                       m_Inventory;                                              // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.RadialShortcutBar");
		return ptr;
	}


	void SlotItemHighlighted(class URadialMenu* menu, class URadialMenuEntry* subMenu, int Index);
	void SlotItemClicked(class URadialMenu* menu, class URadialMenuEntry* subMenu, int Index);
	void SlotItemActionRepair();
	void SlotFadingDone(class URadialMenu* menu);
};


// Class ConanSandbox.SafeZoneSettingBase
// 0x0038 (0x03D8 - 0x03A0)
class USafeZoneSettingBase : public UWindowRoot
{
public:
	float                                              PressSpeed;                                               // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepeatSpeed;                                              // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SafeZoneSettingBase");
		return ptr;
	}


	void SlotResetPadding();
	void SlotPaddingUpRepeat();
	void SlotPaddingUpPress();
	void SlotPaddingRightRepeat();
	void SlotPaddingRightPress();
	void SlotPaddingLeftRepeat();
	void SlotPaddingLeftPress();
	void SlotPaddingDownRepeat();
	void SlotPaddingDownPress();
	void SlotConfirmPadding();
};


// Class ConanSandbox.ServerMOTDBase
// 0x0028 (0x03C8 - 0x03A0)
class UServerMOTDBase : public UWindowRoot
{
public:
	struct FText                                       OriginalText;                                             // 0x03A0(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerMOTDBase");
		return ptr;
	}


	bool OnBackPressed();
};


// Class ConanSandbox.ServerRentalServerSetupBase
// 0x0250 (0x05F0 - 0x03A0)
class UServerRentalServerSetupBase : public UWindowRoot
{
public:
	struct FScriptMulticastDelegate                    OnShowPopup;                                              // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecievedAllData;                                        // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetupClosing;                                           // 0x03C8(0x0010) (ZeroConstructor, InstancedReference)
	class UServerRentalRequestConnection*              m_ServerRentalRequestConnection;                          // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EServerRentalSetupType>                m_SetupType;                                              // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20F];                                     // 0x03E1(0x020F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerRentalServerSetupBase");
		return ptr;
	}


	void UpdateRentServerButtonEnabledState();
	void UpdatePurchaseLocationOptions();
	void UpdatePurchaseConfigurationOptions(int LocationID);
	void SignalSetupClosing__DelegateSignature(class UServerRentalServerSetupBase* SetupWidget);
	void ShowProcessingOverlay(const struct FText& DisplayText, bool ShowOverlay, bool ShowThrobber);
	void ShowPopup(TEnumAsByte<EServerRentalSetupType> SetupType, const struct FServerRentalGameServer& GameServer, class UServerRentalServerDetails* DetailsWidget);
	void SetupUI(TEnumAsByte<EServerRentalSetupType> SetupType, const struct FServerRentalGameServer& GameServer);
	void OnUserActionForGenericMessageBox(EMessageBoxDialogResult Result);
	void OnUseAlreadyPurchasedConsumableAnswer(EMessageBoxDialogResult Result);
	void OnUpdateServerRequestComplete(bool Success, const class FString& Message, const struct FServerRentalGameServer& server);
	void OnShowPopupDelegate__DelegateSignature(TEnumAsByte<EServerRentalSetupType> SetupType, const struct FServerRentalGameServer& GameServer);
	void OnPrepareServerRequestCompleted(bool Success, const class FString& Message, const class FString& ProductId);
	void OnOffersCached();
	void OnLocationSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnCreateServerRequestComplete(bool Success, const class FString& Message, const struct FServerRentalGameServer& server);
	void OnConsumedIntentoryItem(bool Success, const class FString& Message, const class FString& ProductId);
	void OnConfigurationSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnCommitServerPassword(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnCommitServerName(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnCommitAdminPassword(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
	void OnClickRentServer(class UFCButton* Button);
	void OnClickClearServerPassword(class UFCButton* Button);
	bool OnBackPressed();
	void OnAllDataRecieved(TEnumAsByte<EServerRentalSetupType> SetupType, const struct FServerRentalGameServer& GameServer);
};


// Class ConanSandbox.SettingsBase
// 0x0158 (0x04F8 - 0x03A0)
class USettingsBase : public UWindowRoot
{
public:
	TAssetPtr<class USoundBase>                        SettingsButtonSound;                                      // 0x03A0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        ApplySettingsSound;                                       // 0x03C0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        SettingsBackSound;                                        // 0x03E0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USoundBase>                        RestoreDefaultsSound;                                     // 0x0400(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0420(0x0058) MISSED OFFSET
	class UMessageBoxWidget*                           m_AccessWarning;                                          // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMessageBoxWidget*                           m_WaitingForServer;                                       // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0488(0x0038) MISSED OFFSET
	class UInputComponent*                             m_DialogInputComponent;                                   // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       m_RestoreDefaultText;                                     // 0x04C8(0x0018)
	struct FText                                       m_ApplyText;                                              // 0x04E0(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SettingsBase");
		return ptr;
	}


	void SlotPrevPanel();
	void SlotNextPanel();
	void SlotBlockConfirmDialogNavigation();
	void ServerSettingsClicked(class UFCButton* Button, bool IsChcked);
	void RestoreDefaults(class UFCButton* Button);
	void OnRestoreDefaultsButtonPressed();
	void OnDelegateBackClicked(EMessageBoxDialogResult Result);
	void OnControlModeChange(TEnumAsByte<EGUIControlMode> newMode);
	bool OnBackButtonPressed();
	void OnApplyButtonPressed();
	void CreateDialogInputComponent(bool isDialogOpen);
	void BackClicked(class UFCButton* Button);
	void ApplySettings(class UFCButton* Button);
	void ActivateSubWidget(class UFCButton* Button, bool IsChcked);
};


// Class ConanSandbox.ShortcutBarBase
// 0x0080 (0x0420 - 0x03A0)
class UShortcutBarBase : public UWindowRoot
{
public:
	class UShortcutBarInventory*                       m_ShortcutInventory;                                      // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_BackpackInventory;                                      // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCraftingQueue*                              m_CharacterCratfingQ;                                     // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B8(0x0050) MISSED OFFSET
	TArray<struct FVisualData>                         VisualDataPreload;                                        // 0x0408(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ShortcutBarBase");
		return ptr;
	}


	void SlotItemSelectionChanged(class UItemInventory* inventory, const struct FVirtualIndex& Index, class UGameItem* Item);
	void SlotItemRemoved(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* dstInventory, int dstIndex);
	void SlotItemClicked(class UShortcutIconBase* slotUNREALSUCKS, bool withMouse);
	void SlotItemAdded(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* srcInventory, int srcIndex);
	void SlotGUIControlModeChanged(TEnumAsByte<EGUIControlMode> mode);
	void SlotActiveItemChanged(int prevIndex, int newIndex);
	void OnInvetoryReplicated(class UItemInventory* inventory);
	class UShortcutBarBase* STATIC_GetShortcutBarWidget(class UObject* WorldContextObject);
	void CraftingItemRemoved(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* srcInventory, int srcIndex);
	void CraftingItemAdded(int InventoryIndex, class UGameItem* GameItem, class UItemInventory* srcInventory, int srcIndex);
};


// Class ConanSandbox.SkippableMovieBase
// 0x0038 (0x03D8 - 0x03A0)
class USkippableMovieBase : public UWindowRoot
{
public:
	struct FScriptMulticastDelegate                    SignalMovieFinished;                                      // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UConanAudioComponent*                        m_MediaSound;                                             // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	class UMediaPlayer*                                m_MediaPlayer;                                            // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SkippableMovieBase");
		return ptr;
	}


	void UpdateSkipText(TEnumAsByte<EGUIControlMode> newMode);
	void StartMovie(bool FadeOut, class UMaterialInterface* mediaMaterial, class UConanAudioComponent* mediaSound, class UMediaPlayer* MediaPlayer, class UMediaSource* MediaSource);
	void SignalMovieFinishedDelegate__DelegateSignature();
	void MediaOpened(const class FString& OpenedUrl);
	void FadeOutMovie();
	void FadeOut();
	void EndReached();
	void EndMovie();
};


// Class ConanSandbox.StackSplitValueDialog
// 0x0038 (0x03D8 - 0x03A0)
class UStackSplitValueDialog : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET
	class UItemInventory*                              m_SrcInventory;                                           // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemInventory*                              m_DstInventory;                                           // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StackSplitValueDialog");
		return ptr;
	}


	void SlotValueCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void SlotSplitStackDlgOkPressed(class UFCButton* Button);
	void SlotSplitStackDlgCancelPressed(class UFCButton* Button);
};


// Class ConanSandbox.StreamInstallBase
// 0x0040 (0x03E0 - 0x03A0)
class UStreamInstallBase : public UWindowRoot
{
public:
	float                                              UpdateInterval;                                           // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x03A4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StreamInstallBase");
		return ptr;
	}


	void UpdatePercentage();
	void BackClicked(class UFCButton* Button);
};


// Class ConanSandbox.SubtitleRenderer
// 0x0028 (0x03C8 - 0x03A0)
class USubtitleRenderer : public UWindowRoot
{
public:
	class UClass*                                      EntryViewClass;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USubtitleEntryView*>                  m_PendingEntryList;                                       // 0x03A8(0x0010) (ExportObject, ZeroConstructor)
	class USubtitleEntryView*                          m_ActiveEntry;                                            // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SubtitleRenderer");
		return ptr;
	}

};


// Class ConanSandbox.ThrallViewBase
// 0x0028 (0x03C8 - 0x03A0)
class UThrallViewBase : public UWindowRoot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallViewBase");
		return ptr;
	}

};


// Class ConanSandbox.VoiceChatWindow
// 0x0010 (0x03B0 - 0x03A0)
class UVoiceChatWindow : public UWindowRoot
{
public:
	class UClass*                                      ChatLineClass;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.VoiceChatWindow");
		return ptr;
	}

};


// Class ConanSandbox.SaveLevelCallProxy
// 0x0040 (0x0068 - 0x0028)
class USaveLevelCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SaveLevelCallProxy");
		return ptr;
	}


	class USaveLevelCallProxy* STATIC_SaveLevel(class UObject* WorldContextObject, const class FString& PlayerId, int Level);
};


// Class ConanSandbox.ServerBlacklist
// 0x0050 (0x0420 - 0x03D0)
class AServerBlacklist : public AInfo
{
public:
	TMap<class FString, int>                           Blacklist;                                                // 0x03D0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ServerBlacklist");
		return ptr;
	}

};


// Class ConanSandbox.SetUserLoginStatusCallProxy
// 0x0048 (0x0070 - 0x0028)
class USetUserLoginStatusCallProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AlreadyOnline;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SetUserLoginStatusCallProxy");
		return ptr;
	}


	class USetUserLoginStatusCallProxy* STATIC_SetUserLoginStatus(class UObject* WorldContextObject, class APlayerController* Controller, bool IsOnline);
};


// Class ConanSandbox.SharedDebugInfo
// 0x0008 (0x03D8 - 0x03D0)
class ASharedDebugInfo : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SharedDebugInfo");
		return ptr;
	}


	int GetLastFPS();
};


// Class ConanSandbox.SmoketestList
// 0x0000 (0x03D0 - 0x03D0)
class ASmoketestList : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SmoketestList");
		return ptr;
	}


	void RunAllTests();
};


// Class ConanSandbox.SmoketestSceneLoader
// 0x0018 (0x03E8 - 0x03D0)
class ASmoketestSceneLoader : public AActor
{
public:
	bool                                               RunSmoketestOnBeginPlay;                                  // 0x03D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FName                                       SmoketestLevelName;                                       // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SmoketestSceneLoader");
		return ptr;
	}


	void TryStartSmoketests();
	void OnSmoketestLevelLoaded();
};


// Class ConanSandbox.SoundRegistry
// 0x0058 (0x0428 - 0x03D0)
class ASoundRegistry : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SoundRegistry");
		return ptr;
	}

};


// Class ConanSandbox.SoundWaveVoiceChat
// 0x0000 (0x02F0 - 0x02F0)
class USoundWaveVoiceChat : public USoundWaveProcedural
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SoundWaveVoiceChat");
		return ptr;
	}

};


// Class ConanSandbox.StatIntArray
// 0x0018 (0x0040 - 0x0028)
class UStatIntArray : public UObject
{
public:
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FStatIntEntry>                       Stats;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StatIntArray");
		return ptr;
	}

};


// Class ConanSandbox.StatFloatArray
// 0x0018 (0x0040 - 0x0028)
class UStatFloatArray : public UObject
{
public:
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FStatFloatEntry>                     Stats;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StatFloatArray");
		return ptr;
	}

};


// Class ConanSandbox.WeightedTableArray
// 0x0020 (0x0048 - 0x0028)
class UWeightedTableArray : public UObject
{
public:
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FWeightedTableEntry>                 Entries;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.WeightedTableArray");
		return ptr;
	}

};


// Class ConanSandbox.SpawnTableComponent
// 0x0218 (0x0310 - 0x00F8)
class USpawnTableComponent : public UActorComponent
{
public:
	TArray<class UStatIntArray*>                       m_StatIntTable;                                           // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class UStatIntArray*>                       m_StatIntModifierTable;                                   // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class UStatFloatArray*>                     m_StatFloatTable;                                         // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class UStatFloatArray*>                     m_StatFloatModifierTable;                                 // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class UWeightedTableArray*>                 m_WeightedSpawnTable;                                     // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UDataTable*                                  m_SpawnTable;                                             // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_EquipmentTable;                                         // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_ProfessionTable;                                        // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_RaceTable;                                              // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_ThrallTierTable;                                        // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  m_ComboPresetsTable;                                      // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x198];                                     // 0x0178(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SpawnTableComponent");
		return ptr;
	}


	class APawn* SpawnNPCFromWeightedTable(class UObject* WorldContextObject, const struct FName& WeightedTableID, const struct FTransform& SpawnTransform, int RecursiveCallProtection, struct FCharacterLayout* TargetLayout, class UClass** NPCBehaviorParameters);
	class APawn* SpawnNPC(class UObject* WorldContextObject, const struct FName& SpawnTableID, const struct FTransform& SpawnTransform, struct FCharacterLayout* TargetLayout, class UClass** NPCBehaviorParameters);
	void ReloadAllStaticDataOnActor(class AActor* SpawnedActor, const struct FName& SpawnTableID, bool IsFemale);
	void GenerateStaticData();
	void AddArmourEquipmentFromLayout(class AConanCharacter* Character, const struct FCharacterLayout& Layout);
};


// Class ConanSandbox.StaticWaypoint
// 0x0010 (0x03E0 - 0x03D0)
class AStaticWaypoint : public AActor
{
public:
	class AStaticWaypoint*                             NextWaypoint;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StaticWaypoint");
		return ptr;
	}


	void STATIC_GetAllPaths(TArray<class AStaticWaypoint*> Waypoints, TArray<class UPathPoints*>* Paths, bool* LoopsFound);
};


// Class ConanSandbox.StaticSpawnPoint
// 0x0010 (0x03E0 - 0x03D0)
class AStaticSpawnPoint : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNpcSpawnerComponent*                        OwningSpawnerComponent;                                   // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StaticSpawnPoint");
		return ptr;
	}


	bool RegisterNpcSpawnerComponent(class UNpcSpawnerComponent* SpawnerComponent);
};


// Class ConanSandbox.StaticNavigationProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UStaticNavigationProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StaticNavigationProviderInterface");
		return ptr;
	}


	bool IsStaticNavigationProviderActive();
	void GetWaypoints(TArray<class AStaticWaypoint*>* Waypoints);
	void GetSpawnPoints(TArray<class AStaticSpawnPoint*>* SpawnPoints);
};


// Class ConanSandbox.StreamingProxy
// 0x0040 (0x0068 - 0x0028)
class UStreamingProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnLoaded;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanCharacter*                             Host;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class UObject>>                   Assets;                                                   // 0x0048(0x0010) (ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    Classes;                                                  // 0x0058(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StreamingProxy");
		return ptr;
	}


	class UStreamingProxy* STATIC_LoadClassesAsync(class UObject* WorldContextObject, TArray<TAssetPtr<class UClass>> ClassPaths);
	class UStreamingProxy* STATIC_LoadAssetsAsync(class UObject* WorldContextObject, TArray<TAssetPtr<class UObject>> AssetPaths);
	class UStreamingProxy* STATIC_LoadAssetsAndClassesAsync(class UObject* WorldContextObject, TArray<TAssetPtr<class UObject>> AssetPaths, TArray<TAssetPtr<class UClass>> ClassPaths);
};


// Class ConanSandbox.StreamingProxyUntyped
// 0x0030 (0x0058 - 0x0028)
class UStreamingProxyUntyped : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnLoaded;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanCharacter*                             Host;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStringAssetReference>               Assets;                                                   // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.StreamingProxyUntyped");
		return ptr;
	}


	class UStreamingProxyUntyped* STATIC_LoadAssetsAsync(class UObject* WorldContextObject, TArray<struct FStringAssetReference> AssetPaths);
};


// Class ConanSandbox.SuspendableActor
// 0x0008 (0x03D8 - 0x03D0)
class ASuspendableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SuspendableActor");
		return ptr;
	}

};


// Class ConanSandbox.SuspendableConfirmationInterface
// 0x0000 (0x0028 - 0x0028)
class USuspendableConfirmationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.SuspendableConfirmationInterface");
		return ptr;
	}


	bool IsReadyForLodChange(int NewLodLevel, int MaxLodLevel);
};


// Class ConanSandbox.TargetAreaAllocatorComponent
// 0x0018 (0x0110 - 0x00F8)
class UTargetAreaAllocatorComponent : public UActorComponent
{
public:
	TArray<struct FTargetAreaAllocationData>           CachedAreas;                                              // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetAreaAllocatorComponent");
		return ptr;
	}


	void ValidateAreaCache();
	void STATIC_TransformedTargetAreaWithSource(const struct FTargetAreaWithSource& AreaAndSource, bool IgnoreActorRotation, struct FTargetAreaWithSource* TransformedAreaAndSource);
	void SortCachedAreasByAscendingDistance(const struct FVector& ViewLocation, bool IgnoreActorRotation);
	void STATIC_SetInvalid(struct FTargetAreaWithSource* AreaAndSource);
	void ResolveStealRequest(const struct FTargetAreaWithSource& AreaToAcquire, class AActor* CurrentOwner, class AActor* NewOwner, bool* ApproveStealRequest);
	void ReleaseArea(const struct FTargetAreaWithSource& AreaToRelease, class AActor* Owner);
	void STATIC_OverlapsTargetArea(const struct FTargetAreaWithSource& AreaAndSource, const struct FBoxBounds& Box, const struct FTransform& BoxTransform, bool IgnoreActorRotation, bool* Overlaps);
	void STATIC_MakeTargetAreaWithSource(const struct FTargetArea& NewArea, class USceneComponent* NewSourceComponent, struct FTargetAreaWithSource* NewAreaAndSource);
	bool STATIC_IsValid(const struct FTargetAreaWithSource& AreaAndSource);
	bool STATIC_IsAvailable(const struct FTargetAreaAllocationData& Area);
	void InvalidateAreaCache();
	bool STATIC_Equals(const struct FTargetAreaWithSource& A, const struct FTargetAreaWithSource& B);
	void AppendAllAreas(TArray<struct FTargetAreaWithSource>* NewAreas);
	bool AcquireArea(class UObject* WorldContextObject, const struct FTargetAreaWithSource& AreaToAcquire, class AActor* NewOwner, float MaxDistance);
};


// Class ConanSandbox.TargetAreaComponent
// 0x0000 (0x0740 - 0x0740)
class UTargetAreaComponent : public UShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetAreaComponent");
		return ptr;
	}


	void GetLocalTargetAreaFromSurfaceDetails(struct FTargetArea* NewArea);
};


// Class ConanSandbox.TargetDistributionComponent
// 0x0290 (0x0388 - 0x00F8)
class UTargetDistributionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00F8(0x0001) MISSED OFFSET
	bool                                               AttackPlayers;                                            // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowCallForHelp;                                         // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00FB(0x0001) MISSED OFFSET
	float                                              CallForHelpRange;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetSpottedCryRange;                                    // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GiveUpLostTarget;                                         // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	float                                              ForgetLostTargetTime;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForgetUnreachableTime;                                    // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForgetOffMeshTime;                                        // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RespondToCallForHelp;                                     // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              RefreshTargetSelectionTime;                               // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GiveUpDistance;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttackDistace;                                         // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PassiveUntilAttacked;                                     // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckTargetOffMesh;                                       // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTargetPrediction;                                      // 0x0126(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0127(0x0001) MISSED OFFSET
	float                                              MaxProjectileOffset;                                      // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinProjectileOffset;                                      // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileScaleFactorPerMeter;                            // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackAngle;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldThreaten;                                           // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              TauntRange;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackRange;                                              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TauntTime;                                                // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PickRandomWeaponAfterAttack;                              // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PickBestWeapon;                                           // 0x0149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PickBestWeaponAfterAttack;                                // 0x014A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x014B(0x0001) MISSED OFFSET
	float                                              PickBestWeaponDelay;                                      // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BackOffEnabled;                                           // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              WeaponRangeSwapMinTime;                                   // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStationary;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnorePassive;                                            // 0x0159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x015A(0x0002) MISSED OFFSET
	float                                              CurrentTargetScore;                                       // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CausedDamageScore;                                        // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Retaliate;                                                // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	TArray<int>                                        IgnoreCommunity;                                          // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        AttackCommunity;                                          // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        FriendlyCommunity;                                        // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        OwnerIDs;                                                 // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MeleeSlots;                                               // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBackoff;                                            // 0x01AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	float                                              ChaseRange;                                               // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxArcherRange;                                           // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InvestigateTime;                                          // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xC];                                       // 0x01BC(0x000C) MISSED OFFSET
	class AConanCharacter*                             ObserveTarget;                                            // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AConanCharacter*>                     HateList;                                                 // 0x01D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData12[0x100];                                     // 0x01E0(0x0100) MISSED OFFSET
	class AConanCharacter*                             ConanPawn;                                                // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanCharacter*                             CurrentTargetActor;                                       // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBuildingModuleData*                         BuildingTarget;                                           // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AConanAttackerAIController*                  OwnerController;                                          // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x0308(0x0018) MISSED OFFSET
	TArray<class AConanCharacter*>                     PotentialTargets;                                         // 0x0320(0x0010) (ZeroConstructor)
	TArray<class AConanCharacter*>                     ConfirmedAttackers;                                       // 0x0330(0x0010) (ZeroConstructor)
	class UGameItem*                                   CurrentWeapon;                                            // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UGameItem*>                           MeleeWeapons;                                             // 0x0348(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	TArray<class UGameItem*>                           ChargeWeapons;                                            // 0x0360(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	TArray<class UGameItem*>                           RangeWeapons;                                             // 0x0378(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetDistributionComponent");
		return ptr;
	}


	void UpdatedPerception(class AActor* Actor, const struct FAIStimulus& Stimulus);
	TEnumAsByte<EquipmentSlots> SelectWeaponSlotForAttack();
	void SelectWeaponByRange();
	void ItemRemoved(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void ItemEquiped(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	void ItemAdded(int Index, class UGameItem* Item, class UItemInventory* srcInventory, int srcIndex);
	bool HaveValidTarget();
	struct FVector GetFocusPoint();
	void EvaluateDesiredCombatLocation(float DeltaTime);
	void AddOwnerID(class UUniqueID* OwnerID);
};


// Class ConanSandbox.TargetingMonitorInterface
// 0x0000 (0x0028 - 0x0028)
class UTargetingMonitorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetingMonitorInterface");
		return ptr;
	}


	void OnTargeted(class AActor* TargetingActor, class AController* TargetingController, ETargetingPurpose TargetingPurpose);
};


// Class ConanSandbox.TargetingMonitorHelper
// 0x0000 (0x0028 - 0x0028)
class UTargetingMonitorHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TargetingMonitorHelper");
		return ptr;
	}


	void STATIC_NotifyTargeted(class AController* TargetingController, class AActor* TargetedActor, ETargetingPurpose TargetingPurpose);
};


// Class ConanSandbox.Testable
// 0x0038 (0x0130 - 0x00F8)
class UTestable : public UActorComponent
{
public:
	TArray<class FString>                              TestLabels;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnRun;                                                    // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.Testable");
		return ptr;
	}


	void TestCompleted(bool TestSuccess);
	void RunEvent__DelegateSignature(const class FString& TestLabel, int TestIndex);
};


// Class ConanSandbox.TestUtils
// 0x0000 (0x0028 - 0x0028)
class UTestUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.TestUtils");
		return ptr;
	}


	void STATIC_RunTests(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<class UTestable*> Testables);
	void STATIC_RunAllTests(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_ReadConsoleVariableString(class UObject* WorldContextObject, const class FString& Variable, class FString* OutValue);
	bool STATIC_ReadConsoleVariableInt(class UObject* WorldContextObject, const class FString& Variable, int* OutValue);
	bool STATIC_ReadConsoleVariableFloat(class UObject* WorldContextObject, const class FString& Variable, float* OutValue);
	bool STATIC_IsCommandLineSwitchEnabled(const class FString& SwitchName);
	int STATIC_GetAssetInstallationProgress(class UObject* WorldContextObject, const struct FName& ObjectPath);
};


// Class ConanSandbox.ThrallComponent
// 0x00B8 (0x01B0 - 0x00F8)
class UThrallComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	float                                              ClaimRadiusBuilding;                                      // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClaimRadiusFoliage;                                       // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClaimLocation;                                            // 0x0108(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FThrallInfo                                 ThrallInfo;                                               // 0x0118(0x0080) (BlueprintVisible, Net, SaveGame)
	class UUniqueID*                                   OwnerUniqueID;                                            // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsABrush;                                                 // 0x01A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FVector                                     SavedHomeLocation;                                        // 0x01A4(0x000C) (SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallComponent");
		return ptr;
	}


	void UpdateHomeLocation(const struct FVector& NewHomeLocation);
	void SetOwnerUniqueID(class UUniqueID* OwnerUID);
	void OnThrallPlaced();
	void OnDataLoaded();
};


// Class ConanSandbox.ThrallInfoComponent
// 0x0080 (0x0178 - 0x00F8)
class UThrallInfoComponent : public UActorComponent
{
public:
	struct FThrallInfo                                 ThrallInfo;                                               // 0x00F8(0x0080) (BlueprintVisible, BlueprintReadOnly, Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallInfoComponent");
		return ptr;
	}

};


// Class ConanSandbox.ThrallInterface
// 0x0000 (0x0028 - 0x0028)
class UThrallInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallInterface");
		return ptr;
	}

};


// Class ConanSandbox.ThrallOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UThrallOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallOwnerInterface");
		return ptr;
	}


	void StopDraggingThrall(class AActor* ThrallActor);
	void StartThrallifyingPrisoner(class AActor* ThrallConverter);
	void StartDraggingThrall(class AActor* ThrallActor);
	bool IsDraggingThrall();
	float GetRopeDuration();
	class AActor* GetDraggedThrallActor();
	void ConsumeRopeDuration(float Time);
};


// Class ConanSandbox.ThrallSystemComponent
// 0x0038 (0x0130 - 0x00F8)
class UThrallSystemComponent : public UActorComponent
{
public:
	bool                                               IsPlacingThrall;                                          // 0x00F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EThrallPlacementMode                               ThrallPlacementMode;                                      // 0x00F9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	class UClass*                                      CurrentThrallBrushClass;                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UThrallItem*                                 CurrentThrallItem;                                        // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UThrallComponent*                            CurrentThrallComponent;                                   // 0x0110(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.ThrallSystemComponent");
		return ptr;
	}


	void StopPlacingThrall(class UThrallItem* Item);
	void StartMovingThrall(class UThrallComponent* thrall);
	class AActor* ShowThrallPlaceable(const struct FThrallInfo& ThrallInfo);
	void SetFollowing(class UThrallComponent* thrall, bool follow);
	void ServerSetFollowing(class UThrallComponent* thrall, bool follow);
	bool PlaceThrall();
	bool IsThrallFollowingCharacter(class UThrallComponent* thrall);
	bool HideThrallPlaceable();
	struct FCharacterLayout GetPlacementThrallCharacterLayout();
	class UThrallComponent* FindOrSetupThrallComponent(class AActor* ThrallActor, const struct FThrallInfo& ThrallInfo);
	bool ConsumeThrallResource(class UThrallItem* ThrallItem);
	void ClientOnThrallFollow(class UThrallComponent* thrall, bool following);
	TEnumAsByte<EThrallCanBePlacedResult> CanBePlaced(class UThrallComponent* ThrallComponent, class FString* DebugText, struct FText* DisplayFailText);
};


// Class ConanSandbox.InventoryIconTooltipView
// 0x0010 (0x0258 - 0x0248)
class UInventoryIconTooltipView : public UTooltipWidget
{
public:
	class UGameItem*                                   m_GameItem;                                               // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.InventoryIconTooltipView");
		return ptr;
	}


	void SetItem(class UGameItem* Item);
	class UGameItem* GetItem();
};


// Class ConanSandbox.UIResourceSingleton
// 0x0058 (0x0080 - 0x0028)
class UUIResourceSingleton : public UObject
{
public:
	class UClass*                                      MessageBoxWidgetClass;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MouseBlockWindowClass;                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LoadingScreenWidget;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputBoxWidgetClass;                                      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GamepadHelpOverlayClass;                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 StartupSound;                                             // 0x0050(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  RecipeBorderBitmapNormal;                                 // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  RecipeBorderBitmapThrall;                                 // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SpawnDataTable;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.UIResourceSingleton");
		return ptr;
	}


	class UUIResourceSingleton* STATIC_GetUIResourceSingleton();
	class UUIResourceSingleton* STATIC_CreateUIResourceSingleton(class UObject* WorldContext, class UClass* ClassType);
};


// Class ConanSandbox.UtilityMatrix
// 0x0070 (0x0098 - 0x0028)
class UUtilityMatrix : public UObject
{
public:
	struct FBoxBounds                                  Bounds;                                                   // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              UnitsPerCell;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0044(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.UtilityMatrix");
		return ptr;
	}


	void VisitPointsInSphere(const struct FScriptDelegate& Visitor, const struct FVector& Origin, float Radius);
	void VisitPoints(const struct FScriptDelegate& Visitor);
	bool UpdateUtility(const struct FCellLocation& LocalLocation, float UtilityDelta);
	bool SetUtility(const struct FCellLocation& LocalLocation, float NewUtility);
	void PruneBelow(float Threshold);
	struct FVector GetWorldLocation(const struct FCellLocation& LocalLocation);
	float GetUtility(const struct FCellLocation& LocalLocation);
	int GetPointCount();
	class UUtilityMatrix* STATIC_CreateUtilityXYGrid(class UObject* WorldContextObject, class UObject* Outer, const struct FBoxBounds& Bounds, float UnitsPerCell, int MaxCellCount, float MaxRadius, bool RequireNavigation, class UClass* FilterClass, class AController* Querier, float TraceZExtent);
};


// Class ConanSandbox.WeaponCollisionAnimNotifyState
// 0x0000 (0x0030 - 0x0030)
class UWeaponCollisionAnimNotifyState : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ConanSandbox.WeaponCollisionAnimNotifyState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
