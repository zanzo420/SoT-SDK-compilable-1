#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Retraction.RetractorOrientationAdjustmentFlags
// 0x0003
struct FRetractorOrientationAdjustmentFlags
{
	bool                                               AdjustPitch;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustRoll;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustYaw;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
