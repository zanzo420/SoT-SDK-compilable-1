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

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	EWidgetDesignFlags_MAX         = 3
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{
	FillScreen                     = 0,
	Custom                         = 1,
	CustomOnScreen                 = 2,
	Desired                        = 3,
	DesiredOnScreen                = 4,
	EDesignPreviewSizeMode_MAX     = 5
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.PropertyPathSegment
// 0x0020
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     Struct;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UField*                                      Field;                                                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0010
struct FDynamicPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00E8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FAnchors                                    Anchors;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0020
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0010)
	TEnumAsByte<EBindingKind>                          Kind;                                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0014
struct FWidgetNavigationData
{
	TEnumAsByte<EUINavigationRule>                     Rule;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
