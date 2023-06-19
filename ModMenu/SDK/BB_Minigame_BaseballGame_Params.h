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
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_BaseballGame_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7CVF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Shutdown
	 */
	struct ABB_Minigame_BaseballGame_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L93H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.SpawnActors
	 */
	struct ABB_Minigame_BaseballGame_C_SpawnActors_Params
	{	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Initialize
	 */
	struct ABB_Minigame_BaseballGame_C_Initialize_Params
	{	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.UserConstructionScript
	 */
	struct ABB_Minigame_BaseballGame_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_BaseballGame_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.DelayDestroy
	 */
	struct ABB_Minigame_BaseballGame_C_DelayDestroy_Params
	{	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.GameOver
	 */
	struct ABB_Minigame_BaseballGame_C_GameOver_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ExecuteUbergraph_BB_Minigame_BaseballGame
	 */
	struct ABB_Minigame_BaseballGame_C_ExecuteUbergraph_BB_Minigame_BaseballGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KKEX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
