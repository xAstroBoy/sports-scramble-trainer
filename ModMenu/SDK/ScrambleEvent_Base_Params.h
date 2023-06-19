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
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.GetNewBallType
	 */
	struct AScrambleEvent_Base_C_GetNewBallType_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.QueueScrambleEffect
	 */
	struct AScrambleEvent_Base_C_QueueScrambleEffect_Params
	{
	public:
		class FScriptDelegate                                      BallHitDelegate;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnDestroyedDelegate;                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.ActivateScrambleEffect
	 */
	struct AScrambleEvent_Base_C_ActivateScrambleEffect_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScrambleEffectSuccess;                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.UserConstructionScript
	 */
	struct AScrambleEvent_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.ReceiveBeginPlay
	 */
	struct AScrambleEvent_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.BallHit
	 */
	struct AScrambleEvent_Base_C_BallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.DestroySelf
	 */
	struct AScrambleEvent_Base_C_DestroySelf_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.PerformScrambleEffect
	 */
	struct AScrambleEvent_Base_C_PerformScrambleEffect_Params
	{
	public:
		class ATN_Ball_Base_C*                                     NewBall;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.CheckEquipmentMatch
	 */
	struct AScrambleEvent_Base_C_CheckEquipmentMatch_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckInstrument;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LFYP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATN_Instrument_Base_C*                               Instrument;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LocalPlayerInstrument;                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScrambleEvent_Base.ScrambleEvent_Base_C.ExecuteUbergraph_ScrambleEvent_Base
	 */
	struct AScrambleEvent_Base_C_ExecuteUbergraph_ScrambleEvent_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6POI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
