#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BB_BatProgression.BB_BatProgression_C.ClearPlayByPlay
struct ABB_BatProgression_C_ClearPlayByPlay_Params
{
};

// Function BB_BatProgression.BB_BatProgression_C.SwapBat
struct ABB_BatProgression_C_SwapBat_Params
{
	class AScramPlayerHand*                            BattingPlayerHand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseballAIBatter_Blueprint_C*               BattingAI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballInstrumentType             newBatType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.UpdateProgression
struct ABB_BatProgression_C_UpdateProgression_Params
{
	class AScramPlayerHand*                            BattingPlayerHand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseballAIBatter_Blueprint_C*               BattingAI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseballInstrument*                         Bat;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.UserConstructionScript
struct ABB_BatProgression_C_UserConstructionScript_Params
{
};

// Function BB_BatProgression.BB_BatProgression_C.ReceiveBeginPlay
struct ABB_BatProgression_C_ReceiveBeginPlay_Params
{
};

// Function BB_BatProgression.BB_BatProgression_C.OnBaseballEvent
struct ABB_BatProgression_C_OnBaseballEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.ReceiveEndPlay
struct ABB_BatProgression_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.ProcessPlayByPlay
struct ABB_BatProgression_C_ProcessPlayByPlay_Params
{
	SportsScramble_EBaseballInstrumentType             newBatType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.QueuScramblePBP
struct ABB_BatProgression_C_QueuScramblePBP_Params
{
	SportsScramble_EBaseballInstrumentType             ScrambleBatType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.ExecuteUbergraph_BB_BatProgression
struct ABB_BatProgression_C_ExecuteUbergraph_BB_BatProgression_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BatProgression.BB_BatProgression_C.BatProgressionBatSwap__DelegateSignature
struct ABB_BatProgression_C_BatProgressionBatSwap__DelegateSignature_Params
{
	SportsScramble_EBaseballInstrumentType             newBatType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
