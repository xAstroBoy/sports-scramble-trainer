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

// Function BW_Train_Base.BW_Train_Base_C.AddActorToGameElementList
struct ABW_Train_Base_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Train_Base.BW_Train_Base_C.Shutdown
struct ABW_Train_Base_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Train_Base.BW_Train_Base_C.ToggleLaneChanging
struct ABW_Train_Base_C_ToggleLaneChanging_Params
{
	bool                                               DisableLaneChanges;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Train_Base.BW_Train_Base_C.ShowScoreboard
struct ABW_Train_Base_C_ShowScoreboard_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.CalculateEndScore
struct ABW_Train_Base_C_CalculateEndScore_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.ResetLane
struct ABW_Train_Base_C_ResetLane_Params
{
	bool                                               ResetScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetPins;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetBallCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Train_Base.BW_Train_Base_C.DestroyAllBalls_1
struct ABW_Train_Base_C_DestroyAllBalls_1_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.Initialize
struct ABW_Train_Base_C_Initialize_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.UserConstructionScript
struct ABW_Train_Base_C_UserConstructionScript_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.OnLoaded_B645D8DE43A43D6A03D922BF743B0B01
struct ABW_Train_Base_C_OnLoaded_B645D8DE43A43D6A03D922BF743B0B01_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Train_Base.BW_Train_Base_C.ReceiveBeginPlay
struct ABW_Train_Base_C_ReceiveBeginPlay_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.BowlingEvent
struct ABW_Train_Base_C_BowlingEvent_Params
{
	int                                                Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Train_Base.BW_Train_Base_C.SpecificBallCreated
struct ABW_Train_Base_C_SpecificBallCreated_Params
{
	class ABW_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Train_Base.BW_Train_Base_C.RandomBallCreated
struct ABW_Train_Base_C_RandomBallCreated_Params
{
	class ABW_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Train_Base.BW_Train_Base_C.GetCurrentLaneScore
struct ABW_Train_Base_C_GetCurrentLaneScore_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Train_Base.BW_Train_Base_C.EndOfGame
struct ABW_Train_Base_C_EndOfGame_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.SpecialScoreEvent
struct ABW_Train_Base_C_SpecialScoreEvent_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Points;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Train_Base.BW_Train_Base_C.PlayAudio_Countdown
struct ABW_Train_Base_C_PlayAudio_Countdown_Params
{
};

// Function BW_Train_Base.BW_Train_Base_C.ExecuteUbergraph_BW_Train_Base
struct ABW_Train_Base_C_ExecuteUbergraph_BW_Train_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
