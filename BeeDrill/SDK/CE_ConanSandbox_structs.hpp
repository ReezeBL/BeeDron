#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_Engine_classes.hpp"
#include "CE_CoreUObject_classes.hpp"
#include "CE_UMG_classes.hpp"
#include "CE_UE4Dreamworld_classes.hpp"
#include "CE_SlateCore_classes.hpp"
#include "CE_Slate_classes.hpp"
#include "CE_ExternalDirectory_classes.hpp"
#include "CE_InputCore_classes.hpp"
#include "CE_AIModule_classes.hpp"
#include "CE_OnlineSubsystemUtils_classes.hpp"
#include "CE_DreamworldMods_classes.hpp"
#include "CE_DreamworldPreInit_classes.hpp"
#include "CE_OnlineSubsystem_classes.hpp"
#include "CE_Foliage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ConanSandbox.ECanBePlacedResult
enum class ECanBePlacedResult : uint8_t
{
	ECanBePlacedResult__Success    = 0,
	ECanBePlacedResult__Success_Update = 1,
	ECanBePlacedResult__Fail       = 2,
	ECanBePlacedResult__Fail_Stability = 3,
	ECanBePlacedResult__Fail_Stability_NoData = 4,
	ECanBePlacedResult__Fail_Overlaps = 5,
	ECanBePlacedResult__Fail_LandClaim = 6,
	ECanBePlacedResult__Fail_LoadingBuildingData = 7,
	ECanBePlacedResult__Fail_InsideCollision = 8,
	ECanBePlacedResult__Fail_DisallowedBuildLimit = 9,
	ECanBePlacedResult__Fail_NoSocketData = 10,
	ECanBePlacedResult__Fail_IncorrectSocketType = 11,
	ECanBePlacedResult__ECanBePlacedResult_MAX = 12
};


// Enum ConanSandbox.ESocketConfiguration
enum class ESocketConfiguration : uint8_t
{
	ESocketConfiguration__Normal   = 0,
	ESocketConfiguration__Rotated180 = 1,
	ESocketConfiguration__Rotated90 = 2,
	ESocketConfiguration__Rotated270 = 3,
	ESocketConfiguration__Rotated120 = 4,
	ESocketConfiguration__Rotated240 = 5,
	ESocketConfiguration__SocketConfiguration_MAX = 6,
	ESocketConfiguration__ESocketConfiguration_MAX = 7
};


// Enum ConanSandbox.EBuildingSocketType
enum class EBuildingSocketType : uint8_t
{
	EBuildingSocketType__Building  = 0,
	EBuildingSocketType__Door      = 1,
	EBuildingSocketType__Pillar    = 2,
	EBuildingSocketType__WallTrim  = 3,
	EBuildingSocketType__CastleWall = 4,
	EBuildingSocketType__Fence_Foundation = 5,
	EBuildingSocketType__Fence_Wall = 6,
	EBuildingSocketType__Siege_Foundation = 7,
	EBuildingSocketType__Gate      = 8,
	EBuildingSocketType__Rampart_Defense = 9,
	EBuildingSocketType__Corner    = 10,
	EBuildingSocketType__Hatch     = 11,
	EBuildingSocketType__Strut     = 12,
	EBuildingSocketType__Ladder    = 13,
	EBuildingSocketType__Window    = 14,
	EBuildingSocketType__Custom_Socket_00 = 15,
	EBuildingSocketType__Custom_Socket_01 = 16,
	EBuildingSocketType__Custom_Socket_02 = 17,
	EBuildingSocketType__Custom_Socket_03 = 18,
	EBuildingSocketType__Custom_Socket_04 = 19,
	EBuildingSocketType__Custom_Socket_05 = 20,
	EBuildingSocketType__Custom_Socket_06 = 21,
	EBuildingSocketType__Custom_Socket_07 = 22,
	EBuildingSocketType__Custom_Socket_08 = 23,
	EBuildingSocketType__Custom_Socket_09 = 24,
	EBuildingSocketType__EBuildingSocketType_MAX = 25
};


// Enum ConanSandbox.EGUINavDirection
enum class EGUINavDirection : uint8_t
{
	EGUINavDirection__None         = 0,
	EGUINavDirection__Left         = 1,
	EGUINavDirection__Right        = 2,
	EGUINavDirection__Up           = 3,
	EGUINavDirection__Down         = 4,
	EGUINavDirection__Tab          = 5,
	EGUINavDirection__EGUINavDirection_MAX = 6
};


// Enum ConanSandbox.EGUIModuleActivationReason
enum class EGUIModuleActivationReason : uint8_t
{
	EGUIModuleActivationReason__External = 0,
	EGUIModuleActivationReason__Shortcut = 1,
	EGUIModuleActivationReason__EscapePressed = 2,
	EGUIModuleActivationReason__OtherModuleActivated = 3,
	EGUIModuleActivationReason__EndPlay = 4,
	EGUIModuleActivationReason__EGUIModuleActivationReason_MAX = 5
};


// Enum ConanSandbox.EGUIModuleState
enum class EGUIModuleState : uint8_t
{
	EGUIModuleState__Inactive      = 0,
	EGUIModuleState__ActiveHidden  = 1,
	EGUIModuleState__ActiveVisible = 2,
	EGUIModuleState__EGUIModuleState_MAX = 3
};


// Enum ConanSandbox.EGUIModuleCategory
enum class EGUIModuleCategory : uint8_t
{
	EGUIModuleCategory__HUD        = 0,
	EGUIModuleCategory__Fullscreen = 1,
	EGUIModuleCategory__Popup      = 2,
	EGUIModuleCategory__EGUIModuleCategory_Count = 3,
	EGUIModuleCategory__EGUIModuleCategory_MAX = 4
};


// Enum ConanSandbox.EFCButtonToggleAction
enum class EFCButtonToggleAction : uint8_t
{
	EFCButtonToggleAction__ENever  = 0,
	EFCButtonToggleAction__EAlways = 1,
	EFCButtonToggleAction__EWhenChecked = 2,
	EFCButtonToggleAction__EWhenUnchecked = 3,
	EFCButtonToggleAction__EFCButtonToggleAction_MAX = 4
};


// Enum ConanSandbox.EMessageBoxButtons
enum class EMessageBoxButtons : uint8_t
{
	EMessageBoxButtons__OK         = 0,
	EMessageBoxButtons__OKCancel   = 1,
	EMessageBoxButtons__YesNo      = 2,
	EMessageBoxButtons__Waiting    = 3,
	EMessageBoxButtons__Custom     = 4,
	EMessageBoxButtons__EMessageBoxButtons_MAX = 5
};


// Enum ConanSandbox.EMessageBoxDialogResult
enum class EMessageBoxDialogResult : uint8_t
{
	EMessageBoxDialogResult__Undefined = 0,
	EMessageBoxDialogResult__Yes   = 1,
	EMessageBoxDialogResult__No    = 2,
	EMessageBoxDialogResult__EMessageBoxDialogResult_MAX = 3
};


// Enum ConanSandbox.EGUIControlMode
enum class EGUIControlMode : uint8_t
{
	EGUIControlMode__e_Mouse       = 0,
	EGUIControlMode__e_Gamepad     = 1,
	EGUIControlMode__e_MAX         = 2
};


// Enum ConanSandbox.ECharIntStatID
enum class ECharIntStatID : uint8_t
{
	ECharIntStatID__HealthMax      = 0,
	ECharIntStatID__HealthCurrent  = 1,
	ECharIntStatID__FeatPointsUsed = 2,
	ECharIntStatID__FeatPointsTotal = 3,
	ECharIntStatID__Level          = 4,
	ECharIntStatID__StaminaCurrent = 5,
	ECharIntStatID__StaminaMax     = 6,
	ECharIntStatID__ConsciousnessCurrent = 7,
	ECharIntStatID__ConsciousnessMax = 8,
	ECharIntStatID__ThrallID       = 9,
	ECharIntStatID__ThrallTier     = 10,
	ECharIntStatID__Gender         = 11,
	ECharIntStatID__KnockbackDefense = 12,
	ECharIntStatID__Faction        = 13,
	ECharIntStatID__AttributeHealth = 14,
	ECharIntStatID__AttributeStamina = 15,
	ECharIntStatID__AttributeEncumbrance = 16,
	ECharIntStatID__AttributeMight = 17,
	ECharIntStatID__AttributeAccuracy = 18,
	ECharIntStatID__AttributeAthleticism = 19,
	ECharIntStatID__AttributeMetabolism = 20,
	ECharIntStatID__AttributeResilience = 21,
	ECharIntStatID__ECharIntStatID_MAX = 22
};


// Enum ConanSandbox.ECharFloatStatID
enum class ECharFloatStatID : uint8_t
{
	ECharFloatStatID__ThrallCraftingSpeed = 0,
	ECharFloatStatID__ThrallCraftingCost = 1,
	ECharFloatStatID__ThrallCraftingFuel = 2,
	ECharFloatStatID__ThrallEntertainerPotency = 3,
	ECharFloatStatID__DamageModifierMelee = 4,
	ECharFloatStatID__DamageModifierRanged = 5,
	ECharFloatStatID__NaturalArmor = 6,
	ECharFloatStatID__ThrallCorruptionCleansePotency = 7,
	ECharFloatStatID__ThrallCorruptionCleanseLimit = 8,
	ECharFloatStatID__Armor        = 9,
	ECharFloatStatID__EncumbranceWeight = 10,
	ECharFloatStatID__KilledXPModifier = 11,
	ECharFloatStatID__CurrentEncumbrance = 12,
	ECharFloatStatID__TemperatureModification = 13,
	ECharFloatStatID__PenisScaleModifier = 14,
	ECharFloatStatID__KnockbackFragilityDR = 15,
	ECharFloatStatID__KnockbackThresholdDR = 16,
	ECharFloatStatID__ECharFloatStatID_MAX = 17
};


// Enum ConanSandbox.EStatModifierUpdateMode
enum class EStatModifierUpdateMode : uint8_t
{
	EStatModifierUpdateMode__Replace = 0,
	EStatModifierUpdateMode__Merge = 1,
	EStatModifierUpdateMode__EStatModifierUpdateMode_MAX = 2
};


// Enum ConanSandbox.EStatModifierOperator
enum class EStatModifierOperator : uint8_t
{
	EStatModifierOperator__Multiply = 0,
	EStatModifierOperator__Add     = 1,
	EStatModifierOperator__EStatModifierOperator_MAX = 2
};


// Enum ConanSandbox.EStatModifierID
enum class EStatModifierID : uint8_t
{
	EStatModifierID__Default       = 0,
	EStatModifierID__Corruption    = 1,
	EStatModifierID__PeopleCarried = 2,
	EStatModifierID__EquippedItems = 3,
	EStatModifierID__Weather       = 4,
	EStatModifierID__TimeOfDay     = 5,
	EStatModifierID__Shelter       = 6,
	EStatModifierID__Buff          = 7,
	EStatModifierID__Item          = 8,
	EStatModifierID__Temperature   = 9,
	EStatModifierID__EStatModifierID_MAX = 10
};


// Enum ConanSandbox.EStatModifierMode
enum class EStatModifierMode : uint8_t
{
	EStatModifierMode__Full        = 0,
	EStatModifierMode__Base        = 1,
	EStatModifierMode__EStatModifierMode_MAX = 2
};


// Enum ConanSandbox.ENudity
enum class ENudity : uint8_t
{
	ENudity__No                    = 0,
	ENudity__Partial               = 1,
	ENudity__Full                  = 2,
	ENudity__ENudity_MAX           = 3
};


// Enum ConanSandbox.EXboxUserStateError
enum class EXboxUserStateError : uint8_t
{
	EXboxUserStateError__NoUser    = 0,
	EXboxUserStateError__WrongUser = 1,
	EXboxUserStateError__NoPairing = 2,
	EXboxUserStateError__UserSignedOut = 3,
	EXboxUserStateError__NetworkConnectionLost = 4,
	EXboxUserStateError__NetworkConnectionLostClient = 5,
	EXboxUserStateError__Other     = 6,
	EXboxUserStateError__FailedToJoinGame = 7,
	EXboxUserStateError__AttemptingToJoin = 8,
	EXboxUserStateError__GameSessionDoesNotExist = 9,
	EXboxUserStateError__GameSessionFull = 10,
	EXboxUserStateError__ControllerDisconnected = 11,
	EXboxUserStateError__SessionDestroyedOnResumeFromSuspend = 12,
	EXboxUserStateError__NudityCensorshipChanged = 13,
	EXboxUserStateError__Disconnecting = 14,
	EXboxUserStateError__Default   = 15,
	EXboxUserStateError__PlayTogNoConnection = 16,
	EXboxUserStateError__PlayTogChooseModeStartCoop = 17,
	EXboxUserStateError__PlayTogChooseModeContinueCoop = 18,
	EXboxUserStateError__PlayTogCantCoop = 19,
	EXboxUserStateError__PlayTogDedServerSelect = 20,
	EXboxUserStateError__PlayTogOffline = 21,
	EXboxUserStateError__PlayTogNewGame = 22,
	EXboxUserStateError__PlayTogPartyTooLarge = 23,
	EXboxUserStateError__LastError = 24,
	EXboxUserStateError__EXboxUserStateError_MAX = 25
};


// Enum ConanSandbox.EClientState
enum class EClientState : uint8_t
{
	EClientState__Startup          = 0,
	EClientState__MainMenu         = 1,
	EClientState__LoadingScreen    = 2,
	EClientState__Playing          = 3,
	EClientState__CharacterCreation = 4,
	EClientState__EClientState_MAX = 5
};


// Enum ConanSandbox.ECharacterState
enum class ECharacterState : uint8_t
{
	ECharacterState__Aggressive    = 0,
	ECharacterState__Dead          = 1,
	ECharacterState__Knockbacked   = 2,
	ECharacterState__EquipItem     = 3,
	ECharacterState__Passive       = 4,
	ECharacterState__Unconscious   = 5,
	ECharacterState__Stunned       = 6,
	ECharacterState__Walk          = 7,
	ECharacterState__Dodge         = 8,
	ECharacterState__Channeling    = 9,
	ECharacterState__WeaponBreak   = 10,
	ECharacterState__WeaponInit    = 11,
	ECharacterState__Climbing      = 12,
	ECharacterState__Mounted       = 13,
	ECharacterState__ShouldBeDeadByCursedWall = 14,
	ECharacterState__ECharacterState_MAX = 15
};


// Enum ConanSandbox.EFIFOStyle
enum class EFIFOStyle : uint8_t
{
	EFIFOStyle__Default            = 0,
	EFIFOStyle__Discovery          = 1,
	EFIFOStyle__Journey            = 2,
	EFIFOStyle__Purge              = 3,
	EFIFOStyle__EFIFOStyle_MAX     = 4
};


