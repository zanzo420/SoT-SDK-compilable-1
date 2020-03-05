#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Animation.CharacterAnimationInstance
// 0x0220 (0x0660 - 0x0440)
class UCharacterAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET
	struct FCharacterAnimationIKUpdateParams           IKLeftHandUpdateParams;                                   // 0x0450(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FCharacterAnimationIKUpdateParams           IKRightHandUpdateParams;                                  // 0x0490(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       RightHandIKSocketName;                                    // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftHandIKSocketName;                                     // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLimbIK                                     RightHandIK;                                              // 0x04E0(0x0060)
	struct FLimbIK                                     LeftHandIK;                                               // 0x0540(0x0060)
	struct FLimbIK                                     RightFootIK;                                              // 0x05A0(0x0060)
	struct FLimbIK                                     LeftFootIK;                                               // 0x0600(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CharacterAnimationInstance");
		return ptr;
	}

};


// Class Animation.AnimationData
// 0x0000 (0x0028 - 0x0028)
class UAnimationData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationData");
		return ptr;
	}

};


// Class Animation.AIAnimationInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AIAnimationInstanceInterface");
		return ptr;
	}

};


// Class Animation.AnimationDataConsumerInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataConsumerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataConsumerInterface");
		return ptr;
	}

};


// Class Animation.AnimationDataFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataFunctionLib");
		return ptr;
	}


	bool STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value);
	class UAnimationData* STATIC_MakeAnimationData(class UClass* Class);
	struct FAnimDataEntryStructWrapper STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass);
	void STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass);
};


// Class Animation.AnimationDataOverriderInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataOverriderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataOverriderInterface");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreId
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreId");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreOverrideId
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreOverrideId : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreOverrideId");
		return ptr;
	}

};


// Class Animation.AnimationDataStore
// 0x0038 (0x0060 - 0x0028)
class UAnimationDataStore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	TArray<struct FAnimationDataStoreEntry>            Data;                                                     // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAnimationDataStoreLoadingEntry>     LoadingData;                                              // 0x0050(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStore");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreAsset
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStoreAsset : public UDataAsset
{
public:
	TArray<struct FAnimationDataStoreAssetEntry>       AssetRefs;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreAsset");
		return ptr;
	}


	class UAnimationData* LookupAnimationData(class UClass* AnimDataId);
	class UClass* STATIC_GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry);
};


// Class Animation.AnimationDataStoreWeakReferenceAsset
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStoreWeakReferenceAsset : public UDataAsset
{
public:
	TArray<struct FAnimationDataStoreAssetWeakReferenceEntry> AssetWeakRefs;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreWeakReferenceAsset");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreLoaderInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreLoaderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreLoaderInterface");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreComponent
// 0x0078 (0x0140 - 0x00C8)
class UAnimationDataStoreComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UAnimationDataStoreWeakReferenceAsset*       AnimationDataStoreWeakReferences;                         // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x00D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreComponent");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreInterface");
		return ptr;
	}


	class UAnimationData* GetAnimationDataForId(class UClass* AnimDataId);
};


// Class Animation.AnimationLookAtInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationLookAtInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationLookAtInterface");
		return ptr;
	}

};


// Class Animation.AnimationStateId
// 0x0000 (0x0028 - 0x0028)
class UAnimationStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationStateId");
		return ptr;
	}

};


// Class Animation.AnimNotify_DestroyAllCosmeticItems
// 0x0000 (0x0030 - 0x0030)
class UAnimNotify_DestroyAllCosmeticItems : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_DestroyAllCosmeticItems");
		return ptr;
	}

};


// Class Animation.AnimNotify_DestroyCosmeticItem
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_DestroyCosmeticItem : public UAnimNotify
{
public:
	TEnumAsByte<EWieldAnimationLocation>               DestroyLocation;                                          // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_DestroyCosmeticItem");
		return ptr;
	}

};


// Class Animation.AnimNotify_SetCosmeticItemVisibility
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_SetCosmeticItemVisibility : public UAnimNotify
{
public:
	TEnumAsByte<EWieldAnimationLocation>               ItemLocation;                                             // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RenderShadow;                                             // 0x0032(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RenderShadowWhenHidden;                                   // 0x0033(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateForRole;                                            // 0x0034(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              UpdateRole;                                               // 0x0035(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_SetCosmeticItemVisibility");
		return ptr;
	}

};


// Class Animation.AnimNotify_SetLookAtEnabled
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_SetLookAtEnabled : public UAnimNotify
{
public:
	bool                                               Enabled;                                                  // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_SetLookAtEnabled");
		return ptr;
	}

};


