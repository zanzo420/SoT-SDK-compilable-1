#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AthenaCommons.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAI.AthenaAIFormComponent
// 0x0058 (0x0120 - 0x00C8)
//class UAthenaAIFormComponent : public UActorComponent
//{
//public:
//	class UAthenaAIFormDataAsset*                      FormData;                                                 // 0x00C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
//	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                        // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
//	unsigned char                                      UnknownData00[0x48];                                      // 0x00D8(0x0048) MISSED OFFSET
//
//	static UClass* StaticClass()
//	{
//		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponent");
//		return ptr;
//	}
//
//
//	void OnRep_FormData();
//};


// Class AthenaAI.AIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAIStrategyId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIStrategyId");
		return ptr;
	}

};


// Class AthenaAI.AIPartsDesc
// 0x0008 (0x0030 - 0x0028)
class UAIPartsDesc : public UDataAsset
{
public:
	struct FAIPartId                                   AIPartId;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsDesc");
		return ptr;
	}

};


// Class AthenaAI.AISpawner
// 0x03F0 (0x0418 - 0x0028)
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                // 0x0038(0x0048) (Edit)
	int                                                MaxNumOfSpawnedPawns;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                    // 0x0088(0x0010) (Edit, ZeroConstructor)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                 // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawnWaveSequenceRankProgression*         DefaultSpawnWaveProgression;                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges;                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   FindSpawnPosQuery;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      FindSpawnPosQueryRunMode;                                 // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FName                                       SpawnLocationType;                                        // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PriorityForSpawnedPawns;                                  // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverrideSpawnType;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAISpawnType>                    OverrideSpawnType;                                        // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasSpawnerLevelEncounters;                                // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	struct FName                                       NavMeshOverride;                                          // 0x00CC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             DefaultWaveSpawnLocations;                                // 0x00D8(0x0010) (Edit, ZeroConstructor)
	bool                                               IgnoreSpawningGracePeriodForNewCrew;                      // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveWhenRemovingRegionalSpawners;                       // 0x00E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x216];                                     // 0x00EA(0x0216) MISSED OFFSET
	class UAthenaAISettings*                           AthenaAISettings;                                         // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x110];                                     // 0x0308(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawner");
		return ptr;
	}


	int GetNumOfSpawnRequests();
};


// Class AthenaAI.AIPerCrewSpawner
// 0x0130 (0x0548 - 0x0418)
class UAIPerCrewSpawner : public UAISpawner
{
public:
	int                                                MaxNumOfCrewsToSpawnFor;                                  // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateBySettingFootOnIsland;                            // 0x041C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRespawnTimerForFirstSpawn;                             // 0x041D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AssociateSpawnsWithSpecificCrews;                         // 0x041E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PerceiveTriggerActorOnSpawn;                              // 0x041F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceRespawnTimeAfterCrewLeaves;                        // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x127];                                     // 0x0421(0x0127) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawner");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormDataAsset
// 0x0070 (0x0098 - 0x0028)
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<TEnumAsByte<EHealthChangedReason>>          PreventHealthChangedReasons;                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UStatusRecipientResponseList*                OverrideStatusRecipientResponseList;                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     KilledVfxTemplate;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AICharacterAudioComponent;                                // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimNotifyEmitterWithObservers;                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighPriorityFootstepAudio;                                // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              MovementSpeedMultipler;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPlayerStat                                 StatToFireOnDeath;                                        // 0x0078(0x0010) (Edit, DisableEditOnInstance)
	struct FName                                       FeatureName;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FormComponentClass;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTracker
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTracker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPlayerTracker");
		return ptr;
	}

};


// Class AthenaAI.AISpawnerPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UAISpawnerPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnerPlayerTracker");
		return ptr;
	}

};


// Class AthenaAI.AIInteractableType
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableType");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIAbilityType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityType");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityStageParams
// 0x0008 (0x0030 - 0x0028)
class UAthenaAIAbilityStageParams : public UObject
{
public:
	float                                              AbilityCooldownMultiplier;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideParams;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityStageParams");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbility
// 0x0040 (0x0068 - 0x0028)
class UAthenaAIAbility : public UObject
{
public:
	class UAthenaAIAbilityParams*                      AbilityParams;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAthenaAIController*                         Controller;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIPawnInterface>           AIPawnInterface;                                          // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbility");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityParams
// 0x0060 (0x0088 - 0x0028)
class UAthenaAIAbilityParams : public UObject
{
public:
	TEnumAsByte<EAIAbilityDamageIntervalCounterMode>   DamageIntervalCountingMode;                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTimeBetweenAbility;                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FAthenaAIAbilityPlayerBasedRanges           ActivationTimerCooldown;                                  // 0x0030(0x0010) (Edit)
	struct FAthenaAIAbilityPlayerBasedRanges           TimeBetweenAbility;                                       // 0x0040(0x0010) (Edit)
	bool                                               UseDamageBetweenAbility;                                  // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FAthenaAIAbilityPlayerBasedRanges           DamageBetweenAbility;                                     // 0x0058(0x0010) (Edit)
	float                                              AbilityRadius;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseMinMaxAttackRange;                                     // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FMinMaxAbilityRange                         MinMaxAttackRange;                                        // 0x0070(0x0008) (Edit)
	TArray<struct FAIAbilityFollowUp>                  FollowUpAbilities;                                        // 0x0078(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityParams");
		return ptr;
	}

};


// Class AthenaAI.AIInteractableComponent
// 0x0038 (0x0100 - 0x00C8)
class UAIInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UClass*                                      Type;                                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DetachOffsetFromOwner;                                    // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanHaveTarget;                                            // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x00E5(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableComponent");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_BaseConditional
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_BaseConditional : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_BaseConditional");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetOnShip
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TargetOnShip : public UBTDecorator_BaseConditional
{
public:
	bool                                               Invert;                                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBT_ShipOwnership>                     ShipOwnership;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetOnShip");
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryShipsForTarget
// 0x0290 (0x0300 - 0x0070)
class UBTService_QueryShipsForTarget : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   MaxShipDistanceFromHomePosition;                          // 0x0070(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinDamageToSwitchTargets;                                 // 0x00A0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinSecondsBeforeSwitchTargets;                            // 0x00D0(0x0030) (Edit)
	struct FAIDataProviderBoolValue                    SwitchTargetsAfterTimerExpires;                           // 0x0100(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   SecondsBeforeSwitchTargetsAfterTimerExpires;              // 0x0130(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   TimeBetweenDiceRolls;                                     // 0x0160(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForAggression;                                    // 0x0190(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinTotalDamageToTurnDiceRollForAggression;                // 0x01C0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForDamageAggression;                              // 0x01F0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForDamageDormancy;                                // 0x0220(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   PlayerDistanceThresholdToTurnAggressive;                  // 0x0250(0x0030) (Edit)
	bool                                               IgnoreAI;                                                 // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7F];                                      // 0x0281(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_QueryShipsForTarget");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (0x00E0 - 0x0088)
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	float                                              DamageToApply;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00A8(0x0030) (Edit)
	float                                              MaxDistanceToTargetToApplyDamage;                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetActor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetShip
// 0x01A8 (0x0230 - 0x0088)
class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
{
public:
	float                                              BiteRadiusOffsetToBeginAttackHeadOn;                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BiteRadiusOffsetToBeginAttackPerpendicular;               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeToStartAttack;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UAnimSequence*                               AttackAnim;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAnimLength;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPerformAttack;                                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AttackVFX;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackVFXZOffset;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoSTraceProfileName;                                      // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00C0(0x0030) (Edit)
	TArray<struct FSwimAttackTargetShipImpulseData>    ImpulseData;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FAIDataProviderIntValue                     MinDamageHolesToApply;                                    // 0x0100(0x0030) (Edit)
	struct FAIDataProviderIntValue                     MaxDamageHolesToApply;                                    // 0x0130(0x0030) (Edit)
	int                                                LevelsOfHullDamage;                                       // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class UClass*                                      DamageCauserType;                                         // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   PlayerBiteRadius;                                         // 0x0170(0x0030) (Edit)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x01A0(0x0044) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   PlayerBiteDamage;                                         // 0x01E8(0x0030) (Edit)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	class AShip*                                       TargetShip;                                               // 0x0228(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetShip");
		return ptr;
	}

};


// Class AthenaAI.AIAnimationStateId
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateId");
		return ptr;
	}

};


