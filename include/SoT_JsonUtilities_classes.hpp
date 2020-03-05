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

// Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UJsonUtilitiesBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary");
		return ptr;
	}


	bool STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString);
	bool STATIC_JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