// Class Animation.AnimNotify_SpawnCosmeticItem
// 0x0020 (0x0050 - 0x0030)
class UAnimNotify_SpawnCosmeticItem : public UAnimNotify
{
public:
	class UClass*                                      ItemSpawnClass;                                           // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UCosmeticItemAnimationSetDataAsset*          CosmeticItemAnimationDataSet;                             // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHidden;                                              // 0x0048(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnForRole;                                             // 0x0049(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              SpawnRole;                                                // 0x004A(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_SpawnCosmeticItem");
		return ptr;
	}

};


// Class Animation.AnimNotify_StateComplete
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_StateComplete : public UAnimNotify
{
public:
	class UClass*                                      CompletedStateId;                                         // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_StateComplete");
		return ptr;
	}

};


// Class Animation.AnimNotify_SwitchCosmeticItemAttachment
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_SwitchCosmeticItemAttachment : public UAnimNotify
{
public:
	TEnumAsByte<EWieldAnimationLocation>               PreviousLocation;                                         // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationLocation>               NewLocation;                                              // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_SwitchCosmeticItemAttachment");
		return ptr;
	}

};


// Class Animation.AnimNotify_ToggleIK
// 0x0018 (0x0048 - 0x0030)
class UAnimNotify_ToggleIK : public UAnimNotify
{
public:
	TArray<TEnumAsByte<ECharacterIKLimb>>              IKLimbsToAdjust;                                          // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotify_ToggleIK");
		return ptr;
	}

};


// Class Animation.AnimNotifyState_SpawnCosmeticItem
// 0x0020 (0x0048 - 0x0028)
class UAnimNotifyState_SpawnCosmeticItem : public UAnimNotifyState
{
public:
	class UClass*                                      CosmeticItemToSpawn;                                      // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UCosmeticItemAnimationSetDataAsset*          CosmeticItemAnimationDataSet;                             // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHidden;                                              // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyOnEnd;                                             // 0x0041(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideDestroyLocation;                                  // 0x0042(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationLocation>               DestroyLocation;                                          // 0x0043(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimNotifyState_SpawnCosmeticItem");
		return ptr;
	}

};


// Class Animation.CharacterIKInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterIKInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CharacterIKInterface");
		return ptr;
	}

};


// Class Animation.PreviewCharacterAnimationInstance
// 0x0080 (0x06E0 - 0x0660)
class UPreviewCharacterAnimationInstance : public UCharacterAnimationInstance
{
public:
	class UAnimMontage*                                ActiveMontage;                                            // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0668(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.PreviewCharacterAnimationInstance");
		return ptr;
	}

};


// Class Animation.ClientSkeletalMeshComponent
// 0x0000 (0x0970 - 0x0970)
class UClientSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.ClientSkeletalMeshComponent");
		return ptr;
	}

};


// Class Animation.CosmeticItemAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UCosmeticItemAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationInterface");
		return ptr;
	}

};


// Class Animation.CosmeticItemAnimationComponent
// 0x0060 (0x0128 - 0x00C8)
class UCosmeticItemAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TMap<class USkeletalMeshComponent*, struct FCosmeticItems> CosmeticItems;                                            // 0x00D0(0x0050) (ZeroConstructor)
	class UCosmeticItemAnimationDataAsset*             DataAsset;                                                // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationComponent");
		return ptr;
	}


	void DestroyAllCosmeticItems();
};


// Class Animation.CosmeticItemAnimationDataAsset
// 0x0038 (0x0060 - 0x0028)
class UCosmeticItemAnimationDataAsset : public UDataAsset
{
public:
	struct FName                                       WieldSockets[0x7];                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationDataAsset");
		return ptr;
	}

};


// Class Animation.CosmeticItemAnimationDataConsumerInterface
// 0x0000 (0x0028 - 0x0028)
class UCosmeticItemAnimationDataConsumerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationDataConsumerInterface");
		return ptr;
	}

};


// Class Animation.CosmeticItemAnimationInstance
// 0x0090 (0x04D0 - 0x0440)
class UCosmeticItemAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class UCosmeticItemAnimationSetDataAsset*          AnimationDataSet;                                         // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ActiveMontage;                                            // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0458(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationInstance");
		return ptr;
	}

};


// Class Animation.CosmeticItemAnimationSetDataAsset
// 0x0020 (0x0048 - 0x0028)
class UCosmeticItemAnimationSetDataAsset : public UDataAsset
{
public:
	struct FCosmeticItemAnimationSetLoopData           LoopData;                                                 // 0x0028(0x0010) (Edit, DisableEditOnInstance)
	TArray<class UAnimSequenceBase*>                   OneShotSequences;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationSetDataAsset");
		return ptr;
	}

};


// Class Animation.CustomAnimationHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomAnimationHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CustomAnimationHandlerInterface");
		return ptr;
	}

};


// Class Animation.CustomAnimationInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomAnimationInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CustomAnimationInstanceInterface");
		return ptr;
	}

};


// Class Animation.CustomAnimationInstanceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomAnimationInstanceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.CustomAnimationInstanceProviderInterface");
		return ptr;
	}

};


