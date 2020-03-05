#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PositionalVoice.EVoiceChatState
enum class EVoiceChatState : uint8_t
{
	Silent                         = 0,
	Talking                        = 1,
	Muted                          = 2,
	Deafened                       = 3,
	EVoiceChatState_MAX            = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
