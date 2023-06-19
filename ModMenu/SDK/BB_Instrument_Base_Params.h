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
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.BallHitRacket
	 */
	struct ABB_Instrument_Base_C_BallHitRacket_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6WD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AScramBall*                                          Ball;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.UpdateMesh
	 */
	struct ABB_Instrument_Base_C_UpdateMesh_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.SelectRandomReplacement
	 */
	struct ABB_Instrument_Base_C_SelectRandomReplacement_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.PlaySpawnFX
	 */
	struct ABB_Instrument_Base_C_PlaySpawnFX_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.SetSFXOverride
	 */
	struct ABB_Instrument_Base_C_SetSFXOverride_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HardHit;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBS9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.PlayBallHitSound
	 */
	struct ABB_Instrument_Base_C_PlayBallHitSound_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMOI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.InitInstrument
	 */
	struct ABB_Instrument_Base_C_InitInstrument_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.UserConstructionScript
	 */
	struct ABB_Instrument_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__FinishedFunc
	 */
	struct ABB_Instrument_Base_C_Grow__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__UpdateFunc
	 */
	struct ABB_Instrument_Base_C_Grow__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__FinishedFunc
	 */
	struct ABB_Instrument_Base_C_Shrink__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__UpdateFunc
	 */
	struct ABB_Instrument_Base_C_Shrink__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.OnLoaded_427B66CA4A4B8B64A37F659956E60B75
	 */
	struct ABB_Instrument_Base_C_OnLoaded_427B66CA4A4B8B64A37F659956E60B75_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.ShowInstrument
	 */
	struct ABB_Instrument_Base_C_ShowInstrument_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.ShrinkRemoveInstrument
	 */
	struct ABB_Instrument_Base_C_ShrinkRemoveInstrument_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.ReceiveBeginPlay
	 */
	struct ABB_Instrument_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentReleased
	 */
	struct ABB_Instrument_Base_C_InstrumentReleased_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.DestroyPrimitive
	 */
	struct ABB_Instrument_Base_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZUSQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentSelected
	 */
	struct ABB_Instrument_Base_C_InstrumentSelected_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.SpawnEffect
	 */
	struct ABB_Instrument_Base_C_SpawnEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.DisableSpawnFX
	 */
	struct ABB_Instrument_Base_C_DisableSpawnFX_Params
	{	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentHit
	 */
	struct ABB_Instrument_Base_C_InstrumentHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Instrument_Base.BB_Instrument_Base_C.ExecuteUbergraph_BB_Instrument_Base
	 */
	struct ABB_Instrument_Base_C_ExecuteUbergraph_BB_Instrument_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