// Class AthenaAI.AIItemParameterInterface
// 0x0000 (0x0028 - 0x0028)
class UAIItemParameterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIItemParameterInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
// 0x0060 (0x0088 - 0x0028)
class UAthenaAIControllerSharedParamValuesDataAsset : public UDataAsset
{
public:
	bool                                               OverrideMeshScale;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              MeshScale;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCurrentTargetPerceivedNotVisibleAge;              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FAthenaAIControllerHealthCustomisation      HealthCustomisationValues;                                // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                  // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                      // 0x0078(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                     // 0x0028(0x0014) (Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPerceivedNotVisibleAge;                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideTeamID;                                           // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAITeam>                         TeamID;                                                   // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              TargetSwitchToleranceDistance;                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<float>                                      TargetLoadWeightingBias;                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	float                                              VisionAngleToStartScalingDistance;                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScalingAppliedToDistanceAtMaxPeripheralVisionAngle;       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                        // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideMeshScale;                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              IndividualMeshScale;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerHealthCustomisation      IndividualHealthCustomisationValues;                      // 0x0080(0x000C) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FAthenaAIControllerParamValue>       IndividualInitialBlackboardValues;                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       IndividualNamedControllerParams;                          // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerSenseSettingOverride> IndividualAIStrategySenseSettingOverrides;                // 0x00C0(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge;    // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge;            // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FeatureName;                                              // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
// 0x00D0 (0x0158 - 0x0088)
class UAthenaAICharacterControllerSharedParamValuesDataAsset : public UAthenaAIControllerSharedParamValuesDataAsset
{
public:
	bool                                               OverrideUseRVOAvoidance;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRVOAvoidance;                                          // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePrioritiseInteractablesBeforeEnemies;             // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PrioritiseInteractablesBeforeEnemies;                     // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;        // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     CannonTargetingParams;                                    // 0x00B8(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;             // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                 // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                           // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                          // 0x0108(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                     // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AnimationDataOverrideAsset;                               // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CustomAnimationAsset;                                     // 0x0138(0x0010) (Edit, ZeroConstructor)
	bool                                               OverrideNoInitialItem;                                    // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoInitialItem;                                            // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideBeginFleeing;                                     // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BeginFleeing;                                             // 0x014B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UEnvQuery*                                   FleeingEQS;                                               // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x00E8 (0x01C8 - 0x00E0)
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	bool                                               IndividualOverrideUseRVOAvoidance;                        // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualUseRVOAvoidance;                                // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualOverridePrioritiseInteractablesBeforeEnemies;   // 0x00E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualPrioritiseInteractablesBeforeEnemies;           // 0x00E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 IndividualDistanceInMToCannonShotHitChanceCurve;          // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       IndividualAIStrategyMovementProperties;                   // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides;// 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     IndividualCannonTargetingParams;                          // 0x0110(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;   // 0x0120(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;       // 0x0130(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             IndividualNamedItemParams;                                // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories;                 // 0x0150(0x0010) (Edit, ZeroConstructor)
	bool                                               UseDamageBasedAbilityStages;                              // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TArray<struct FAthenaAIAbilityDamageStage>         IndividualDamageBasedAIAbilityStages;                     // 0x0168(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              IndividualAIAbilityParams;                                // 0x0178(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            IndividualNonItemEngageOptions;                           // 0x0188(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualAnimationDataOverrideAsset;                     // 0x0198(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualCustomAnimationAsset;                           // 0x01A8(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideNoInitialItem;                          // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualNoInitialItem;                                  // 0x01B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualOverrideBeginFleeing;                           // 0x01BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualBeginFleeing;                                   // 0x01BB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	class UEnvQuery*                                   IndividualFleeingEQS;                                     // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAmmoDataAsset
// 0x00A8 (0x00D0 - 0x0028)
class UAthenaAIAmmoDataAsset : public UDataAsset
{
public:
	TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAmmoDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AIAmmoRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIAmmoRankProgression : public UDataAsset
{
public:
	TArray<struct FAIAmmoRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIAmmoRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIAmmoProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIAmmoProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIAmmoRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIAmmoProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIAmmoTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIAmmoTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIAmmoDataAsset*>              AllAmmo;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIAmmoDataAsset*                      DefaultAmmo;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIAmmoTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIAnimationStateInterface
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationStateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateInterface");
		return ptr;
	}

};


// Class AthenaAI.AIClassId
// 0x0000 (0x0028 - 0x0028)
class UAIClassId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIClassId");
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategory
// 0x0040 (0x0068 - 0x0028)
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<class UAIPartsDesc*>                        Parts;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	int                                                NextPartsIndex;                                           // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseWeightedArray;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       UseWeightedArrayFeatureName;                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FWeightedProbabilityRange                   WeightedArray;                                            // 0x0048(0x0020) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsCategory");
		return ptr;
	}

};


// Class AthenaAI.AIPartsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterServiceInterface");
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AIClassIdTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIClassIdTypeList : public UDataAsset
{
public:
	TArray<class UClass*>                              AllClassIds;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIClassIdTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIColorVariantPool
// 0x0010 (0x0038 - 0x0028)
class UAIColorVariantPool : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               AvailableColors;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIColorVariantPool");
		return ptr;
	}

};


// Class AthenaAI.AIDebugVisualisationComponent
// 0x0050 (0x0118 - 0x00C8)
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	TArray<struct FAIDebugVisualisationLine>           Lines;                                                    // 0x00C8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                    // 0x00D8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                // 0x00E8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                  // 0x00F8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                    // 0x0108(0x0010) (Edit, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDebugVisualisationComponent");
		return ptr;
	}

};


// Class AthenaAI.AIDialogueStateProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDialogueStateProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDialogueStateProviderInterface");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0070 (0x0098 - 0x0028)
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropProgression;                                      // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FTargetSkillsetProgressionPair              TargetSkillsetOverrides;                                  // 0x0058(0x0020) (Edit)
	struct FTargetItemDropProgressionPair              TargetItemDropOverrides;                                  // 0x0078(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipe");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0020 (0x0048 - 0x0028)
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        AllRecipes;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterGenerationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (0x0498 - 0x0410)
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	class UAIEncounterGenerationRecipeTypeList*        GenerationRecipes;                                        // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIEncounterServiceInterface> EncounterService;                                         // 0x0420(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0430(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationService");
		return ptr;
	}

};


// Class AthenaAI.AIFormRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIFormRankProgression : public UDataAsset
{
public:
	TArray<struct FAIFormRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFormRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIFormRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFormProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIFormTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIFormTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      DefaultForm;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFormTypeList");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAILoadoutRankProgression*>           AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutTypeList : public UDataAsset
{
public:
	TArray<class ULoadoutAsset*>                       AllLoadouts;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutTypeList");
		return ptr;
	}

};


// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAISkillsetRankProgression*>          AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISkillsetProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AISkillsetTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AllSkillsets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISkillsetTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	TArray<class UAIPartsCategory*>                    AllPartsCategories;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsCategoryTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterService
// 0x03C0 (0x07D0 - 0x0410)
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	TArray<struct FAIPartsCategoryMapping>             DefaultPartsCategories;                                   // 0x0418(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIPartsCategoryFormMapping>         FormPartsCategories;                                      // 0x0428(0x0010) (Edit, ZeroConstructor)
	class UAIAmmoTypeList*                             Ammo;                                                     // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIAmmoProgressionTypeList*                  AmmoProgressions;                                         // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIFormTypeList*                             Forms;                                                    // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIFormProgressionTypeList*                  FormProgressions;                                         // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAILoadoutTypeList*                          Loadouts;                                                 // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAILoadoutProgressionTypeList*               LoadoutProgressions;                                      // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetTypeList*                         Skillsets;                                                // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetProgressionTypeList*              SkillsetProgressions;                                     // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIClassIdTypeList*                          ClassIds;                                                 // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPartsCategoryTypeList*                    PartsCategories;                                          // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIColorVariantPool*                         TeamColors;                                               // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIItemDropComponentList*                    AIItemDropSpawners;                                       // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIItemDropComponentRankProgressionList*     AIItemDropSpawnerProgressions;                            // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x330];                                     // 0x04A0(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterService");
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISkillsetRankProgression : public UDataAsset
{
public:
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISkillsetRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettings
// 0x0048 (0x0070 - 0x0028)
class UAIEncounterSettings : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0028(0x0020) (Edit)
	class UClass*                                      AIClass;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TeamColor;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Skillset;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettings");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsFixed
// 0x00B0 (0x0120 - 0x0070)
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SpecificSkillset;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                  // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Form;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Ammo;                                                     // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DioramaRole;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       LocalisableName;                                          // 0x00B8(0x0038) (Edit)
	struct FEncounterParams                            EncounterTrackingParams;                                  // 0x00F0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                   // 0x0100(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsFixed");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0060 (0x00D0 - 0x0070)
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                       // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                          // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoProgression;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropComponentProgression;                             // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FEncounterParams                            EncounterTrackingParams;                                  // 0x00C0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIIdentifierOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIIdentifierOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIIdentifierOwnerInterface");
		return ptr;
	}

};


// Class AthenaAI.AIInteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableInterface");
		return ptr;
	}

};


// Class AthenaAI.AIInteractableOperatorInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableOperatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableOperatorInterface");
		return ptr;
	}

};


// Class AthenaAI.AIItemDropComponentList
// 0x0010 (0x0038 - 0x0028)
class UAIItemDropComponentList : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    AllSpawners;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentList");
		return ptr;
	}

};


// Class AthenaAI.AIItemDropComponentRankProgressionList
// 0x0010 (0x0038 - 0x0028)
class UAIItemDropComponentRankProgressionList : public UDataAsset
{
public:
	TArray<class UAIItemSpawnRankProgression*>         AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentRankProgressionList");
		return ptr;
	}

};


// Class AthenaAI.AIItemSpawnRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIItemSpawnRankProgression : public UDataAsset
{
public:
	TArray<struct FAIDropSpawnerRankMapping>           RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutInterface
// 0x0000 (0x0028 - 0x0028)
class UAILoadoutInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutInterface");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutWithNonStorableInterface
// 0x0000 (0x0028 - 0x0028)
class UAILoadoutWithNonStorableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutWithNonStorableInterface");
		return ptr;
	}

};


// Class AthenaAI.AIManagerBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIManagerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIManagerBlueprintFunctionLibrary");
		return ptr;
	}


	class AItemInfo* STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc);
	int STATIC_GetFrameCounter();
	void STATIC_AddNameplateToAI(class AActor* Actor, const struct FString& DisplayName);
};


// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIManagerServiceInterface");
		return ptr;
	}


	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
	int GetNumOfSpawnedPawns();
};


// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<struct FAITypeData>                         AITypes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringClassReference>               AdditionalAIActors;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAITypeListDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AISpawnWaveSequence
// 0x0018 (0x0040 - 0x0028)
class UAISpawnWaveSequence : public UDataAsset
{
public:
	TArray<struct FAISpawnerWave>                      Waves;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequence");
		return ptr;
	}

};


