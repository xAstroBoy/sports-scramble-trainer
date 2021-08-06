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

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.Shutdown
struct ABB_Minigame_Pitching_Fielding_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.AddActorToGameElementList
struct ABB_Minigame_Pitching_Fielding_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.SpawnActors
struct ABB_Minigame_Pitching_Fielding_C_SpawnActors_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.InitializeMode
struct ABB_Minigame_Pitching_Fielding_C_InitializeMode_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.UserConstructionScript
struct ABB_Minigame_Pitching_Fielding_C_UserConstructionScript_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ReceiveBeginPlay
struct ABB_Minigame_Pitching_Fielding_C_ReceiveBeginPlay_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.DelayDestroy
struct ABB_Minigame_Pitching_Fielding_C_DelayDestroy_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.TeleportComplete
struct ABB_Minigame_Pitching_Fielding_C_TeleportComplete_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.NoTeleport
struct ABB_Minigame_Pitching_Fielding_C_NoTeleport_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.LaunchBallAtPlayer
struct ABB_Minigame_Pitching_Fielding_C_LaunchBallAtPlayer_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.EquipmentGrabbed
struct ABB_Minigame_Pitching_Fielding_C_EquipmentGrabbed_Params
{
	class AActor*                                      DominantHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Mitt_C*                                  Mitt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallLaunched
struct ABB_Minigame_Pitching_Fielding_C_BallLaunched_Params
{
	class AActor*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallCaught
struct ABB_Minigame_Pitching_Fielding_C_BallCaught_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.OpenGate
struct ABB_Minigame_Pitching_Fielding_C_OpenGate_Params
{
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallDestroyed
struct ABB_Minigame_Pitching_Fielding_C_BallDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ExecuteUbergraph_BB_Minigame_Pitching_Fielding
struct ABB_Minigame_Pitching_Fielding_C_ExecuteUbergraph_BB_Minigame_Pitching_Fielding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
