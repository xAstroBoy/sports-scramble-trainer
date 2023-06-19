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
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBaseball
	 */
	struct AGameHandlerChallenges_C_SetupBaseball_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBowling
	 */
	struct AGameHandlerChallenges_C_SetupBowling_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.Shutdown
	 */
	struct AGameHandlerChallenges_C_Shutdown_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.StartChallenges
	 */
	struct AGameHandlerChallenges_C_StartChallenges_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.SetupTennis
	 */
	struct AGameHandlerChallenges_C_SetupTennis_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.UserConstructionScript
	 */
	struct AGameHandlerChallenges_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.ReceiveBeginPlay
	 */
	struct AGameHandlerChallenges_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.MiniGameDestroyed
	 */
	struct AGameHandlerChallenges_C_MiniGameDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.QuitGame
	 */
	struct AGameHandlerChallenges_C_QuitGame_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.ChallengeComplete
	 */
	struct AGameHandlerChallenges_C_ChallengeComplete_Params
	{
	public:
		struct FResultsData                                        Results;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.RestartMinigame
	 */
	struct AGameHandlerChallenges_C_RestartMinigame_Params
	{	};

	/**
	 * Function GameHandlerChallenges.GameHandlerChallenges_C.ExecuteUbergraph_GameHandlerChallenges
	 */
	struct AGameHandlerChallenges_C_ExecuteUbergraph_GameHandlerChallenges_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5O5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
