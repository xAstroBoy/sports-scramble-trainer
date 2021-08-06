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

// Function SkeeBallLane.SkeeBallLane_C.CallClearPatternAndResolve
struct USkeeBallLane_C_CallClearPatternAndResolve_Params
{
	bool                                               PatternCleared;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SkeeBallLane.SkeeBallLane_C.UpdateGoodHoleCount
struct USkeeBallLane_C_UpdateGoodHoleCount_Params
{
	int                                                NewGoodHoleCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HoleCountUpdated;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SkeeBallLane.SkeeBallLane_C.ShowScoreboard
struct USkeeBallLane_C_ShowScoreboard_Params
{
	bool                                               ScoreboardRaised;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
