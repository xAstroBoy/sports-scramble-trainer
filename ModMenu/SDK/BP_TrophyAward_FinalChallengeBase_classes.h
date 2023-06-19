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
	 * BlueprintGeneratedClass BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C
	 * Size -> 0x0047 (FullSize[0x03D8] - InheritedSize[0x0391])
	 */
	class ABP_TrophyAward_FinalChallengeBase_C : public ABP_TrophyAwardBase_C
	{
	public:
		unsigned char                                              UnknownData_KPIR[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        ChallengeTrophyIDs;                                      // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    counter;                                                 // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EJ0T[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrependString;                                           // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              FirstID;                                                 // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void Restore();
		void IsNewCompletion(const class FName& GameID, bool* IsValid);
		void GetCompletionCount(int32_t* CompletedCount);
		void RefreshGameProgress();
		void OnChallengeCompleted(const class FName& ChallengeID);
		void UpdateChallengeProgress();
		void UserConstructionScript();
		void DebugEarn();
		void OnTrophyEarned();
		void ReceiveBeginPlay();
		void Initialize();
		void ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
