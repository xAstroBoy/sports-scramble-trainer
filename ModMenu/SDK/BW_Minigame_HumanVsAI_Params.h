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
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.AddActorToGameElementList
	 */
	struct ABW_Minigame_HumanVsAI_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.Shutdown
	 */
	struct ABW_Minigame_HumanVsAI_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W8QI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.SpawnGameElements
	 */
	struct ABW_Minigame_HumanVsAI_C_SpawnGameElements_Params
	{	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.Initialize
	 */
	struct ABW_Minigame_HumanVsAI_C_Initialize_Params
	{	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.UserConstructionScript
	 */
	struct ABW_Minigame_HumanVsAI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.ReceiveBeginPlay
	 */
	struct ABW_Minigame_HumanVsAI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.DelayDestroy
	 */
	struct ABW_Minigame_HumanVsAI_C_DelayDestroy_Params
	{	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.GameOver
	 */
	struct ABW_Minigame_HumanVsAI_C_GameOver_Params
	{	};

	/**
	 * Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.ExecuteUbergraph_BW_Minigame_HumanVsAI
	 */
	struct ABW_Minigame_HumanVsAI_C_ExecuteUbergraph_BW_Minigame_HumanVsAI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
