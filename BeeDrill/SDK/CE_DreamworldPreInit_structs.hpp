#pragma once

// Conan Exiles (0.1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CE_Basic.hpp"
#include "CE_Engine_classes.hpp"
#include "CE_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DreamworldPreInit.EDebugLevel
enum class EDebugLevel : uint8_t
{
	EDebugLevel__INFOL_INFO0       = 0,
	EDebugLevel__INFOL_INFO1       = 1,
	EDebugLevel__INFOL_INFO2       = 2,
	EDebugLevel__INFOL_IMPORTANT   = 3,
	EDebugLevel__INFOL_CODEWARNING = 4,
	EDebugLevel__INFOL_DATAWARNING = 5,
	EDebugLevel__INFOL_DATAERROR   = 6,
	EDebugLevel__INFOL_CODEERROR   = 7,
	EDebugLevel__INFOL_MAX         = 8
};


// Enum DreamworldPreInit.ELogChannel
enum class ELogChannel : uint8_t
{
	ELogChannel__Discard           = 0,
	ELogChannel__Building          = 1,
	ELogChannel__Items             = 2,
	ELogChannel__AI                = 3,
	ELogChannel__Combat            = 4,
	ELogChannel__NPC               = 5,
	ELogChannel__Effects           = 6,
	ELogChannel__Network           = 7,
	ELogChannel__SmokeTesting      = 8,
	ELogChannel__Persistence       = 9,
	ELogChannel__Performance       = 10,
	ELogChannel__CharacterCreation = 11,
	ELogChannel__ItemInventory     = 12,
	ELogChannel__Main              = 13,
	ELogChannel__Religion          = 14,
	ELogChannel__GUI               = 15,
	ELogChannel__Gathering         = 16,
	ELogChannel__Login             = 17,
	ELogChannel__FRAMERATE         = 18,
	ELogChannel__Collections       = 19,
	ELogChannel__Audio             = 20,
	ELogChannel__HeatmapMetrics    = 21,
	ELogChannel__Thrall            = 22,
	ELogChannel__SpawnTable        = 23,
	ELogChannel__GlobalServerChannel = 24,
	ELogChannel__CombatAction      = 25,
	ELogChannel__Modding           = 26,
	ELogChannel__UnitTest          = 27,
	ELogChannel__Streaming         = 28,
	ELogChannel__GameEventTelemetryDebug = 29,
	ELogChannel__ELogChannel_MAX   = 30
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
