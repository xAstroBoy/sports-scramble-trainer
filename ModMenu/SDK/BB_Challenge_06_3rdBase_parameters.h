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

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneTimeScales
struct ABB_Challenge_06_3rdBase_C_SetZoneTimeScales_Params
{
	struct FMinMaxFloat                                PopFlyTimeScale;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FMinMaxFloat                                SweetSpotTimeScale;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FMinMaxFloat                                LineDriveTimeScale;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FMinMaxFloat                                GroundBallTimeScale;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GetNextBallClass
struct ABB_Challenge_06_3rdBase_C_GetNextBallClass_Params
{
	class UClass*                                      NextBallClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetUpInfoText
struct ABB_Challenge_06_3rdBase_C_SetUpInfoText_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneChances
struct ABB_Challenge_06_3rdBase_C_SetZoneChances_Params
{
	float                                              PopFlyChance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SweetSpotChance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LineDriveChance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GroundBallChance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetParameters
struct ABB_Challenge_06_3rdBase_C_SetParameters_Params
{
	float                                              TimeBetweenBalls;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BombChance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GoldenBallChance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Initialized3rdBase
struct ABB_Challenge_06_3rdBase_C_Initialized3rdBase_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Cleanup
struct ABB_Challenge_06_3rdBase_C_Cleanup_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.UserConstructionScript
struct ABB_Challenge_06_3rdBase_C_UserConstructionScript_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_25CCB05E4E04939CC232B8BB23AB186B
struct ABB_Challenge_06_3rdBase_C_OnLoaded_25CCB05E4E04939CC232B8BB23AB186B_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_70510E9640399C2A919A79A38EF129A0
struct ABB_Challenge_06_3rdBase_C_OnLoaded_70510E9640399C2A919A79A38EF129A0_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_32444B0A4E135437E255DFAB39579AF8
struct ABB_Challenge_06_3rdBase_C_OnLoaded_32444B0A4E135437E255DFAB39579AF8_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_49C6C46244429E83F6C5859C5D9D417C
struct ABB_Challenge_06_3rdBase_C_OnLoaded_49C6C46244429E83F6C5859C5D9D417C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPaused
struct ABB_Challenge_06_3rdBase_C_AnnouncerPaused_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPresenting
struct ABB_Challenge_06_3rdBase_C_AnnouncerPresenting_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPlayingSequence
struct ABB_Challenge_06_3rdBase_C_AnnouncerPlayingSequence_Params
{
	struct FName                                       SequenceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveBeginPlay
struct ABB_Challenge_06_3rdBase_C_ReceiveBeginPlay_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.NotifyChallengeContinue
struct ABB_Challenge_06_3rdBase_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BallHit
struct ABB_Challenge_06_3rdBase_C_BallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveEndPlay
struct ABB_Challenge_06_3rdBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BaseballEvent
struct ABB_Challenge_06_3rdBase_C_BaseballEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.FireLoop
struct ABB_Challenge_06_3rdBase_C_FireLoop_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Start_Challenge
struct ABB_Challenge_06_3rdBase_C_Start_Challenge_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerExitSequenceComplete
struct ABB_Challenge_06_3rdBase_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BB_TriggerCountdown
struct ABB_Challenge_06_3rdBase_C_BB_TriggerCountdown_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GameEnd
struct ABB_Challenge_06_3rdBase_C_GameEnd_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Shortcut
struct ABB_Challenge_06_3rdBase_C_Shortcut_Params
{
};

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ExecuteUbergraph_BB_Challenge_06_3rdBase
struct ABB_Challenge_06_3rdBase_C_ExecuteUbergraph_BB_Challenge_06_3rdBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