// Class Animation.DockableInterface
// 0x0000 (0x0028 - 0x0028)
class UDockableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockableInterface");
		return ptr;
	}


	void HandleDestroy();
	struct FDockableInfo GetDockableInfo();
};


// Class Animation.DockerBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UDockerBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockerBlueprintFunctions");
		return ptr;
	}


	void STATIC_UpdateDock(float DeltaTime, struct FDocker* Docker);
	void STATIC_StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, float DelayAfterDocking, struct FDocker* Docker);
	bool STATIC_IsFullyDocked(struct FDocker* Docker);
	bool STATIC_IsDocking(struct FDocker* Docker);
	struct FVector STATIC_GetTargetLocalOffset(const struct FDocker& Docker);
	void STATIC_EndDock(struct FDocker* Docker);
};


// Class Animation.DockerInterface
// 0x0000 (0x0028 - 0x0028)
class UDockerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockerInterface");
		return ptr;
	}

};


// Class Animation.DockingAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UDockingAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockingAnimationInterface");
		return ptr;
	}

};


// Class Animation.IndexedPlayableMontagesInterface
// 0x0000 (0x0028 - 0x0028)
class UIndexedPlayableMontagesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.IndexedPlayableMontagesInterface");
		return ptr;
	}

};


// Class Animation.LimbIKFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULimbIKFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.LimbIKFunctionLibrary");
		return ptr;
	}


	void STATIC_SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	void STATIC_SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK);
	void STATIC_SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	void STATIC_SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK);
	void STATIC_SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK);
	void STATIC_SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK);
	void STATIC_SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK);
	void STATIC_SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK);
	void STATIC_SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK);
	void STATIC_SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK);
	bool STATIC_IsEnabled(struct FLimbIK* LimbIK);
	float STATIC_GetTranslationStrength(struct FLimbIK* LimbIK);
	struct FTransform STATIC_GetTransform(struct FLimbIK* LimbIK);
	float STATIC_GetRotationStrength(struct FLimbIK* LimbIK);
	struct FName STATIC_GetParentBone(struct FLimbIK* LimbIK);
	TEnumAsByte<ELimbIKSpace> STATIC_GetIKSpace(struct FLimbIK* LimbIK);
	float STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK);
	bool STATIC_GetAnimationOverride(struct FLimbIK* LimbIK);
	float STATIC_GetAlphaTarget(struct FLimbIK* LimbIK);
	float STATIC_ConvertBoolToAlpha(bool InBool);
};


// Class Animation.LocomotionFunctionLib
// 0x0000 (0x0028 - 0x0028)
class ULocomotionFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.LocomotionFunctionLib");
		return ptr;
	}


	float STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin);
	struct FActorVelocityData STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming);
	float STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw);
};


// Class Animation.NetworkSyncedAnimationInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkSyncedAnimationInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.NetworkSyncedAnimationInstanceInterface");
		return ptr;
	}

};


// Class Animation.NetworkSyncedAnimationComponent
// 0x0048 (0x0110 - 0x00C8)
class UNetworkSyncedAnimationComponent : public UActorComponent
{
public:
	float                                              PlayRateAdjustMaxTimeDelta;                               // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateAdjustMaxPercentageToSpeedUpPlayRate;             // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateAdjustMaxPercentageToSlowDownPlayRate;            // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReplicatedAnimationProgression;                           // 0x00D4(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ReplicatedPlayingAnimationIndex;                          // 0x00D8(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ReplicatedPlayRate;                                       // 0x00DC(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	class UAnimInstance*                               AnimInstance;                                             // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.NetworkSyncedAnimationComponent");
		return ptr;
	}


	void OnRep_PlayingAnimationIndex();
	void OnRep_AnimationProgression();
};


// Class Animation.RemoteAnimPlayableInterface
// 0x0000 (0x0028 - 0x0028)
class URemoteAnimPlayableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.RemoteAnimPlayableInterface");
		return ptr;
	}

};


// Class Animation.TransformBlendCurveComponent
// 0x0508 (0x05D0 - 0x00C8)
class UTransformBlendCurveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransformBlendCurve                        Curve;                                                    // 0x00D0(0x0500) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.TransformBlendCurveComponent");
		return ptr;
	}

};


// Class Animation.TurningFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UTurningFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.TurningFunctionLib");
		return ptr;
	}


	bool STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft);
};


// Class Animation.WaitForAnimationStateEntryProxy
// 0x0020 (0x0048 - 0x0028)
class UWaitForAnimationStateEntryProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnReachedState;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.WaitForAnimationStateEntryProxy");
		return ptr;
	}


	void OnEnteredState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateEntryProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


// Class Animation.WaitForAnimationStateExitProxy
// 0x0020 (0x0048 - 0x0028)
class UWaitForAnimationStateExitProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateExit;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.WaitForAnimationStateExitProxy");
		return ptr;
	}


	void OnExitState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateExitProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
