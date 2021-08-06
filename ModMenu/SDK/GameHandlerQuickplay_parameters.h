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

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBaseball
struct AGameHandlerQuickplay_C_StartBaseball_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBaseball
struct AGameHandlerQuickplay_C_SetupBaseball_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBowling
struct AGameHandlerQuickplay_C_StartBowling_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBowling
struct AGameHandlerQuickplay_C_SetupBowling_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.Shutdown
struct AGameHandlerQuickplay_C_Shutdown_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartTennis
struct AGameHandlerQuickplay_C_StartTennis_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupTennis
struct AGameHandlerQuickplay_C_SetupTennis_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.UserConstructionScript
struct AGameHandlerQuickplay_C_UserConstructionScript_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.ReceiveBeginPlay
struct AGameHandlerQuickplay_C_ReceiveBeginPlay_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.MatchComplete
struct AGameHandlerQuickplay_C_MatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.QuitGame
struct AGameHandlerQuickplay_C_QuitGame_Params
{
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.BaseballGameCompleted
struct AGameHandlerQuickplay_C_BaseballGameCompleted_Params
{
	bool                                               LocalPlayerVictory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AwayScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.BowlingGameComplete
struct AGameHandlerQuickplay_C_BowlingGameComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.ExecuteUbergraph_GameHandlerQuickplay
struct AGameHandlerQuickplay_C_ExecuteUbergraph_GameHandlerQuickplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
