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
	 * BlueprintGeneratedClass BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C
	 * Size -> 0x0047 (FullSize[0x03D8] - InheritedSize[0x0391])
	 */
	class ABP_TrophyAward_BaseballBase_C : public ABP_TrophyAwardBase_C
	{
	public:
		unsigned char                                              UnknownData_ZPX6[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       TrackerInitialized;                                      // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QRVX[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramSportManagerTennis_Blueprint_C*                TennisManager;                                           // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramPlayer*                                        Player;                                                  // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PlayerId;                                                // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GZWH[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramSportManagerBaseball_Blueprint_C*              SportManager;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalPlayerBatting;                                    // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4TFC[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballBall*                                       BaseballBall;                                            // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DidLocalPlayerWinGame(bool* won);
		void NewFunction_1_1();
		void CheckBBPlayer(bool IsPlayerBatting, bool* isThisPlayer);
		void CheckPlayer(int32_t PlayerIndex, bool* IsLocalPlayer);
		void GetLocalPlayer();
		void UserConstructionScript();
		void Initialize();
		void DebugEarn();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Baseball(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void Strike(class AScramPlayer* Player, int32_t PlayerId);
		void HomeRun(class AScramPlayer* Player, int32_t PlayerId);
		void RunnerHome(class AScramPlayer* Player, int32_t PlayerId);
		void AirCatchEvent(class AScramPlayer* Player);
		void TakeBase(class AScramPlayer* Player);
		void SwingAndMiss(class AScramPlayer* Player);
		void Freebee(class AScramPlayer* Player);
		void CatchEvent(const struct FVector& FielderPosition, class AScramPlayer* Player);
		void GameEnd(class AScramPlayer* Player, int32_t PlayerId);
		void PitchEvent();
		void WalkEvent();
		void BadPitch();
		void BallEvent();
		void OnHit();
		void ExecuteUbergraph_BP_TrophyAward_BaseballBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
