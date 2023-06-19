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
	 * Function ServeLauncher.ServeLauncher_C.UpdatePostionsMoveAnimation
	 */
	struct AServeLauncher_C_UpdatePostionsMoveAnimation_Params
	{
	public:
		float                                                      AlphaValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.RemoveInstructions
	 */
	struct AServeLauncher_C_RemoveInstructions_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.SpawnInstructions
	 */
	struct AServeLauncher_C_SpawnInstructions_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.SetupBall
	 */
	struct AServeLauncher_C_SetupBall_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.OnRep_Ball
	 */
	struct AServeLauncher_C_OnRep_Ball_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.SetTNBallScale
	 */
	struct AServeLauncher_C_SetTNBallScale_Params
	{
	public:
		class AScramBall*                                          TNScramBall;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.UserConstructionScript
	 */
	struct AServeLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_Spin__FinishedFunc
	 */
	struct AServeLauncher_C_Timeline_Spin__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_Spin__UpdateFunc
	 */
	struct AServeLauncher_C_Timeline_Spin__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_Bobble__FinishedFunc
	 */
	struct AServeLauncher_C_Timeline_Bobble__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_Bobble__UpdateFunc
	 */
	struct AServeLauncher_C_Timeline_Bobble__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_Rise__FinishedFunc
	 */
	struct AServeLauncher_C_Timeline_Rise__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_Rise__UpdateFunc
	 */
	struct AServeLauncher_C_Timeline_Rise__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.LauncherGrowShrink__FinishedFunc
	 */
	struct AServeLauncher_C_LauncherGrowShrink__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.LauncherGrowShrink__UpdateFunc
	 */
	struct AServeLauncher_C_LauncherGrowShrink__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ScaleBallUpDown__FinishedFunc
	 */
	struct AServeLauncher_C_ScaleBallUpDown__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ScaleBallUpDown__UpdateFunc
	 */
	struct AServeLauncher_C_ScaleBallUpDown__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_DelayHack__FinishedFunc
	 */
	struct AServeLauncher_C_Timeline_DelayHack__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_DelayHack__UpdateFunc
	 */
	struct AServeLauncher_C_Timeline_DelayHack__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_MoveToSide__FinishedFunc
	 */
	struct AServeLauncher_C_Timeline_MoveToSide__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_MoveToSide__UpdateFunc
	 */
	struct AServeLauncher_C_Timeline_MoveToSide__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_SpeedHack__FinishedFunc
	 */
	struct AServeLauncher_C_Timeline_SpeedHack__FinishedFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.Timeline_SpeedHack__UpdateFunc
	 */
	struct AServeLauncher_C_Timeline_SpeedHack__UpdateFunc_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.MoveBallToServePosition
	 */
	struct AServeLauncher_C_MoveBallToServePosition_Params
	{
	public:
		float                                                      FloorHeight;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RM4G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramBall*                                          Ball;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.GentleBallSpin
	 */
	struct AServeLauncher_C_GentleBallSpin_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.BobbleBall
	 */
	struct AServeLauncher_C_BobbleBall_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.BallGrabbed
	 */
	struct AServeLauncher_C_BallGrabbed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ReleaseBall
	 */
	struct AServeLauncher_C_ReleaseBall_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ReceiveBeginPlay
	 */
	struct AServeLauncher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.StartRise
	 */
	struct AServeLauncher_C_StartRise_Params
	{
	public:
		float                                                      FloorHeight;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.StopRise
	 */
	struct AServeLauncher_C_StopRise_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.LauncherGrow
	 */
	struct AServeLauncher_C_LauncherGrow_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.LauncherShrink
	 */
	struct AServeLauncher_C_LauncherShrink_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ScaleBallUp
	 */
	struct AServeLauncher_C_ScaleBallUp_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.SetupGraphics
	 */
	struct AServeLauncher_C_SetupGraphics_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.DoneGrowing
	 */
	struct AServeLauncher_C_DoneGrowing_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.TeeBallHit
	 */
	struct AServeLauncher_C_TeeBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.DisableHitMe
	 */
	struct AServeLauncher_C_DisableHitMe_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.BallHit
	 */
	struct AServeLauncher_C_BallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.MoveTest
	 */
	struct AServeLauncher_C_MoveTest_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.SpeedHack
	 */
	struct AServeLauncher_C_SpeedHack_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.AllowHit
	 */
	struct AServeLauncher_C_AllowHit_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ReceiveEndPlay
	 */
	struct AServeLauncher_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.GrabbedBallHit
	 */
	struct AServeLauncher_C_GrabbedBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.CheckIfShouldResetBall
	 */
	struct AServeLauncher_C_CheckIfShouldResetBall_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.GrabbedBallGrabbed
	 */
	struct AServeLauncher_C_GrabbedBallGrabbed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ResetBall
	 */
	struct AServeLauncher_C_ResetBall_Params
	{	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.ExecuteUbergraph_ServeLauncher
	 */
	struct AServeLauncher_C_ExecuteUbergraph_ServeLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServeLauncher.ServeLauncher_C.OnBallHit__DelegateSignature
	 */
	struct AServeLauncher_C_OnBallHit__DelegateSignature_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
