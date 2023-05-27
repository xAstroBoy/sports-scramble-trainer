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
	 * BlueprintGeneratedClass ScramTrophyManager_BP.ScramTrophyManager_BP_C
	 * Size -> 0x00C0 (FullSize[0x0470] - InheritedSize[0x03B0])
	 */
	class AScramTrophyManager_BP_C : public AScramTrophyManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TrophySpawnForwardOffset;                                // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrophySpawnRightOffset;                                  // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrophySpawnUpOffset;                                     // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ButtonPressCount;                                        // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TrophyGetSoundList[0x10];                                // 0x03D0(0x0010) UNKNOWN PROPERTY: ArrayProperty ScramTrophyManager_BP.ScramTrophyManager_BP_C.TrophyGetSoundList
		float                                                      PreAnnounceDelay;                                        // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Initialized;                                             // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KCDH[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Logs;                                                    // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        NewlyEarnedTrophies;                                     // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		EScramSport                                                CurrentSport;                                            // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NVU9[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        NewlyEarnedAvatars;                                      // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FScriptMulticastDelegate                             OnEarnedTrophyDispatcher;                                // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FName>                                        NewlyEarnedSkinPacks;                                    // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        NewlyEarnedHairPacks;                                    // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        GameModeTrophyID;                                        // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        LastGameModeID;                                          // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetTrophyListener(const class FName& TrophyID, class UClass** awardListener);
		void HasEarnedRewardInMatch(bool* HasReward);
		void EarnHairPack(const class FName& avatarID);
		void EarnSkinPack(const class FName& avatarID);
		void IsHairPackEarned(const class FName& Name, bool* _bool_);
		void IsSkinPackEarned(const class FName& Name, bool* _bool_);
		void ResetAvatars();
		void EarnAvatar(const class FName& avatarID);
		void IsAvatarEarned(const class FName& Name, bool* _bool_);
		void HasEarnedAvatarInMatch(bool* hasEarnedAvatar);
		void CheckAvatarAchievements(bool byPassHistory);
		void HasEarnedTrophyInMatch(bool* HasTrophies);
		void ClearTrophyHistory();
		void PrintSaveData();
		void DebugLog(const class FString& Message);
		void FindNextUnearnedTrophy();
		void UpdateExistingTrophies();
		void CustomTrophySpawnTransform(struct FTransform* Transform);
		void UserConstructionScript();
		void InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7(class UObject* Loaded);
		void OnLoaded_37C4806C4A79C92922992A96ADA85D5C(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ResetTrophyData();
		void OnNotifyTrophyEarned(const class FName& Name);
		void SpawnTrophyNotificationFX();
		void OnNotifyOculusUpdate();
		void SaveChallengeProgress(const class FName& ChallengeID);
		void RefreshGameProgress();
		void CheckTrophyAndGameProgress();
		void OnNotifyOculusUpload();
		void ExecuteUbergraph_ScramTrophyManager_BP(int32_t EntryPoint);
		void OnEarnedTrophyDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