// Enum ConanSandbox.CharacterCrime
enum class ECharacterCrime : uint8_t
{
	CharacterCrime__DisobedienceOfAPriest = 0,
	CharacterCrime__DecapitationOfAPriest = 1,
	CharacterCrime__SullyingAVirgin = 2,
	CharacterCrime__LecherousBehavior = 3,
	CharacterCrime__DrunkenBrawling = 4,
	CharacterCrime__IncitingARiot  = 5,
	CharacterCrime__ImpersonatingAPriestess = 6,
	CharacterCrime__KillingASacredSerpent = 7,
	CharacterCrime__StranglingAMoneyLender = 8,
	CharacterCrime__PunchingACamel = 9,
	CharacterCrime__Pickpocketing  = 10,
	CharacterCrime__DefecatingOnAStatue = 11,
	CharacterCrime__MutilationOfAGuardsmen = 12,
	CharacterCrime__AssassinatingAMerchant = 13,
	CharacterCrime__ComboSkipping  = 14,
	CharacterCrime__SpreadingMaliciousRumors = 15,
	CharacterCrime__Debauchery     = 16,
	CharacterCrime__DefilingATemple = 17,
	CharacterCrime__CorruptingTheYouth = 18,
	CharacterCrime__ContaminatingAWell = 19,
	CharacterCrime__BribingAWatchman = 20,
	CharacterCrime__FornicatingWithLowBeasts = 21,
	CharacterCrime__PoorUseOfPunctuation = 22,
	CharacterCrime__FixingGladiatorialMatches = 23,
	CharacterCrime__CheatingAtDice = 24,
	CharacterCrime__SkullduggeryAndBuggery = 25,
	CharacterCrime__SwindlingABaron = 26,
	CharacterCrime__Blackmail      = 27,
	CharacterCrime__VillainyAndRascality = 28,
	CharacterCrime__LewdBehaviorWithCorpses = 29,
	CharacterCrime__SingingBawdyBallads = 30,
	CharacterCrime__Banditry       = 31,
	CharacterCrime__CrudeLanguage  = 32,
	CharacterCrime__BreakingAnOath = 33,
	CharacterCrime__FreeingSlaves  = 34,
	CharacterCrime__SlaveTakingWithoutAPermit = 35,
	CharacterCrime__DestructionOfProperty = 36,
	CharacterCrime__Piracy         = 37,
	CharacterCrime__BreakingTheFourthWall = 38,
	CharacterCrime__CulturalAppropriation = 39,
	CharacterCrime__UnauthorizedDismemberment = 40,
	CharacterCrime__CharacterCrime_MAX = 41
};


// Enum ConanSandbox.CharacterRace
enum class ECharacterRace : uint8_t
{
	CharacterRace__None            = 0,
	CharacterRace__Hyborian        = 1,
	CharacterRace__Cimmerian       = 2,
	CharacterRace__Stygian         = 3,
	CharacterRace__TribalHimelian  = 4,
	CharacterRace__HyrkanianTuranian = 5,
	CharacterRace__Khitan          = 6,
	CharacterRace__Kushite         = 7,
	CharacterRace__Nordheimer      = 8,
	CharacterRace__Pict            = 9,
	CharacterRace__Shemite         = 10,
	CharacterRace__Darfari         = 11,
	CharacterRace__Vendhyan        = 12,
	CharacterRace__Zamorian        = 13,
	CharacterRace__Zingaran        = 14,
	CharacterRace__CharacterRace_MAX = 15
};


// Enum ConanSandbox.CharacterGod
enum class ECharacterGod : uint8_t
{
	CharacterGod__None             = 0,
	CharacterGod__Crom             = 1,
	CharacterGod__Set              = 2,
	CharacterGod__Yog              = 3,
	CharacterGod__Mitra            = 4,
	CharacterGod__Derketo          = 5,
	CharacterGod__JhebbalSag       = 6,
	CharacterGod__Bel              = 7,
	CharacterGod__Ymir             = 8,
	CharacterGod__CharacterGod_MAX = 9
};


// Enum ConanSandbox.ERank
enum class ERank : uint8_t
{
	ERank__Member                  = 0,
	ERank__Officer                 = 1,
	ERank__GuildMaster             = 2,
	ERank__ERank_MAX               = 3,
	ERank__InvalidRank             = 4
};


// Enum ConanSandbox.EnergyTypes
enum class EnergyTypes : uint8_t
{
	EnergyTypes__EnergyType_Corruption = 0,
	EnergyTypes__EnergyType_Temperature = 1,
	EnergyTypes__EnergyType_MAX    = 2
};


// Enum ConanSandbox.EPurgeEventType
enum class EPurgeEventType : uint8_t
{
	EPurgeEventType__None          = 0,
	EPurgeEventType__PurgePrep     = 1,
	EPurgeEventType__WaveBegin     = 2,
	EPurgeEventType__WaveEnded     = 3,
	EPurgeEventType__PurgeEnded    = 4,
	EPurgeEventType__EPurgeEventType_MAX = 5
};


// Enum ConanSandbox.EFCDamageType
enum class EFCDamageType : uint8_t
{
	EFCDamageType__Normal          = 0,
	EFCDamageType__Blocked         = 1,
	EFCDamageType__Critical        = 2,
	EFCDamageType__Glanced         = 3,
	EFCDamageType__EFCDamageType_MAX = 4
};


// Enum ConanSandbox.EInviteResponse
enum class EInviteResponse : uint8_t
{
	EInviteResponse__Accepted      = 0,
	EInviteResponse__Declined      = 1,
	EInviteResponse__TimedOut      = 2,
	EInviteResponse__EInviteResponse_MAX = 3
};


// Enum ConanSandbox.WeaponArcheTypes
enum class EWeaponArcheTypes : uint8_t
{
	WeaponArcheTypes__OneHanded    = 0,
	WeaponArcheTypes__TwoHanded    = 1,
	WeaponArcheTypes__OneHanded_Ranged = 2,
	WeaponArcheTypes__TwoHanded_Ranged = 3,
	WeaponArcheTypes__Shield       = 4,
	WeaponArcheTypes__Ammunition   = 5,
	WeaponArcheTypes__Poison       = 6,
	WeaponArcheTypes__None         = 7,
	WeaponArcheTypes__WeaponArcheTypes_MAX = 8
};


// Enum ConanSandbox.EAttackTypeSimple
enum class EAttackTypeSimple : uint8_t
{
	EAttackTypeSimple__Light       = 0,
	EAttackTypeSimple__Heavy       = 1,
	EAttackTypeSimple__EAttackTypeSimple_MAX = 2
};


// Enum ConanSandbox.EItemFloatStatID
enum class EItemFloatStatID : uint8_t
{
	EItemFloatStatID__WeaponStaminaHeavyChargedRegenModifier = 0,
	EItemFloatStatID__WeaponSpeedHeavyChargedModifier = 1,
	EItemFloatStatID__ConeAngle    = 2,
	EItemFloatStatID__ConeMaxDistance = 3,
	EItemFloatStatID__ArmourValue  = 4,
	EItemFloatStatID__EncumbranceWeight = 5,
	EItemFloatStatID__StaminaCostMultiplier = 6,
	EItemFloatStatID__MaxDurability = 7,
	EItemFloatStatID__CurrentDurability = 8,
	EItemFloatStatID__TimeSpentCrafting = 9,
	EItemFloatStatID__BurnTime     = 10,
	EItemFloatStatID__ArmorPen     = 11,
	EItemFloatStatID__PerishRate   = 12,
	EItemFloatStatID__ThrallCraftingSpeed = 13,
	EItemFloatStatID__ThrallCraftingCost = 14,
	EItemFloatStatID__ThrallCraftingFuel = 15,
	EItemFloatStatID__TimeToCraft  = 16,
	EItemFloatStatID__DefaultTimeToCraft = 17,
	EItemFloatStatID__MaxAttackReach = 18,
	EItemFloatStatID__MinAttackDistance = 19,
	EItemFloatStatID__ThrallEntertainerPotency = 20,
	EItemFloatStatID__WeaponEffectWidth = 21,
	EItemFloatStatID__WeaponEffectHeight = 22,
	EItemFloatStatID__MinAttackReach = 23,
	EItemFloatStatID__StaminaClimbingCostMultiplier = 24,
	EItemFloatStatID__RepairXP     = 25,
	EItemFloatStatID__CoolDownTime = 26,
	EItemFloatStatID__ReuseTime    = 27,
	EItemFloatStatID__EItemFloatStatID_MAX = 28
};


// Enum ConanSandbox.EItemIntStatID
enum class EItemIntStatID : uint8_t
{
	EItemIntStatID__MaxStackSize   = 0,
	EItemIntStatID__StackSize      = 1,
	EItemIntStatID__WeaponStaminaAttackSingleBasic = 2,
	EItemIntStatID__WeaponStaminaAttackSingleSpecial = 3,
	EItemIntStatID__WeaponStaminaAttackDualBasic = 4,
	EItemIntStatID__WeaponStaminaAttackDualSpecial = 5,
	EItemIntStatID__DamageHealthLight_OnHit = 6,
	EItemIntStatID__DamageHealthHeavy_OnHit = 7,
	EItemIntStatID__DamageStaminaLight_OnHit = 8,
	EItemIntStatID__DamageStaminaHeavy_OnHit = 9,
	EItemIntStatID__DamageHealthLight_OnBlock = 10,
	EItemIntStatID__DamageHealthHeavy_OnBlock = 11,
	EItemIntStatID__DamageStaminaLight_OnBlock = 12,
	EItemIntStatID__DamageStaminaHeavy_OnBlock = 13,
	EItemIntStatID__HarvestDamage  = 14,
	EItemIntStatID__KnockbackOffenseBasic = 15,
	EItemIntStatID__KnockbackOffenseSpecial = 16,
	EItemIntStatID__EquipLocation  = 17,
	EItemIntStatID__SoundPhysicalSurface = 18,
	EItemIntStatID__WeaponStatusCurrent = 19,
	EItemIntStatID__WeaponStatusDefault = 20,
	EItemIntStatID__WeaponStatusDecrement = 21,
	EItemIntStatID__CreationTime   = 22,
	EItemIntStatID__WeaponType     = 23,
	EItemIntStatID__ItemTier       = 24,
	EItemIntStatID__FoodAmount     = 25,
	EItemIntStatID__DrinkAmount    = 26,
	EItemIntStatID__RepairItem1    = 27,
	EItemIntStatID__RepairItem1_Amount = 28,
	EItemIntStatID__RepairItem2    = 29,
	EItemIntStatID__RepairItem2_Amount = 30,
	EItemIntStatID__RepairItem3    = 31,
	EItemIntStatID__RepairItem3_Amount = 32,
	EItemIntStatID__PerishTo       = 33,
	EItemIntStatID__DamageConcussiveLightOnHit = 34,
	EItemIntStatID__DamageConcussiveHeavyOnHit = 35,
	EItemIntStatID__DamageConcussiveLightOnBlock = 36,
	EItemIntStatID__DamageConcussiveHeavyOnBlock = 37,
	EItemIntStatID__KnockbackDefense = 38,
	EItemIntStatID__ThrallIsConverted = 39,
	EItemIntStatID__ActiveAmmunition = 40,
	EItemIntStatID__WeaponUsage    = 41,
	EItemIntStatID__DyeIndex1      = 42,
	EItemIntStatID__DyeIndex2      = 43,
	EItemIntStatID__DyeIndex3      = 44,
	EItemIntStatID__DyeIndex4      = 45,
	EItemIntStatID__ThrallID       = 46,
	EItemIntStatID__ThrallTier     = 47,
	EItemIntStatID__DamageTier     = 48,
	EItemIntStatID__ItemContainerSize = 49,
	EItemIntStatID__AppliedBuffItemId = 50,
	EItemIntStatID__AppliedBuffStackMax = 51,
	EItemIntStatID__AppliedBuffStackCurrent = 52,
	EItemIntStatID__AppliedBuffPotency = 53,
	EItemIntStatID__CraftingCharacterUniqueIDLow = 54,
	EItemIntStatID__CraftingCharacterUniqueIDHigh = 55,
	EItemIntStatID__DynamicItemFlags = 56,
	EItemIntStatID__FeatLearnedFromNPC = 57,
	EItemIntStatID__BuildingScore  = 58,
	EItemIntStatID__ArmorType      = 59,
	EItemIntStatID__KnockbackOffenseBasicOnBlock = 60,
	EItemIntStatID__KnockbackOffenseSpecialOnBlock = 61,
	EItemIntStatID__IsInRepairState = 62,
	EItemIntStatID__CurrentEnchantID = 63,
	EItemIntStatID__LeavesGhostItem = 64,
	EItemIntStatID__SelectionWeight = 65,
	EItemIntStatID__EItemIntStatID_MAX = 66
};


// Enum ConanSandbox.EDynamicItemFlags
enum class EDynamicItemFlags : uint8_t
{
	EDynamicItemFlags__IsArtisanRecipe = 0,
	EDynamicItemFlags__EDynamicItemFlags_MAX = 1
};


// Enum ConanSandbox.EAttackType
enum class EAttackType : uint8_t
{
	EAttackType__NA                = 0,
	EAttackType__Melee             = 1,
	EAttackType__Charge            = 2,
	EAttackType__Taunt             = 3,
	EAttackType__BallisticProjectile = 4,
	EAttackType__Shield            = 5,
	EAttackType__EAttackType_MAX   = 6
};


// Enum ConanSandbox.EDamageTiers
enum class EDamageTiers : uint8_t
{
	EDamageTiers__Default          = 0,
	EDamageTiers__Stone            = 1,
	EDamageTiers__Iron             = 2,
	EDamageTiers__Steel            = 3,
	EDamageTiers__EDamageTiers_MAX = 4
};


// Enum ConanSandbox.WeaponItemTypes
enum class EWeaponItemTypes : uint8_t
{
	WeaponItemTypes__None          = 0,
	WeaponItemTypes__Sword         = 1,
	WeaponItemTypes__Mace2H        = 2,
	WeaponItemTypes__Hatchet       = 3,
	WeaponItemTypes__Pickaxe       = 4,
	WeaponItemTypes__Mace          = 5,
	WeaponItemTypes__Spear         = 6,
	WeaponItemTypes__Spear2H       = 7,
	WeaponItemTypes__Axe           = 8,
	WeaponItemTypes__Shield        = 9,
	WeaponItemTypes__FistWeapon    = 10,
	WeaponItemTypes__Throwing      = 11,
	WeaponItemTypes__Bow           = 12,
	WeaponItemTypes__Crossbow      = 13,
	WeaponItemTypes__Dagger        = 14,
	WeaponItemTypes__Multitool     = 15,
	WeaponItemTypes__SetTool       = 16,
	WeaponItemTypes__YogTool       = 17,
	WeaponItemTypes__MitraTool     = 18,
	WeaponItemTypes__YmirTool      = 19,
	WeaponItemTypes__Sickle        = 20,
	WeaponItemTypes__Cleaver       = 21,
	WeaponItemTypes__JhebbalTool   = 22,
	WeaponItemTypes__DerketoTool   = 23,
	WeaponItemTypes__Skinningknife = 24,
	WeaponItemTypes__CustomTool00  = 25,
	WeaponItemTypes__CustomTool01  = 26,
	WeaponItemTypes__CustomTool02  = 27,
	WeaponItemTypes__CustomTool03  = 28,
	WeaponItemTypes__CustomTool04  = 29,
	WeaponItemTypes__CustomTool05  = 30,
	WeaponItemTypes__CustomTool06  = 31,
	WeaponItemTypes__CustomTool07  = 32,
	WeaponItemTypes__CustomTool08  = 33,
	WeaponItemTypes__CustomTool09  = 34,
	WeaponItemTypes__RepairTool    = 35,
	WeaponItemTypes__Orb           = 36,
	WeaponItemTypes__WeaponItemTypes_MAX = 37
};


