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
	 * Function RI_Target_02.RI_Target_02_C.HideBallTarget
	 */
	struct ARI_Target_02_C_HideBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RNYI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ShowBallTarget
	 */
	struct ARI_Target_02_C_ShowBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.FlashScore
	 */
	struct ARI_Target_02_C_FlashScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YKEQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ScoreFlashed;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JCIB[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.RemoveMarks
	 */
	struct ARI_Target_02_C_RemoveMarks_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.UserConstructionScript
	 */
	struct ARI_Target_02_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ChangeSize__FinishedFunc
	 */
	struct ARI_Target_02_C_ChangeSize__FinishedFunc_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ChangeSize__UpdateFunc
	 */
	struct ARI_Target_02_C_ChangeSize__UpdateFunc_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ReceiveBeginPlay
	 */
	struct ARI_Target_02_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ScoreOuter
	 */
	struct ARI_Target_02_C_ScoreOuter_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ScoreInner
	 */
	struct ARI_Target_02_C_ScoreInner_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.TargetHit
	 */
	struct ARI_Target_02_C_TargetHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.FlashOuter
	 */
	struct ARI_Target_02_C_FlashOuter_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.FlashInner
	 */
	struct ARI_Target_02_C_FlashInner_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.HideScoreOnDelay
	 */
	struct ARI_Target_02_C_HideScoreOnDelay_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.Score Middle
	 */
	struct ARI_Target_02_C_ScoreMiddle_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.FlashMiddle
	 */
	struct ARI_Target_02_C_FlashMiddle_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.Grow
	 */
	struct ARI_Target_02_C_Grow_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.Shrink
	 */
	struct ARI_Target_02_C_Shrink_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ReceiveDestroyed
	 */
	struct ARI_Target_02_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.ExecuteUbergraph_RI_Target_02
	 */
	struct ARI_Target_02_C_ExecuteUbergraph_RI_Target_02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VSL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RI_Target_02.RI_Target_02_C.RI_Target_02_Hit__DelegateSignature
	 */
	struct ARI_Target_02_C_RI_Target_02_Hit__DelegateSignature_Params
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
