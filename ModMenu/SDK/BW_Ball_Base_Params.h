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
	 * Function BW_Ball_Base.BW_Ball_Base_C.UpdateMesh
	 */
	struct ABW_Ball_Base_C_UpdateMesh_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.RemoveBindings
	 */
	struct ABW_Ball_Base_C_RemoveBindings_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.SetBindings
	 */
	struct ABW_Ball_Base_C_SetBindings_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.StopAllShotTypeFX
	 */
	struct ABW_Ball_Base_C_StopAllShotTypeFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.StopChargedSliceFX
	 */
	struct ABW_Ball_Base_C_StopChargedSliceFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.PlayChargedSliceFX
	 */
	struct ABW_Ball_Base_C_PlayChargedSliceFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.StopSliceFX
	 */
	struct ABW_Ball_Base_C_StopSliceFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.PlaySliceFX
	 */
	struct ABW_Ball_Base_C_PlaySliceFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.StopChargedFX
	 */
	struct ABW_Ball_Base_C_StopChargedFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.PlayChargedFX
	 */
	struct ABW_Ball_Base_C_PlayChargedFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.StopImbuedFX
	 */
	struct ABW_Ball_Base_C_StopImbuedFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.PlayImbuedFX
	 */
	struct ABW_Ball_Base_C_PlayImbuedFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.PlayDespawnFX
	 */
	struct ABW_Ball_Base_C_PlayDespawnFX_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.PlaySpawnFX
	 */
	struct ABW_Ball_Base_C_PlaySpawnFX_Params
	{
	public:
		bool                                                       SfxOnly;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VM2Z[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.SetTrail
	 */
	struct ABW_Ball_Base_C_SetTrail_Params
	{
	public:
		EBowlingThrowType                                          ThrowType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.ClearTrail
	 */
	struct ABW_Ball_Base_C_ClearTrail_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.UserConstructionScript
	 */
	struct ABW_Ball_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.ReceiveBeginPlay
	 */
	struct ABW_Ball_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.ReceiveEndPlay
	 */
	struct ABW_Ball_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.BallGrabbed
	 */
	struct ABW_Ball_Base_C_BallGrabbed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.OnThrowChanged
	 */
	struct ABW_Ball_Base_C_OnThrowChanged_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.OnFloorResultChanged
	 */
	struct ABW_Ball_Base_C_OnFloorResultChanged_Params
	{
	public:
		EFloorResult                                               newFloorResult;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.DestroyPrimitive
	 */
	struct ABW_Ball_Base_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DDMF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.ScaleBall
	 */
	struct ABW_Ball_Base_C_ScaleBall_Params
	{	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.OnScaleUpFinished
	 */
	struct ABW_Ball_Base_C_OnScaleUpFinished_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.OnHitPin
	 */
	struct ABW_Ball_Base_C_OnHitPin_Params
	{
	public:
		class ABowlingPin*                                         Pin;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.OnHitLane
	 */
	struct ABW_Ball_Base_C_OnHitLane_Params
	{
	public:
		class ABowlingLane*                                        Lane;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      bounceSpeed;                                             // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.OnHitFootballBlocker
	 */
	struct ABW_Ball_Base_C_OnHitFootballBlocker_Params
	{
	public:
		class ABowlingFootballBlocker*                             FootballBlocker;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.ExecuteUbergraph_BW_Ball_Base
	 */
	struct ABW_Ball_Base_C_ExecuteUbergraph_BW_Ball_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Ball_Base.BW_Ball_Base_C.ThrowChanged__DelegateSignature
	 */
	struct ABW_Ball_Base_C_ThrowChanged__DelegateSignature_Params
	{
	public:
		struct FBowlingThrow                                       ThrowStructure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_PSEO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABW_Ball_Base_C*                                     Ball;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
