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

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList
struct ABB_Minigame_Pitching_Base_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown
struct ABB_Minigame_Pitching_Base_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall
struct ABB_Minigame_Pitching_Base_C_ClearCurrentBall_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces
struct ABB_Minigame_Pitching_Base_C_GetMaxBounces_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RollingPitch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard
struct ABB_Minigame_Pitching_Base_C_UpdatePitchTargetScoreboard_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard
struct ABB_Minigame_Pitching_Base_C_ResetPitchingScoreboard_Params
{
	bool                                               ShowBallCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards
struct ABB_Minigame_Pitching_Base_C_CleanupScoreboards_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements
struct ABB_Minigame_Pitching_Base_C_SpawnGameElements_Params
{
	bool                                               UseStrikeZone;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlayStrikezoneSounds;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpawnTargets;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisplayStrikezoneText;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowQuad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard
struct ABB_Minigame_Pitching_Base_C_UpdatePitchingScoreboard_Params
{
	bool                                               ShowBallCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize
struct ABB_Minigame_Pitching_Base_C_Initialize_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript
struct ABB_Minigame_Pitching_Base_C_UserConstructionScript_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay
struct ABB_Minigame_Pitching_Base_C_ReceiveBeginPlay_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy
struct ABB_Minigame_Pitching_Base_C_DelayDestroy_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer
struct ABB_Minigame_Pitching_Base_C_ThrowBallAtPlayer_Params
{
	float                                              delayBeforeThrow;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayAfterThrow;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched
struct ABB_Minigame_Pitching_Base_C_BallLaunched_Params
{
	class AActor*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer
struct ABB_Minigame_Pitching_Base_C_EquipmentGrabbedByPlayer_Params
{
	class AActor*                                      DominantHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Mitt_C*                                  Mitt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete
struct ABB_Minigame_Pitching_Base_C_TeleportComplete_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport
struct ABB_Minigame_Pitching_Base_C_NoTeleport_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet
struct ABB_Minigame_Pitching_Base_C_SpawnEquipmentSet_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations
struct ABB_Minigame_Pitching_Base_C_GameReadyRunOperations_Params
{
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit
struct ABB_Minigame_Pitching_Base_C_ActiveBallScramHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent
struct ABB_Minigame_Pitching_Base_C_BallCaughtEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit
struct ABB_Minigame_Pitching_Base_C_StrikeZoneHit_Params
{
	class ABaseballBall*                               Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramStrikeResult                  Result;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown
struct ABB_Minigame_Pitching_Base_C_BallThrown_Params
{
	class ABaseballBall*                               Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated
struct ABB_Minigame_Pitching_Base_C_CurrentBallInvalidated_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped
struct ABB_Minigame_Pitching_Base_C_BallDropped_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed
struct ABB_Minigame_Pitching_Base_C_ActiveBallDestroyed_Params
{
	class AScramPrimitiveActor*                        DestroyedPrimitive;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base
struct ABB_Minigame_Pitching_Base_C_ExecuteUbergraph_BB_Minigame_Pitching_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature
struct ABB_Minigame_Pitching_Base_C_EquipmentGrabbed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