// Class AthenaAI.AISpawnWaveSequenceRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISpawnWaveSequenceRankProgression : public UDataAsset
{
public:
	TArray<struct FAISpawnWaveSequenceRankMapping>     RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequenceRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
// 0x0040 (0x0068 - 0x0028)
class UAIWeightedProbabilityRangeOfRangesAsset : public UDataAsset
{
public:
	float                                              RespawnChance;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           RespawnTimerRanges;                                       // 0x0030(0x0030) (Edit)
	struct FName                                       FeatureName;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset");
		return ptr;
	}

};


// Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIWeightedProbabilityRangeOfRangesRankProgression : public UDataAsset
{
public:
	TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerObservedInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerObservedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObservedInterface");
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObserverInterface");
		return ptr;
	}

};


// Class AthenaAI.AISpawnRequestResultLoggerInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnRequestResultLoggerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnRequestResultLoggerInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAISettings
// 0x00A8 (0x00E0 - 0x0038)
class UAthenaAISettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AITypesAsset;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIPartIdListingAsset;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FallbackAIDifficultyRank;                                 // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNumOfSpawnedActors;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxPlayerEquivalentAIsPerRegion;                          // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxWorldAICostUnitsForWorld;                              // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AIRegionCostUnitsForPlayer;                               // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterNetRelevancy;                                    // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterRegionDensityCheckTimer;                         // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterWorldDensityCheckTimer;                          // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToPlayerToRaiseSpawnPriority;                     // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingCanSpawnRequestTime;                           // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingCanSpawnRequestTime;                           // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingLocationCheckTime;                             // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingLocationCheckTime;                             // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterAINoiseTickInterval;                             // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PeriodicAINoiseComponentTickInterval;                     // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityDormancyRange;                        // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityTickTime;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy;                 // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultNavAgentCapsuleRadius;                             // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultNavAgentCapsuleHalfHeight;                         // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinDelayBeforeRetryingUnsuccessfulWave;                   // 0x00B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxDelayBeforeRetryingUnsuccessfulWave;                   // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringAssetReference                       AIEncounterServiceAssetClassFileLocation;                 // 0x00C0(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIEncounterGenerationServiceAssetClassFileLocation;       // 0x00D0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAISettings");
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextId
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextId");
		return ptr;
	}

};


// Class AthenaAI.AIManagerService
// 0x0660 (0x0A70 - 0x0410)
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	int                                                MaxNumOfSpawnedPawns;                                     // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF4];                                      // 0x0424(0x00F4) MISSED OFFSET
	TArray<class UClass*>                              LoadedAIPawnClasses;                                      // 0x0518(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              LoadedAIItemDropComponentClasses;                         // 0x0528(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x330];                                     // 0x0538(0x0330) MISSED OFFSET
	TArray<class UAIPlayerTracker*>                    PlayerTrackers;                                           // 0x0868(0x0010) (ZeroConstructor)
	TArray<struct FCustomPlayersAITrackerData>         CustomPlayersTrackerDatas;                                // 0x0878(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x100];                                     // 0x0888(0x0100) MISSED OFFSET
	TArray<class UAISpawner*>                          SpawnersPendingShutdown;                                  // 0x0988(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x0998(0x00A8) MISSED OFFSET
	class UAthenaAITypeListDataAsset*                  AITypeList;                                               // 0x0A40(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawnContextList*                         AISpawnContextList;                                       // 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0A50(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIManagerService");
		return ptr;
	}


	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
	class UAISpawner* GetRegionSpawner(const struct FName& Region, int Index);
	int GetNumOfSpawnRequests();
};


// Class AthenaAI.DebugAIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerServiceInterface");
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
};


// Class AthenaAI.DebugAIManagerService
// 0x0100 (0x0B70 - 0x0A70)
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0A70(0x00F0) MISSED OFFSET
	TArray<class UClass*>                              BlockedAIAbilities;                                       // 0x0B60(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerService");
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
};


// Class AthenaAI.AINameplateComponent
// 0x00D0 (0x0390 - 0x02C0)
class UAINameplateComponent : public UNameplateComponent
{
public:
	float                                              VisibleFromWorldDistance;                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleUntilWorldDistance;                                // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleAfterDeathDuration;                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x02D0(0x0010) (Net, ZeroConstructor)
	struct FString                                     DebugDisplayText;                                         // 0x02E0(0x0010) (Net, ZeroConstructor)
	bool                                               VisibilityDisabled;                                       // 0x02F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9F];                                      // 0x02F1(0x009F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AINameplateComponent");
		return ptr;
	}


	void OnRep_DisplayName();
	void OnRep_DebugDisplayText();
};


// Class AthenaAI.AINoiseFireInstigator
// 0x0008 (0x0418 - 0x0410)
class AAINoiseFireInstigator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AINoiseFireInstigator");
		return ptr;
	}

};


// Class AthenaAI.AIPartsService
// 0x0018 (0x0040 - 0x0028)
class UAIPartsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIColorVariantPool*                         TeamColors;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsService");
		return ptr;
	}

};


// Class AthenaAI.AIPartCustomizationInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartCustomizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartCustomizationInterface");
		return ptr;
	}

};


// Class AthenaAI.AIPartIdListingAsset
// 0x0010 (0x0038 - 0x0028)
class UAIPartIdListingAsset : public UDataAsset
{
public:
	TArray<struct FAIPartIdNumVariantInfo>             AIPartIdsVariantInfo;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartIdListingAsset");
		return ptr;
	}

};


// Class AthenaAI.AIPartsRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalInterface");
		return ptr;
	}

};


// Class AthenaAI.AIPartsRetrievalComponent
// 0x00A8 (0x0170 - 0x00C8)
class UAIPartsRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UAIPartsCategory*                            PartsCategory;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FReplicatedAIPartsData                      ReplicatedAIPartsData;                                    // 0x00D8(0x0018) (Net)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalComponent");
		return ptr;
	}


	void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex);
	void OnRep_ReplicatedAIPartsData();
};


// Class AthenaAI.AIPawnInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPawnInterface");
		return ptr;
	}

};


// Class AthenaAI.AIProximityPlayerTracker
// 0x01A0 (0x01E8 - 0x0048)
class UAIProximityPlayerTracker : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0048(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIProximityPlayerTracker");
		return ptr;
	}

};


// Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
// 0x0038 (0x0080 - 0x0048)
class UFilterFirstPlayerEnterPlayerTrackerDecorator : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator");
		return ptr;
	}

};


// Class AthenaAI.AIProjectileInterface
// 0x0000 (0x0028 - 0x0028)
class UAIProjectileInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIProjectileInterface");
		return ptr;
	}

};


// Class AthenaAI.AIRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAIRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIRegionInterface");
		return ptr;
	}

};


// Class AthenaAI.AIRegionComponent
// 0x0070 (0x0300 - 0x0290)
class UAIRegionComponent : public USceneComponent
{
public:
	bool                                               UpdateRegionPosition;                                     // 0x0290(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	struct FName                                       NavMeshAgentType;                                         // 0x0294(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSpawnLocationGroup>                 SpawnLocationGroups;                                      // 0x02A0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x02B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIRegionComponent");
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerInterface");
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextContainerComponent
// 0x0018 (0x00E0 - 0x00C8)
class UAISpawnContextContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerComponent");
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnContextList : public UDataAsset
{
public:
	TArray<struct FAISpawnContextData>                 SpawnContextList;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextList");
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextProviderInterface");
		return ptr;
	}

};


// Class AthenaAI.BountySpawnerAudioZonesInterface
// 0x0000 (0x0028 - 0x0028)
class UBountySpawnerAudioZonesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BountySpawnerAudioZonesInterface");
		return ptr;
	}

};


// Class AthenaAI.AIBountySpawner
// 0x0168 (0x0580 - 0x0418)
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;         // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                               // 0x0420(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x0430(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x0440(0x0020) (Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x0460(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0480(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ImmediatelyPerceiveTargets;                               // 0x0494(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x0495(0x002B) MISSED OFFSET
	TArray<class AActor*>                              CrewMembers;                                              // 0x04C0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                   // 0x04D0(0x0010) (ZeroConstructor)
	class UOverlapTriggerComponent*                    AudioZoneTriggerComponent;                                // 0x04E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x98];                                      // 0x04E8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIBountySpawner");
		return ptr;
	}

};


// Class AthenaAI.AIFixedWavesSpawner
// 0x0028 (0x0440 - 0x0418)
class UAIFixedWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            SpawnedWaves;                                             // 0x0418(0x0010) (Edit, ZeroConstructor)
	int                                                NumWavesToSpawnOnSpottedNewTarget;                        // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x042C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFixedWavesSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIIncrementalWaveSpawner
// 0x0118 (0x0530 - 0x0418)
class UAIIncrementalWaveSpawner : public UAISpawner
{
public:
	struct FAISpawnerWave                              SpawnedWave;                                              // 0x0418(0x0100) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0518(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIIncrementalWaveSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIInteractableSpawner
// 0x0100 (0x0518 - 0x0418)
class UAIInteractableSpawner : public UAISpawner
{
public:
	class UClass*                                      AIInteractableType;                                       // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InhabitedChance;                                          // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                       // 0x0428(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                           // 0x0458(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                               // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;             // 0x0490(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                 // 0x04C0(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                   // 0x04F0(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RunSpawnForInteractableSimulation;                        // 0x04F1(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04F2(0x0002) MISSED OFFSET
	int                                                NumIterations;                                            // 0x04F4(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET
	TEnumAsByte<EPlayMode>                             CachedPlaymode;                                           // 0x0510(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0511(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIOnDemandSpawner
// 0x0000 (0x0418 - 0x0418)
class UAIOnDemandSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIOnDemandSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIPerPlayerSpawner
// 0x0118 (0x0530 - 0x0418)
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                 // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              RadiusToCheckForExistingPopulation;                       // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExistingPopulationInRadius;                            // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                       // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	int                                                MaxActorsTotalPerPlayer;                                  // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunSimulation;                                            // 0x042C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	int                                                RankForSimulation;                                        // 0x0430(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumIterations;                                            // 0x0434(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF8];                                      // 0x0438(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPerPlayerSpawner");
		return ptr;
	}


