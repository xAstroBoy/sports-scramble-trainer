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

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SetUpInfoText
struct ABB_Challenge_04_ChinaShop_C_SetUpInfoText_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.LaunchBall
struct ABB_Challenge_04_ChinaShop_C_LaunchBall_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateLauncherSpeeds
struct ABB_Challenge_04_ChinaShop_C_UpdateLauncherSpeeds_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateBallType
struct ABB_Challenge_04_ChinaShop_C_UpdateBallType_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateScoreAndBoard
struct ABB_Challenge_04_ChinaShop_C_UpdateScoreAndBoard_Params
{
	int                                                Additional_Score;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GrabInstrument
struct ABB_Challenge_04_ChinaShop_C_GrabInstrument_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SpawnElements
struct ABB_Challenge_04_ChinaShop_C_SpawnElements_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Cleanup
struct ABB_Challenge_04_ChinaShop_C_Cleanup_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UserConstructionScript
struct ABB_Challenge_04_ChinaShop_C_UserConstructionScript_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_047EFD2642655A33283F9C92F0F88C04
struct ABB_Challenge_04_ChinaShop_C_OnLoaded_047EFD2642655A33283F9C92F0F88C04_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_8C015A1644FF34F0E0844D9314767423
struct ABB_Challenge_04_ChinaShop_C_OnLoaded_8C015A1644FF34F0E0844D9314767423_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_377666D14B3A393649660C81600EBD05
struct ABB_Challenge_04_ChinaShop_C_OnLoaded_377666D14B3A393649660C81600EBD05_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BallLaunched
struct ABB_Challenge_04_ChinaShop_C_BallLaunched_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ActorBroken
struct ABB_Challenge_04_ChinaShop_C_ActorBroken_Params
{
	class ABB_Ball_Base_C*                             Baseball;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WindowScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GameLoop
struct ABB_Challenge_04_ChinaShop_C_GameLoop_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnBallHit
struct ABB_Challenge_04_ChinaShop_C_OnBallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPaused
struct ABB_Challenge_04_ChinaShop_C_AnnouncerPaused_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPresenting
struct ABB_Challenge_04_ChinaShop_C_AnnouncerPresenting_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPlayingSequence
struct ABB_Challenge_04_ChinaShop_C_AnnouncerPlayingSequence_Params
{
	struct FName                                       SequenceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveBeginPlay
struct ABB_Challenge_04_ChinaShop_C_ReceiveBeginPlay_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveEndPlay
struct ABB_Challenge_04_ChinaShop_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BB_TriggerCountdown
struct ABB_Challenge_04_ChinaShop_C_BB_TriggerCountdown_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.EndGame
struct ABB_Challenge_04_ChinaShop_C_EndGame_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Start_Game
struct ABB_Challenge_04_ChinaShop_C_Start_Game_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerExitSequenceComplete
struct ABB_Challenge_04_ChinaShop_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Shortcut
struct ABB_Challenge_04_ChinaShop_C_Shortcut_Params
{
};

// Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ExecuteUbergraph_BB_Challenge_04_ChinaShop
struct ABB_Challenge_04_ChinaShop_C_ExecuteUbergraph_BB_Challenge_04_ChinaShop_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
