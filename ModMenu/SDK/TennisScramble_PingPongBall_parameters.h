﻿#pragma once

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

// Function TennisScramble_PingPongBall.TennisScramble_PingPongBall_C.GetNewBallType
struct ATennisScramble_PingPongBall_C_GetNewBallType_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScramble_PingPongBall.TennisScramble_PingPongBall_C.GetRandomBall
struct ATennisScramble_PingPongBall_C_GetRandomBall_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NewBall;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScramble_PingPongBall.TennisScramble_PingPongBall_C.ActivateScrambleEffect
struct ATennisScramble_PingPongBall_C_ActivateScrambleEffect_Params
{
	class ATN_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScrambleEffectSuccess;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisScramble_PingPongBall.TennisScramble_PingPongBall_C.UserConstructionScript
struct ATennisScramble_PingPongBall_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif