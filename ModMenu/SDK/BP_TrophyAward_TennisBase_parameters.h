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

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.UserConstructionScript
struct ABP_TrophyAward_TennisBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ReceiveEndPlay
struct ABP_TrophyAward_TennisBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnTennisEvent
struct ABP_TrophyAward_TennisBase_C_OnTennisEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.Initialize
struct ABP_TrophyAward_TennisBase_C_Initialize_Params
{
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnScorePoint
struct ABP_TrophyAward_TennisBase_C_OnScorePoint_Params
{
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnMatchComplete
struct ABP_TrophyAward_TennisBase_C_OnMatchComplete_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnAceEvent
struct ABP_TrophyAward_TennisBase_C_OnAceEvent_Params
{
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.BallInPlay
struct ABP_TrophyAward_TennisBase_C_BallInPlay_Params
{
};

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ExecuteUbergraph_BP_TrophyAward_TennisBase
struct ABP_TrophyAward_TennisBase_C_ExecuteUbergraph_BP_TrophyAward_TennisBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