// Enum ConanSandbox.EGameItemGUICategory
enum class EGameItemGUICategory : uint8_t
{
	EGameItemGUICategory__Weapon   = 0,
	EGameItemGUICategory__Armor    = 1,
	EGameItemGUICategory__Material = 2,
	EGameItemGUICategory__Consumable = 3,
	EGameItemGUICategory__BuildingItem = 4,
	EGameItemGUICategory__CategoryCount = 5,
	EGameItemGUICategory__EGameItemGUICategory_MAX = 6
};


// Enum ConanSandbox.EGameItemType
enum class EGameItemType : uint8_t
{
	EGameItemType__GameItem        = 0,
	EGameItemType__Recipe          = 1,
	EGameItemType__Reference       = 2,
	EGameItemType__Feat            = 3,
	EGameItemType__Emote           = 4,
	EGameItemType__Thrall          = 5,
	EGameItemType__ThrallRecipe    = 6,
	EGameItemType__EGameItemType_MAX = 7
};


// Enum ConanSandbox.ClaimChannel
enum class EClaimChannel : uint8_t
{
	ClaimChannel__Building         = 0,
	ClaimChannel__Foliage          = 1,
	ClaimChannel__ClaimChannel_MAX = 2
};


// Enum ConanSandbox.ETransformMask
enum class ETransformMask : uint8_t
{
	ETransformMask__Location       = 0,
	ETransformMask__Rotation       = 1,
	ETransformMask__Scale          = 2,
	ETransformMask__All            = 3,
	ETransformMask__ETransformMask_MAX = 4
};


// Enum ConanSandbox.EConanPlayerType
enum class EConanPlayerType : uint8_t
{
	EConanPlayerType__ListenServerHost = 0,
	EConanPlayerType__ListenServerClient = 1,
	EConanPlayerType__DedicatedServerClient = 2,
	EConanPlayerType__PlayerTypeNone = 3,
	EConanPlayerType__EConanPlayerType_MAX = 4
};


// Enum ConanSandbox.EObjectDestructionObjectType
enum class EObjectDestructionObjectType : uint8_t
{
	EObjectDestructionObjectType__BuildingPiece = 0,
	EObjectDestructionObjectType__Placeable = 1,
	EObjectDestructionObjectType__Thrall = 2,
	EObjectDestructionObjectType__EObjectDestructionObjectType_MAX = 3
};


// Enum ConanSandbox.EInventoryType
enum class EInventoryType : uint8_t
{
	EInventoryType__Backpack       = 0,
	EInventoryType__Equipment      = 1,
	EInventoryType__ShortcutBar    = 2,
	EInventoryType__Recipes        = 3,
	EInventoryType__PlaceableInventory = 4,
	EInventoryType__CraftingQueue  = 5,
	EInventoryType__Feats          = 6,
	EInventoryType__Emotes         = 7,
	EInventoryType__CraftingArtisanInventory = 8,
	EInventoryType__CraftingArtisanRecipeInventory = 9,
	EInventoryType__SiegeWeaponCounterWeightInventory = 10,
	EInventoryType__Invalid        = 11,
	EInventoryType__EInventoryType_MAX = 12
};


// Enum ConanSandbox.EquipmentSlots
enum class EquipmentSlots : uint8_t
{
	EquipmentSlots__None           = 0,
	EquipmentSlots__MainHand       = 1,
	EquipmentSlots__OffHand        = 2,
	EquipmentSlots__Head           = 3,
	EquipmentSlots__Torso          = 4,
	EquipmentSlots__Arms           = 5,
	EquipmentSlots__Legs           = 6,
	EquipmentSlots__Feet           = 7,
	EquipmentSlots__DualHand       = 8,
	EquipmentSlots__ResidentUnarmedLeft = 9,
	EquipmentSlots__ResidentUnarmedRight = 10,
	EquipmentSlots__WarPaint       = 11,
	EquipmentSlots__SlotCount      = 12,
	EquipmentSlots__EquipmentSlots_MAX = 13
};


// Enum ConanSandbox.ETransientMarkerType
enum class ETransientMarkerType : uint8_t
{
	ETransientMarkerType__Purge    = 0,
	ETransientMarkerType__BoundBed = 1,
	ETransientMarkerType__BoundBedroll = 2,
	ETransientMarkerType__ETransientMarkerType_MAX = 3
};


// Enum ConanSandbox.EKnockbackStage
enum class EKnockbackStage : uint8_t
{
	EKnockbackStage__None          = 0,
	EKnockbackStage__SlideOnGround = 1,
	EKnockbackStage__InAir         = 2,
	EKnockbackStage__KnockoverAnim = 3,
	EKnockbackStage__KnockbackEnd  = 4,
	EKnockbackStage__EKnockbackStage_MAX = 5
};


// Enum ConanSandbox.EAttributeType
enum class EAttributeType : uint8_t
{
	EAttributeType__Health         = 0,
	EAttributeType__Stamina        = 1,
	EAttributeType__Encumbrance    = 2,
	EAttributeType__Might          = 3,
	EAttributeType__Accuracy       = 4,
	EAttributeType__Athleticism    = 5,
	EAttributeType__Metabolism     = 6,
	EAttributeType__Resilience     = 7,
	EAttributeType__EAttributeType_MAX = 8
};


// Enum ConanSandbox.ECharacterEmotes
enum class ECharacterEmotes : uint8_t
{
	ECharacterEmotes__None         = 0,
	ECharacterEmotes__Wave         = 1,
	ECharacterEmotes__Surrender    = 2,
	ECharacterEmotes__Taunt        = 3,
	ECharacterEmotes__Salute       = 4,
	ECharacterEmotes__Cheer        = 5,
	ECharacterEmotes__Kneel        = 6,
	ECharacterEmotes__SitOnGround  = 7,
	ECharacterEmotes__Dance        = 8,
	ECharacterEmotes__ByCrom       = 9,
	ECharacterEmotes__BySet        = 10,
	ECharacterEmotes__ByYog        = 11,
	ECharacterEmotes__ByDerketo    = 12,
	ECharacterEmotes__ByJhebbalSag = 13,
	ECharacterEmotes__ByMitra      = 14,
	ECharacterEmotes__ByBel        = 15,
	ECharacterEmotes__PlayDrumds   = 16,
	ECharacterEmotes__DerketoDance = 17,
	ECharacterEmotes__ChickenDance = 18,
	ECharacterEmotes__Pissing      = 19,
	ECharacterEmotes__GuardSwordAndShield = 20,
	ECharacterEmotes__GuardBow     = 21,
	ECharacterEmotes__Hide         = 22,
	ECharacterEmotes__Tinkering    = 23,
	ECharacterEmotes__TalkingMale1 = 24,
	ECharacterEmotes__TalkingMale2 = 25,
	ECharacterEmotes__TalkingFemale1 = 26,
	ECharacterEmotes__TalkingFemale2 = 27,
	ECharacterEmotes__WorkingAnvil = 28,
	ECharacterEmotes__HakkaDance   = 29,
	ECharacterEmotes__Grovel       = 30,
	ECharacterEmotes__Ponder       = 31,
	ECharacterEmotes__ClapBig      = 32,
	ECharacterEmotes__ClapSmall    = 33,
	ECharacterEmotes__Point        = 34,
	ECharacterEmotes__BearHug      = 35,
	ECharacterEmotes__Shrug        = 36,
	ECharacterEmotes__DanceAquilonian = 37,
	ECharacterEmotes__DanceCimmerian = 38,
	ECharacterEmotes__DanceKhitan  = 39,
	ECharacterEmotes__DanceHaka    = 40,
	ECharacterEmotes__DanceBelly   = 41,
	ECharacterEmotes__DanceSexy    = 42,
	ECharacterEmotes__LayingSeductive = 43,
	ECharacterEmotes__Squirming    = 44,
	ECharacterEmotes__ComeHere     = 45,
	ECharacterEmotes__Spank        = 46,
	ECharacterEmotes__BlowKiss     = 47,
	ECharacterEmotes__ShowOff      = 48,
	ECharacterEmotes__CombHair     = 49,
	ECharacterEmotes__Flirt1       = 50,
	ECharacterEmotes__Flirt2       = 51,
	ECharacterEmotes__Bow          = 52,
	ECharacterEmotes__PraySitting  = 53,
	ECharacterEmotes__PrayStanding = 54,
	ECharacterEmotes__SleepOnGround = 55,
	ECharacterEmotes__ArmsCrossed  = 56,
	ECharacterEmotes__Submissive   = 57,
	ECharacterEmotes__ShiftWeight  = 58,
	ECharacterEmotes__Score        = 59,
	ECharacterEmotes__LaughSmall   = 60,
	ECharacterEmotes__LaughBig     = 61,
	ECharacterEmotes__Sigh         = 62,
	ECharacterEmotes__Yawn         = 63,
	ECharacterEmotes__Wounded      = 64,
	ECharacterEmotes__ShakeFist    = 65,
	ECharacterEmotes__FistPunch    = 66,
	ECharacterEmotes__Spit         = 67,
	ECharacterEmotes__Chestpound   = 68,
	ECharacterEmotes__Chicken      = 69,
	ECharacterEmotes__SlitThroat   = 70,
	ECharacterEmotes__Cheer1       = 71,
	ECharacterEmotes__Cheer2       = 72,
	ECharacterEmotes__PushUps      = 73,
	ECharacterEmotes__Idle1        = 74,
	ECharacterEmotes__Idle2        = 75,
	ECharacterEmotes__Idle3        = 76,
	ECharacterEmotes__Relaxing1    = 77,
	ECharacterEmotes__Relaxing2    = 78,
	ECharacterEmotes__Relaxing3    = 79,
	ECharacterEmotes__Eating       = 80,
	ECharacterEmotes__ECharacterEmotes_MAX = 81
};


// Enum ConanSandbox.EThrallProfession
enum class EThrallProfession : uint8_t
{
	EThrallProfession__Performer   = 0,
	EThrallProfession__Archer      = 1,
	EThrallProfession__Blacksmith  = 2,
	EThrallProfession__Armorer     = 3,
	EThrallProfession__Carpenter   = 4,
	EThrallProfession__Smelter     = 5,
	EThrallProfession__Tanner      = 6,
	EThrallProfession__Cook        = 7,
	EThrallProfession__Fighter     = 8,
	EThrallProfession__Taskmaster  = 9,
	EThrallProfession__Merchant    = 10,
	EThrallProfession__Mason       = 11,
	EThrallProfession__Lamplighter = 12,
	EThrallProfession__Priest      = 13,
	EThrallProfession__Alchemist   = 14,
	EThrallProfession__Bearer      = 15,
	EThrallProfession__ThrallProfession_MAX = 16,
	EThrallProfession__EThrallProfession_MAX = 17
};


// Enum ConanSandbox.EThrallTier
enum class EThrallTier : uint8_t
{
	EThrallTier__None              = 0,
	EThrallTier__Amateur           = 1,
	EThrallTier__Novice            = 2,
	EThrallTier__Apprentice        = 3,
	EThrallTier__Skilled           = 4,
	EThrallTier__Adept             = 5,
	EThrallTier__Journeyman        = 6,
	EThrallTier__High              = 7,
	EThrallTier__Expert            = 8,
	EThrallTier__Veteran           = 9,
	EThrallTier__Master            = 10,
	EThrallTier__Arch              = 11,
	EThrallTier__Legendary         = 12,
	EThrallTier__Chosen            = 13,
	EThrallTier__ThrallTier_MAX    = 14,
	EThrallTier__EThrallTier_MAX   = 15
};


// Enum ConanSandbox.JourneyChapter
enum class EJourneyChapter : uint8_t
{
	JourneyChapter__ChapterI       = 0,
	JourneyChapter__ChapterII      = 1,
	JourneyChapter__ChapterIII     = 2,
	JourneyChapter__ChapterIV      = 3,
	JourneyChapter__ChapterV       = 4,
	JourneyChapter__ChapterVI      = 5,
	JourneyChapter__ChapterVII     = 6,
	JourneyChapter__ChapterVIII    = 7,
	JourneyChapter__ChapterIX      = 8,
	JourneyChapter__ChapterX       = 9,
	JourneyChapter__JourneyChapter_MAX = 10
};


// Enum ConanSandbox.EInputBoxDialogResult
enum class EInputBoxDialogResult : uint8_t
{
	EInputBoxDialogResult__Undefined = 0,
	EInputBoxDialogResult__OK      = 1,
	EInputBoxDialogResult__Cancel  = 2,
	EInputBoxDialogResult__EInputBoxDialogResult_MAX = 3
};


// Enum ConanSandbox.EItemSortType
enum class EItemSortType : uint8_t
{
	EItemSortType__ByName          = 0,
	EItemSortType__HeaviestFirst   = 1,
	EItemSortType__Custom          = 2,
	EItemSortType__SortTypeCount   = 3,
	EItemSortType__EItemSortType_MAX = 4
};


// Enum ConanSandbox.EInventoryItemAction
enum class EInventoryItemAction : uint8_t
{
	EInventoryItemAction__MoreMenu = 0,
	EInventoryItemAction__ShowInfo = 1,
	EInventoryItemAction__Use      = 2,
	EInventoryItemAction__Equip    = 3,
	EInventoryItemAction__Give     = 4,
	EInventoryItemAction__GiveAll  = 5,
	EInventoryItemAction__Take     = 6,
	EInventoryItemAction__TakeAll  = 7,
	EInventoryItemAction__Drop     = 8,
	EInventoryItemAction__DropAll  = 9,
	EInventoryItemAction__Repair   = 10,
	EInventoryItemAction__SplitStack = 11,
	EInventoryItemAction__Dye      = 12,
	EInventoryItemAction__Craft    = 13,
	EInventoryItemAction__CraftTen = 14,
	EInventoryItemAction__CraftAll = 15,
	EInventoryItemAction__ClearQueue = 16,
	EInventoryItemAction__UnEquip  = 17,
	EInventoryItemAction__EInventoryItemAction_MAX = 18
};


// Enum ConanSandbox.ESteamFilters
enum class ESteamFilters : uint8_t
{
	ESteamFilters__Internet        = 0,
	ESteamFilters__Official        = 1,
	ESteamFilters__Favorites       = 2,
	ESteamFilters__History         = 3,
	ESteamFilters__Friends         = 4,
	ESteamFilters__Unofficial      = 5,
	ESteamFilters__SteamFilters_MAX = 6,
	ESteamFilters__ESteamFilters_MAX = 7
};


// Enum ConanSandbox.EServerCommunity
enum class EServerCommunity : uint8_t
{
	EServerCommunity__All          = 0,
	EServerCommunity__Purist       = 1,
	EServerCommunity__Relaxed      = 2,
	EServerCommunity__HardCore     = 3,
	EServerCommunity__RolePlaying  = 4,
	EServerCommunity__Experimental = 5,
	EServerCommunity__Community_MAX = 6,
	EServerCommunity__EServerCommunity_MAX = 7
};


