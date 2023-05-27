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
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.CheckTrophy
	 */
	struct ABB_Challenge_03_LittleLeague_C_CheckTrophy_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.StopPlayingAudioComponents
	 */
	struct ABB_Challenge_03_LittleLeague_C_StopPlayingAudioComponents_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.SetupInfoText
	 */
	struct ABB_Challenge_03_LittleLeague_C_SetupInfoText_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BB_Initialize
	 */
	struct ABB_Challenge_03_LittleLeague_C_BB_Initialize_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.UserConstructionScript
	 */
	struct ABB_Challenge_03_LittleLeague_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_03_LittleLeague_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BaseballGameCompleted
	 */
	struct ABB_Challenge_03_LittleLeague_C_BaseballGameCompleted_Params
	{
	public:
		bool                                                       LocalPlayerVictory;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_INRH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AwayScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveEndPlay
	 */
	struct ABB_Challenge_03_LittleLeague_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.AnnouncerExitSequenceComplete
	 */
	struct ABB_Challenge_03_LittleLeague_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.TriggerAlternateCadence
	 */
	struct ABB_Challenge_03_LittleLeague_C_TriggerAlternateCadence_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.Shortcut
	 */
	struct ABB_Challenge_03_LittleLeague_C_Shortcut_Params
	{	};

	/**
	 * Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ExecuteUbergraph_BB_Challenge_03_LittleLeague
	 */
	struct ABB_Challenge_03_LittleLeague_C_ExecuteUbergraph_BB_Challenge_03_LittleLeague_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
