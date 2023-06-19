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
	 * BlueprintGeneratedClass Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C
	 * Size -> 0x00AB (FullSize[0x03F3] - InheritedSize[0x0348])
	 */
	class AChallenge_ManagerTennis_LocalHelper_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Music_StartOfMatch;                                      // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Umpire_Vox;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ATN_NetMatchScoreboard_C*                            NetScoreBoard;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NetTextDisplayTime;                                      // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BY9L[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScorePlayer1;                                            // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScorePlayer2;                                            // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ATennisArenaScoreboard_C*>                    ArenaScoreboards;                                        // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class USoundBase*                                          SFX_CheerGood;                                           // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_CheerBad;                                            // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AInfoDisplay_C*                                      InfoPanel;                                               // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_StingerWin;                                          // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_StingerLose;                                         // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InfoDisplayStingerIntroTime;                             // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LocalIsPlayer1;                                          // 0x03C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Player1WonPoint;                                         // 0x03C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8BJ[0x2];                                   // 0x03C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SFX_StartOfMatchMusic;                                   // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_GameOverMusic;                                       // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ServeMessageComplete;                                    // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ATN_NetMatchScoreboard_C*                            NetScoreBoard2;                                          // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TraditionalScoring;                                      // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ShowAdvantage;                                           // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseMatchScoreboard;                                      // 0x03F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UpdateAdvantage(bool ShowAdvantage);
		void UpdateArenaScoreboardsServe(bool Player1Serve, bool Player2Serve);
		void DisplayDebugInfo(const class FString& String);
		void DisplayServeInfo(bool IsLocalPlayerServe, int32_t GameCount, bool OC5Demo);
		void DisplayInfo(const class FText& Text, float DisplayTime);
		void GetArenaScoreboards();
		void UpdateArenaScoreboards(int32_t Player1Score, int32_t Player2Score, int32_t Player1Games, int32_t Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly);
		void Cleanup();
		void Initialize();
		void UserConstructionScript();
		void OnLoaded_63A9BB3F41B233AA34B75781E6359008(class UObject* Loaded);
		void OnLoaded_E86737B344F9B9A0CD9174A6DABCCAF8(class UObject* Loaded);
		void OnLoaded_FE19C6B44A7684430914DDB436E76BB3(class UObject* Loaded);
		void OnLoaded_6E7ED6D943EA6E0D3176389AF4D6BA37(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DisplayPointResults(const class FText& PointType, int32_t NewScoreP1, int32_t NewScoreP2, bool Player1WonPoint, bool TextOnly);
		void DisplayLet();
		void DisplayFault();
		void DisplayStartOfMatchInfo(int32_t GamesToWin, bool Player1Serve, bool OC5Demo);
		void ShowNetPreServeInfo(const class FText& GameStatusText, bool Player1Serve);
		void HideNetScoreboard();
		void GameComplete(int32_t GameCount, int32_t Player1GamesWon, int32_t Player2GamesWon, bool Player1Serve);
		void MatchCompleted(int32_t Player1GamesWon, int32_t Player2GamesWon, bool OC5Demo);
		void SwitchServeMessage(bool Player1Serve);
		void ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper(int32_t EntryPoint);
		void ServeMessageComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
