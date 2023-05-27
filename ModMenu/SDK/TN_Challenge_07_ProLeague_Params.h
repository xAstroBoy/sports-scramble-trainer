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
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.SetupInfoText
	 */
	struct ATN_Challenge_07_ProLeague_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.AddActorToGameElementList
	 */
	struct ATN_Challenge_07_ProLeague_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.Shutdown
	 */
	struct ATN_Challenge_07_ProLeague_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.Initialize
	 */
	struct ATN_Challenge_07_ProLeague_C_Initialize_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.UserConstructionScript
	 */
	struct ATN_Challenge_07_ProLeague_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.ReceiveBeginPlay
	 */
	struct ATN_Challenge_07_ProLeague_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.DelayDestroy
	 */
	struct ATN_Challenge_07_ProLeague_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.ReceiveEndPlay
	 */
	struct ATN_Challenge_07_ProLeague_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.SportManager_MatchComplete
	 */
	struct ATN_Challenge_07_ProLeague_C_SportManager_MatchComplete_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.NotifyChallengeContinue
	 */
	struct ATN_Challenge_07_ProLeague_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.TriggerAlternativeCadence
	 */
	struct ATN_Challenge_07_ProLeague_C_TriggerAlternativeCadence_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.Shortcut
	 */
	struct ATN_Challenge_07_ProLeague_C_Shortcut_Params
	{	};

	/**
	 * Function TN_Challenge_07_ProLeague.TN_Challenge_07_ProLeague_C.ExecuteUbergraph_TN_Challenge_07_ProLeague
	 */
	struct ATN_Challenge_07_ProLeague_C_ExecuteUbergraph_TN_Challenge_07_ProLeague_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
