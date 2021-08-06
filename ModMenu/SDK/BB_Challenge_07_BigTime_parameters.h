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

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.StopPlayingAudioComponents
struct ABB_Challenge_07_BigTime_C_StopPlayingAudioComponents_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.SetUpInfoText
struct ABB_Challenge_07_BigTime_C_SetUpInfoText_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.BB_Initialize
struct ABB_Challenge_07_BigTime_C_BB_Initialize_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.UserConstructionScript
struct ABB_Challenge_07_BigTime_C_UserConstructionScript_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ReceiveBeginPlay
struct ABB_Challenge_07_BigTime_C_ReceiveBeginPlay_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ReceiveEndPlay
struct ABB_Challenge_07_BigTime_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.BaseballGameCompleted
struct ABB_Challenge_07_BigTime_C_BaseballGameCompleted_Params
{
	bool                                               LocalPlayerVictory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AwayScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.AnnouncerExitSequenceComplete
struct ABB_Challenge_07_BigTime_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.TriggerAlternateCadence
struct ABB_Challenge_07_BigTime_C_TriggerAlternateCadence_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.Shortcut
struct ABB_Challenge_07_BigTime_C_Shortcut_Params
{
};

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ExecuteUbergraph_BB_Challenge_07_BigTime
struct ABB_Challenge_07_BigTime_C_ExecuteUbergraph_BB_Challenge_07_BigTime_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
