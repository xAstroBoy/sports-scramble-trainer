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
	 * BlueprintGeneratedClass TennisScramble_RandomBall.TennisScramble_RandomBall_C
	 * Size -> 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
	 */
	class ATennisScramble_RandomBall_C : public AScrambleEvent_Base_C
	{
	public:
		class AScramSportManagerTennis_Blueprint_C*                SportManager;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UClass* GetNewBallType();
		void GetRandomBall(class UClass* BallClass, class UClass** NewBall);
		void ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
