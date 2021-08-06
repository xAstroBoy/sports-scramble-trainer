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

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.UserConstructionScript
struct ABP_TrophyAward_BW_Base_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Initialize
struct ABP_TrophyAward_BW_Base_C_Initialize_Params
{
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.DebugEarn
struct ABP_TrophyAward_BW_Base_C_DebugEarn_Params
{
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ReceiveEndPlay
struct ABP_TrophyAward_BW_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Bowl
struct ABP_TrophyAward_BW_Base_C_Bowl_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnMatchComplete
struct ABP_TrophyAward_BW_Base_C_OnMatchComplete_Params
{
	class ABowlingBall*                                BallActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnStrike
struct ABP_TrophyAward_BW_Base_C_OnStrike_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnSpare
struct ABP_TrophyAward_BW_Base_C_OnSpare_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGutterBall
struct ABP_TrophyAward_BW_Base_C_OnGutterBall_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGameEnd
struct ABP_TrophyAward_BW_Base_C_OnGameEnd_Params
{
};

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ExecuteUbergraph_BP_TrophyAward_BW_Base
struct ABP_TrophyAward_BW_Base_C_ExecuteUbergraph_BP_TrophyAward_BW_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
