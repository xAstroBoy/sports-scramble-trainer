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
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.AddActorToGameElementList
	 */
	struct ABW_Minigame_Practice_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DEQA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.Shutdown
	 */
	struct ABW_Minigame_Practice_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U8W1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.SpawnGameElements
	 */
	struct ABW_Minigame_Practice_C_SpawnGameElements_Params
	{	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.Initialize
	 */
	struct ABW_Minigame_Practice_C_Initialize_Params
	{	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.UserConstructionScript
	 */
	struct ABW_Minigame_Practice_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.ReceiveBeginPlay
	 */
	struct ABW_Minigame_Practice_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.DelayDestroy
	 */
	struct ABW_Minigame_Practice_C_DelayDestroy_Params
	{	};

	/**
	 * Function BW_Minigame_Practice.BW_Minigame_Practice_C.ExecuteUbergraph_BW_Minigame_Practice
	 */
	struct ABW_Minigame_Practice_C_ExecuteUbergraph_BW_Minigame_Practice_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
