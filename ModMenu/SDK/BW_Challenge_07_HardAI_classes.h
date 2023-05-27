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
	 * BlueprintGeneratedClass BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C
	 * Size -> 0x0027 (FullSize[0x0568] - InheritedSize[0x0541])
	 */
	class ABW_Challenge_07_HardAI_C : public ABW_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_YMBY[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0548(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Crowd;                                                   // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        PrimaryAudioList;                                        // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetTrophyID(class FName* TrophyID);
		void InitializeChallengeRoom();
		void SetupInfoText();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Shortcut();
		void BW_CHG_SportManagerGameEnd(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon);
		void AnnouncerExitSequenceComplete();
		void OnScore(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ExecuteUbergraph_BW_Challenge_07_HardAI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
