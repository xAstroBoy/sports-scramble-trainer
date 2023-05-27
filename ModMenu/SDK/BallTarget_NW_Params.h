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
	 * Function BallTarget_NW.BallTarget_NW_C.HideBallTarget
	 */
	struct ABallTarget_NW_C_HideBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8LS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ShowBallTarget
	 */
	struct ABallTarget_NW_C_ShowBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.FlashScore
	 */
	struct ABallTarget_NW_C_FlashScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_350G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ScoreFlashed;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OO5L[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Initialize
	 */
	struct ABallTarget_NW_C_Initialize_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.RemoveMarks
	 */
	struct ABallTarget_NW_C_RemoveMarks_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.UserConstructionScript
	 */
	struct ABallTarget_NW_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ChangeSize__FinishedFunc
	 */
	struct ABallTarget_NW_C_ChangeSize__FinishedFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ChangeSize__UpdateFunc
	 */
	struct ABallTarget_NW_C_ChangeSize__UpdateFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__FinishedFunc
	 */
	struct ABallTarget_NW_C_Timeline_Outer__FinishedFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__UpdateFunc
	 */
	struct ABallTarget_NW_C_Timeline_Outer__UpdateFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__FinishedFunc
	 */
	struct ABallTarget_NW_C_Timeline_Middle__FinishedFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__UpdateFunc
	 */
	struct ABallTarget_NW_C_Timeline_Middle__UpdateFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__FinishedFunc
	 */
	struct ABallTarget_NW_C_Timeline_Inner__FinishedFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__UpdateFunc
	 */
	struct ABallTarget_NW_C_Timeline_Inner__UpdateFunc_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ReceiveBeginPlay
	 */
	struct ABallTarget_NW_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ScoreOuter
	 */
	struct ABallTarget_NW_C_ScoreOuter_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ScoreInner
	 */
	struct ABallTarget_NW_C_ScoreInner_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.TargetHit
	 */
	struct ABallTarget_NW_C_TargetHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.FlashOuter
	 */
	struct ABallTarget_NW_C_FlashOuter_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.FlashInner
	 */
	struct ABallTarget_NW_C_FlashInner_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Score Middle
	 */
	struct ABallTarget_NW_C_ScoreMiddle_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.FlashMiddle
	 */
	struct ABallTarget_NW_C_FlashMiddle_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Grow
	 */
	struct ABallTarget_NW_C_Grow_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.Shrink
	 */
	struct ABallTarget_NW_C_Shrink_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ReceiveDestroyed
	 */
	struct ABallTarget_NW_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.DelayShrink
	 */
	struct ABallTarget_NW_C_DelayShrink_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ResetShrink
	 */
	struct ABallTarget_NW_C_ResetShrink_Params
	{	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ExecuteUbergraph_BallTarget_NW
	 */
	struct ABallTarget_NW_C_ExecuteUbergraph_BallTarget_NW_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.ShrinkStart__DelegateSignature
	 */
	struct ABallTarget_NW_C_ShrinkStart__DelegateSignature_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTarget_NW.BallTarget_NW_C.BallTarget_NW_Hit__DelegateSignature
	 */
	struct ABallTarget_NW_C_BallTarget_NW_Hit__DelegateSignature_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
