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
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.BallHitRacket
	 */
	struct ATN_Instrument_Base_C_BallHitRacket_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A2H0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AScramBall*                                          Ball;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1C8Y[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.UpdateMesh
	 */
	struct ATN_Instrument_Base_C_UpdateMesh_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.InitializeColors&Material
	 */
	struct ATN_Instrument_Base_C_InitializeColorsMaterial_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.PrepareMotionBlur
	 */
	struct ATN_Instrument_Base_C_PrepareMotionBlur_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.PlaySpawnFX
	 */
	struct ATN_Instrument_Base_C_PlaySpawnFX_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.SetSFXOverride
	 */
	struct ATN_Instrument_Base_C_SetSFXOverride_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HardHit;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CSEC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.PlayBallHitSound
	 */
	struct ATN_Instrument_Base_C_PlayBallHitSound_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGDR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.InitInstrument
	 */
	struct ATN_Instrument_Base_C_InitInstrument_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.UserConstructionScript
	 */
	struct ATN_Instrument_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__FinishedFunc
	 */
	struct ATN_Instrument_Base_C_Grow__FinishedFunc_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__UpdateFunc
	 */
	struct ATN_Instrument_Base_C_Grow__UpdateFunc_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__FinishedFunc
	 */
	struct ATN_Instrument_Base_C_Shrink__FinishedFunc_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__UpdateFunc
	 */
	struct ATN_Instrument_Base_C_Shrink__UpdateFunc_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__FinishedFunc
	 */
	struct ATN_Instrument_Base_C_Timeline_Emissive__FinishedFunc_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__UpdateFunc
	 */
	struct ATN_Instrument_Base_C_Timeline_Emissive__UpdateFunc_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.ShowInstrument
	 */
	struct ATN_Instrument_Base_C_ShowInstrument_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.ShrinkRemoveInstrument
	 */
	struct ATN_Instrument_Base_C_ShrinkRemoveInstrument_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.ReceiveBeginPlay
	 */
	struct ATN_Instrument_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.InstrumentReleased
	 */
	struct ATN_Instrument_Base_C_InstrumentReleased_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.DestroyPrimitive
	 */
	struct ATN_Instrument_Base_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G7JX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.SpawnEffect
	 */
	struct ATN_Instrument_Base_C_SpawnEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.DisableSpawnFX
	 */
	struct ATN_Instrument_Base_C_DisableSpawnFX_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.PlayHitShaderFX
	 */
	struct ATN_Instrument_Base_C_PlayHitShaderFX_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETennisBallType                                            BallType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarSwingVFX
	 */
	struct ATN_Instrument_Base_C_TN_PlayAvatarSwingVFX_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarHitVFX
	 */
	struct ATN_Instrument_Base_C_TN_PlayAvatarHitVFX_Params
	{	};

	/**
	 * Function TN_Instrument_Base.TN_Instrument_Base_C.ExecuteUbergraph_TN_Instrument_Base
	 */
	struct ATN_Instrument_Base_C_ExecuteUbergraph_TN_Instrument_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZAM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
