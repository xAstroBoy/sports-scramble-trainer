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
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.GetSpecificBall
	 */
	struct ABB_Train_06_UnlimitedPitching_C_GetSpecificBall_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.UpdateBallOptions
	 */
	struct ABB_Train_06_UnlimitedPitching_C_UpdateBallOptions_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.BB_TRN_Initialize
	 */
	struct ABB_Train_06_UnlimitedPitching_C_BB_TRN_Initialize_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.UserConstructionScript
	 */
	struct ABB_Train_06_UnlimitedPitching_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ReceiveBeginPlay
	 */
	struct ABB_Train_06_UnlimitedPitching_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ReceiveEndPlay
	 */
	struct ABB_Train_06_UnlimitedPitching_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ChangeBallClass
	 */
	struct ABB_Train_06_UnlimitedPitching_C_ChangeBallClass_Params
	{
	public:
		class UClass*                                              BB_Ball_Base;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.CountDownCompleted
	 */
	struct ABB_Train_06_UnlimitedPitching_C_CountDownCompleted_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ShowCountdown
	 */
	struct ABB_Train_06_UnlimitedPitching_C_ShowCountdown_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.Unpaused
	 */
	struct ABB_Train_06_UnlimitedPitching_C_Unpaused_Params
	{	};

	/**
	 * Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ExecuteUbergraph_BB_Train_06_UnlimitedPitching
	 */
	struct ABB_Train_06_UnlimitedPitching_C_ExecuteUbergraph_BB_Train_06_UnlimitedPitching_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
