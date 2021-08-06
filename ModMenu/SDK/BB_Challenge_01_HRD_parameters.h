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

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.InitializeChallenge
struct ABB_Challenge_01_HRD_C_InitializeChallenge_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.SetUpInfoText
struct ABB_Challenge_01_HRD_C_SetUpInfoText_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.CheckProperAudioList
struct ABB_Challenge_01_HRD_C_CheckProperAudioList_Params
{
	bool                                               UseAlternate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBat
struct ABB_Challenge_01_HRD_C_RequestNewBat_Params
{
	class UClass*                                      New_Instrument_Class;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBall
struct ABB_Challenge_01_HRD_C_RequestNewBall_Params
{
	class UClass*                                      New_Ball_Class;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Cleanup
struct ABB_Challenge_01_HRD_C_Cleanup_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.UserConstructionScript
struct ABB_Challenge_01_HRD_C_UserConstructionScript_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_618E959F46A70B0ED3A8958638CE6E1E
struct ABB_Challenge_01_HRD_C_OnLoaded_618E959F46A70B0ED3A8958638CE6E1E_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_3FA9753143D16E5E38723691EAE3CEF5
struct ABB_Challenge_01_HRD_C_OnLoaded_3FA9753143D16E5E38723691EAE3CEF5_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD
struct ABB_Challenge_01_HRD_C_OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPlayingSequence
struct ABB_Challenge_01_HRD_C_AnnouncerPlayingSequence_Params
{
	struct FName                                       SequenceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPresenting
struct ABB_Challenge_01_HRD_C_AnnouncerPresenting_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPaused
struct ABB_Challenge_01_HRD_C_AnnouncerPaused_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveBeginPlay
struct ABB_Challenge_01_HRD_C_ReceiveBeginPlay_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.BB_TriggerCountdown
struct ABB_Challenge_01_HRD_C_BB_TriggerCountdown_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Start_Game
struct ABB_Challenge_01_HRD_C_Start_Game_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.End_Game
struct ABB_Challenge_01_HRD_C_End_Game_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveEndPlay
struct ABB_Challenge_01_HRD_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerExitSequenceComplete
struct ABB_Challenge_01_HRD_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerScoredRun
struct ABB_Challenge_01_HRD_C_PlayerScoredRun_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerHitHomerun
struct ABB_Challenge_01_HRD_C_PlayerHitHomerun_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Shortcut
struct ABB_Challenge_01_HRD_C_Shortcut_Params
{
};

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ExecuteUbergraph_BB_Challenge_01_HRD
struct ABB_Challenge_01_HRD_C_ExecuteUbergraph_BB_Challenge_01_HRD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
