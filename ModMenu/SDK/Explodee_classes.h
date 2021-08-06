#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Explodee.Explodee_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExplodee_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Explodee.Explodee_C");
		return ptr;
	}



	void Exploded(class AActor* Instigator, const struct FVector& LinearImpulse, const struct FVector& AngularImpulse, bool VelChange, bool* Valid);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
