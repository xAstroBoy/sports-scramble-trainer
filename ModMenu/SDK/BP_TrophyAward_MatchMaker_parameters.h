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

// Function BP_TrophyAward_MatchMaker.BP_TrophyAward_MatchMaker_C.UserConstructionScript
struct ABP_TrophyAward_MatchMaker_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_MatchMaker.BP_TrophyAward_MatchMaker_C.DebugEarn
struct ABP_TrophyAward_MatchMaker_C_DebugEarn_Params
{
};

// Function BP_TrophyAward_MatchMaker.BP_TrophyAward_MatchMaker_C.OnHit
struct ABP_TrophyAward_MatchMaker_C_OnHit_Params
{
	class ATennisBall*                                 TennisBall;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATN_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisBallType                     BallType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_MatchMaker.BP_TrophyAward_MatchMaker_C.ExecuteUbergraph_BP_TrophyAward_MatchMaker
struct ABP_TrophyAward_MatchMaker_C_ExecuteUbergraph_BP_TrophyAward_MatchMaker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
