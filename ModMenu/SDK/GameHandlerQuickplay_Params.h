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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBaseball
	 */
	struct AGameHandlerQuickplay_C_StartBaseball_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBaseball
	 */
	struct AGameHandlerQuickplay_C_SetupBaseball_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBowling
	 */
	struct AGameHandlerQuickplay_C_StartBowling_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBowling
	 */
	struct AGameHandlerQuickplay_C_SetupBowling_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.Shutdown
	 */
	struct AGameHandlerQuickplay_C_Shutdown_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartTennis
	 */
	struct AGameHandlerQuickplay_C_StartTennis_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupTennis
	 */
	struct AGameHandlerQuickplay_C_SetupTennis_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.UserConstructionScript
	 */
	struct AGameHandlerQuickplay_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.ReceiveBeginPlay
	 */
	struct AGameHandlerQuickplay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.MatchComplete
	 */
	struct AGameHandlerQuickplay_C_MatchComplete_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.QuitGame
	 */
	struct AGameHandlerQuickplay_C_QuitGame_Params
	{	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.BaseballGameCompleted
	 */
	struct AGameHandlerQuickplay_C_BaseballGameCompleted_Params
	{
	public:
		bool                                                       LocalPlayerVictory;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUSB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AwayScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.BowlingGameComplete
	 */
	struct AGameHandlerQuickplay_C_BowlingGameComplete_Params
	{
	public:
		EGameResult                                                MatchResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VPYC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerQuickplay.GameHandlerQuickplay_C.ExecuteUbergraph_GameHandlerQuickplay
	 */
	struct AGameHandlerQuickplay_C_ExecuteUbergraph_GameHandlerQuickplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
