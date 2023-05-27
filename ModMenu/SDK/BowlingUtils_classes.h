#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BowlingUtils.BowlingUtils_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBowlingUtils_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetInstigatorBall(class ABowlingBall* Instigator, class UObject* __WorldContext, class ABowlingBall** Ball);
		void STATIC_GetModifiedScore(class AActor* Instigator, int32_t score, bool bonus, class UObject* __WorldContext, int32_t* ModifiedScore, bool* ModifiedBonus);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
