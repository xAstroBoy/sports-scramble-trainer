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
	 * BlueprintGeneratedClass BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C
	 * Size -> 0x0027 (FullSize[0x03B8] - InheritedSize[0x0391])
	 */
	class ABP_TrophyAward_BW_Base_C : public ABP_TrophyAwardBase_C
	{
	public:
		unsigned char                                              UnknownData_YITS[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       TrackerInitialized;                                      // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UQ0M[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramSportManagerTennis_Blueprint_C*                TennisManager;                                           // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramSportManagerBowling_Blueprint_C*               BowlingManager;                                          // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Initialize();
		void DebugEarn();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Bowl(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnMatchComplete(class ABowlingBall* BallActor);
		void OnStrike(class ABowlingBall* Ball);
		void OnSpare(class ABowlingBall* Ball);
		void OnGutterBall(class ABowlingBall* Ball);
		void OnGameEnd();
		void ExecuteUbergraph_BP_TrophyAward_BW_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
