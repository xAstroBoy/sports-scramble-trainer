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
	 * Function Batting_Target_01.Batting_Target_01_C.ShowScore
	 */
	struct ABatting_Target_01_C_ShowScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3DA8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.Initialize
	 */
	struct ABatting_Target_01_C_Initialize_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.UserConstructionScript
	 */
	struct ABatting_Target_01_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__FinishedFunc
	 */
	struct ABatting_Target_01_C_ChangeTargetSize__FinishedFunc_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__UpdateFunc
	 */
	struct ABatting_Target_01_C_ChangeTargetSize__UpdateFunc_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.OnTriggered
	 */
	struct ABatting_Target_01_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.ReceiveBeginPlay
	 */
	struct ABatting_Target_01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.Grow
	 */
	struct ABatting_Target_01_C_Grow_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.Shrink
	 */
	struct ABatting_Target_01_C_Shrink_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.ResetTargetDispatcher
	 */
	struct ABatting_Target_01_C_ResetTargetDispatcher_Params
	{	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.ExecuteUbergraph_Batting_Target_01
	 */
	struct ABatting_Target_01_C_ExecuteUbergraph_Batting_Target_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Batting_Target_01.Batting_Target_01_C.TargetOverlapDetection__DelegateSignature
	 */
	struct ABatting_Target_01_C_TargetOverlapDetection__DelegateSignature_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
