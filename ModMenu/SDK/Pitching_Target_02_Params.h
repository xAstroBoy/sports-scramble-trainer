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
	 * Function Pitching_Target_02.Pitching_Target_02_C.HideBallTarget
	 */
	struct APitching_Target_02_C_HideBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.ShowBallTarget
	 */
	struct APitching_Target_02_C_ShowBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.FlashScore
	 */
	struct APitching_Target_02_C_FlashScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V63L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ScoreFlashed;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5F95[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.ShowScore
	 */
	struct APitching_Target_02_C_ShowScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q5C7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FVector2D                                           Size;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.Initialize
	 */
	struct APitching_Target_02_C_Initialize_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.SetTargetMaterial
	 */
	struct APitching_Target_02_C_SetTargetMaterial_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.RemoveMarks
	 */
	struct APitching_Target_02_C_RemoveMarks_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.UserConstructionScript
	 */
	struct APitching_Target_02_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__FinishedFunc
	 */
	struct APitching_Target_02_C_ChangeSize__FinishedFunc_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__UpdateFunc
	 */
	struct APitching_Target_02_C_ChangeSize__UpdateFunc_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.ReceiveBeginPlay
	 */
	struct APitching_Target_02_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.Grow
	 */
	struct APitching_Target_02_C_Grow_Params
	{	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.Shrink
	 */
	struct APitching_Target_02_C_Shrink_Params
	{
	public:
		bool                                                       PlaySound;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APitching_Target_02_C_BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZK0I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.Impact
	 */
	struct APitching_Target_02_C_Impact_Params
	{
	public:
		bool                                                       PlayStrikeSound;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.HideScoreOnDelay
	 */
	struct APitching_Target_02_C_HideScoreOnDelay_Params
	{
	public:
		float                                                      DelayTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ALGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.ExecuteUbergraph_Pitching_Target_02
	 */
	struct APitching_Target_02_C_ExecuteUbergraph_Pitching_Target_02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pitching_Target_02.Pitching_Target_02_C.TargetOverlapDetection__DelegateSignature
	 */
	struct APitching_Target_02_C_TargetOverlapDetection__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