	void PlayerDeath(class AActor* Player);
	int GetNumOfPlayers();
};


// Class AthenaAI.NamedAIDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UNamedAIDataAsset : public UDataAsset
{
public:
	TArray<struct FText>                               MaleCaptainNames;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCaptainNames;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               MaleCrewNames;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCrewNames;                                          // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomNameTitleMapping>           CustomNameTitles;                                         // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomClassIdNameOverrides>       CustomNameOverrides;                                      // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultClassId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FemaleCaptainClassId;                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MaleCaptainClassId;                                       // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FemaleCrewClassId;                                        // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MaleCrewClassId;                                          // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.NamedAIDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AIBoobyTrapSpawner
// 0x00D0 (0x0600 - 0x0530)
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                     // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 NewWaveSpawnSfx;                                          // 0x0538(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewWaveSpawnSfxTriggerRadius;                             // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ShowNameplatesFor;                                        // 0x0548(0x0010) (Edit, ZeroConstructor)
	class UNamedAIDataAsset*                           NamedAIDataAsset;                                         // 0x0558(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToTrack;                                             // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0568(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIBoobyTrapSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIProgressiveWavesSpawner
// 0x0030 (0x0448 - 0x0418)
class UAIProgressiveWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            Waves;                                                    // 0x0418(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET
	class AActor*                                      TriggerActor;                                             // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIProgressiveWavesSpawner");
		return ptr;
	}

};


// Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnerSpawnInteractableAssignmentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface");
		return ptr;
	}

};


// Class AthenaAI.AIWaveSpawner
// 0x0138 (0x0550 - 0x0418)
class UAIWaveSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	struct FAISpawnerWave                              SpawnedWave;                                              // 0x0420(0x0100) (Edit)
	float                                              MinRespawnTime;                                           // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRespawnTime;                                           // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0528(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIWaveSpawner");
		return ptr;
	}

};


// Class AthenaAI.AISpawnerList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnerList : public UDataAsset
{
public:
	TArray<class UAISpawner*>                          Spawners;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnerList");
		return ptr;
	}

};


// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (0x0290 - 0x0290)
class UAISpawnPointSeedComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnPointSeedComponent");
		return ptr;
	}

};


// Class AthenaAI.AISpawnRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnRegionInterface");
		return ptr;
	}

};


// Class AthenaAI.AITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AITargetInterface");
		return ptr;
	}

};


// Class AthenaAI.AITargetServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AITargetServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AITargetService
// 0x0030 (0x0440 - 0x0410)
class AAITargetService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0410(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AITargetService");
		return ptr;
	}

};


// Class AthenaAI.AITargetWeaponInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetWeaponInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AITargetWeaponInterface");
		return ptr;
	}


	bool FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig);
};


// Class AthenaAI.AIWithFormInterface
// 0x0000 (0x0028 - 0x0028)
class UAIWithFormInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIWithFormInterface");
		return ptr;
	}

};


// Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition
// 0x0028 (0x0050 - 0x0028)
class UAppliedStatusToMultipleAIWithFormsStatCondition : public UStatCondition
{
public:
	TArray<class UClass*>                              Status;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                AICountMinimum;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowAllForms;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition");
		return ptr;
	}

};


// Class AthenaAI.AquaticAITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAquaticAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AquaticAITargetInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIAbilityHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityHandlerComponent
// 0x00B8 (0x0180 - 0x00C8)
class UAthenaAIAbilityHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C8(0x0058) MISSED OFFSET
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityStages;                                            // 0x0120(0x0010) (ZeroConstructor)
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                              // 0x0130(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              ReadyAbilitiesPool;                                       // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0150(0x0020) MISSED OFFSET
	class UClass*                                      DebugAlwaysOnAbility;                                     // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerComponent");
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (0x02C8 - 0x0290)
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove;                                   // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleToTurnOnSpot;                                     // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor;                  // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor;                    // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A0(0x0004) MISSED OFFSET
	float                                              MinSlowDownSpeed;                                         // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterPathFollowingComponent");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerBase
// 0x0150 (0x0650 - 0x0500)
class AAthenaAIControllerBase : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0500(0x0008) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          ParamsDataAsset;                                          // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0510(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerBase");
		return ptr;
	}


	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAIController
// 0x0230 (0x0880 - 0x0650)
class AAthenaAIController : public AAthenaAIControllerBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0650(0x0010) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x0660(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0664(0x000C) MISSED OFFSET
	class UAISenseConfig_Sight*                        SightConfig;                                              // 0x0670(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Hearing*                      HearingConfig;                                            // 0x0678(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Damage*                       DamageSenseConfig;                                        // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0688(0x0048) MISSED OFFSET
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x06D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x178];                                     // 0x06E0(0x0178) MISSED OFFSET
	class AActor*                                      CurrentNotSeenPerceivedActor;                             // 0x0858(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      PendingSpawnTriggerActor;                                 // 0x0860(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0868(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIController");
		return ptr;
	}


	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAICharacterController
// 0x0208 (0x0A88 - 0x0880)
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	class UAthenaAIItemParamsDataAsset*                ItemParamsDataAsset;                                      // 0x0880(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               FallbackLoadoutIfAllEngageItemsDropped;                   // 0x0888(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ControlRotationInterpSpeed;                               // 0x0890(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ControlRotationUseConstantInterp;                         // 0x0894(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0895(0x0013) MISSED OFFSET
	class UAthenaAICharacterControllerParamsDataAsset* CharacterParamsDataAsset;                                 // 0x08A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x08B0(0x0090) MISSED OFFSET
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                           // 0x0940(0x0010) (ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                          // 0x0950(0x0010) (ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                     // 0x0960(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x0970(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x110];                                     // 0x0978(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterController");
		return ptr;
	}


	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
	void ClearOverridePrioritiseInteractablesBeforeEnemies();
};


// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (0x0168 - 0x00E0)
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FWeightedProbabilityRange                   Courage;                                                  // 0x00E0(0x0020) (Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                               // 0x0100(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                               // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                      // 0x0118(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                       // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreat;                                             // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                     // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                     // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMin;                                  // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMax;                                  // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationDurationVariance;                                // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlertThreshold;                                           // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FleeThreshold;                                            // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeCalm;                                         // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CalmCooldownTime;                                         // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromLeaderForIdle;                             // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                        // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.FaunaAIContollerParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (0x0040 - 0x0028)
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataProvider");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIControllerParamsTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsTargetInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormComponentContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIFormComponentContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponentContainerInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (0x01C8 - 0x01C8)
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIPerceptionComponent");
		return ptr;
	}


	bool IsPerceptionSenseEnabled(class UClass* Sense);
	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(class UClass* Sense, bool Enable);
	void EnableAllPerception(bool Enable);
};


// Class AthenaAI.AthenaAISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAISightTargetInterface : public UAISightTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAISightTargetInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (0x0060 - 0x0028)
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           WeightedRangesValue;                                      // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIWeightedRangesDataProvider");
		return ptr;
	}

};


// Class AthenaAI.BlackboardAIDataProvider
// 0x0018 (0x0040 - 0x0028)
class UBlackboardAIDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BlackboardAIDataProvider");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (0x0088 - 0x0068)
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UClass*                                      StateId;                                                  // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActionState");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	bool                                               ReverseLogic;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActorInWater");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CurrentAIStrategy
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_CurrentAIStrategy : public UBTDecorator_BaseConditional
{
public:
	TArray<class UClass*>                              Strategies;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CurrentAIStrategy");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_ItemReadyToUse : public UBTDecorator_BaseConditional
{
public:
	class UClass*                                      NotificationId;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ItemReadyToUse");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BaseConditional
{
public:
	float                                              Interval;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x0070(0x0028) (Edit)
	bool                                               UseTargetPosition;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetPositionKey;                                        // 0x00A0(0x0028) (Edit)
	struct FVector                                     OffsetToApplyToTargetPosition;                            // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x00D4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LineOfSightToTarget");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0028 (0x00B8 - 0x0090)
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Class;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     CachedDescription;                                        // 0x00A0(0x0010) (ZeroConstructor)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardClassValue");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (0x0080 - 0x0068)
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBlackboardValueCompositeType>         FloatConditionComposite;                                  // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardValues");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (0x00B8 - 0x0080)
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	TEnumAsByte<EFloatValueComparisonType>             Comparison;                                               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Value;                                                    // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareFloatValueBase");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardActorSpeed : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareCurrentHealth
// 0x0000 (0x00B8 - 0x00B8)
class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareCurrentHealth");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (0x0108 - 0x0080)
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (Edit)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRange");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRangeOfPoint
// 0x0028 (0x0130 - 0x0108)
class UBTDecorator_TargetInRangeOfPoint : public UBTDecorator_TargetInRange
{
public:
	struct FBlackboardKeySelector                      ReferencePointKey;                                        // 0x0108(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRangeOfPoint");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (0x00E8 - 0x0080)
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (Edit)
	bool                                               TestForOutsideRange;                                      // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRange");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// 0x0010 (0x00F8 - 0x00E8)
class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRangeOfSeenActors");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ConeCheck3D");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_DockedToInteractable
// 0x0000 (0x0090 - 0x0090)
class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_DockedToInteractable");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	struct FName                                       FeatureName;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_FeatureToggle");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0068(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomDiceRoll");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	int                                                MinNumLoops;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumLoops;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RandomNumLoopCurve;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomLoop");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RollAgainstPatrolChance");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestAIInteractableType
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_TestAIInteractableType : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Type;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestAIInteractableType");
		return ptr;
	}

};


// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (0x00E8 - 0x0070)
class UBTService_AimAIInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00C0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_AimAIInteractable");
		return ptr;
	}

};


// Class AthenaAI.BTService_DetermineAIAbility
// 0x0028 (0x0098 - 0x0070)
class UBTService_DetermineAIAbility : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlockChangeAIAbilitiesKey;                                // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_DetermineAIAbility");
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableCollisions
// 0x0010 (0x0080 - 0x0070)
class UBTService_DisableCollisions : public UBTService
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             ChannelsToLeaveUnaffected;                                // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_DisableCollisions");
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableDamageResponses
// 0x0000 (0x0070 - 0x0070)
class UBTService_DisableDamageResponses : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_DisableDamageResponses");
		return ptr;
	}

};


// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0008 (0x00A0 - 0x0098)
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_EnableFaceFocusActor");
		return ptr;
	}

};


// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (0x00A0 - 0x0098)
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	float                                              TimeMultiplier;                                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch");
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryPerceptionForTarget
// 0x0000 (0x0070 - 0x0070)
class UBTService_QueryPerceptionForTarget : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_QueryPerceptionForTarget");
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQuery
// 0x0050 (0x00E8 - 0x0098)
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	bool                                               OverrideQueryTemplateWithBlackboardValue;                 // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      OverrideEQSKey;                                           // 0x00A0(0x0028) (Edit)
	class UEnvQuery*                                   QueryTemplate;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ThrottleQueryTimePerFrame;                                // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	float                                              MaxSecondsToSpendOnQueryPerFrame;                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQuery");
		return ptr;
	}

};


// Class AthenaAI.BTService_DoesEQSQuerySucceed
// 0x0000 (0x00E8 - 0x00E8)
class UBTService_DoesEQSQuerySucceed : public UBTService_RunEQSQuery
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_DoesEQSQuerySucceed");
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0040 (0x0128 - 0x00E8)
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	struct FBlackboardKeySelector                      MovingActorKey;                                           // 0x00E8(0x0028) (Edit)
	float                                              MinimumActorMovementToRunEQS;                             // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumActorVelocityChangeToRunEQS;                       // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunEQSForYawChanges;                                      // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              MinimumActorYawChangeToRunEQS;                            // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQueryOnActorMovement");
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIAnimationState
// 0x0000 (0x0098 - 0x0098)
class UBTService_SetAIAnimationState : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIAnimationState");
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (0x0078 - 0x0070)
class UBTService_SetAIStrategy : public UBTService
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIStrategy");
		return ptr;
	}

};


// Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
// 0x0028 (0x0098 - 0x0070)
class UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                             // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant");
		return ptr;
	}

};


// Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
// 0x0028 (0x0098 - 0x0070)
class UBTService_SetBoolBlackboardValueTrueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                             // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant");
		return ptr;
	}

};


// Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
// 0x0030 (0x00A0 - 0x0070)
class UBTService_SetNameBlackboardValueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      NameValueKey;                                             // 0x0070(0x0028) (Edit)
	struct FName                                       Value;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant");
		return ptr;
	}

};


// Class AthenaAI.BTService_TriggerNotifications
// 0x0020 (0x0090 - 0x0070)
class UBTService_TriggerNotifications : public UBTService
{
public:
	class UClass*                                      EnterBranchNotificationId;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeaveBranchNotificationId;                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_TriggerNotifications");
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateFocusOnBBChange
// 0x0008 (0x00A8 - 0x00A0)
class UBTService_UpdateFocusOnBBChange : public UBTService_DefaultFocus
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChange");
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile
// 0x0000 (0x00A8 - 0x00A8)
class UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile : public UBTService_UpdateFocusOnBBChange
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile");
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (0x00C0 - 0x0070)
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateTargetForInteractable");
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget
// 0x0000 (0x0098 - 0x0098)
class UBTService_UpdateViewPitchForWieldedProjectileToHitTarget : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget");
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	bool                                               ShouldFailBeforeSlowDown;                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              ExitBeforeSlowDownDistanceTolerance;                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldOverrideMaxSpeedToSlow;                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainFacingBeforeMove;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaMoveTo");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (0x00C0 - 0x00B8)
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	bool                                               FailOnDistanceBeingLess;                                  // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              FailDistance;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceChange");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// 0x0010 (0x00D0 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (0x00E8 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00C0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (0x00C8 - 0x00B8)
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath;                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumTimeBeforeRePath;                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsContinuous;                                             // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToMovingLocation");
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWait
// 0x0060 (0x00C0 - 0x0060)
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	struct FAIDataProviderFloatValue                   Min;                                                      // 0x0060(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   Max;                                                      // 0x0090(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWait");
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWaitWithFloor
// 0x0030 (0x00F0 - 0x00C0)
class UBTTask_AthenaWaitWithFloor : public UBTTask_AthenaWait
{
public:
	struct FAIDataProviderFloatValue                   Floor;                                                    // 0x00C0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWaitWithFloor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearBlackboardValue
// 0x0000 (0x0088 - 0x0088)
class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearBlackboardValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearPerceptualData
// 0x0000 (0x0060 - 0x0060)
class UBTTask_ClearPerceptualData : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearPerceptualData");
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_CopyAIInteractionPointAndFocusToBlackboard : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SourceInteractable;                                       // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionPosition;                                      // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionFocusPosition;                                 // 0x00B0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard");
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardActor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardVector
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardVector : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardVector");
		return ptr;
	}

};


// Class AthenaAI.BTTask_DetermineFollowUpAIAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_DetermineFollowUpAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityTypeToFollowUp;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_DetermineFollowUpAIAbility");
		return ptr;
	}

};


// Class AthenaAI.BTTask_ExecuteAIAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_ExecuteAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_ExecuteAIAbility");
		return ptr;
	}

};


// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (0x0090 - 0x0088)
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	float                                              TimeToForget;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_IgnoreActorTemporarily");
		return ptr;
	}

};


// Class AthenaAI.BTTask_InteractWith
// 0x0008 (0x0090 - 0x0088)
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      NotificationId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_InteractWith");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos;                     // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00A8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToTarget");
		return ptr;
	}

};


// Class AthenaAI.BTTask_NetworkTriggerAnim
// 0x0010 (0x0070 - 0x0060)
class UBTTask_NetworkTriggerAnim : public UBTTaskNode
{
public:
	class UAnimSequence*                               Anim;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimLength;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_NetworkTriggerAnim");
		return ptr;
	}

};


// Class AthenaAI.BTTask_NOP
// 0x0008 (0x0068 - 0x0060)
class UBTTask_NOP : public UBTTaskNode
{
public:
	int                                                Id;                                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_NOP");
		return ptr;
	}

};


// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (0x0070 - 0x0060)
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	class UObject*                                     MontageToPlay;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayMontage");
		return ptr;
	}

};


// Class AthenaAI.BTTask_RequestDespawn
// 0x0000 (0x0060 - 0x0060)
class UBTTask_RequestDespawn : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_RequestDespawn");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategy");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
// 0x0010 (0x0070 - 0x0060)
class UBTTask_SetAIStrategyFromWeightedArray : public UBTTaskNode
{
public:
	TArray<struct FWeightedAIStrategyChance>           WeightedStrategies;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	class AActor*                                      Actor;                                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardActor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	bool                                               NewValue;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardBoolValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   EQS;                                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardEQSValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValue;                                               // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (0x00E8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   MinValue;                                                 // 0x0088(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MaxValue;                                                 // 0x00B8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromWeightedArray : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderStructValue                  WeightedArrayFromParams;                                  // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00B0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot");
		return ptr;
	}

};


// Class AthenaAI.BTTask_StopMovementImmediately
// 0x0000 (0x0060 - 0x0060)
class UBTTask_StopMovementImmediately : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_StopMovementImmediately");
		return ptr;
	}

};


// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// 0x0000 (0x0088 - 0x0088)
class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_StorePawnLocationInBlackboard");
		return ptr;
	}

};


// Class AthenaAI.BTTask_TeleportTo
// 0x0000 (0x0088 - 0x0088)
class UBTTask_TeleportTo : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_TeleportTo");
		return ptr;
	}

};


// Class AthenaAI.BTTask_TriggerNotification
// 0x0008 (0x0068 - 0x0060)
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	class UClass*                                      NotificationId;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_TriggerNotification");
		return ptr;
	}

};


// Class AthenaAI.CustomSkeletonAnimationDataList
// 0x0010 (0x0038 - 0x0028)
class UCustomSkeletonAnimationDataList : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               CustomAnimationAssets;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.CustomSkeletonAnimationDataList");
		return ptr;
	}

};


// Class AthenaAI.DebugAISpawnerCreator
// 0x0058 (0x0468 - 0x0410)
class ADebugAISpawnerCreator : public AActor
{
public:
	class UAISpawner*                                  SpawnerTemplate;                                          // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRadius;                                            // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class UAISpawner*                                  Spawner;                                                  // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIProximityPlayerTracker*                   ProximityPlayerTracker;                                   // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class USimpleAIRegion*                             Region;                                                   // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0438(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.DebugAISpawnerCreator");
		return ptr;
	}

};


