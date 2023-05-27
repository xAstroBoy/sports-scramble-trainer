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
	 * Function BB_BatProgression.BB_BatProgression_C.ClearPlayByPlay
	 */
	struct ABB_BatProgression_C_ClearPlayByPlay_Params
	{	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.SwapBat
	 */
	struct ABB_BatProgression_C_SwapBat_Params
	{
	public:
		class AScramPlayerHand*                                    BattingPlayerHand;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABaseballAIBatter_Blueprint_C*                       BattingAI;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBaseballInstrumentType                                    newBatType;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.UpdateProgression
	 */
	struct ABB_BatProgression_C_UpdateProgression_Params
	{
	public:
		class AScramPlayerHand*                                    BattingPlayerHand;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABaseballAIBatter_Blueprint_C*                       BattingAI;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABaseballInstrument*                                 Bat;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.UserConstructionScript
	 */
	struct ABB_BatProgression_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.ReceiveBeginPlay
	 */
	struct ABB_BatProgression_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.OnBaseballEvent
	 */
	struct ABB_BatProgression_C_OnBaseballEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.ReceiveEndPlay
	 */
	struct ABB_BatProgression_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.ProcessPlayByPlay
	 */
	struct ABB_BatProgression_C_ProcessPlayByPlay_Params
	{
	public:
		EBaseballInstrumentType                                    newBatType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.QueuScramblePBP
	 */
	struct ABB_BatProgression_C_QueuScramblePBP_Params
	{
	public:
		EBaseballInstrumentType                                    ScrambleBatType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.ExecuteUbergraph_BB_BatProgression
	 */
	struct ABB_BatProgression_C_ExecuteUbergraph_BB_BatProgression_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BatProgression.BB_BatProgression_C.BatProgressionBatSwap__DelegateSignature
	 */
	struct ABB_BatProgression_C_BatProgressionBatSwap__DelegateSignature_Params
	{
	public:
		EBaseballInstrumentType                                    newBatType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
