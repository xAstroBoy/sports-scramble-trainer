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
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.StopPlayingAudioComponents
	 */
	struct ABB_Challenge_05_MinorLeague_C_StopPlayingAudioComponents_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.SetupInfoText
	 */
	struct ABB_Challenge_05_MinorLeague_C_SetupInfoText_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.BB_Initialize
	 */
	struct ABB_Challenge_05_MinorLeague_C_BB_Initialize_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.UserConstructionScript
	 */
	struct ABB_Challenge_05_MinorLeague_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.ReceiveEndPlay
	 */
	struct ABB_Challenge_05_MinorLeague_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.BaseballGameCompleted
	 */
	struct ABB_Challenge_05_MinorLeague_C_BaseballGameCompleted_Params
	{
	public:
		bool                                                       LocalPlayerVictory;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DEWF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AwayScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.AnnouncerExitSequenceComplete
	 */
	struct ABB_Challenge_05_MinorLeague_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.TriggerAlternateCadence
	 */
	struct ABB_Challenge_05_MinorLeague_C_TriggerAlternateCadence_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.Shortcut
	 */
	struct ABB_Challenge_05_MinorLeague_C_Shortcut_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.PreTeleportation
	 */
	struct ABB_Challenge_05_MinorLeague_C_PreTeleportation_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_05_MinorLeague_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.PostTeleportation
	 */
	struct ABB_Challenge_05_MinorLeague_C_PostTeleportation_Params
	{	};

	/**
	 * Function BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C.ExecuteUbergraph_BB_Challenge_05_MinorLeague
	 */
	struct ABB_Challenge_05_MinorLeague_C_ExecuteUbergraph_BB_Challenge_05_MinorLeague_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