// Class AthenaAI.DelayedMeshCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UDelayedMeshCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.DelayedMeshCharacterInterface");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_PositionFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_ThrowableTargetPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SeenActors
// 0x0010 (0x0038 - 0x0028)
class UEnvQueryContext_SeenActors : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActors");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround
// 0x0030 (0x0058 - 0x0028)
class UEnvQueryContext_SeenActorsProjectedToGround : public UEnvQueryContext
{
public:
	TArray<class AActor*>                              SeenActors;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_SpawnedForActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromParams
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromParams : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromParams");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_AIRegionLocations
// 0x0010 (0x0060 - 0x0050)
class UEnvQueryGenerator_AIRegionLocations : public UEnvQueryGenerator
{
public:
	bool                                               UseOverrideSpawnType;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FName                                       OverrideSpawnType;                                        // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_AIRegionLocations");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_Line
// 0x00A8 (0x0138 - 0x0090)
class UEnvQueryGenerator_Line : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      FromContext;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ToContext;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   PointSpacing;                                             // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumExtraPairsOfParallelLines;                             // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ParallelLineSpacing;                                      // 0x0100(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaxValidLineLength;                                       // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceIncludeEndPoint;                                     // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectPointsToWaterSurface;                              // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0136(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Line");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (0x0098 - 0x0090)
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Context;                                                  // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_PointsAtContext");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0150 (0x01E0 - 0x0090)
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0170(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                        // 0x01A0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01D8(0x0001)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                          // 0x01D8(0x0001) (Edit)
	unsigned char                                      ApplyZOffsetToProjectPoints : 1;                          // 0x01D8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterDonut");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (0x0108 - 0x0090)
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   Radius;                                                   // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FAIDataProviderFloatValue>           ZOffsetOfRingsFromContext;                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	TEnumAsByte<ETraceDirection>                       TraceDirection;                                           // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_HasLineOfSight");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (0x0210 - 0x0170)
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                          // 0x01B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                          // 0x01E0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_IsAngleInRange2D");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_WaterHeight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_WaterHeight : public UEnvQueryTest
{
public:
	float                                              WaterHeightCheckOffset;                                   // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UClass*                                      ActorWithWaterPlaneContext;                               // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_WaterHeight");
		return ptr;
	}

};


// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0048 (0x0110 - 0x00C8)
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	struct FName                                       NoiseTag;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoiseRangeBasedOnMovementSpeed;                           // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              ConstantNoiseRange;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PeriodicAINoiseEventComponent");
		return ptr;
	}

};


// Class AthenaAI.PlayerProximityObservedSpawnContextProvider
// 0x0018 (0x0040 - 0x0028)
class UPlayerProximityObservedSpawnContextProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PlayerProximityObservedSpawnContextProvider");
		return ptr;
	}

};


// Class AthenaAI.PostBountyAIPawnSpawnedAction
// 0x0000 (0x0028 - 0x0028)
class UPostBountyAIPawnSpawnedAction : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PostBountyAIPawnSpawnedAction");
		return ptr;
	}

};


// Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction
// 0x0038 (0x0060 - 0x0028)
class UApplyNameplateToBountyWaveSpawnedAction : public UPostBountyAIPawnSpawnedAction
{
public:
	struct FText                                       AIName;                                                   // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction");
		return ptr;
	}

};


// Class AthenaAI.SimpleAIRegion
// 0x0038 (0x0060 - 0x0028)
class USimpleAIRegion : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.SimpleAIRegion");
		return ptr;
	}

};


// Class AthenaAI.VulnerabilityDuringAIStrategyComponent
// 0x0088 (0x0150 - 0x00C8)
class UVulnerabilityDuringAIStrategyComponent : public UActorComponent
{
public:
	TArray<struct FAIStrategyVulnerabilityData>        StrategyVulnerabilities;                                  // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UHealthComponent*                            HealthComponent;                                          // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.VulnerabilityDuringAIStrategyComponent");
		return ptr;
	}

};


// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (0x0418 - 0x0410)
class AWaterbasedAISupplier : public AActor
{
public:
	class UAISpawnerList*                              Spawners;                                                 // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.WaterbasedAISupplier");
		return ptr;
	}

};


// Class AthenaAI.AIDiorama
// 0x0068 (0x0478 - 0x0410)
class AAIDiorama : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASceneDialogueCoordinator*                   SpawnedDialogueCoordinator;                               // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneDialogueData*                          DialogueData;                                             // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDioramaPawn>                      LinkedActors;                                             // 0x0428(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0438(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDiorama");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaCategory
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaCategory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaCategory");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaController
// 0x0078 (0x00A0 - 0x0028)
class UAIDioramaController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIDioramaDesc*                              AIDioramaDesc;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDioramaPawn>                      SpawnedDioramaPawns;                                      // 0x0038(0x0010) (ZeroConstructor)
	class AAIDiorama*                                  AIDiorama;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  Spawner;                                                  // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaController");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaDesc
// 0x0018 (0x0040 - 0x0028)
class UAIDioramaDesc : public UDataAsset
{
public:
	TArray<struct FAIDioramaRoleDesc>                  RoleList;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class USceneDialogueData*                          DialogueData;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaDesc");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaLocationSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaLocationSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceInterface");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaLocationSourceComponent
// 0x0080 (0x0310 - 0x0290)
class UAIDioramaLocationSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	TArray<struct FAIDioramaLocationSourceComponentData> DioramaRelativeLocations;                                 // 0x0298(0x0010) (Edit, ZeroConstructor)
	float                                              DialogueTriggerRadius;                                    // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DialogueSubtitleBuffer;                                   // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AISenseRadiusForDebugDisplay;                             // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Categories;                                               // 0x02B8(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      DebugTriggerRadiusColor;                                  // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DebugSubtitleRadiusColor;                                 // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      AISenseRadiusColor;                                       // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class USphereComponent*                            DialogueTriggerRadiusSphere;                              // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DialogueSubtitleRadiusSphere;                             // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            AISenseRadiusSphere;                                      // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceComponent");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AIDioramaService
// 0x0068 (0x0478 - 0x0410)
class AAIDioramaService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	TMap<class UClass*, struct FDioramaCategoryEntries> AllDioramasLocationsByCategory;                           // 0x0418(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0468(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDioramaService");
		return ptr;
	}

};


// Class AthenaAI.DebugDioramaCreator
// 0x0018 (0x0480 - 0x0468)
class ADebugDioramaCreator : public ADebugAISpawnerCreator
{
public:
	class UAIDioramaDesc*                              AIDioramaDesc;                                            // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIDioramaLocationSourceComponent*           Location;                                                 // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIDioramaController*                        AIDioramaController;                                      // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.DebugDioramaCreator");
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacterMovementComponent
// 0x00C0 (0x0610 - 0x0550)
class UAICreatureCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	float                                              BlendSpeed;                                               // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateDisturbance;                                       // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	float                                              DisturbanceSize;                                          // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisturbanceVelocityScale;                                 // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientationBlendSpeed;                                    // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientationMaxPitch;                                      // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateOrientationFrequency;                               // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStairAngle;                                            // 0x0574(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStairVelocityDampen;                                   // 0x0578(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                           // 0x0580(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0590(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterMovementComponent");
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacter
// 0x0220 (0x0830 - 0x0610)
class AAICreatureCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0610(0x0048) MISSED OFFSET
	float                                              DelayBeforeDestroying;                                    // 0x0658(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeforeFadingOut;                                      // 0x065C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupTime;                                               // 0x0660(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TooltipDisplayOffset;                                     // 0x0664(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UActionStateMachineComponent*                ActionStateMachineComponent;                              // 0x0670(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionStatePriorityTableData*               ActionStatePriorityTableData;                             // 0x0678(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionStateCreatorDefinition;                             // 0x0680(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParams;                                       // 0x0688(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0690(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWaterHeightProviderComponent*               WaterHeightProviderComponent;                             // 0x0698(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                          // 0x06A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URewindComponent*                            RewindComponent;                                          // 0x06A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionRulesComponent*                       ActionRulesComponent;                                     // 0x06B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100];                                     // 0x06B8(0x0100) MISSED OFFSET
	class UAICreatureCharacterMovementComponent*       AICreatureCharacterMovementComponent;                     // 0x07B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      CurrentAIStrategy;                                        // 0x07C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x07C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacter");
		return ptr;
	}


	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void Multicast_DespawnRPC();
	class UClass* GetAIStrategy();
};


// Class AthenaAI.AICreatureCharacterPathFollowingComponent
// 0x0030 (0x02F8 - 0x02C8)
class UAICreatureCharacterPathFollowingComponent : public UAthenaAICharacterPathFollowingComponent
{
public:
	float                                              LandingAngle;                                             // 0x02C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HopDistanceScale;                                         // 0x02CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumLandTime;                                          // 0x02D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStairAngle;                                            // 0x02D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStairVelocityDampen;                                   // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                           // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterPathFollowingComponent");
		return ptr;
	}

};


// Class AthenaAI.AICreatureMovementModifierInterface
// 0x0000 (0x0028 - 0x0028)
class UAICreatureMovementModifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierInterface");
		return ptr;
	}

};


// Class AthenaAI.AICreatureMovementModifierParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAICreatureMovementModifierParamsDataAsset : public UDataAsset
{
public:
	float                                              TurnRateMultiplier;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyingTurnRateMultiplier;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTighterTurningCircle;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseHighResNavMesh;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.BehaviourTreeInterruptionInterface
// 0x0000 (0x0028 - 0x0028)
class UBehaviourTreeInterruptionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BehaviourTreeInterruptionInterface");
		return ptr;
	}

};


