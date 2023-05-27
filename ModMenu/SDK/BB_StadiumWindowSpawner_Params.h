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
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.UserConstructionScript
	 */
	struct ABB_StadiumWindowSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ActivateBreakables
	 */
	struct ABB_StadiumWindowSpawner_C_ActivateBreakables_Params
	{	};

	/**
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ResetBreakables
	 */
	struct ABB_StadiumWindowSpawner_C_ResetBreakables_Params
	{	};

	/**
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.CleanUpAllBreakables
	 */
	struct ABB_StadiumWindowSpawner_C_CleanUpAllBreakables_Params
	{	};

	/**
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ReceiveEndPlay
	 */
	struct ABB_StadiumWindowSpawner_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.SetBreakableScore
	 */
	struct ABB_StadiumWindowSpawner_C_SetBreakableScore_Params
	{
	public:
		int32_t                                                    WindowScore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LightFixtureScore;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ExecuteUbergraph_BB_StadiumWindowSpawner
	 */
	struct ABB_StadiumWindowSpawner_C_ExecuteUbergraph_BB_StadiumWindowSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YCG7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
