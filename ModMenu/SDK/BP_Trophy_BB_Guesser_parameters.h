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

// Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.UserConstructionScript
struct ABP_Trophy_BB_Guesser_C_UserConstructionScript_Params
{
};

// Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.OnHit
struct ABP_Trophy_BB_Guesser_C_OnHit_Params
{
	class ABaseballBall*                               Baseball;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BallType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.DebugEarn
struct ABP_Trophy_BB_Guesser_C_DebugEarn_Params
{
};

// Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.ExecuteUbergraph_BP_Trophy_BB_Guesser
struct ABP_Trophy_BB_Guesser_C_ExecuteUbergraph_BP_Trophy_BB_Guesser_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
