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

// Enum Tales.ETaleQuestStepBeginMode
enum class ETaleQuestStepBeginMode : uint8_t
{
	Cold                           = 0,
	Warm                           = 1,
	ETaleQuestStepBeginMode_MAX    = 2
};


// Enum Tales.ETaleQuestStepState
enum class ETaleQuestStepState : uint8_t
{
	Inactive                       = 0,
	Active                         = 1,
	PendingCompletion              = 2,
	Completed                      = 3,
	ETaleQuestStepState_MAX        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.SplineFootprintPathTool
// 0x0001
struct FSplineFootprintPathTool
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestCargoRunContractItem
// 0x0018
struct FTaleQuestCargoRunContractItem
{
	class UClass*                                      ItemToCollect;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestDeliveryRequest
// 0x0038
struct FTaleQuestDeliveryRequest
{
	int                                                Id;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FMerchantContractItemDesc                   Item;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible)
	int                                                NumToDeliver;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumToAllocate;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.TaleQuestDeliverableItem
// 0x0040
struct FTaleQuestDeliverableItem
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItem
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItem : public FQuestVariable
{

};

// ScriptStruct Tales.StepBountyTargetDesc
// 0x0040
struct FStepBountyTargetDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Portrait;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
