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
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.AddActorToGameElementList
	 */
	struct ATN_Minigame_AiTest_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.Shutdown
	 */
	struct ATN_Minigame_AiTest_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.BindToManager
	 */
	struct ATN_Minigame_AiTest_C_BindToManager_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.OnRep_Manager
	 */
	struct ATN_Minigame_AiTest_C_OnRep_Manager_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.SpawnGameElements
	 */
	struct ATN_Minigame_AiTest_C_SpawnGameElements_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.Initialize
	 */
	struct ATN_Minigame_AiTest_C_Initialize_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.UserConstructionScript
	 */
	struct ATN_Minigame_AiTest_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.ReceiveBeginPlay
	 */
	struct ATN_Minigame_AiTest_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.DelayDestroy
	 */
	struct ATN_Minigame_AiTest_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.MatchComplete
	 */
	struct ATN_Minigame_AiTest_C_MatchComplete_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.ReceiveEndPlay
	 */
	struct ATN_Minigame_AiTest_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.ExecuteUbergraph_TN_Minigame_AiTest
	 */
	struct ATN_Minigame_AiTest_C_ExecuteUbergraph_TN_Minigame_AiTest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
