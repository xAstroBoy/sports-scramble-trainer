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

// Function Batting_Target_01.Batting_Target_01_C.ShowScore
struct ABatting_Target_01_C_ShowScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Batting_Target_01.Batting_Target_01_C.Initialize
struct ABatting_Target_01_C_Initialize_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.UserConstructionScript
struct ABatting_Target_01_C_UserConstructionScript_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__FinishedFunc
struct ABatting_Target_01_C_ChangeTargetSize__FinishedFunc_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__UpdateFunc
struct ABatting_Target_01_C_ChangeTargetSize__UpdateFunc_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.OnTriggered
struct ABatting_Target_01_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Batting_Target_01.Batting_Target_01_C.ReceiveBeginPlay
struct ABatting_Target_01_C_ReceiveBeginPlay_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.Grow
struct ABatting_Target_01_C_Grow_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.Shrink
struct ABatting_Target_01_C_Shrink_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.ResetTargetDispatcher
struct ABatting_Target_01_C_ResetTargetDispatcher_Params
{
};

// Function Batting_Target_01.Batting_Target_01_C.ExecuteUbergraph_Batting_Target_01
struct ABatting_Target_01_C_ExecuteUbergraph_Batting_Target_01_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Batting_Target_01.Batting_Target_01_C.TargetOverlapDetection__DelegateSignature
struct ABatting_Target_01_C_TargetOverlapDetection__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
