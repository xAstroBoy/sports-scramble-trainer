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

// Function BallTrigger.BallTrigger_C.Initialize
struct ABallTrigger_C_Initialize_Params
{
};

// Function BallTrigger.BallTrigger_C.UserConstructionScript
struct ABallTrigger_C_UserConstructionScript_Params
{
};

// Function BallTrigger.BallTrigger_C.OnTriggered
struct ABallTrigger_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTrigger.BallTrigger_C.ExecuteUbergraph_BallTrigger
struct ABallTrigger_C_ExecuteUbergraph_BallTrigger_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTrigger.BallTrigger_C.BallEnteredTrigger__DelegateSignature
struct ABallTrigger_C_BallEnteredTrigger__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
