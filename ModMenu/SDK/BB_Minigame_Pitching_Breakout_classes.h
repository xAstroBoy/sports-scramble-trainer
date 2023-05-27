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
	 * BlueprintGeneratedClass BB_Minigame_Pitching_Breakout.BB_Minigame_Pitching_Breakout_C
	 * Size -> 0x001F (FullSize[0x0460] - InheritedSize[0x0441])
	 */
	class ABB_Minigame_Pitching_Breakout_C : public ABB_Minigame_Pitching_Base_C
	{
	public:
		unsigned char                                              UnknownData_QM0Z[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScramTrajectoryInfluencerRegion*                    Influencer;                                              // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BreakoutDelayBeforeThrow;                                // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BreakoutDelayAfterThrow;                                 // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnPitchTarget(class ABB_PitchTarget_C** PitchTarget);
		void InitializeMode();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ThrowPlayerBall();
		void PlayerTeleportComplete();
		void PitchTargetCreated();
		void NoTeleport();
		void RecordTargetHit();
		void ExecuteUbergraph_BB_Minigame_Pitching_Breakout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