// Class AthenaAI.ForcedIdleBehaviourInterface
// 0x0000 (0x0028 - 0x0028)
class UForcedIdleBehaviourInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.ForcedIdleBehaviourInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIDebugFunctionLibrary");
		return ptr;
	}


	void STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay);
	void STATIC_SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
	void STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	void STATIC_KillAllDebugAISpawners();
	int STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	void STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams);
	void STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext);
	void STATIC_DespawnAIPawn(class APawn* Pawn);
	void STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos);
	void STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor);
	struct FVector STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
};


// Class AthenaAI.AIFaunaSpawner
// 0x0148 (0x0560 - 0x0418)
class UAIFaunaSpawner : public UAISpawner
{
public:
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                // 0x0418(0x0110) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0528(0x0010) MISSED OFFSET
	class AActor*                                      FaunaLeader;                                              // 0x0538(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0540(0x0010) MISSED OFFSET
	TArray<class AActor*>                              PlayersInSpawnArea;                                       // 0x0550(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFaunaSpawner");
		return ptr;
	}


	void SpawnFaunaGroup();
};


// Class AthenaAI.AthenaFaunaAIController
// 0x0198 (0x0A18 - 0x0880)
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                        // 0x0880(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x0884(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x0888(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                            // 0x0898(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	class UFaunaAIContollerParamsDataAsset*            FaunaDataAsset;                                           // 0x08A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      CarrierActor;                                             // 0x08A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x08B0(0x00A8) MISSED OFFSET
	class AActor*                                      HighestDangerActor;                                       // 0x0958(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0960(0x0088) MISSED OFFSET
	class UFaunaAIPlayerTracker*                       PlayerTracker;                                            // 0x09E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x09F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaFaunaAIController");
		return ptr;
	}


	void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation);
	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_Threat
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Threat : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_Threat");
		return ptr;
	}

};


// Class AthenaAI.Fauna
// 0x0330 (0x0B60 - 0x0830)
class AFauna : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0838(0x0038) (Edit, DisableEditOnInstance)
	class UClass*                                      FaunaSpecies;                                             // 0x0870(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FaunaBreed;                                               // 0x0878(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x0880(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MountedScale;                                             // 0x088C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearToSurfaceDistance;                                    // 0x0898(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDrowningTimePercentage;                              // 0x089C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMin;                                     // 0x08A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMax;                                     // 0x08A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentageStarvedToChangeAnimation;                       // 0x08A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	class UObject*                                     HitImpactParticleSystem;                                  // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     DeathParticleSystem;                                      // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     PutInCrateParticleSystem;                                 // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PutInCrateSoundCue;                                       // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TookDamageSoundCue;                                       // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AgitationStartedSoundCue;                                 // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AgitationStoppedSoundCue;                                 // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CalmStartedSoundCue;                                      // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CalmStoppedSoundCue;                                      // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     BreathBubblesParticleSystem;                              // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BreathBubblesSocketName;                                  // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UnderwaterRTPCName;                                       // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        OnFeedingForceFeedbackEffect;                             // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x0918(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x0920(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageableComponent*                        DamageableComponent;                                      // 0x0928(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AttackHitVolume;                                          // 0x0930(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFaunaAnimationData*                         Animations;                                               // 0x0938(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDitherComponent*                            DitherComponent;                                          // 0x0940(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStatusEffectComponent*                      StatusEffectComponent;                                    // 0x0948(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    StatusEffectManagerComponent;                             // 0x0950(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParamsWhenInCrate;                            // 0x0958(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomAnimationSeed;                                      // 0x0960(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class UPeriodicAINoiseEventComponent*              PeriodicAINoiseEventComponent;                            // 0x0968(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    FaunaAgitationResponseDelegate;                           // 0x0970(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FaunaDirectedAgitationResponseDelegate;                   // 0x0980(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AgitationResponseChance;                                  // 0x0990(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMin;                        // 0x0994(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMax;                        // 0x0998(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumFailedAgitationResponseTests;                       // 0x099C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseVFXDelay;                                // 0x09A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseRange;                                   // 0x09A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     AgitationResponseParticleSystem;                          // 0x09A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationResponseRangeParticleSystemAngle;                // 0x09B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     AgitationCollisionChannel;                                // 0x09B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenAgitated;                                 // 0x09B5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x09B6(0x0002) MISSED OFFSET
	float                                              ApproximateSpitTravelTime;                                // 0x09B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenCalm;                                     // 0x09BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	float                                              TurningSpringAcceleration;                                // 0x09C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningSpringMaxVelocity;                                 // 0x09C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnResetDelay;                                           // 0x09C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PivotPointOffset;                                         // 0x09CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTurn;                                               // 0x09D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x09D9(0x0007) MISSED OFFSET
	class UFeedingComponent*                           FeedingComponent;                                         // 0x09E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFaunaMovementComponent*                     FaunaMovementComponent;                                   // 0x09E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              TimeUntilDrowned;                                         // 0x09F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x09F4(0x000C) MISSED OFFSET
	bool                                               Drowned;                                                  // 0x0A00(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0A01(0x0002) MISSED OFFSET
	TEnumAsByte<EFaunaCratedState>                     CratedState;                                              // 0x0A03(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFaunaInWaterState>                    InWaterState;                                             // 0x0A04(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0A05(0x0003) MISSED OFFSET
	class AActor*                                      Crate;                                                    // 0x0A08(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BreathBubblesParticleSystemComponent;                     // 0x0A10(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DrowningDeathTime;                                        // 0x0A18(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingStarvingAnim;                                    // 0x0A1C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAgitated;                                               // 0x0A1D(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsCalm;                                                   // 0x0A1E(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x0A1F(0x0001) MISSED OFFSET
	float                                              TargetTurnAngle;                                          // 0x0A20(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x124];                                     // 0x0A24(0x0124) MISSED OFFSET
	class UVenomComponent*                             VenomComponent;                                           // 0x0B48(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhysXAggregateProviderComponent*            PhysicsAggregateProviderComponent;                        // 0x0B50(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0B58(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.Fauna");
		return ptr;
	}


	void TestingSetWaterState(TEnumAsByte<EFaunaInWaterState> NewInState);
	void OnRep_TargetTurnAngle();
	void OnRep_IsPlayingStarvingAnim();
	void OnRep_IsCalm();
	void OnRep_IsAgitated();
	void OnRep_InWaterState();
	void OnRep_CratedState(TEnumAsByte<EFaunaCratedState> PreviousCratedState);
	void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
	void Multicast_JustBeenFedRPC(class AActor* FedBy);
	void Multicast_HightlightLeader(bool bIsLeader);
	void GenerateNewRandomAnimationSeed();
	void ActivateResponseRPC(float InTargetTurnAngle);
};


// Class AthenaAI.FaunaAIPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UFaunaAIPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.FaunaAIPlayerTracker");
		return ptr;
	}

};


// Class AthenaAI.FaunaMovementComponent
// 0x0000 (0x0610 - 0x0610)
class UFaunaMovementComponent : public UAICreatureCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.FaunaMovementComponent");
		return ptr;
	}

};


// Class AthenaAI.AthenaSwimmingAIController
// 0x00D8 (0x0958 - 0x0880)
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	class USwimmingPathFollowingComponent*             SwimmingPathFollowingComponent;                           // 0x0880(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 DistOfAttackerVsChanceToPursue;                           // 0x0888(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TimersToZeroIfStartingRevengeAttack;                      // 0x0890(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DespawnRequiredBlackboardKey;                             // 0x08A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DespawnRequiredReasonBlackboardKey;                       // 0x08A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedWeight;                                      // 0x08B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedThresholdToDespawn;                          // 0x08B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x08B8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaSwimmingAIController");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	float                                              DistanceFromSurface;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_NearSurfaceOfWater");
		return ptr;
	}

};


// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0118 (0x01E0 - 0x00C8)
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArcToTargetDotToTarget;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetPitchFactor;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                      // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                   // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchBezierControlPointsLengthFactor;                     // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LineOfSightCollisionProfile;                              // 0x00E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightSphereCastRadius;                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightCheckInterval;                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInNewPath;                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInRePath;                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugOnServer;                                        // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionTypesToDoPathUpdate;                             // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                        // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAthenaSwimmingAIController*                 SwimmingAIController;                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0120(0x0050) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0178(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.SwimmingPathFollowingComponent");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTo
// 0x0040 (0x00C8 - 0x0088)
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingGoalCheckMode>                GoalCheckMode;                                            // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingArcMode>                      ArcMode;                                                  // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Abort3DSwimIfCresting;                                    // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	float                                              TargetActorZOffset;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingSyncMode>                     SwimSyncMode;                                             // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackTargetActor;                                         // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                    // 0x0098(0x0028) (Edit)
	TEnumAsByte<ESwimmingLineOfSightTest>              LineOfSightTestMode;                                      // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTo");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel;                                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilMaxTurnSpringAccel;                              // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleDeltaToAcceptFinalRotation;                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTurnOnTheSpot");
		return ptr;
	}

};


// Class AthenaAI.TinySharkTelemetryComponent
// 0x00C0 (0x0188 - 0x00C8)
class UTinySharkTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00C8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkTelemetryComponent");
		return ptr;
	}

};


