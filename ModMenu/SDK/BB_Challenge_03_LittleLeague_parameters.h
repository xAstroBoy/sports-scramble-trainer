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

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.CheckTrophy
struct ABB_Challenge_03_LittleLeague_C_CheckTrophy_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.StopPlayingAudioComponents
struct ABB_Challenge_03_LittleLeague_C_StopPlayingAudioComponents_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.SetUpInfoText
struct ABB_Challenge_03_LittleLeague_C_SetUpInfoText_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BB_Initialize
struct ABB_Challenge_03_LittleLeague_C_BB_Initialize_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.UserConstructionScript
struct ABB_Challenge_03_LittleLeague_C_UserConstructionScript_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveBeginPlay
struct ABB_Challenge_03_LittleLeague_C_ReceiveBeginPlay_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BaseballGameCompleted
struct ABB_Challenge_03_LittleLeague_C_BaseballGameCompleted_Params
{
	bool                                               LocalPlayerVictory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AwayScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveEndPlay
struct ABB_Challenge_03_LittleLeague_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.AnnouncerExitSequenceComplete
struct ABB_Challenge_03_LittleLeague_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.TriggerAlternateCadence
struct ABB_Challenge_03_LittleLeague_C_TriggerAlternateCadence_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.Shortcut
struct ABB_Challenge_03_LittleLeague_C_Shortcut_Params
{
};

// Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ExecuteUbergraph_BB_Challenge_03_LittleLeague
struct ABB_Challenge_03_LittleLeague_C_ExecuteUbergraph_BB_Challenge_03_LittleLeague_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