// Enum ConanSandbox.EFavoriteFlag
enum class EFavoriteFlag : uint8_t
{
	EFavoriteFlag__None            = 0,
	EFavoriteFlag__Favorite        = 1,
	EFavoriteFlag__History         = 2,
	EFavoriteFlag__Unknown         = 3,
	EFavoriteFlag__EFavoriteFlag_MAX = 4
};


// Enum ConanSandbox.EServerRegion
enum class EServerRegion : uint8_t
{
	EServerRegion__EU              = 0,
	EServerRegion__America         = 1,
	EServerRegion__Asia            = 2,
	EServerRegion__Oceania         = 3,
	EServerRegion__SouthAmerica    = 4,
	EServerRegion__All             = 5,
	EServerRegion__Region_MAX      = 6,
	EServerRegion__EServerRegion_MAX = 7
};


// Enum ConanSandbox.EServerType
enum class EServerType : uint8_t
{
	EServerType__All               = 0,
	EServerType__PVP               = 1,
	EServerType__PVE               = 2,
	EServerType__PVPFast           = 3,
	EServerType__PVEFast           = 4,
	EServerType__Mayhem            = 5,
	EServerType__ServerType_MAX    = 6,
	EServerType__EServerType_MAX   = 7
};


// Enum ConanSandbox.ESortCategories
enum class ESortCategories : uint8_t
{
	ESortCategories__Official      = 0,
	ESortCategories__ServerName    = 1,
	ESortCategories__ServerType    = 2,
	ESortCategories__Region        = 3,
	ESortCategories__PlayerCount   = 4,
	ESortCategories__ServerVersion = 5,
	ESortCategories__BattlEye      = 6,
	ESortCategories__Ping          = 7,
	ESortCategories__ESortCategories_MAX = 8
};


// Enum ConanSandbox.EGameServerState
enum class EGameServerState : uint8_t
{
	EGameServerState__Maintance    = 0,
	EGameServerState__Starting     = 1,
	EGameServerState__Running      = 2,
	EGameServerState__Stopped      = 3,
	EGameServerState__Stopping     = 4,
	EGameServerState__Updating     = 5,
	EGameServerState__Installing   = 6,
	EGameServerState__Unknown      = 7,
	EGameServerState__EGameServerState_MAX = 8
};


// Enum ConanSandbox.EServerRentalActionType
enum class EServerRentalActionType : uint8_t
{
	EServerRentalActionType__None  = 0,
	EServerRentalActionType__Start = 1,
	EServerRentalActionType__Stop  = 2,
	EServerRentalActionType__Restart = 3,
	EServerRentalActionType__EServerRentalActionType_MAX = 4
};


// Enum ConanSandbox.EServerRentalSetupType
enum class EServerRentalSetupType : uint8_t
{
	EServerRentalSetupType__Create = 0,
	EServerRentalSetupType__Extend = 1,
	EServerRentalSetupType__Edit   = 2,
	EServerRentalSetupType__None   = 3,
	EServerRentalSetupType__EServerRentalSetupType_MAX = 4
};


// Enum ConanSandbox.ELODCounterType
enum class ELODCounterType : uint8_t
{
	ELODCounterType__NPC           = 0,
	ELODCounterType__Building      = 1,
	ELODCounterType__Placeable     = 2,
	ELODCounterType__MAX           = 3,
	ELODCounterType__ELODCounterType_MAX = 4
};


// Enum ConanSandbox.EBuildingSavedFlags
enum class EBuildingSavedFlags : uint8_t
{
	EBuildingSavedFlags__FoundationOrPillarThatHitGround = 0,
	EBuildingSavedFlags__HasSocketlessConnection = 1,
	EBuildingSavedFlags__SocketConfiguration_MAX = 2,
	EBuildingSavedFlags__EBuildingSavedFlags_MAX = 3
};


// Enum ConanSandbox.EFullscreenGUIAction
enum class EFullscreenGUIAction : uint8_t
{
	EFullscreenGUIAction__None     = 0,
	EFullscreenGUIAction__Hide     = 1,
	EFullscreenGUIAction__Close    = 2,
	EFullscreenGUIAction__CloseAndLock = 3,
	EFullscreenGUIAction__EFullscreenGUIAction_MAX = 4
};


// Enum ConanSandbox.EStatTypeID
enum class EStatTypeID : uint8_t
{
	EStatTypeID__Int               = 0,
	EStatTypeID__Float             = 1,
	EStatTypeID__EStatTypeID_MAX   = 2
};


// Enum ConanSandbox.ESpawnerSchedule
enum class ESpawnerSchedule : uint8_t
{
	ESpawnerSchedule__AutoSpawn    = 0,
	ESpawnerSchedule__CampSpawn    = 1,
	ESpawnerSchedule__TriggerSpawn = 2,
	ESpawnerSchedule__ESpawnerSchedule_MAX = 3
};


// Enum ConanSandbox.ENavigationPrimitiveQueryStatus
enum class ENavigationPrimitiveQueryStatus : uint8_t
{
	ENavigationPrimitiveQueryStatus__UnknownSpawner = 0,
	ENavigationPrimitiveQueryStatus__NoDataForSpawner = 1,
	ENavigationPrimitiveQueryStatus__AllDataBlacklistedForSpawner = 2,
	ENavigationPrimitiveQueryStatus__Success = 3,
	ENavigationPrimitiveQueryStatus__ENavigationPrimitiveQueryStatus_MAX = 4
};


// Enum ConanSandbox.EPurgeMeterEvent
enum class EPurgeMeterEvent : uint8_t
{
	EPurgeMeterEvent__LogOn        = 0,
	EPurgeMeterEvent__TimerTick    = 1,
	EPurgeMeterEvent__CraftItem    = 2,
	EPurgeMeterEvent__ExploreLocation = 3,
	EPurgeMeterEvent__KillHuman    = 4,
	EPurgeMeterEvent__KillNPC      = 5,
	EPurgeMeterEvent__PlaceT1Building = 6,
	EPurgeMeterEvent__PlaceT2Building = 7,
	EPurgeMeterEvent__PlaceT3Building = 8,
	EPurgeMeterEvent__ConvertT1Thrall = 9,
	EPurgeMeterEvent__ConvertT2Thrall = 10,
	EPurgeMeterEvent__ConvertT3Thrall = 11,
	EPurgeMeterEvent__ConvertT4Thrall = 12,
	EPurgeMeterEvent__EPurgeMeterEvent_MAX = 13
};


// Enum ConanSandbox.SpatialHashGridSize
enum class ESpatialHashGridSize : uint8_t
{
	SpatialHashGridSize__GridSize60m = 0,
	SpatialHashGridSize__GridSize100m = 1,
	SpatialHashGridSize__SpatialHashGridSize_Max = 2
};


// Enum ConanSandbox.CharacterEnumSlots
enum class ECharacterEnumSlots : uint8_t
{
	CharacterEnumSlots__God        = 0,
	CharacterEnumSlots__Race       = 1,
	CharacterEnumSlots__CrimeOne   = 2,
	CharacterEnumSlots__CrimeTwo   = 3,
	CharacterEnumSlots__CrimeThree = 4,
	CharacterEnumSlots__CharacterEnumSlots_MAX = 5
};


// Enum ConanSandbox.CharacterIntSlots
enum class ECharacterIntSlots : uint8_t
{
	CharacterIntSlots__Voice       = 0,
	CharacterIntSlots__CharacterIntSlots_MAX = 1
};


// Enum ConanSandbox.CharacterBoolSlots
enum class ECharacterBoolSlots : uint8_t
{
	CharacterBoolSlots__IsFemale   = 0,
	CharacterBoolSlots__CharacterBoolSlots_MAX = 1
};


// Enum ConanSandbox.CharacterScalarSlots
enum class ECharacterScalarSlots : uint8_t
{
	CharacterScalarSlots__Height   = 0,
	CharacterScalarSlots__Bust     = 1,
	CharacterScalarSlots__Dick     = 2,
	CharacterScalarSlots__EyeAngle = 3,
	CharacterScalarSlots__EyeSize  = 4,
	CharacterScalarSlots__EyeDepth = 5,
	CharacterScalarSlots__NoseWidth = 6,
	CharacterScalarSlots__NoseSize = 7,
	CharacterScalarSlots__NoseCurve = 8,
	CharacterScalarSlots__JawWidth = 9,
	CharacterScalarSlots__CheekHeight = 10,
	CharacterScalarSlots__CheekWidth = 11,
	CharacterScalarSlots__ChinWidth = 12,
	CharacterScalarSlots__EarAngle = 13,
	CharacterScalarSlots__EarSize  = 14,
	CharacterScalarSlots__LipSize  = 15,
	CharacterScalarSlots__Pitch    = 16,
	CharacterScalarSlots__PhysiqueMax = 17,
	CharacterScalarSlots__PhysiqueMin = 18,
	CharacterScalarSlots__CharacterScalarSlots_MAX = 19
};


// Enum ConanSandbox.CharacterTextureSlots
enum class ECharacterTextureSlots : uint8_t
{
	CharacterTextureSlots__Eyebrows = 0,
	CharacterTextureSlots__Eyes    = 1,
	CharacterTextureSlots__Lips    = 2,
	CharacterTextureSlots__WarpaintFace = 3,
	CharacterTextureSlots__WarpaintBody = 4,
	CharacterTextureSlots__WarpaintHands = 5,
	CharacterTextureSlots__Hairline = 6,
	CharacterTextureSlots__FacialHairline = 7,
	CharacterTextureSlots__CharacterTextureSlots_MAX = 8
};


// Enum ConanSandbox.CharacterBodySlots
enum class ECharacterBodySlots : uint8_t
{
	CharacterBodySlots__Helmet     = 0,
	CharacterBodySlots__Hair       = 1,
	CharacterBodySlots__Head       = 2,
	CharacterBodySlots__Forearms   = 3,
	CharacterBodySlots__Hands      = 4,
	CharacterBodySlots__Upperbody  = 5,
	CharacterBodySlots__Lowerbody  = 6,
	CharacterBodySlots__Legs       = 7,
	CharacterBodySlots__Feet       = 8,
	CharacterBodySlots__FacialHair = 9,
	CharacterBodySlots__CharacterBodySlots_MAX = 10
};


// Enum ConanSandbox.CharacterTintSlots
enum class ECharacterTintSlots : uint8_t
{
	CharacterTintSlots__Skin       = 0,
	CharacterTintSlots__Hair       = 1,
	CharacterTintSlots__FacialHair = 2,
	CharacterTintSlots__Eyes       = 3,
	CharacterTintSlots__Eyebrows   = 4,
	CharacterTintSlots__EyeMakeup  = 5,
	CharacterTintSlots__LipMakeup  = 6,
	CharacterTintSlots__Warpaint   = 7,
	CharacterTintSlots__CharacterTintSlots_MAX = 8
};


// Enum ConanSandbox.EConanOnlinePermissions
enum class EConanOnlinePermissions : uint8_t
{
	EConanOnlinePermissions__CanPlay = 0,
	EConanOnlinePermissions__CanPlayOnline = 1,
	EConanOnlinePermissions__CanCommunicateOnline = 2,
	EConanOnlinePermissions__CanUseUserGeneratedContent = 3,
	EConanOnlinePermissions__CanShareContent = 4,
	EConanOnlinePermissions__CanUseVoiceChat = 5,
	EConanOnlinePermissions__EConanOnlinePermissions_MAX = 6
};


// Enum ConanSandbox.ESoundTable
enum class ESoundTable : uint8_t
{
	Footstep                       = 0,
	VoiceSet                       = 1,
	WeaponBreak                    = 2,
	WalkFoley                      = 3,
	ESoundTable_MAX                = 4
};


// Enum ConanSandbox.EBuildingMode
enum class EBuildingMode : uint8_t
{
	EBuildingMode__Structures      = 0,
	EBuildingMode__Placeables      = 1,
	EBuildingMode__EBuildingMode_MAX = 2
};


// Enum ConanSandbox.EChatVisibilityCondition
enum class EChatVisibilityCondition : uint8_t
{
	EChatVisibilityCondition__Never = 0,
	EChatVisibilityCondition__Always = 1,
	EChatVisibilityCondition__OnNewMessage = 2,
	EChatVisibilityCondition__EChatVisibilityCondition_MAX = 3
};


// Enum ConanSandbox.EIKCurrentIdleAnim
enum class EIKCurrentIdleAnim : uint8_t
{
	EIKCurrentIdleAnim__NonIdle    = 0,
	EIKCurrentIdleAnim__Aggressive = 1,
	EIKCurrentIdleAnim__Passive    = 2,
	EIKCurrentIdleAnim__Crouching  = 3,
	EIKCurrentIdleAnim__EIKCurrentIdleAnim_MAX = 4
};


// Enum ConanSandbox.ESenseUpdateAction
enum class ESenseUpdateAction : uint8_t
{
	ESenseUpdateAction__NotSensed  = 0,
	ESenseUpdateAction__Sensed     = 1,
	ESenseUpdateAction__MomentarilySensed = 2,
	ESenseUpdateAction__ESenseUpdateAction_MAX = 3
};


// Enum ConanSandbox.EConanBBKey
enum class EConanBBKey : uint8_t
{
	EConanBBKey__HomeLocation      = 0,
	EConanBBKey__SelfActor         = 1,
	EConanBBKey__AIState           = 2,
	EConanBBKey__CurrentTarget     = 3,
	EConanBBKey__TerritorySpawnVolume = 4,
	EConanBBKey__NextRoamingSpot   = 5,
	EConanBBKey__TerritorySpawnVolumeRadius = 6,
	EConanBBKey__DistanceToCurrentTarget = 7,
	EConanBBKey__LocationAggroPoint = 8,
	EConanBBKey__IsLeashing        = 9,
	EConanBBKey__DirectAttackPath  = 10,
	EConanBBKey__TargetAttackStats = 11,
	EConanBBKey__RoamingPath       = 12,
	EConanBBKey__CurrentAttackPoint = 13,
	EConanBBKey__IsUnconscious     = 14,
	EConanBBKey__EConanBBKey_MAX   = 15
};


// Enum ConanSandbox.EServerVoiceChat
enum class EServerVoiceChat : uint8_t
{
	EServerVoiceChat__Disabled     = 0,
	EServerVoiceChat__Enabled      = 1,
	EServerVoiceChat__VoiceChat_MAX = 2,
	EServerVoiceChat__EServerVoiceChat_MAX = 3
};


// Enum ConanSandbox.ECombatModeModifier
enum class ECombatModeModifier : uint8_t
{
	ECombatModeModifier__None      = 0,
	ECombatModeModifier__Fast      = 1,
	ECombatModeModifier__Mayhem    = 2,
	ECombatModeModifier__CombatModeModifier_MAX = 3,
	ECombatModeModifier__ECombatModeModifier_MAX = 4
};


// Enum ConanSandbox.ELQAVPMethod
enum class ELQAVPMethod : uint8_t
{
	ELQAVPMethod__None             = 0,
	ELQAVPMethod__Absolute         = 1,
	ELQAVPMethod__BrokenAbsolute   = 2,
	ELQAVPMethod__Relative         = 3,
	ELQAVPMethod__ELQAVPMethod_MAX = 4
};