// Class AthenaAI.TinySharkExperience
// 0x03B8 (0x07C8 - 0x0410)
class ATinySharkExperience : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackingMovementCheckInterval;                            // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   TrackingMovementValidQuery;                               // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0428(0x00A0) MISSED OFFSET
	class UTinySharkSpawner*                           TinySharkSpawner;                                         // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ASharkPawn*                                  TinySharkPawn;                                            // 0x04D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       HealthRTPC;                                               // 0x04D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	struct FTinySharkParams                            Params;                                                   // 0x04E8(0x00B8) (Transient)
	class UTinySharkTelemetryComponent*                TinySharkTelemetryComponent;                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AShip*                                       TrackedShip;                                              // 0x05A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x98];                                      // 0x05B0(0x0098) MISSED OFFSET
	struct FEncounterParams                            SightingEncounterParams;                                  // 0x0648(0x000C) (Edit, DisableEditOnInstance)
	struct FEncounterParams                            CloseEncounterParams;                                     // 0x0654(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x140];                                     // 0x0660(0x0140) MISSED OFFSET
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> CachedControllerParamsAsset;                              // 0x07A0(0x0020)
	unsigned char                                      UnknownData05[0x8];                                       // 0x07C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkExperience");
		return ptr;
	}


	void TinySharkPawnDestroyed(class AActor* InDestroyedActor);
	void OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn);
	class AShip* GetTrackedShip();
	TEnumAsByte<ETinySharkState> GetCurrentState();
	TEnumAsByte<ETinySharkActiveState> GetActiveState();
};


// Class AthenaAI.TinySharkParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkParams                            Params;                                                   // 0x0028(0x00B8) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.TinySharkServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTinySharkServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.TinySharkService
// 0x01B0 (0x05C0 - 0x0410)
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	class UTinySharkServiceParamsDataAsset*            TinySharkServiceParams;                                   // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	TArray<class ATinySharkExperience*>                TinySharkExperiences;                                     // 0x0430(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x180];                                     // 0x0440(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkService");
		return ptr;
	}


	bool RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex);
	bool RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex);
	void DismissAllTinySharks();
	bool CanSpawnTinySharkExperience();
};


// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkServiceParams                     Params;                                                   // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	int                                                MaxNumTinySharkExperiences;                               // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.TinySharkSpawner
// 0x0000 (0x0418 - 0x0418)
class UTinySharkSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkSpawner");
		return ptr;
	}

};


// Class AthenaAI.Pet
// 0x0380 (0x0BB0 - 0x0830)
class APet : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0830(0x0090) MISSED OFFSET
	class UPetWieldableReactMappingsDataAsset*         WieldableReactMappingsAsset;                              // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVelocityForLocomotionAnimation;                        // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFly;                                                   // 0x08CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	TArray<struct FPetFlyingStrategyProperties>        FlyingStrategyProperties;                                 // 0x08D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              FlyingLandTime;                                           // 0x08E0(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FlyingLandCurve;                                          // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingTakeOffTime;                                        // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FlyingTakeOffCurve;                                       // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 MidFlightAdjustmentTimerRange;                            // 0x0900(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MidFlightAdjustmentCurve;                                 // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MidFlightTimeToDistanceAdjustmentCurve;                   // 0x0918(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FiredFromActorCollision;                                  // 0x0920(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 FiredFromActorSFX;                                        // 0x0928(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPetDitherComponent*                         DitherComponent;                                          // 0x0930(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinimumDamageForHealthReact;                              // 0x0938(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistForWaterBucketToClean;                             // 0x093C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumDurationUntilPetCanDespawnConcealed;               // 0x0940(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 PetTimeSpentSad;                                          // 0x0944(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDebugPetStateDescriptor>              DebugStateDescriptor;                                     // 0x0954(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	class UAINameplateComponent*                       AINameplateComponent;                                     // 0x0958(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFeedingComponent*                           FeedingComponent;                                         // 0x0960(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStarvingComponent*                          StarvingComponent;                                        // 0x0968(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCleanlinessComponent*                       CleanlinessComponent;                                     // 0x0970(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FPetMovementRequest                         ReplicatedMovementRequest;                                // 0x0978(0x000C) (Net)
	float                                              TargetMeshRoll;                                           // 0x0984(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0988(0x0010) MISSED OFFSET
	float                                              DefaultShipTurnRateModifier;                              // 0x0998(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	TArray<struct FPetTurnRateModifier>                TurnRateModifierList;                                     // 0x09A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> LocomotingMovementStates;                                 // 0x09B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> RequestIdleOrMovementValidMovementStates;                 // 0x09C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxRollAngle;                                             // 0x09D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayForDisablingMovementOnIdle;                          // 0x09D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IslandDustRatePerSecond;                                  // 0x09D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x09DC(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               PerchedInHangout;                                         // 0x09EC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldIgnoreTooltipDisplayOffset;                         // 0x09ED(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x09EE(0x0002) MISSED OFFSET
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x09F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x09F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightWeightStatusEffectManagerComponent;                  // 0x0A00(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetTelemetryComponent*                      TelemetryComponent;                                       // 0x0A08(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPetSicknessComponent*                       SicknessComponent;                                        // 0x0A10(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterExposureComponent*                     WaterExposureComponent;                                   // 0x0A18(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedForShip;                                           // 0x0A20(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PetOwner;                                                 // 0x0A28(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AItemInfo*                                   PetInfo;                                                  // 0x0A30(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0A38(0x0008) MISSED OFFSET
	struct FDocker                                     Docker;                                                   // 0x0A40(0x0050) (Edit, DisableEditOnInstance)
	struct FStartPickupObjectActionRuleParams          StartPickupObjectActionRuleParams;                        // 0x0A90(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData09[0x10];                                      // 0x0AA0(0x0010) MISSED OFFSET
	class UParticleSystemComponent*                    CurrentlyPlayingParticleSystem;                           // 0x0AB0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      LandingStrategy;                                          // 0x0AB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PursuitStrategy;                                          // 0x0AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultRollLerpTime;                                      // 0x0AC8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingRollLerpTime;                                      // 0x0ACC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingDismissed;                                         // 0x0AD0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0xDB];                                      // 0x0AD1(0x00DB) MISSED OFFSET
	bool                                               IsInDisabledPetPerchHangout;                              // 0x0BAC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               PetIsSad;                                                 // 0x0BAD(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0BAE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.Pet");
		return ptr;
	}


	void SetExitTakeOffFlag(bool InExitTakeOffFlag);
	void OnShipDestroyed(class AActor* InShip);
	void OnRep_RollRequest();
	void OnRep_PetOwner();
	void OnRep_PetIsSad();
	void OnRep_PerchedInHangout();
	void OnRep_MovementRequest();
	void OnOwnerDestroyed(class AActor* InOwner);
	void Multicast_DitherOut();
	void Multicast_DitherIn();
	float GetFloorMeshOffsetZ();
};


// Class AthenaAI.BTTask_SetRoamingPetAnimationState
// 0x00A8 (0x0130 - 0x0088)
class UBTTask_SetRoamingPetAnimationState : public UBTTask_BlackboardBase
{
public:
	struct FWeightedPetAnimationSelector               WeightedAnimationSelection;                               // 0x0088(0x00A0) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetRoamingPetAnimationState");
		return ptr;
	}

};


// Class AthenaAI.PetDitherComponent
// 0x0070 (0x01E0 - 0x0170)
class UPetDitherComponent : public UDitherComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0170(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetDitherComponent");
		return ptr;
	}

};


// Class AthenaAI.PetNameplateComponent
// 0x0030 (0x03C0 - 0x0390)
class UPetNameplateComponent : public UAINameplateComponent
{
public:
	struct FString                                     DefaultPetName;                                           // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetNameplateComponent");
		return ptr;
	}

};


// Class AthenaAI.PetPartCustomisationComponent
// 0x00A8 (0x0170 - 0x00C8)
class UPetPartCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UPetPartSizeMappingsDataAsset*               SizeMappingsAsset;                                        // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPetLoadedMaterial>                  CurrentlyLoadedMaterials;                                 // 0x00E0(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       DefaultMeshRef;                                           // 0x00F0(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       HighResMeshRef;                                           // 0x0100(0x0010) (ZeroConstructor, Transient)
	class USkeletalMesh*                               CurrentlyLoadedMesh;                                      // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPetSize>                              CurrentPetSize;                                           // 0x0118(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0119(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetPartCustomisationComponent");
		return ptr;
	}

};


// Class AthenaAI.PetPartSizeMappingsDataAsset
// 0x0020 (0x0048 - 0x0028)
class UPetPartSizeMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetPartSizeMapping>                 Mappings;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 ConcealedScaleBounds;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetPartSizeMappingsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.PetSicknessComponent
// 0x0010 (0x00D8 - 0x00C8)
class UPetSicknessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetSicknessComponent");
		return ptr;
	}

};


// Class AthenaAI.PetsPartsDesc
// 0x0038 (0x0068 - 0x0030)
class UPetsPartsDesc : public UAIPartsDesc
{
public:
	struct FStringAssetReference                       Mesh;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       HighResMesh;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetMaterialEntry>                   PetMaterials;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPetSize>                              PetSize;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetsPartsDesc");
		return ptr;
	}

};


// Class AthenaAI.PetTelemetryComponent
// 0x0048 (0x0110 - 0x00C8)
class UPetTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetTelemetryComponent");
		return ptr;
	}

};


// Class AthenaAI.PetWieldableReactMappingsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetWieldableReactMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetWieldableReactMapping>           WieldableReactMappings;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PetWieldableReactMappingsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.PreviewPet
// 0x00D8 (0x04E8 - 0x0410)
class APreviewPet : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	TEnumAsByte<EAthenaAnimationPetRoamingState>       InitialAnimState;                                         // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	struct FAIPartId                                   InitialPartIdToLoad;                                      // 0x041C(0x0008) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UAIPartsCategory*                            PreviewPetPartsCategory;                                  // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      PreviewPetMesh;                                           // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0448(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PreviewPet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
