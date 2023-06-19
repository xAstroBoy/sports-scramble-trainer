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
	 * Function GameHandlerTraining.GameHandlerTraining_C.SetupBaseball
	 */
	struct AGameHandlerTraining_C_SetupBaseball_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.SetupBowling
	 */
	struct AGameHandlerTraining_C_SetupBowling_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.Shutdown
	 */
	struct AGameHandlerTraining_C_Shutdown_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.StartTraining
	 */
	struct AGameHandlerTraining_C_StartTraining_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.SetupTennis
	 */
	struct AGameHandlerTraining_C_SetupTennis_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.UserConstructionScript
	 */
	struct AGameHandlerTraining_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.ReceiveBeginPlay
	 */
	struct AGameHandlerTraining_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.MiniGameDestroyed
	 */
	struct AGameHandlerTraining_C_MiniGameDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.TrainingComplete
	 */
	struct AGameHandlerTraining_C_TrainingComplete_Params
	{
	public:
		struct FResultsData                                        Results;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.QuitGame
	 */
	struct AGameHandlerTraining_C_QuitGame_Params
	{	};

	/**
	 * Function GameHandlerTraining.GameHandlerTraining_C.ExecuteUbergraph_GameHandlerTraining
	 */
	struct AGameHandlerTraining_C_ExecuteUbergraph_GameHandlerTraining_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_INBF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
