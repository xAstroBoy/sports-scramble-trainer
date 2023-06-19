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
	 * BlueprintGeneratedClass BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C
	 * Size -> 0x0027 (FullSize[0x0568] - InheritedSize[0x0541])
	 */
	class ABW_Challenge_03_EasyPeesy_C : public ABW_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_RB2I[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0548(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Crowd;                                                   // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        PairedList;                                              // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void InitializeChallengeRoom();
		void SetupInfoText();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Shortcut();
		void BW_CHG_SportManagerGameEnd(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon);
		void AnnouncerExitSequenceComplete();
		void ExecuteUbergraph_BW_Challenge_03_EasyPeesy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
