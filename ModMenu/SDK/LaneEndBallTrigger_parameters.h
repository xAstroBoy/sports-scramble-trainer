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

// Function LaneEndBallTrigger.LaneEndBallTrigger_C.UserConstructionScript
struct ALaneEndBallTrigger_C_UserConstructionScript_Params
{
};

// Function LaneEndBallTrigger.LaneEndBallTrigger_C.OnTriggered
struct ALaneEndBallTrigger_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LaneEndBallTrigger.LaneEndBallTrigger_C.ExecuteUbergraph_LaneEndBallTrigger
struct ALaneEndBallTrigger_C_ExecuteUbergraph_LaneEndBallTrigger_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LaneEndBallTrigger.LaneEndBallTrigger_C.TriggeredByBall__DelegateSignature
struct ALaneEndBallTrigger_C_TriggeredByBall__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
