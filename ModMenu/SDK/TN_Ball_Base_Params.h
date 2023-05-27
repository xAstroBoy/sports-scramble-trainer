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
	 * Function TN_Ball_Base.TN_Ball_Base_C.UpdateMesh
	 */
	struct ATN_Ball_Base_C_UpdateMesh_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopLocalNormalHitFX
	 */
	struct ATN_Ball_Base_C_StopLocalNormalHitFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopNormalHitFX
	 */
	struct ATN_Ball_Base_C_StopNormalHitFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlaySliceSound
	 */
	struct ATN_Ball_Base_C_PlaySliceSound_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayHitNetSound
	 */
	struct ATN_Ball_Base_C_PlayHitNetSound_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayEnvironmentBounceSound
	 */
	struct ATN_Ball_Base_C_PlayEnvironmentBounceSound_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.LocalPlayerInstrumentImpactFX
	 */
	struct ATN_Ball_Base_C_LocalPlayerInstrumentImpactFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayNormalHitFX
	 */
	struct ATN_Ball_Base_C_PlayNormalHitFX_Params
	{
	public:
		class AActor*                                              GrabberActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayChargeSliceBounceFX
	 */
	struct ATN_Ball_Base_C_PlayChargeSliceBounceFX_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayNormalBounceFX
	 */
	struct ATN_Ball_Base_C_PlayNormalBounceFX_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayChargeBounceFX
	 */
	struct ATN_Ball_Base_C_PlayChargeBounceFX_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlaySliceBounceFX
	 */
	struct ATN_Ball_Base_C_PlaySliceBounceFX_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopAllShotTypeFX
	 */
	struct ATN_Ball_Base_C_StopAllShotTypeFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopChargedSliceFX
	 */
	struct ATN_Ball_Base_C_StopChargedSliceFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayChargedSliceFX
	 */
	struct ATN_Ball_Base_C_PlayChargedSliceFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopSliceFX
	 */
	struct ATN_Ball_Base_C_StopSliceFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlaySliceFX
	 */
	struct ATN_Ball_Base_C_PlaySliceFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopChargedFX
	 */
	struct ATN_Ball_Base_C_StopChargedFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayChargedFX
	 */
	struct ATN_Ball_Base_C_PlayChargedFX_Params
	{
	public:
		bool                                                       NoHitSFX;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PVLQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.StopImbuedFX
	 */
	struct ATN_Ball_Base_C_StopImbuedFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayImbuedFX
	 */
	struct ATN_Ball_Base_C_PlayImbuedFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlayDespawnFX
	 */
	struct ATN_Ball_Base_C_PlayDespawnFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.PlaySpawnFX
	 */
	struct ATN_Ball_Base_C_PlaySpawnFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.SetTrail
	 */
	struct ATN_Ball_Base_C_SetTrail_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoHitSFX;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.ClearTrail
	 */
	struct ATN_Ball_Base_C_ClearTrail_Params
	{
	public:
		bool                                                       snap;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.BallVanish
	 */
	struct ATN_Ball_Base_C_BallVanish_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.UserConstructionScript
	 */
	struct ATN_Ball_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.ReceiveBeginPlay
	 */
	struct ATN_Ball_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.ReceiveEndPlay
	 */
	struct ATN_Ball_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.Ball Hit
	 */
	struct ATN_Ball_Base_C_BallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.BallGrabbed
	 */
	struct ATN_Ball_Base_C_BallGrabbed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.OnShotChanged
	 */
	struct ATN_Ball_Base_C_OnShotChanged_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.ReceiveTick
	 */
	struct ATN_Ball_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.DestroyPrimitive
	 */
	struct ATN_Ball_Base_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UT3S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.NetPlayImbuedFX
	 */
	struct ATN_Ball_Base_C_NetPlayImbuedFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.NetStopImbuedFX
	 */
	struct ATN_Ball_Base_C_NetStopImbuedFX_Params
	{	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.ExecuteUbergraph_TN_Ball_Base
	 */
	struct ATN_Ball_Base_C_ExecuteUbergraph_TN_Ball_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OR87[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Ball_Base.TN_Ball_Base_C.BallShotTypeChange__DelegateSignature
	 */
	struct ATN_Ball_Base_C_BallShotTypeChange__DelegateSignature_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