// Enum ConanSandbox.ENPCMindReadingMode
enum class ENPCMindReadingMode : uint8_t
{
	ENPCMindReadingMode__None      = 0,
	ENPCMindReadingMode__Combat    = 1,
	ENPCMindReadingMode__Targeting = 2,
	ENPCMindReadingMode__Detail    = 3,
	ENPCMindReadingMode__ENPCMindReadingMode_MAX = 4
};


// Enum ConanSandbox.EEmoteFlags
enum class EEmoteFlags : uint8_t
{
	EEmoteFlags__None              = 0,
	EEmoteFlags__BlockMovement     = 1,
	EEmoteFlags__WillLoopUntilCanceled = 2,
	EEmoteFlags__CantEquipItems    = 3,
	EEmoteFlags__EEmoteFlags_MAX   = 4
};


// Enum ConanSandbox.EEmoteCategories
enum class EEmoteCategories : uint8_t
{
	EEmoteCategories__None         = 0,
	EEmoteCategories__Greet        = 1,
	EEmoteCategories__Celebrate    = 2,
	EEmoteCategories__Taunt        = 3,
	EEmoteCategories__Sit          = 4,
	EEmoteCategories__Dance        = 5,
	EEmoteCategories__Religious    = 6,
	EEmoteCategories__Sleep        = 7,
	EEmoteCategories__Misc         = 8,
	EEmoteCategories__Conversation = 9,
	EEmoteCategories__Flirt        = 10,
	EEmoteCategories__Worship      = 11,
	EEmoteCategories__Relax        = 12,
	EEmoteCategories__Expression   = 13,
	EEmoteCategories__Idle         = 14,
	EEmoteCategories__Relaxing     = 15,
	EEmoteCategories__EEmoteCategories_MAX = 16
};


// Enum ConanSandbox.ETimeOfDay
enum class ETimeOfDay : uint8_t
{
	ETimeOfDay__Dusk               = 0,
	ETimeOfDay__Noon               = 1,
	ETimeOfDay__Dawn               = 2,
	ETimeOfDay__TimeOfDay_MAX      = 3,
	ETimeOfDay__ETimeOfDay_MAX     = 4
};


// Enum ConanSandbox.ETeleportLocation
enum class ETeleportLocation : uint8_t
{
	ETeleportLocation__DSouth      = 0,
	ETeleportLocation__DEast       = 1,
	ETeleportLocation__DNorth      = 2,
	ETeleportLocation__DWest       = 3,
	ETeleportLocation__DCenter     = 4,
	ETeleportLocation__Sandstorm   = 5,
	ETeleportLocation__Teleport_MAX = 6,
	ETeleportLocation__ETeleportLocation_MAX = 7
};


// Enum ConanSandbox.EPlatformID
enum class EPlatformID : uint8_t
{
	EPlatformID__PlatformWindows   = 0,
	EPlatformID__PlatformPS4       = 1,
	EPlatformID__PlatformXBoxOne   = 2,
	EPlatformID__PlatformMAC       = 3,
	EPlatformID__PlatformIOS       = 4,
	EPlatformID__PlatformAndroid   = 5,
	EPlatformID__PlatformWINRT_ARM = 6,
	EPlatformID__PlatformWINRT     = 7,
	EPlatformID__PlatformHTML5     = 8,
	EPlatformID__PlatformLinux     = 9,
	EPlatformID__PlatformCount     = 10,
	EPlatformID__EPlatformID_MAX   = 11
};


// Enum ConanSandbox.EWeaponUsages
enum class EWeaponUsages : uint8_t
{
	EWeaponUsages__PrimaryAttackTypeMaxBit = 0,
	EWeaponUsages__IsItem          = 1,
	EWeaponUsages__IsRetreat       = 2,
	EWeaponUsages__HasRootMotion   = 3,
	EWeaponUsages__EWeaponUsages_MAX = 4
};


// Enum ConanSandbox.ECharacterSubState
enum class ECharacterSubState : uint8_t
{
	ECharacterSubState__None       = 0,
	ECharacterSubState__Stunned    = 1,
	ECharacterSubState__Knockbacked = 2,
	ECharacterSubState__Swim       = 3,
	ECharacterSubState__Fly        = 4,
	ECharacterSubState__Drinking   = 5,
	ECharacterSubState__Emoting    = 6,
	ECharacterSubState__Sprinting  = 7,
	ECharacterSubState__Failing    = 8,
	ECharacterSubState__Crouching  = 9,
	ECharacterSubState__LeavingEmote = 10,
	ECharacterSubState__Attacking  = 11,
	ECharacterSubState__Sitting    = 12,
	ECharacterSubState__Dodge      = 13,
	ECharacterSubState__Exhausted  = 14,
	ECharacterSubState__ECharacterSubState_MAX = 15
};


// Enum ConanSandbox.ENPCOrder
enum class ENPCOrder : uint8_t
{
	ENPCOrder__NA                  = 0,
	ENPCOrder__FollowPlayer        = 1,
	ENPCOrder__ENPCOrder_MAX       = 2
};


// Enum ConanSandbox.EEncumbranceTiers
enum class EEncumbranceTiers : uint8_t
{
	EEncumbranceTiers__Tier0       = 0,
	EEncumbranceTiers__Tier1       = 1,
	EEncumbranceTiers__Tier2       = 2,
	EEncumbranceTiers__Tier3       = 3,
	EEncumbranceTiers__Tier4       = 4,
	EEncumbranceTiers__EEncumbranceTiers_MAX = 5
};


// Enum ConanSandbox.EDeleteGameDBResult
enum class EDeleteGameDBResult : uint8_t
{
	EDeleteGameDBResult__Success   = 0,
	EDeleteGameDBResult__Failure   = 1,
	EDeleteGameDBResult__Cancel    = 2,
	EDeleteGameDBResult__EDeleteGameDBResult_MAX = 3
};


// Enum ConanSandbox.ESaveGameState
enum class ESaveGameState : uint8_t
{
	ESaveGameState__Exists         = 0,
	ESaveGameState__EmptySlot      = 1,
	ESaveGameState__SlotCorrupt    = 2,
	ESaveGameState__InternalError  = 3,
	ESaveGameState__InvalidUser    = 4,
	ESaveGameState__ESaveGameState_MAX = 5
};


// Enum ConanSandbox.EItemFlags
enum class EItemFlags : uint8_t
{
	EItemFlags__CanBeLooted        = 0,
	EItemFlags__ThrallCaptureItem  = 1,
	EItemFlags__DevOnlyItem        = 2,
	EItemFlags__CreatureHead       = 3,
	EItemFlags__BossCreatureHead   = 4,
	EItemFlags__IsPotion           = 5,
	EItemFlags__EItemFlags_MAX     = 6
};


// Enum ConanSandbox.ETeleportState
enum class ETeleportState : uint8_t
{
	ETeleportState__Idle           = 0,
	ETeleportState__AckRequested   = 1,
	ETeleportState__IsTeleporting  = 2,
	ETeleportState__IsWaitingForAcks = 3,
	ETeleportState__ETeleportState_MAX = 4
};


// Enum ConanSandbox.EClientSpawnState
enum class EClientSpawnState : uint8_t
{
	EClientSpawnState__SpawnComplete = 0,
	EClientSpawnState__SpawnInProgress = 1,
	EClientSpawnState__EClientSpawnState_MAX = 2
};


// Enum ConanSandbox.EClientTransitionState
enum class EClientTransitionState : uint8_t
{
	EClientTransitionState__None   = 0,
	EClientTransitionState__WaitForCharacterCreationToStream = 1,
	EClientTransitionState__WaitForGameToStream = 2,
	EClientTransitionState__WaitForServerToAcknowledgeWorldLoaded = 3,
	EClientTransitionState__EClientTransitionState_MAX = 4
};


// Enum ConanSandbox.AudioState
enum class EAudioState : uint8_t
{
	AudioState__Free               = 0,
	AudioState__Active             = 1,
	AudioState__FadeIn             = 2,
	AudioState__FadeOut            = 3,
	AudioState__DelayedFadeIn      = 4,
	AudioState__DelayedFadeOut     = 5,
	AudioState__AudioState_MAX     = 6
};


// Enum ConanSandbox.EDyeChannels
enum class EDyeChannels : uint8_t
{
	EDyeChannels__MaleChannel1     = 0,
	EDyeChannels__MaleChannel2     = 1,
	EDyeChannels__MaleChannel3     = 2,
	EDyeChannels__MaleChannel4     = 3,
	EDyeChannels__FemaleChannel1   = 4,
	EDyeChannels__FemaleChannel2   = 5,
	EDyeChannels__FemaleChannel3   = 6,
	EDyeChannels__FemaleChannel4   = 7,
	EDyeChannels__EDyeChannels_MAX = 8
};


// Enum ConanSandbox.EFeatCategory
enum class EFeatCategory : uint8_t
{
	EFeatCategory__Construction    = 0,
	EFeatCategory__Decoration      = 1,
	EFeatCategory__Combat          = 2,
	EFeatCategory__Survival        = 3,
	EFeatCategory__Armor           = 4,
	EFeatCategory__Religion        = 5,
	EFeatCategory__IsAvailable     = 6,
	EFeatCategory__CategoryCount   = 7,
	EFeatCategory__EFeatCategory_MAX = 8
};


// Enum ConanSandbox.VisualMeshType
enum class EVisualMeshType : uint8_t
{
	VisualMeshType__None           = 0,
	VisualMeshType__StaticMesh     = 1,
	VisualMeshType__SkeletalMesh   = 2,
	VisualMeshType__VisualMeshType_MAX = 3
};


// Enum ConanSandbox.NpcSpawnerType
enum class ENpcSpawnerType : uint8_t
{
	NpcSpawnerType__HumanNPC       = 0,
	NpcSpawnerType__WildlifeNPC    = 1,
	NpcSpawnerType__ManualSpawner  = 2,
	NpcSpawnerType__NpcSpawnerType_MAX = 3
};


// Enum ConanSandbox.EInventorySortTypes
enum class EInventorySortTypes : uint8_t
{
	EInventorySortTypes__ByName    = 0,
	EInventorySortTypes__ByWeight  = 1,
	EInventorySortTypes__ByAge     = 2,
	EInventorySortTypes__Custom    = 3,
	EInventorySortTypes__EInventorySortTypes_MAX = 4
};


// Enum ConanSandbox.EInventoryActionShortcuts
enum class EInventoryActionShortcuts : uint8_t
{
	EInventoryActionShortcuts__TakeAllDropCraftAll = 0,
	EInventoryActionShortcuts__UseEquipUnEquipCraftTen = 1,
	EInventoryActionShortcuts__MoreClearQueue = 2,
	EInventoryActionShortcuts__Craft = 3,
	EInventoryActionShortcuts__GiveTake = 4,
	EInventoryActionShortcuts__None = 5,
	EInventoryActionShortcuts__EInventoryActionShortcuts_MAX = 6
};


// Enum ConanSandbox.EGamemode
enum class EGamemode : uint8_t
{
	EGamemode__None                = 0,
	EGamemode__Default             = 1,
	EGamemode__Building            = 2,
	EGamemode__Swimming            = 3,
	EGamemode__Climbing            = 4,
	EGamemode__Combat              = 5,
	EGamemode__EGamemode_MAX       = 6
};


// Enum ConanSandbox.EServerSettingsCategory
enum class EServerSettingsCategory : uint8_t
{
	EServerSettingsCategory__General = 0,
	EServerSettingsCategory__Progression = 1,
	EServerSettingsCategory__DayAndNight = 2,
	EServerSettingsCategory__Survival = 3,
	EServerSettingsCategory__Combat = 4,
	EServerSettingsCategory__Harvesting = 5,
	EServerSettingsCategory__Crafting = 6,
	EServerSettingsCategory__Abandonment = 7,
	EServerSettingsCategory__Chat  = 8,
	EServerSettingsCategory__RegionalAccess = 9,
	EServerSettingsCategory__Purge = 10,
	EServerSettingsCategory__EServerSettingsCategory_MAX = 11
};


// Enum ConanSandbox.EGraphicsQuality
enum class EGraphicsQuality : uint8_t
{
	EGraphicsQuality__Low          = 0,
	EGraphicsQuality__Medium       = 1,
	EGraphicsQuality__High         = 2,
	EGraphicsQuality__Ultra        = 3,
	EGraphicsQuality__Custom       = 4,
	EGraphicsQuality__Auto         = 5,
	EGraphicsQuality__EGraphicsQuality_MAX = 6
};


// Enum ConanSandbox.EPlatformFlags
enum class EPlatformFlags : uint8_t
{
	EPlatformFlags__Pc             = 0,
	EPlatformFlags__Xbox           = 1,
	EPlatformFlags__Ps4            = 2,
	EPlatformFlags__EPlatformFlags_MAX = 3
};


// Enum ConanSandbox.ETargetingPurpose
enum class ETargetingPurpose : uint8_t
{
	ETargetingPurpose__NotTargeted = 0,
	ETargetingPurpose__Attack      = 1,
	ETargetingPurpose__Flee        = 2,
	ETargetingPurpose__ETargetingPurpose_MAX = 3
};


// Enum ConanSandbox.EThrallPlacementMode
enum class EThrallPlacementMode : uint8_t
{
	EThrallPlacementMode__None     = 0,
	EThrallPlacementMode__PlaceNewThrall = 1,
	EThrallPlacementMode__MoveExistingThrall = 2,
	EThrallPlacementMode__EThrallPlacementMode_MAX = 3
};


// Enum ConanSandbox.EThrallCanBePlacedResult
enum class EThrallCanBePlacedResult : uint8_t
{
	EThrallCanBePlacedResult__Success = 0,
	EThrallCanBePlacedResult__Fail = 1,
	EThrallCanBePlacedResult__Fail_Overlaps = 2,
	EThrallCanBePlacedResult__Fail_LandClaim = 3,
	EThrallCanBePlacedResult__EThrallCanBePlacedResult_MAX = 4
};


