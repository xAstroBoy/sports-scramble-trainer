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
// Parameters
//---------------------------------------------------------------------------

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetMusicRef
struct AScramSportManagerBowling_Blueprint_C_GetMusicRef_Params
{
	class USoundBase*                                  AudioRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SaveBowlingState
struct AScramSportManagerBowling_Blueprint_C_SaveBowlingState_Params
{
	struct FBowlingScrambleState                       ScrambleState;                                             // (Parm, OutParm)
	TArray<struct FBowlingFrameSet>                    TraditionalFrameSets;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateMatchScore
struct AScramSportManagerBowling_Blueprint_C_NetUpdateMatchScore_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetRelativeScore
struct AScramSportManagerBowling_Blueprint_C_GetRelativeScore_Params
{
	int                                                RelativeScore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetHideScoreCards
struct AScramSportManagerBowling_Blueprint_C_NetHideScoreCards_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetPrepareScoreCards
struct AScramSportManagerBowling_Blueprint_C_NetPrepareScoreCards_Params
{
	int                                                NumFrames;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateTraditionalScore
struct AScramSportManagerBowling_Blueprint_C_NetUpdateTraditionalScore_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BuildScoreString
struct AScramSportManagerBowling_Blueprint_C_BuildScoreString_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Result;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.FilterLaneTypes
struct AScramSportManagerBowling_Blueprint_C_FilterLaneTypes_Params
{
	TArray<struct FName>                               LanesIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Randomize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               LanesOut;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateScrambleLists
struct AScramSportManagerBowling_Blueprint_C_UpdateScrambleLists_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SpawnAI
struct AScramSportManagerBowling_Blueprint_C_SpawnAI_Params
{
	bool                                               Player1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateResults
struct AScramSportManagerBowling_Blueprint_C_UpdateResults_Params
{
	int                                                Score0;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetVideoBoard
struct AScramSportManagerBowling_Blueprint_C_GetVideoBoard_Params
{
	class ABW_VideoBoard_Training_C*                   VideoBoard;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Cleanup
struct AScramSportManagerBowling_Blueprint_C_Cleanup_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Initialize
struct AScramSportManagerBowling_Blueprint_C_Initialize_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UserConstructionScript
struct AScramSportManagerBowling_Blueprint_C_UserConstructionScript_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_F44468EB4040BF2A0703018CD06BD38B
struct AScramSportManagerBowling_Blueprint_C_OnLoaded_F44468EB4040BF2A0703018CD06BD38B_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_DDE06F4D473B8945A2362CB797C3F835
struct AScramSportManagerBowling_Blueprint_C_OnLoaded_DDE06F4D473B8945A2362CB797C3F835_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_7650529845E7E25F135EACAAD84131AF
struct AScramSportManagerBowling_Blueprint_C_OnLoaded_7650529845E7E25F135EACAAD84131AF_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveBeginPlay
struct AScramSportManagerBowling_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveEndPlay
struct AScramSportManagerBowling_Blueprint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BowlingEvent
struct AScramSportManagerBowling_Blueprint_C_BowlingEvent_Params
{
	int                                                Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PregameStart
struct AScramSportManagerBowling_Blueprint_C_PregameStart_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchStart
struct AScramSportManagerBowling_Blueprint_C_MatchStart_Params
{
	float                                              TimeRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginGame
struct AScramSportManagerBowling_Blueprint_C_BeginGame_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfGame
struct AScramSportManagerBowling_Blueprint_C_EndOfGame_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NextGame
struct AScramSportManagerBowling_Blueprint_C_NextGame_Params
{
	int                                                PreviousGameWinner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchOver
struct AScramSportManagerBowling_Blueprint_C_MatchOver_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseInfo
struct AScramSportManagerBowling_Blueprint_C_ShowPauseInfo_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseBubble
struct AScramSportManagerBowling_Blueprint_C_ShowPauseBubble_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameResume
struct AScramSportManagerBowling_Blueprint_C_OnGameResume_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGamePause
struct AScramSportManagerBowling_Blueprint_C_OnGamePause_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Three
struct AScramSportManagerBowling_Blueprint_C_Three_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Two
struct AScramSportManagerBowling_Blueprint_C_Two_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndingHorn
struct AScramSportManagerBowling_Blueprint_C_EndingHorn_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PreTraditionalGameStart
struct AScramSportManagerBowling_Blueprint_C_PreTraditionalGameStart_Params
{
	int                                                NumFrames;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchStart
struct AScramSportManagerBowling_Blueprint_C_TraditionalMatchStart_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginTraditionalGame
struct AScramSportManagerBowling_Blueprint_C_BeginTraditionalGame_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfTraditionalGame
struct AScramSportManagerBowling_Blueprint_C_EndOfTraditionalGame_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchOver
struct AScramSportManagerBowling_Blueprint_C_TraditionalMatchOver_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateTraditionalScore
struct AScramSportManagerBowling_Blueprint_C_UpdateTraditionalScore_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Pins;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameStart
struct AScramSportManagerBowling_Blueprint_C_TraditionalFrameStart_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameEnd
struct AScramSportManagerBowling_Blueprint_C_TraditionalFrameEnd_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isLastFrame;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SetGameTimeRemaining
struct AScramSportManagerBowling_Blueprint_C_SetGameTimeRemaining_Params
{
	class USoundWave*                                  PlayingSoundWave;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlaybackPercent;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameOver
struct AScramSportManagerBowling_Blueprint_C_GameOver_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SyncTimer
struct AScramSportManagerBowling_Blueprint_C_SyncTimer_Params
{
	float                                              TimeRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.LoadBowlingState
struct AScramSportManagerBowling_Blueprint_C_LoadBowlingState_Params
{
	struct FBowlingScrambleState                       ScrambleState;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FBowlingFrameSet>                    TraditionalFrameSets;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ServerReady
struct AScramSportManagerBowling_Blueprint_C_ServerReady_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameDone
struct AScramSportManagerBowling_Blueprint_C_OnGameDone_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PlayBonusBallAudio
struct AScramSportManagerBowling_Blueprint_C_PlayBonusBallAudio_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndGameDisablePause
struct AScramSportManagerBowling_Blueprint_C_EndGameDisablePause_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ExecuteUbergraph_ScramSportManagerBowling_Blueprint
struct AScramSportManagerBowling_Blueprint_C_ExecuteUbergraph_ScramSportManagerBowling_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameTimeEnded__DelegateSignature
struct AScramSportManagerBowling_Blueprint_C_GameTimeEnded__DelegateSignature_Params
{
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BWGameEnd__DelegateSignature
struct AScramSportManagerBowling_Blueprint_C_BWGameEnd__DelegateSignature_Params
{
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchComplete__DelegateSignature
struct AScramSportManagerBowling_Blueprint_C_MatchComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
