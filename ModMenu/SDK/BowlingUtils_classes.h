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

// BlueprintGeneratedClass BowlingUtils.BowlingUtils_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBowlingUtils_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BowlingUtils.BowlingUtils_C");
		return ptr;
	}



	void STATIC_GetInstigatorBall(class ABowlingBall* Instigator, class UObject* __WorldContext, class ABowlingBall** Ball);
	void STATIC_GetModifiedScore(class AActor* Instigator, int score, bool bonus, class UObject* __WorldContext, int* ModifiedScore, bool* ModifiedBonus);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
