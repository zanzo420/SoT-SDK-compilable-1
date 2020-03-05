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

// Enum PrioritisedPrompts.EPromptPriority
enum class EPromptPriority : uint8_t
{
	Low                            = 0,
	High                           = 1,
	EPromptPriority_MAX            = 2
};


// Enum PrioritisedPrompts.EPromptEvaluatedType
enum class EPromptEvaluatedType : uint8_t
{
	ShowPrompt                     = 0,
	ShowNoPrompt                   = 1,
	CompleteCoordinator            = 2,
	EPromptEvaluatedType_MAX       = 3
};


// Enum PrioritisedPrompts.EPromptStartStop
enum class EPromptStartStop : uint8_t
{
	Start                          = 0,
	Stop                           = 1,
	EPromptStartStop_MAX           = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrioritisedPrompts.PrioritisedPromptHandle
// 0x0010
struct FPrioritisedPromptHandle
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// 0x0058
struct FPrioritisedPrompt
{
	struct FText                                       Message;                                                  // 0x0000(0x0038) (Edit, BlueprintVisible)
	struct FString                                     Key;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPopUpMessageDesc*                           PopUpMessageDesc;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPromptPriority>                       BasePriority;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// 0x0068
struct FPrioritisedPromptWithHandle
{
	struct FPrioritisedPromptHandle                    PromptHandle;                                             // 0x0000(0x0010)
	struct FPrioritisedPrompt                          Prompt;                                                   // 0x0010(0x0058) (Edit, BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PromptEvaluation
// 0x0070
struct FPromptEvaluation
{
	TEnumAsByte<EPromptEvaluatedType>                  PromptType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0008(0x0068) (BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// 0x0070 (0x0080 - 0x0010)
struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
{
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0010(0x0068)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PromptsCounterIncrementEvent
// 0x0008
struct FPromptsCounterIncrementEvent
{
	class UClass*                                      AccessKey;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PlayerPromptTelemetryEvent
// 0x0020
struct FPlayerPromptTelemetryEvent
{
	struct FString                                     Message;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Key;                                                      // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
