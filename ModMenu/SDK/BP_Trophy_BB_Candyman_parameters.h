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

// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.UserConstructionScript
struct ABP_Trophy_BB_Candyman_C_UserConstructionScript_Params
{
};

// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.OnHit
struct ABP_Trophy_BB_Candyman_C_OnHit_Params
{
	class ABaseballBall*                               Baseball;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BallType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.DebugEarn
struct ABP_Trophy_BB_Candyman_C_DebugEarn_Params
{
};

// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.ExecuteUbergraph_BP_Trophy_BB_Candyman
struct ABP_Trophy_BB_Candyman_C_ExecuteUbergraph_BP_Trophy_BB_Candyman_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
