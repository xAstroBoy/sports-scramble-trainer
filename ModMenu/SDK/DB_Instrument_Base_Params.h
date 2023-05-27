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
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.BallHitRacket
	 */
	struct ADB_Instrument_Base_C_BallHitRacket_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PY89[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AScramBall*                                          Ball;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.SetSFXOverride
	 */
	struct ADB_Instrument_Base_C_SetSFXOverride_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HardHit;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DOLG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.PlayBallHitSound
	 */
	struct ADB_Instrument_Base_C_PlayBallHitSound_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJDU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.InitInstrument
	 */
	struct ADB_Instrument_Base_C_InitInstrument_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.UserConstructionScript
	 */
	struct ADB_Instrument_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__FinishedFunc
	 */
	struct ADB_Instrument_Base_C_Grow__FinishedFunc_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__UpdateFunc
	 */
	struct ADB_Instrument_Base_C_Grow__UpdateFunc_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__FinishedFunc
	 */
	struct ADB_Instrument_Base_C_Shrink__FinishedFunc_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__UpdateFunc
	 */
	struct ADB_Instrument_Base_C_Shrink__UpdateFunc_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.ShowInstrument
	 */
	struct ADB_Instrument_Base_C_ShowInstrument_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.ShrinkRemoveInstrument
	 */
	struct ADB_Instrument_Base_C_ShrinkRemoveInstrument_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.ReceiveBeginPlay
	 */
	struct ADB_Instrument_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.InstrumentReleased
	 */
	struct ADB_Instrument_Base_C_InstrumentReleased_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.DestroyPrimitive
	 */
	struct ADB_Instrument_Base_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CO0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DB_Instrument_Base.DB_Instrument_Base_C.ExecuteUbergraph_DB_Instrument_Base
	 */
	struct ADB_Instrument_Base_C_ExecuteUbergraph_DB_Instrument_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
