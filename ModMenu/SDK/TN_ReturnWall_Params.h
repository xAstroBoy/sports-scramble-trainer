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
	 * Function TN_ReturnWall.TN_ReturnWall_C.FlashScore
	 */
	struct ATN_ReturnWall_C_FlashScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H73L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ScoreFlashed;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5QO5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.HideBallTarget
	 */
	struct ATN_ReturnWall_C_HideBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ShowBallTarget
	 */
	struct ATN_ReturnWall_C_ShowBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.RemoveGameElement
	 */
	struct ATN_ReturnWall_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.AreStreaksContinued
	 */
	struct ATN_ReturnWall_C_AreStreaksContinued_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.GetFlyTextTransform
	 */
	struct ATN_ReturnWall_C_GetFlyTextTransform_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LQYW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Initialize
	 */
	struct ATN_ReturnWall_C_Initialize_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.RemoveImpacts
	 */
	struct ATN_ReturnWall_C_RemoveImpacts_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.CreateImpact
	 */
	struct ATN_ReturnWall_C_CreateImpact_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.UserConstructionScript
	 */
	struct ATN_ReturnWall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__FinishedFunc
	 */
	struct ATN_ReturnWall_C_Timeline_Move__FinishedFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__UpdateFunc
	 */
	struct ATN_ReturnWall_C_Timeline_Move__UpdateFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__FinishedFunc
	 */
	struct ATN_ReturnWall_C_Timeline_FirstResize__FinishedFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__UpdateFunc
	 */
	struct ATN_ReturnWall_C_Timeline_FirstResize__UpdateFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__FinishedFunc
	 */
	struct ATN_ReturnWall_C_Timeline_SecondResize__FinishedFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__UpdateFunc
	 */
	struct ATN_ReturnWall_C_Timeline_SecondResize__UpdateFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__FinishedFunc
	 */
	struct ATN_ReturnWall_C_Timeline_ThirdResize__FinishedFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__UpdateFunc
	 */
	struct ATN_ReturnWall_C_Timeline_ThirdResize__UpdateFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__FinishedFunc
	 */
	struct ATN_ReturnWall_C_Timeline_ResetOriginalSize__FinishedFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__UpdateFunc
	 */
	struct ATN_ReturnWall_C_Timeline_ResetOriginalSize__UpdateFunc_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_B0FBF894492B325F15CF9C8269818093
	 */
	struct ATN_ReturnWall_C_OnLoaded_B0FBF894492B325F15CF9C8269818093_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_13BD0E934DE2D426979204B30A43C614
	 */
	struct ATN_ReturnWall_C_OnLoaded_13BD0E934DE2D426979204B30A43C614_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361
	 */
	struct ATN_ReturnWall_C_OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.RiseUp
	 */
	struct ATN_ReturnWall_C_RiseUp_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.LowerDown
	 */
	struct ATN_ReturnWall_C_LowerDown_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ReceiveBeginPlay
	 */
	struct ATN_ReturnWall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.TargetHit
	 */
	struct ATN_ReturnWall_C_TargetHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ReceiveEndPlay
	 */
	struct ATN_ReturnWall_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakHits
	 */
	struct ATN_ReturnWall_C_CalculateStreakHits_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.CalculateCumulativeHits
	 */
	struct ATN_ReturnWall_C_CalculateCumulativeHits_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.FirstResize
	 */
	struct ATN_ReturnWall_C_FirstResize_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.SecondResize
	 */
	struct ATN_ReturnWall_C_SecondResize_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ThirdResize
	 */
	struct ATN_ReturnWall_C_ThirdResize_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ResetOriginalSize
	 */
	struct ATN_ReturnWall_C_ResetOriginalSize_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakMultiplier
	 */
	struct ATN_ReturnWall_C_CalculateStreakMultiplier_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.TargetMaterialFlash
	 */
	struct ATN_ReturnWall_C_TargetMaterialFlash_Params
	{	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ExecuteUbergraph_TN_ReturnWall
	 */
	struct ATN_ReturnWall_C_ExecuteUbergraph_TN_ReturnWall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ReturnWall.TN_ReturnWall_C.ReturnWallHit__DelegateSignature
	 */
	struct ATN_ReturnWall_C_ReturnWallHit__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentStreak;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
