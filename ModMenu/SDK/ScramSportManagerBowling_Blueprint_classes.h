#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C
// 0x0182 (FullSize[0x051A] - InheritedSize[0x0398])
class AScramSportManagerBowling_Blueprint_C : public AScramSportManagerBowling
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AudioCountdown;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioCrowd;                                                // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioMatchMusic;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugBallsSetting;                                         // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QEMX[0x7];                                     // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AManagerBowling_LocalHelper_C*               LocalHelper;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_VideoBoard_Training_C*                   VideoBoard;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingAlley_BP_C*                          Alley0;                                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingAlley_BP_C*                          Alley1;                                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GamesToWin;                                                // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I9K4[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABW_CenterScoreboard_C*                      CenterScoreboard;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Game;                                                      // 0x0400(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Round1Length;                                              // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Round2Length;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Round3Length;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P1GamesWon;                                                // 0x0410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2GamesWon;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    MatchComplete;                                             // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                PreviousGameWinner;                                        // 0x0428(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountdownSeconds;                                          // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AiVsAi;                                                    // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               PracticeGame;                                              // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_AS2U[0x6];                                     // 0x0432(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APauseBubble_C*                              PauseBubbleActor;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingAI_Blueprint_C*                      BowlingAi01;                                               // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingAI_Blueprint_C*                      BowlingAi02;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACountdown_C*                                CountdownActor;                                            // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBW_ScrambleList                            Round1List;                                                // 0x0458(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FBW_ScrambleList                            Round2List;                                                // 0x0490(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    BWGameEnd;                                                 // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABW_ScoreKeeper_BP_C*                        ScoreKeeper;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowAI;                                                   // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_S0YA[0x3];                                     // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GameTimeRemainig;                                          // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    GameTimeEnded;                                             // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               EndCountdownActivated;                                     // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UFQJ[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartedGame;                                               // 0x04FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBowlingFrameSet>                    ResumedTraditionalFrameSets;                               // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LK6R[0x3];                                     // 0x0511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BonusRollCounter;                                          // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RestartedChallenge;                                        // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               DemoMode;                                                  // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C");
		return ptr;
	}



	void GetMusicRef(class USoundBase** AudioRef);
	void SaveBowlingState(struct FBowlingScrambleState* ScrambleState, TArray<struct FBowlingFrameSet>* TraditionalFrameSets);
	void NetUpdateMatchScore();
	void GetRelativeScore(int* RelativeScore);
	void NetHideScoreCards();
	void NetPrepareScoreCards(int NumFrames, int NumPlayers);
	void NetUpdateTraditionalScore(int Player);
	void BuildScoreString(int Player, struct FString* Result);
	void FilterLaneTypes(TArray<struct FName>* LanesIn, bool Randomize, TArray<struct FName>* LanesOut);
	void UpdateScrambleLists();
	void SpawnAI(bool Player1);
	void UpdateResults(int Score0, int Score1);
	void GetVideoBoard(class ABW_VideoBoard_Training_C** VideoBoard);
	void Cleanup();
	void Initialize();
	void UserConstructionScript();
	void OnLoaded_F44468EB4040BF2A0703018CD06BD38B(class UObject* Loaded);
	void OnLoaded_DDE06F4D473B8945A2362CB797C3F835(class UObject* Loaded);
	void OnLoaded_7650529845E7E25F135EACAAD84131AF(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent);
	void PregameStart();
	void MatchStart(float TimeRemaining);
	void BeginGame();
	void EndOfGame();
	void NextGame(int PreviousGameWinner, int Game);
	void MatchOver(TEnumAsByte<GameResult_EGameResult> Result);
	void ShowPauseInfo(bool IsPaused, bool WasPausedByMe);
	void ShowPauseBubble(bool IsPaused);
	void OnGameResume(bool WasPausedByMe);
	void OnGamePause(bool WasPausedByMe);
	void Three();
	void Two();
	void EndingHorn();
	void PreTraditionalGameStart(int NumFrames);
	void TraditionalMatchStart();
	void BeginTraditionalGame();
	void EndOfTraditionalGame();
	void TraditionalMatchOver(TEnumAsByte<GameResult_EGameResult> Result);
	void UpdateTraditionalScore(int ID, int Pins);
	void TraditionalFrameStart(int Player);
	void TraditionalFrameEnd(int Player, bool isLastFrame);
	void SetGameTimeRemaining(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	void GameOver();
	void SyncTimer(float TimeRemaining);
	void LoadBowlingState(const struct FBowlingScrambleState& ScrambleState, TArray<struct FBowlingFrameSet> TraditionalFrameSets);
	void ServerReady();
	void OnGameDone();
	void PlayBonusBallAudio(int ID);
	void EndGameDisablePause();
	void ExecuteUbergraph_ScramSportManagerBowling_Blueprint(int EntryPoint);
	void GameTimeEnded__DelegateSignature();
	void BWGameEnd__DelegateSignature(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon);
	void MatchComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
