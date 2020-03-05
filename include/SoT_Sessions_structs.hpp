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

// Enum Sessions.ECrewSessionType
enum class ECrewSessionType : uint8_t
{
	Invalid                        = 0,
	SmallShip                      = 1,
	MediumShip                     = 2,
	LargeShip                      = 3,
	ServerLarge                    = 4,
	SloopSolo                      = 5,
	ECrewSessionType_MAX           = 6
};


// Enum Sessions.ESessionVisibility
enum class ESessionVisibility : uint8_t
{
	Invalid                        = 0,
	Open                           = 1,
	Closed                         = 2,
	ESessionVisibility_MAX         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Sessions.CrewSessionTemplate
// 0x0038
struct FCrewSessionTemplate
{
	struct FString                                     TemplateName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchmakingHopper;                                        // 0x0010(0x0010) (ZeroConstructor)
	TEnumAsByte<ECrewSessionType>                      SessionType;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      ShipSize;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxMatchmakingPlayers;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
// 0x0010
struct FSessionInfoUpdateAvailableEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
