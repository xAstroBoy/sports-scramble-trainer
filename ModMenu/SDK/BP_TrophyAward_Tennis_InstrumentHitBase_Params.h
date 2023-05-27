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
	 * Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnHit
	 */
	struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_OnHit_Params
	{
	public:
		class ATennisBall*                                         TennisBall;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATN_Instrument_Base_C*                               Instrument;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETennisBallType                                            BallType;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnInstrumentHit
	 */
	struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_OnInstrumentHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ReceiveEndPlay
	 */
	struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.Initialize
	 */
	struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_Initialize_Params
	{	};

	/**
	 * Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase
	 */
	struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
