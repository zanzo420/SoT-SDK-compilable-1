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

// Class ShipDamage.DamageablePartsInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageablePartsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShipDamage.DamageablePartsInterface");
		return ptr;
	}


	void UnregisterDamageablePart(class AActor* DamageableActor);
	void RegisterDamageablePart(class AActor* DamageableActor);
	TArray<class AActor*> GetDamageableParts();
};


// Class ShipDamage.HullDamageInterface
// 0x0000 (0x0028 - 0x0028)
class UHullDamageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShipDamage.HullDamageInterface");
		return ptr;
	}

};


// Class ShipDamage.LandscapeDamagerType
// 0x0000 (0x0028 - 0x0028)
class ULandscapeDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShipDamage.LandscapeDamagerType");
		return ptr;
	}

};


// Class ShipDamage.ShipDamagerType
// 0x0000 (0x0028 - 0x0028)
class UShipDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShipDamage.ShipDamagerType");
		return ptr;
	}

};


// Class ShipDamage.StrainDamagerType
// 0x0000 (0x0028 - 0x0028)
class UStrainDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShipDamage.StrainDamagerType");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
