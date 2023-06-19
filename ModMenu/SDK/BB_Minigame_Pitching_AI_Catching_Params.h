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
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.Shutdown
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4F2G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.SpawnActors
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_SpawnActors_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.InitializeMode
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_InitializeMode_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.UserConstructionScript
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.DelayDestroy
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_DelayDestroy_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.ExecuteUbergraph_BB_Minigame_Pitching_AI_Catching
	 */
	struct ABB_Minigame_Pitching_AI_Catching_C_ExecuteUbergraph_BB_Minigame_Pitching_AI_Catching_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
