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

// Class RareEngine.RareGameEngine
// 0x0058 (0x0B08 - 0x0AB0)
class URareGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0AB0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.RareGameEngine");
		return ptr;
	}

};


// Class RareEngine.AudioHardwareDeviceService
// 0x01F0 (0x0218 - 0x0028)
class UAudioHardwareDeviceService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0028(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.AudioHardwareDeviceService");
		return ptr;
	}

};


// Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHitchDiagnosisBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_SetHitchThreshold(int InThreshold);
	struct FString STATIC_GetMaxHitchNameThisFrame();
	int STATIC_GetMaxHitchLengthThisFrameMs();
	void STATIC_DumpThisFramesHitchesToLog();
	bool STATIC_DidHitchOccurThisFrame();
};


// Class RareEngine.MemoryUsageVisualiserSettings
// 0x0010 (0x0038 - 0x0028)
class UMemoryUsageVisualiserSettings : public UObject
{
public:
	TArray<struct FMemoryVisualiserCategory>           VisualiserCategories;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.MemoryUsageVisualiserSettings");
		return ptr;
	}

};


// Class RareEngine.RareHUD
// 0x0000 (0x0508 - 0x0508)
class ARareHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.RareHUD");
		return ptr;
	}

};


// Class RareEngine.StallDetector
// 0x0028 (0x0050 - 0x0028)
class UStallDetector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    Callback;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.StallDetector");
		return ptr;
	}


	void Deactivate();
	class UStallDetector* STATIC_CreateStallDetector(float Delay, bool CreateActive);
	void Activate();
};


// Class RareEngine.StaticMeshActorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.StaticMeshActorBlueprintLibrary");
		return ptr;
	}


	void STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshComponentList>* OutComponentLists);
	void STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshActorList>* OutActorLists);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
