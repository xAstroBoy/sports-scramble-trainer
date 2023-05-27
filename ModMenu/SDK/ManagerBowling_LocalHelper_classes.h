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
	 * BlueprintGeneratedClass ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C
	 * Size -> 0x0078 (FullSize[0x03C0] - InheritedSize[0x0348])
	 */
	class AManagerBowling_LocalHelper_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DisappointedAudience;                                    // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          AudienceApplause;                                        // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AInfoDisplay_C*                                      InfoPanel;                                               // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayer1;                                               // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_C3AL[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SFX_StingerLose;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_StingerWin;                                          // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PlinkoLaunchSound;                                       // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACountdown_C*                                        CountdownActor;                                          // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAlternateInfo;                                        // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KVKK[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AlternateText_Panel_01;                                  // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AlternateText_Panel_02_Prefix;                           // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AlternateText_Panel_02_Postfix;                          // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DisplayCountdown(class ACountdown_C** CountdownActor);
		void DisplayInfo(const class FText& DisplayText, float DisplayTime);
		void Cleanup();
		void Initialize();
		void UserConstructionScript();
		void OnLoaded_906AE94D4F152913F520DB9BC9980BB7(class UObject* Loaded);
		void OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7(class UObject* Loaded);
		void PlayAudienceDisappointed();
		void CrowdApplause();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DisplayStartOfMatchInfo(int32_t GamesToWin);
		void DisplayNextGame(int32_t PreviousGameWinner, int32_t Game);
		void DisplayMatchOver(EGameResult GameResult);
		void PlayAnnouncerBallChange();
		void PlayAnnouncerVO();
		void ReceiveBeginPlay();
		void PlinkoLaunchSFX(const struct FVector& Location);
		void DisplayAlternateMatchInfo(int32_t GamesToWin);
		void DisplayPlayerTurnStart(int32_t Player);
		void DisplayPlayerTurnEnd(int32_t Player);
		void DisplayStartOfTraditionalMatchInfo(int32_t Frames);
		void ExecuteUbergraph_ManagerBowling_LocalHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