// Enum ConanSandbox.EStatTableType
enum class EStatTableType : uint8_t
{
	EStatTableType__Int            = 0,
	EStatTableType__Float          = 1,
	EStatTableType__EStatTableType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConanSandbox.SocketStaticData
// 0x0038
struct FSocketStaticData
{
	TArray<TEnumAsByte<EBuildingSocketType>>           SocketTypes;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EBuildingSocketType>>           TargetSocketTypes;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<ESocketConfiguration>                       OverrideSocketRotations;                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                AttachToCost;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AttachCost;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.AttachedModuleData
// 0x0018
struct FAttachedModuleData
{
	class UBuildingModuleData*                         module;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                m_SocketTypes;                                            // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_TargetSocketTypes;                                      // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int8_t                                             AttachToCost;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AttachCost;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConanSandbox.BuildingSocketData
// 0x0070
struct FBuildingSocketData
{
	int                                                m_CurrentSocketTypes;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                m_CurrentTargetSocketTypes;                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldTransform;                                           // 0x0010(0x0030) (IsPlainOldData)
	int8_t                                             BestAttachStability;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UBuildingModuleData>          BestAttachStabilityModule;                                // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FAttachedModuleData>                 m_AttachedModules;                                        // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ClaimOwnershipParams
// 0x0010
struct FClaimOwnershipParams
{
	class AActor*                                      ClaimingActor;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUniqueID*                                   UniqueID;                                                 // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.LandClaimCellData
// 0x0018
struct FLandClaimCellData
{
	int                                                X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FClaimOwnershipParams                       OwnershipParams;                                          // 0x0008(0x0010)
};

// ScriptStruct ConanSandbox.SocketlessConnection
// 0x0010
struct FSocketlessConnection
{
	class ABuildableBase*                              Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBuildingModuleData*                         ModuleData;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.BuildableHealthEntry
// 0x0014
struct FBuildableHealthEntry
{
	int                                                IngredientID;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              CurrentAmount;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxAmount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Weight;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HealthContributionPercentage;                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConanSandbox.GamepadHotkeyHelp
// 0x0048
struct FGamepadHotkeyHelp
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	TArray<struct FName>                               ActionMappings;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PositionOnLeftSide;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UGamepadHelpEntryBase*                       m_Widget;                                                 // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ConanSandbox.FCButtonStyleButton
// 0x0300
struct FFCButtonStyleButton
{
	struct FSlateBrush                                 Normal;                                                   // 0x0000(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Hovered;                                                  // 0x0090(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Pressed;                                                  // 0x0120(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 PressedHovered;                                           // 0x01B0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Disabled;                                                 // 0x0240(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     NormalPadding;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x02E0(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x02F0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct ConanSandbox.FCButtonStyleCheckbox
// 0x0390
struct FFCButtonStyleCheckbox
{
	struct FSlateBrush                                 checked;                                                  // 0x0000(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 CheckedHovered;                                           // 0x0090(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 CheckedPressed;                                           // 0x0120(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Unchecked;                                                // 0x01B0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 UncheckedHovered;                                         // 0x0240(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 UncheckedPressed;                                         // 0x02D0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     NormalPadding;                                            // 0x0360(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x0370(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0380(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct ConanSandbox.FCButtonStyle
// 0x06C0
struct FFCButtonStyle
{
	struct FFCButtonStyleButton                        StyleButton;                                              // 0x0000(0x0300) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFCButtonStyleCheckbox                      StyleCheckbox;                                            // 0x0300(0x0390) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0690(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x06A8(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ConanSandbox.BuildingModuleReference
// 0x0010
struct FBuildingModuleReference
{
	class UInstancedBuildingComponent*                 OwnerComponent;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.TargetArea
// 0x0020
struct FTargetArea
{
	struct FVector                                     SphereCenter;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngleRadians;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.MotionSample
// 0x001C
struct FMotionSample
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.MotionHistory
// 0x0018
struct FMotionHistory
{
	TArray<struct FMotionSample>                       Samples;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxSampleAge;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PredictedObstacle
// 0x0028
struct FPredictedObstacle
{
	class AActor*                                      ObstacleActor;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProbeCollisionLocation;                                   // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ObstacleCollisionLocation;                                // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TimeOfCollision;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PausedComponent
// 0x0010
struct FPausedComponent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UActorComponent*                             Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ConanSandbox.StatNode
// 0x0008
struct FStatNode
{
	int                                                m_ID;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_Flags;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.StatModifier
// 0x0008
struct FStatModifier
{
	TEnumAsByte<EStatModifierID>                       m_ID;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatModifierOperator>                 m_Operator;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              m_Multiplier;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.StatModifierInt32
// 0x0004 (0x000C - 0x0008)
struct FStatModifierInt32 : public FStatModifier
{
	int                                                m_Value;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.StatNodeInt32
// 0x0018 (0x0020 - 0x0008)
struct FStatNodeInt32 : public FStatNode
{
	int                                                m_Value;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_DefaultValue;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStatModifierInt32>                  m_Modifiers;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.StatArrayInt32
// 0x0010
struct FStatArrayInt32
{
	TArray<struct FStatNodeInt32>                      IntStatArray;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.StatModifierFloat
// 0x0004 (0x000C - 0x0008)
struct FStatModifierFloat : public FStatModifier
{
	float                                              m_Value;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.StatNodeFloat
// 0x0018 (0x0020 - 0x0008)
struct FStatNodeFloat : public FStatNode
{
	float                                              m_Value;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              m_DefaultValue;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStatModifierFloat>                  m_Modifiers;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.StatArrayFloat
// 0x0010
struct FStatArrayFloat
{
	TArray<struct FStatNodeFloat>                      FloatStatArray;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.EnergyEventTableRow
// 0x0050 (0x0058 - 0x0008)
struct FEnergyEventTableRow : public FTableRowBase
{
	EnergyTypes                                        Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              TriggerValue;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            GUITrigger;                                               // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            Buff;                                                     // 0x0030(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                BuffPotency;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.SpawnerIndex
// 0x0010
struct FSpawnerIndex
{
	struct FName                                       SpawnerName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpawnPointStartIndex;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RoamingPathStartIndex;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.RoamingPath
// 0x0010
struct FRoamingPath
{
	TArray<struct FVector>                             Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConanSandbox.BoxBounds
// 0x0018
struct FBoxBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConanSandbox.DebugSpawnProbabilityGroup
// 0x0018
struct FDebugSpawnProbabilityGroup
{
	float                                              NormalizedWeight;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActualWeight;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class UNPCTerritorySpawnerInterface>> Members;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConanSandbox.SpatialObjectSet
// 0x0050
struct FSpatialObjectSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty ConanSandbox.SpatialObjectSet.Set
};

// ScriptStruct ConanSandbox.SpawnProbabilityBand
// 0x0008
struct FSpawnProbabilityBand
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.SuspendCallback
// 0x0020
struct FSuspendCallback
{
	float                                              TimeoutSeconds;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0008(0x0008)
	struct FScriptDelegate                             Delegate;                                                 // 0x0010(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct ConanSandbox.SuspendCallbackComponentEntry
// 0x0010
struct FSuspendCallbackComponentEntry
{
	TArray<struct FSuspendCallback>                    Callbacks;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.AILODInfo
// 0x0010
struct FAILODInfo
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AILOD;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              NetCullDistanceSquared;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterMeshLayout
// 0x0028
struct FCharacterMeshLayout
{
	int                                                Helmet;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FacialHair;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Forearms;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hands;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UpperBody;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LowerBody;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Legs;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Feet;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterTextureLayout
// 0x0020
struct FCharacterTextureLayout
{
	int                                                EyebrowTexture;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EyeTexture;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LipTexture;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WarpaintFaceTexture;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WarpaintBodyTexture;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WarpaintHandsTexture;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HairlineTexture;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FacialHairlineTexture;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterTintLayout
// 0x0020
struct FCharacterTintLayout
{
	int                                                Skin;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FacialHair;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Eyes;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Eyebrows;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EyeMakeup;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LipMakeup;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Warpaint;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterBoolParameters
// 0x0001
struct FCharacterBoolParameters
{
	bool                                               IsFemale;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterIntParameters
// 0x0008
struct FCharacterIntParameters
{
	int                                                Physique;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Voice;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterScalarParameters
// 0x004C
struct FCharacterScalarParameters
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bust;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Dick;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeAngle;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeSize;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeDepth;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoseWidth;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoseSize;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoseCurve;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JawWidth;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheekHeight;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheekWidth;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChinWidth;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EarAngle;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EarSize;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipSize;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysiqueMax;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysiqueMin;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterEnumParameters
// 0x0005
struct FCharacterEnumParameters
{
	ECharacterGod                                      God;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterRace                                     Race;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterCrime                                    CrimeOne;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterCrime                                    CrimeTwo;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterCrime                                    CrimeThree;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.ArmourSlotDyeParams
// 0x0010
struct FArmourSlotDyeParams
{
	int                                                Channel1;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Channel2;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Channel3;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Channel4;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterArmourDyeParams
// 0x0070
struct FCharacterArmourDyeParams
{
	struct FArmourSlotDyeParams                        Helmet;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FArmourSlotDyeParams                        Forearms;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FArmourSlotDyeParams                        Hands;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FArmourSlotDyeParams                        UpperBody;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FArmourSlotDyeParams                        LowerBody;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FArmourSlotDyeParams                        Legs;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FArmourSlotDyeParams                        Feet;                                                     // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterLayout
// 0x0138
struct FCharacterLayout
{
	struct FCharacterMeshLayout                        MeshLayout;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FCharacterTextureLayout                     TextureLayout;                                            // 0x0028(0x0020) (Edit, BlueprintVisible)
	struct FCharacterTintLayout                        TintLayout;                                               // 0x0048(0x0020) (Edit, BlueprintVisible)
	struct FCharacterBoolParameters                    BoolParams;                                               // 0x0068(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FCharacterIntParameters                     IntParams;                                                // 0x006C(0x0008) (Edit, BlueprintVisible)
	struct FCharacterScalarParameters                  ScalarParams;                                             // 0x0074(0x004C) (Edit, BlueprintVisible)
	struct FCharacterEnumParameters                    EnumParams;                                               // 0x00C0(0x0005) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	struct FCharacterArmourDyeParams                   ArmourDyeParams;                                          // 0x00C8(0x0070) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterResolvedMeshes
// 0x0050
struct FCharacterResolvedMeshes
{
	class USkeletalMesh*                               Helmet;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Hair;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FacialHair;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Head;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Forearms;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Hands;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               UpperBody;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LowerBody;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Legs;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Feet;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterResolvedTextures
// 0x0048
struct FCharacterResolvedTextures
{
	class UTexture*                                    EyebrowDiffuse;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    EyebrowNormal;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    EyeMask;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LipMask;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    WarpaintFaceMask;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    WarpaintBodyMask;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    WarpaintHandsMask;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Hairline;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    FacialHairline;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterResolvedTints
// 0x0080
struct FCharacterResolvedTints
{
	struct FLinearColor                                SkinColour;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HairColour;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FacialHairColour;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EyeColour;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EyebrowColour;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                MakeupEyeColour;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                MakeupLipColour;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                WarpaintColour;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterMaterialParams
// 0x0118
struct FCharacterMaterialParams
{
	struct FCharacterResolvedTextures                  Textures;                                                 // 0x0000(0x0048) (Edit, BlueprintVisible, IsPlainOldData)
	struct FCharacterResolvedTints                     Tints;                                                    // 0x0048(0x0080) (Edit, BlueprintVisible)
	struct FCharacterScalarParameters                  ScalarParams;                                             // 0x00C8(0x004C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PotentialBuildGhost
// 0x00A0
struct FPotentialBuildGhost
{
	class ABuildableBase*                              TargetBuildable;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TargetSocketIndex;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SourceSocketIndex;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ESocketConfiguration                               Configuration;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  ActorTransform;                                           // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FTransform                                  MeshTransform;                                            // 0x0050(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	TEnumAsByte<ECanBePlacedResult>                    CanBePlacedResult;                                        // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class FString                                      FailReason;                                               // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               SameObjectAlreadyExists;                                  // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsTierUpgrade;                                            // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct ConanSandbox.FuncomPoseSnapshot
// 0x0010
struct FFuncomPoseSnapshot
{
	TArray<struct FTransform>                          LocalAtoms;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConanSandbox.CharacterIKCollection
// 0x0290
struct FCharacterIKCollection
{
	float                                              feetIKAlpha;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hipsAlpha;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     rightFootTarget;                                          // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     leftFootTarget;                                           // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    leftFootRotator;                                          // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    rightFootRotator;                                         // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     rightKneeLocation;                                        // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     leftKneeLocation;                                         // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     hipsTarget;                                               // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     rightHandTarget;                                          // 0x005C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     leftHandTarget;                                           // 0x0068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     rightElbowLocation;                                       // 0x0074(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     leftElbowLocation;                                        // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x204];                                     // 0x008C(0x0204) MISSED OFFSET
};

// ScriptStruct ConanSandbox.Empty
// 0x0001
struct FEmpty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConanSandbox.MapMarker
// 0x0058
struct FMapMarker
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, DisableEditOnInstance, SaveGame)
	struct FStringAssetReference                       Icon;                                                     // 0x0020(0x0010) (Edit, DisableEditOnInstance, SaveGame)
	struct FVector2D                                   Location;                                                 // 0x0030(0x0008) (Edit, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0038(0x000C) (Edit, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ExpiryTime;                                               // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UUniqueID*                                   correspondingCorpseID;                                    // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	ETransientMarkerType                               TransientMarkerType;                                      // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PointOfInterestData
// 0x0014
struct FPointOfInterestData
{
	int                                                SensingStoppedTime;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastSensedLocation;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                DamageTotal;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.PointOfInterestCollection
// 0x00C0
struct FPointOfInterestCollection
{
	int                                                MemoryLifeTimeSeconds;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HateInertia;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HateLimitDistance;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<class AActor*, struct FPointOfInterestData>   m_SensedPOIs;                                             // 0x0010(0x0050) (ZeroConstructor, Transient)
	TMap<class AActor*, struct FPointOfInterestData>   m_RememberedPOIs;                                         // 0x0060(0x0050) (ZeroConstructor, Transient)
	class AActor*                                      m_MostHatedPOI;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ServerListViewEntry
// 0x00D8
struct FServerListViewEntry
{
	struct FBlueprintSessionResult                     m_Session;                                                // 0x0000(0x00C8) (BlueprintVisible, BlueprintReadOnly)
	class UServerInfoBase*                             m_Widget;                                                 // 0x00C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               m_ShouldShow;                                             // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_IsFavorite;                                             // 0x00D1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_IsLastPlayedSession;                                    // 0x00D2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_IsSelected;                                             // 0x00D3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PlayerInfo
// 0x0048
struct FPlayerInfo
{
	class FString                                      CharacterName;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      PlayerNickname;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FUniqueNetIdRepl                            PlayerNetId;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                Level;                                                    // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnline;                                                 // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERank>                                 Rank;                                                     // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	int64_t                                            PlayerId;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.EventInfo
// 0x0040
struct FEventInfo
{
	class FString                                      PlayerNickname;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       EventMessage;                                             // 0x0010(0x0018)
	class FString                                      EventDate;                                                // 0x0028(0x0010) (ZeroConstructor)
	int64_t                                            PlayerId;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.EnvironmentArea
// 0x0028
struct FEnvironmentArea
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AVolume*                                     Volume;                                                   // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeExponent;                                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CoefficientOverride;                                      // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.TickerHandle
// 0x0008
struct FTickerHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConanSandbox.LootTableWeightedRow
// 0x0048 (0x0050 - 0x0008)
struct FLootTableWeightedRow : public FTableRowBase
{
	bool                                               UseWeightTable;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UsePercentTable;                                          // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         table;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ItemName;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                itemID;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDurability;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDurability;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.LootTableRow
// 0x0048 (0x0050 - 0x0008)
struct FLootTableRow : public FTableRowBase
{
	bool                                               UseTable;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         table;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ItemName;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                itemID;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PercentChance;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDurability;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDurability;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.FCTableRow
// 0x0000 (0x0008 - 0x0008)
struct FFCTableRow : public FTableRowBase
{

};

// ScriptStruct ConanSandbox.ActionSequence
// 0x0010
struct FActionSequence
{
	TArray<EAttackTypeSimple>                          ActionSequence;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.ComboPresetTableRow
// 0x0018 (0x0020 - 0x0008)
struct FComboPresetTableRow : public FFCTableRow
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FActionSequence>                     Sequences;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.PropertyDestructionLogEntry
// 0x0018
struct FPropertyDestructionLogEntry
{
	class FString                                      DestroyedBy;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ObjectID;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectDestructionObjectType                       ObjectType;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ConanSandbox.DeferredEquip
// 0x0010
struct FDeferredEquip
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ServerConsoleCommandLogEntry
// 0x0020
struct FServerConsoleCommandLogEntry
{
	class FString                                      Caller;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      CommandString;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConanSandbox.ServerCommandHistory
// 0x0018
struct FServerCommandHistory
{
	TArray<struct FServerConsoleCommandLogEntry>       CommandLog;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CommandLogStartIndex;                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.GameItemStatModification
// 0x000C
struct FGameItemStatModification
{
	bool                                               IsFloatStatModification;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatModifierOperator>                 operatorID;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                statID;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ModificationValue;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.ItemTableRow
// 0x0328 (0x0330 - 0x0008)
struct FItemTableRow : public FFCTableRow
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortDesc;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       LongDesc;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0050(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            ItemClass;                                                // 0x0070(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            BuildingClass;                                            // 0x0090(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            VisualObject;                                             // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            ActionBlueprint_Use;                                      // 0x00D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                MaxStackSize;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EquipLocation;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameItemGUICategory>                  GUICategory;                                              // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              ArmourValue;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ArmorType;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SoundPhysicalSurface;                                     // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponItemTypes>                      WeaponType;                                               // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponArcheTypes>                     WeaponArcheType;                                          // 0x0109(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	TArray<int>                                        CompatableAmmunitions;                                    // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SoundTransmitterType;                                     // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               KnockbackResponseWeapon;                                  // 0x0124(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	int                                                WeaponStaminaAttackSingleBasic;                           // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponStaminaAttackSingleSpecial;                         // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponStaminaAttackDualBasic;                             // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponStaminaAttackDualSpecial;                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponStaminaHeavyChargedRegenModifier;                   // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponSpeedHeavyChargedModifier;                          // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EncumbranceWeight;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConeAngle;                                                // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConeMaxDistance;                                          // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageHealthLight_OnHit;                                  // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageHealthHeavy_OnHit;                                  // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageStaminaLight_OnHit;                                 // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageStaminaHeavy_OnHit;                                 // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageHealthLight_OnBlock;                                // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageHealthHeavy_OnBlock;                                // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageStaminaLight_OnBlock;                               // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageStaminaHeavy_OnBlock;                               // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HarvestDamage;                                            // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponUsage;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttackReach;                                           // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAttackReach;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAttackDistance;                                        // 0x017C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEffectWidth;                                        // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEffectHeight;                                       // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemTier;                                                 // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmorPen;                                                 // 0x018C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageConcussiveLightOnHit;                               // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageConcussiveHeavyOnHit;                               // 0x0194(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageConcussiveLightOnBlock;                             // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageConcussiveHeavyOnBlock;                             // 0x019C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDamageTiers                                       DamageTier;                                               // 0x01A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              CoolDownTime;                                             // 0x01A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReuseTime;                                                // 0x01A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SelectionWeight;                                          // 0x01AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KnockbackOffenseBasic;                                    // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KnockbackOffenseSpecial;                                  // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KnockbackOffenseBasicOnBlock;                             // 0x01B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KnockbackOffenseSpecialOnBlock;                           // 0x01BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KnockbackDefense;                                         // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       VisualStaticMesh;                                         // 0x01C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class USkeletalMesh>                     VisualSkeletalMesh;                                       // 0x01E8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UDestructibleMesh>                 VisualDestructibleMesh;                                   // 0x0208(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                WeaponStatusDefault;                                      // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponStatusCurrent;                                      // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponStatusDecrement;                                    // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PerishRate;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PerishTo;                                                 // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDurability;                                            // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem1;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem1_Amount;                                       // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem1_Weight;                                       // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem2;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem2_Amount;                                       // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem2_Weight;                                       // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem3;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem3_Amount;                                       // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepairItem3_Weight;                                       // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AffectedByDamageTiers;                                    // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BuildingPieceScore;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BuildingMaxHealth;                                        // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              repairXp;                                                 // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	struct FText                                       FirstModifier;                                            // 0x0278(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       SecondModifier;                                           // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ThirdModifier;                                            // 0x02A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       FourthModifier;                                           // 0x02C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                FoodAmount;                                               // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DrinkAmount;                                              // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BurnTime;                                                 // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemFlags;                                                // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemContainerSize;                                        // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            AvatarType;                                               // 0x02F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                DyeColourID;                                              // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WarPaintID;                                               // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCostMultiplier;                                    // 0x0318(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StaminaClimbingCostMultiplier;                            // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LeavesGhostItem;                                          // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	struct FName                                       DLCPackage;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.TargetingWidgetStatus
// 0x0018
struct FTargetingWidgetStatus
{
	float                                              TimeOfFadeOut;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AActor*                                      TargetedActor;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UConanWidgetComponent*                       Component;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ConanSandbox.PendingInventoryUpdate
// 0x0020
struct FPendingInventoryUpdate
{
	class UItemInventory*                              m_Inventory;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PropertyDestructionHistory
// 0x0018
struct FPropertyDestructionHistory
{
	TArray<struct FPropertyDestructionLogEntry>        LogEntries;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LogStartIndex;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PlayerListData
// 0x0048
struct FPlayerListData
{
	class FString                                      CharacterName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            CharacterId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            NetId;                                                    // 0x0018(0x0018)
	int                                                CharacterLevel;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class FString                                      CharacterClan;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.PurgeData
// 0x001C
struct FPurgeData
{
	float                                              PurgeTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClanMeter;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	EPurgeEventType                                    PurgeEventType;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     PurgeLocation;                                            // 0x000C(0x000C) (IsPlainOldData)
	float                                              MaxTriggerValue;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.ChatRpcData
// 0x0060
struct FChatRpcData
{
	uint64_t                                           TimeStamp;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UserID;                                                   // 0x0008(0x0018)
	int64_t                                            CharacterUniqueID;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            targetUniqueId;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      userName;                                                 // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      Channel;                                                  // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      Message;                                                  // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.TransformData
// 0x0050
struct FTransformData
{
	struct FName                                       ScopeName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (IsPlainOldData)
	TEnumAsByte<ETransformMask>                        Mask;                                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct ConanSandbox.FrameTransformData
// 0x0028
struct FFrameTransformData
{
	int                                                FrameNumber;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransformData>                      Transforms;                                               // 0x0008(0x0010) (ZeroConstructor)
	float                                              A;                                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              C;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.NavMeshPolygonDrawData
// 0x0018
struct FNavMeshPolygonDrawData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      AreaID;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.NavMeshTileDrawData
// 0x0038
struct FNavMeshTileDrawData
{
	TArray<struct FNavMeshPolygonDrawData>             Polygons;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                TileX;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0028(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.LandClaimChannelDrawData
// 0x0068
struct FLandClaimChannelDrawData
{
	EClaimChannel                                      Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<int64_t>                                    UIDMap;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                MinX;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinY;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SampleWidth;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<unsigned char>                              TileOwnership;                                            // 0x0028(0x0010) (ZeroConstructor)
	TArray<class FString>                              TileClaimingActor;                                        // 0x0038(0x0010) (ZeroConstructor)
	TArray<int>                                        TileRefCount;                                             // 0x0048(0x0010) (ZeroConstructor)
	struct FVector                                     Base;                                                     // 0x0058(0x000C) (IsPlainOldData)
	int                                                CellSize;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.GroupDefinition
// 0x0010
struct FGroupDefinition
{
	struct FName                                       Group;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSimultaneous;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceCrossfade;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConanSandbox.SoundStageInfo
// 0x0020
struct FSoundStageInfo
{
	EAudioState                                        State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Group;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingDelay;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingFade;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolume;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.SoundStageAudioDesc
// 0x0048
struct FSoundStageAudioDesc
{
	TAssetPtr<class USoundBase>                        SoundAsset;                                               // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FName                                       Group;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDelay;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInVolume;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutVolume;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.BaseEnergy
// 0x0068
struct FBaseEnergy
{
	EnergyTypes                                        EnergyType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Force;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRadius;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseDifferentialForce;                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseStatForce;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharFloatStatID                                   DynamicForceStat;                                         // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LimitUpper;                                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEnergy;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LimitLower;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              MinEnergy;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseEnergyReceiverMinMax;                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseStatMinMax;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharFloatStatID                                   StatMinMaxEnergy;                                         // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SubEnergyMap;                                             // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TAssetPtr<class UEnergyHeatmapData>                EnergyMap;                                                // 0x0028(0x0020) (Edit, BlueprintVisible)
	class UEnergyHeatmapData*                          EnergyMapPtr;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               RelativeMapPosition;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector2D                                   TopLeft;                                                  // 0x0054(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   BottomRight;                                              // 0x005C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsEnabled;                                                // 0x0064(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ExilesJourneyEvent
// 0x0018
struct FExilesJourneyEvent
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.EmoteTableRow
// 0x00B0 (0x00B8 - 0x0008)
struct FEmoteTableRow : public FTableRowBase
{
	ECharacterEmotes                                   emoteID;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                EmoteFlags;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TAssetPtr<class UAnimMontage>                      EmoteAnimMontageMale;                                     // 0x0030(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UAnimMontage>                      EmoteAnimMontageFemale;                                   // 0x0050(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class USkeleton>                         CompatibleSkeleton;                                       // 0x0070(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0090(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	EEmoteCategories                                   EmoteCategory;                                            // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.FeatTableRow
// 0x00B8 (0x00C0 - 0x0008)
struct FFeatTableRow : public FFCTableRow
{
	struct FText                                       FeatName;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        IconOverlay;                                              // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               GiveOnSpawn;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                LevelRequirement;                                         // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FeatCost;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EFeatCategory>>                 Categories;                                               // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        PrerequisiteFeat;                                         // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        RewardRecipe;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ShowInFeatWindow;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                CornerStoneLevel;                                         // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.IngredientEntry
// 0x000C
struct FIngredientEntry
{
	int                                                IngredientID;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                IngredientQuantity;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsResult;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ConanSandbox.RecipeTableRow
// 0x00F8 (0x0100 - 0x0008)
struct FRecipeTableRow : public FFCTableRow
{
	struct FText                                       RecipeName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortDesc;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameItemGUICategory>                  RecipeType;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              TimeToCraft;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CraftXP;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CraftingStations;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredFuel;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0050(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            BuildingModule;                                           // 0x0070(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               DestroyStationOnComplete;                                 // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                Ingredient1ID;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient1Quantity;                                      // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient2ID;                                            // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient2Quantity;                                      // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient3ID;                                            // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient3Quantity;                                      // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient4ID;                                            // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Ingredient4Quantity;                                      // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Result1ID;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Result1Quantity;                                          // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Result2ID;                                                // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Result2Quantity;                                          // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ThrallRecipeFeatRequirement;                              // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsThrallMachineRecipe;                                    // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsRecipeEnabled;                                          // 0x00C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        MapMarkerIcon;                                            // 0x00D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ExilesJourneyTrigger;                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DLCPackage;                                               // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.ThrallInfo
// 0x0080
struct FThrallInfo
{
	struct FText                                       ThrallName;                                               // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FStringAssetReference                       ThrallIcon;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	TEnumAsByte<EThrallTier>                           ThrallTier;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      ThrallBuff;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TEnumAsByte<EThrallProfession>                     ThrallProfession;                                         // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<int>                                        BonusRecipes;                                             // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<int>                                        CraftingGroups;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                ThrallTemplateID;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FName                                       SpawnTableID;                                             // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsFemale;                                                 // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ThrallTableRow
// 0x0080 (0x0088 - 0x0008)
struct FThrallTableRow : public FTableRowBase
{
	TAssetPtr<class UClass>                            ThrallActor;                                              // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            ThrallComponent;                                          // 0x0028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UBehaviorTree>                     BehaviorTree;                                             // 0x0048(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            NPCBehaviorParameters;                                    // 0x0068(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConanSandbox.VirtualIndex
// 0x0004
struct FVirtualIndex
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.FCProgressbarSegment
// 0x01C0
struct FFCProgressbarSegment
{
	struct FProgressBarStyle                           Style;                                                    // 0x0000(0x01B8) (Edit, BlueprintVisible)
	float                                              EndProgress;                                              // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.CircularProgressbarSegment
// 0x0020
struct FCircularProgressbarSegment
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              EndProgress;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ModeMapping
// 0x0030
struct FModeMapping
{
	struct FName                                       ActionMapping;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyboardActionMapping;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       OverridingLabel;                                          // 0x0010(0x0018) (Edit)
	bool                                               GamepadShowHold;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               KeyboardShowHold;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ModeMappings
// 0x0010
struct FModeMappings
{
	TArray<struct FModeMapping>                        ModeMappings;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConanSandbox.HotkeyIconKeyIcon
// 0x00A8
struct FHotkeyIconKeyIcon
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Icon;                                                     // 0x0018(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConanSandbox.HotkeyIconPlatform
// 0x0018
struct FHotkeyIconPlatform
{
	EPlatformID                                        Platform;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlatformID                                        ParentPlatform;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FHotkeyIconKeyIcon>                  Keys;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.SpsType
// 0x0008
struct FSpsType
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ServerRentalGameServer
// 0x0070 (0x0078 - 0x0008)
struct FServerRentalGameServer : public FSpsType
{
	int                                                GameServerID;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LocationID;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      CustomerID;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      Name;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      ServerPassword;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      AdminPassword;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      IPAddress;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Port;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SlotSize;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                CurrentSlots;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Expires;                                                  // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsOnline;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EGameServerState>                      State;                                                    // 0x0071(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct ConanSandbox.LiveInventoryItem
// 0x0010
struct FLiveInventoryItem
{
	class FString                                      ConsumableID;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConanSandbox.ServerRentalOffer
// 0x0040 (0x0048 - 0x0008)
struct FServerRentalOffer : public FSpsType
{
	class FString                                      ConsumableID;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Slots;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Duration;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LocationID;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ExtraDuration;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ServerRentalOffers
// 0x0050
struct FServerRentalOffers
{
	TMap<class FString, struct FServerRentalOffer>     Offers;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConanSandbox.ServerRentalLocation
// 0x0040 (0x0048 - 0x0008)
struct FServerRentalLocation : public FSpsType
{
	int                                                LocationID;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      Name;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      Key;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                MaxServerCount;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ServerCount;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      OnlineStatus;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConanSandbox.ServerRentalCustomer
// 0x0020 (0x0028 - 0x0008)
struct FServerRentalCustomer : public FSpsType
{
	class FString                                      CustomerID;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FServerRentalGameServer>             GamerServerList;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConanSandbox.DyeInfo
// 0x0040
struct FDyeInfo
{
	int                                                DyeId;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StackSize;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.EmotesMenuCategoryNode
// 0x0028
struct FEmotesMenuCategoryNode
{
	EEmoteCategories                                   Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ConanSandbox.FeatGroupNode
// 0x0030
struct FFeatGroupNode
{
	class UFeatItem*                                   m_CornerStoneFeat;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
	TArray<class UFeatItem*>                           m_FeatList;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConanSandbox.VisualData
// 0x0018
struct FVisualData
{
	TArray<class UObject*>                             VisualObjects;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AsyncSequenceNumber;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.StatIntEntry
// 0x0008
struct FStatIntEntry
{
	ECharIntStatID                                     statID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConanSandbox.StatFloatEntry
// 0x0008
struct FStatFloatEntry
{
	ECharFloatStatID                                   statID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConanSandbox.WeightedTableEntry
// 0x0018
struct FWeightedTableEntry
{
	struct FName                                       SpawnTableID;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       NextWeightedTableID;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.TargetAreaWithSource
// 0x0028
struct FTargetAreaWithSource
{
	struct FTargetArea                                 Area;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USceneComponent*                             SourceComponent;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ConanSandbox.TargetAreaAllocationData
// 0x0038
struct FTargetAreaAllocationData
{
	struct FTargetAreaWithSource                       AreaAndSource;                                            // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class AActor*                                      Owner;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.CellLocation
// 0x0000 (0x000C - 0x000C)
struct FCellLocation : public FIntVector
{

};

// ScriptStruct ConanSandbox.PendingStreamOperation
// 0x0010
struct FPendingStreamOperation
{
	class AConanCharacter*                             m_Character;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     m_StreamingOperation;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.PersistenceBuildingInstance
// 0x0090
struct FPersistenceBuildingInstance
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0010(0x0030) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FTransform                                  MeshTransform;                                            // 0x0040(0x0030) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	TArray<struct FBuildableHealthEntry>               HealthPool;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	class UBuildingModuleData*                         BuildingModuleRef;                                        // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               FoundationOrPillarThatHitGround;                          // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.AwakeTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAwakeTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PurgeEventCost
// 0x0008 (0x0010 - 0x0008)
struct FPurgeEventCost : public FTableRowBase
{
	EPurgeMeterEvent                                   EventType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.PurgeWave
// 0x0070
struct FPurgeWave
{
	int                                                DifficultyThreshold;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               OffBaseSpawnData;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               OnBaseSpawnData;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       Boss;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       InBaseBoss;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BossSpawnDelay;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpawnCap;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ActiveCap;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpawnLocationCap;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextWave;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaveTime;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               KillPawnNPCsOnPurgeEnd;                                   // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FText                                       WaveDisplayName;                                          // 0x0058(0x0018)
};

// ScriptStruct ConanSandbox.PurgeConfigInfo
// 0x0048 (0x0050 - 0x0008)
struct FPurgeConfigInfo : public FTableRowBase
{
	struct FName                                       WaveName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       WaveDisplayName;                                          // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   AreaMin;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   AreaMax;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FPurgeWave>                          Waves;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsGlobalFallback;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.SpatialQueryTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSpatialQueryTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ConanSandbox.AINewSightEvent
// 0x0018
struct FAINewSightEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SeenActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Observer;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CharacterLayoutSerializationHelper
// 0x0138
struct FCharacterLayoutSerializationHelper
{
	struct FCharacterLayout                            Layout;                                                   // 0x0000(0x0138)
};

// ScriptStruct ConanSandbox.DyeColourTableRow
// 0x0010 (0x0018 - 0x0008)
struct FDyeColourTableRow : public FTableRowBase
{
	struct FLinearColor                                Colour;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConanSandbox.WeaponMaterialTableStructure
// 0x0030 (0x0038 - 0x0008)
struct FWeaponMaterialTableStructure : public FTableRowBase
{
	TAssetPtr<class USoundCue>                         SoundToPlay;                                              // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class UMaterial*                                   DecalToShow;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UParticleSystem*                             ParticleToShow;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConanSandbox.FootstepDataTableStructure
// 0x0020 (0x0028 - 0x0008)
struct FFootstepDataTableStructure : public FTableRowBase
{
	TAssetPtr<class USoundCue>                         SoundToPlay;                                              // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct ConanSandbox.MeshOption
// 0x0050 (0x0058 - 0x0008)
struct FMeshOption : public FTableRowBase
{
	TAssetPtr<class USkeletalMesh>                     Mesh;                                                     // 0x0008(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USkeletalMesh>                     HighQualityMesh;                                          // 0x0028(0x0020) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInCharacterCreation;                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ColorOption
// 0x0010 (0x0018 - 0x0008)
struct FColorOption : public FTableRowBase
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConanSandbox.Selections
// 0x0010 (0x0018 - 0x0008)
struct FSelections : public FTableRowBase
{
	class FString                                      Path;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConanSandbox.ProfessionTemplateTableRow
// 0x0088 (0x0090 - 0x0008)
struct FProfessionTemplateTableRow : public FTableRowBase
{
	int                                                ThrallType;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ThrallTier;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EThrallProfession>                     ThrallProfession;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<int>                                        BonusRecipes;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        CraftingGroups;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       StatTemplate;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               StatModifierTemplate;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               ThrallStatModifierTemplate;                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0060(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FStringAssetReference                       BuffClass;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConanSandbox.FCDamageEvent
// 0x0010 (0x0020 - 0x0010)
struct FFCDamageEvent : public FDamageEvent
{
	TEnumAsByte<EFCDamageType>                         FCDamageType;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0014(0x000C) (IsPlainOldData)
};

// ScriptStruct ConanSandbox.FCDamageParams
// 0x0001
struct FFCDamageParams
{
	TEnumAsByte<EFCDamageType>                         FCDamageType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.CreditsInfo
// 0x0038 (0x0040 - 0x0008)
struct FCreditsInfo : public FFCTableRow
{
	struct FText                                       FirstLine;                                                // 0x0008(0x0018) (BlueprintVisible)
	struct FText                                       SecondLine;                                               // 0x0020(0x0018) (BlueprintVisible)
	int                                                Flag;                                                     // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlatformFlag;                                             // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.UIModuleTableRow
// 0x0080 (0x0088 - 0x0008)
struct FUIModuleTableRow : public FTableRowBase
{
	TAssetPtr<class UClass>                            WidgetClass;                                              // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ToggleActionName;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 ToggleActionSound;                                        // 0x0030(0x0018) (Edit, BlueprintVisible)
	bool                                               MustBeBasePlayerChar;                                     // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnShortcutRelease;                                   // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnESC;                                               // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnEndPlay;                                           // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreloadOnStartup;                                         // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NonBlockingLoad;                                          // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPersistent;                                             // 0x004E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGUIModuleCategory>                    Category;                                                 // 0x004F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFullscreenGUIAction>                  FullscreenGUIAction;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<EClientState>                               AutoshownInStates;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ShowInStartupState;                                       // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInMainMenuState;                                      // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInLoadingScreenState;                                 // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInPlayingState;                                       // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInCharacterCreationState;                             // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowWhenDead;                                             // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowSelect;                                               // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBack;                                                 // 0x006F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGamepadHotkeyHelp>                  OtherHotkeys;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DisableShortcutWhenPlayerInputBlocked;                    // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.RichPresenceData
// 0x0018 (0x0020 - 0x0008)
struct FRichPresenceData : public FTableRowBase
{
	struct FText                                       PresenceText;                                             // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ConanSandbox.WeaponToComboPreset
// 0x0008
struct FWeaponToComboPreset
{
	TEnumAsByte<EWeaponArcheTypes>                     WeaponType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ComboPresetId;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.GameItemStatModificationRow
// 0x0010 (0x0018 - 0x0008)
struct FGameItemStatModificationRow : public FTableRowBase
{
	TArray<struct FGameItemStatModification>           Modifications;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.TextureWrapper
// 0x0008
struct FTextureWrapper
{
	class UTexture*                                    m_Texture;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.GameItemRef
// 0x0010
struct FGameItemRef
{
	class UItemInventory*                              inventory;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemIndex;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.EquipmentGenderVariations
// 0x00B8 (0x00C0 - 0x0008)
struct FEquipmentGenderVariations : public FTableRowBase
{
	ECharacterBodySlots                                SlotType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TAssetPtr<class USkeletalMesh>                     MalePath;                                                 // 0x0010(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USkeletalMesh>                     FemalePath;                                               // 0x0030(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USkeletalMesh>                     MalePathTucked;                                           // 0x0050(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USkeletalMesh>                     FemalePathTucked;                                         // 0x0070(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class UPhysicalMaterial>                 PhysicalMaterial;                                         // 0x0090(0x0020) (Edit, BlueprintVisible)
	int                                                DyeFlags;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TuckFlags;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HideFlags;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.ExilesJourneyTableRow
// 0x0088 (0x0090 - 0x0008)
struct FExilesJourneyTableRow : public FTableRowBase
{
	EJourneyChapter                                    chapter;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DescriptionDiscovered;                                    // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      AchievementName;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              JourneyXP;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.HarvestFoliageInfo
// 0x0070
struct FHarvestFoliageInfo
{
	struct FBox                                        AABB;                                                     // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x001C(0x0054) MISSED OFFSET
};

// ScriptStruct ConanSandbox.PurgeSpawnConfig
// 0x0008
struct FPurgeSpawnConfig
{
	struct FName                                       SpawnTableName;                                           // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.GamepadKey
// 0x0018 (0x0020 - 0x0008)
struct FGamepadKey : public FTableRowBase
{
	struct FName                                       ActionName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                Keys;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.GamepadPreset
// 0x0018 (0x0020 - 0x0008)
struct FGamepadPreset : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<struct FGamepadKey>                         PresetKeys;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.ActionMappingLabel
// 0x0018 (0x0020 - 0x0008)
struct FActionMappingLabel : public FTableRowBase
{
	struct FText                                       ActionLabel;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConanSandbox.MappingDisplayName
// 0x0028 (0x0030 - 0x0008)
struct FMappingDisplayName : public FTableRowBase
{
	struct FName                                       ActionMapping;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	bool                                               Invert;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConanSandbox.KeyMappingCategory
// 0x0028 (0x0030 - 0x0008)
struct FKeyMappingCategory : public FTableRowBase
{
	struct FText                                       LocalizableCategoryName;                                  // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<struct FMappingDisplayName>                 ActionMappings;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConanSandbox.BackgroundLoadingScreenStructure
// 0x0018 (0x0020 - 0x0008)
struct FBackgroundLoadingScreenStructure : public FTableRowBase
{
	class FString                                      BackgroundPath;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Platform;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.HintsStructure
// 0x0020 (0x0028 - 0x0008)
struct FHintsStructure : public FTableRowBase
{
	struct FText                                       HintDescription;                                          // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                Platform;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.SavedEntryData
// 0x0020
struct FSavedEntryData
{
	class URadialMenuEntry*                            SavedEntry;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       SavedLabel;                                               // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ConanSandbox.ThrallTierEntry
// 0x0018 (0x0020 - 0x0008)
struct FThrallTierEntry : public FTableRowBase
{
	TEnumAsByte<EThrallProfession>                     Profession;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EThrallTier>>                   Tiers;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConanSandbox.TargetData
// 0x0090
struct FTargetData
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct ConanSandbox.MapMarkerTableRow
// 0x0050 (0x0058 - 0x0008)
struct FMapMarkerTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     Location;                                                 // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DiscoveryRadius;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExilesJourneyEvent;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.EnergyDataTableRow
// 0x0010 (0x0018 - 0x0008)
struct FEnergyDataTableRow : public FTableRowBase
{
	EnergyTypes                                        Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.CraftingStationNameTableRow
// 0x0038 (0x0040 - 0x0008)
struct FCraftingStationNameTableRow : public FTableRowBase
{
	struct FText                                       StationName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        StationIconOverlay;                                       // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConanSandbox.SpawnTableRange
// 0x0008
struct FSpawnTableRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConanSandbox.RaceTemplateTableRow
// 0x0250 (0x0258 - 0x0008)
struct FRaceTemplateTableRow : public FTableRowBase
{
	struct FName                                       StatModifierTemplate;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Hair;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        FacialHair;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Head;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Forearms;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Hands;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        UpperBody;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        LowerBody;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Legs;                                                     // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Feet;                                                     // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        EyebrowTexture;                                           // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        EyeTexture;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        LipTexture;                                               // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        WarpaintFaceTexture;                                      // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        WarpaintBodyTexture;                                      // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        WarpaintHandsTexture;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Skin;                                                     // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        HairTint;                                                 // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        FacialHairTint;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Eyes;                                                     // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Eyebrows;                                                 // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        EyeMakeup;                                                // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        LipMakeup;                                                // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Warpaint;                                                 // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       IsFemale;                                                 // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Physique;                                                 // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Voice;                                                    // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSpawnTableRange                            Height;                                                   // 0x01B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            Bust;                                                     // 0x01B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            Dick;                                                     // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            EyeAngle;                                                 // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            EyeSize;                                                  // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            EyeDepth;                                                 // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            NoseWidth;                                                // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            NoseSize;                                                 // 0x01E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            NoseCurve;                                                // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            JawWidth;                                                 // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            CheekHeight;                                              // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            CheekWidth;                                               // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            ChinWidth;                                                // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            EarAngle;                                                 // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            EarSize;                                                  // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            LipSize;                                                  // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSpawnTableRange                            Pitch;                                                    // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<ECharacterGod>                              God;                                                      // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<ECharacterRace>                             Race;                                                     // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ConanSandbox.EquipmentTemplateTableRow
// 0x0088 (0x0090 - 0x0008)
struct FEquipmentTemplateTableRow : public FTableRowBase
{
	TArray<int>                                        MainHand;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        OffHand;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Helmet;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Torso;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Legs;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Hands;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Feet;                                                     // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        Backpack;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSpawnTableRange                            durability;                                               // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ConanSandbox.RaceEntry
// 0x0010
struct FRaceEntry
{
	struct FName                                       RaceTemplate;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.SpawnTableRow
// 0x0128 (0x0130 - 0x0008)
struct FSpawnTableRow : public FFCTableRow
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRaceEntry                                  MaleRaceTemplate;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRaceEntry                                  FemaleRaceTemplate;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               EquipmentTemplates;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       ProfessionTemplate;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatTemplate;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               StatModifierTemplate;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWeaponToComboPreset>                ComboPresets;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            NPCClass;                                                 // 0x0080(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UBehaviorTree>                     BehaviorTree;                                             // 0x00A0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            AIController;                                             // 0x00C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            NPCBehaviorParameters;                                    // 0x00E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         LootTable;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              DistanceThresholdRangedWeapon;                            // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceThresholdMeleeWeapon;                             // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockActionMinDuration;                                   // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockOnAttackedMinDuration;                               // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockMaxDuration;                                         // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockChance;                                              // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlockChanceWhenAttacked;                                  // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.StatTemplateTableRow
// 0x0018 (0x0020 - 0x0008)
struct FStatTemplateTableRow : public FTableRowBase
{
	struct FName                                       TemplateId;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EStatTableType                                     Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                statID;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConanSandbox.WeightedSpawnTableRow
// 0x0020 (0x0028 - 0x0008)
struct FWeightedSpawnTableRow : public FTableRowBase
{
	struct FName                                       WeightedTableID;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextWeightedTableID;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnTableID;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
