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
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.Shutdown
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9EWC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.GetRandomPitchSpeed
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_GetRandomPitchSpeed_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.SetPitchSpeed
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_SetPitchSpeed_Params
	{
	public:
		int32_t                                                    Button;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.UpdateScore
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_UpdateScore_Params
	{
	public:
		float                                                      NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.Initialize
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_Initialize_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.UserConstructionScript
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.DelayDestroy
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_DelayDestroy_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.ExecuteUbergraph_BB_Minigame_Batting_AI_Pitching
	 */
	struct ABB_Minigame_Batting_AI_Pitching_C_ExecuteUbergraph_BB_Minigame_Batting_AI_Pitching_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
