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

// Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnHit
struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_OnHit_Params
{
	class ATennisBall*                                 TennisBall;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATN_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisBallType                     BallType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.UserConstructionScript
struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnInstrumentHit
struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_OnInstrumentHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ReceiveEndPlay
struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.Initialize
struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_Initialize_Params
{
};

// Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase
struct ABP_TrophyAward_Tennis_InstrumentHitBase_C_ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
