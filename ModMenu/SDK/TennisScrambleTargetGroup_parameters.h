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

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveGameElement
struct ATennisScrambleTargetGroup_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.FilterScrambleSet
struct ATennisScrambleTargetGroup_C_FilterScrambleSet_Params
{
	TArray<struct FScramblerTargetSet>                 ScramblerTargetSet;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FScramblerTargetSet>                 FilteredTargetSet;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificBallActivated
struct ATennisScrambleTargetGroup_C_SpecificBallActivated_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificBalls
struct ATennisScrambleTargetGroup_C_GetValidSpecificBalls_Params
{
	TArray<class UClass*>                              BallDistibutionList;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificInstrumentActivated
struct ATennisScrambleTargetGroup_C_SpecificInstrumentActivated_Params
{
	class UClass*                                      InstrumentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificInstruments
struct ATennisScrambleTargetGroup_C_GetValidSpecificInstruments_Params
{
	TArray<class UClass*>                              ValidInstruments;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllNetNotifiers
struct ATennisScrambleTargetGroup_C_RemoveAllNetNotifiers_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SetSpawnLocsForReinforcements
struct ATennisScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UpdateTennisManagerVars
struct ATennisScrambleTargetGroup_C_UpdateTennisManagerVars_Params
{
	int                                                Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllTargets
struct ATennisScrambleTargetGroup_C_RemoveAllTargets_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetActiveTargetsByClass
struct ATennisScrambleTargetGroup_C_GetActiveTargetsByClass_Params
{
	class UClass*                                      ScrambleEventClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetWeightedClassList
struct ATennisScrambleTargetGroup_C_GetWeightedClassList_Params
{
	TArray<class UClass*>                              WeightedList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableScrambleEventType
struct ATennisScrambleTargetGroup_C_DisableScrambleEventType_Params
{
	class UClass*                                      EventClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveDisabledSpawnLocations
struct ATennisScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params
{
	TArray<int>                                        ValidSpawnLocations;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableSpawnLocations
struct ATennisScrambleTargetGroup_C_DisableSpawnLocations_Params
{
	TArray<int>                                        DisabledLocations;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnInitial
struct ATennisScrambleTargetGroup_C_SpawnInitial_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnRandom
struct ATennisScrambleTargetGroup_C_SpawnRandom_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnTarget
struct ATennisScrambleTargetGroup_C_SpawnTarget_Params
{
	int                                                Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrambleClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.Initialize
struct ATennisScrambleTargetGroup_C_Initialize_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UserConstructionScript
struct ATennisScrambleTargetGroup_C_UserConstructionScript_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveBeginPlay
struct ATennisScrambleTargetGroup_C_ReceiveBeginPlay_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RespawnLoop
struct ATennisScrambleTargetGroup_C_RespawnLoop_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetDespawned
struct ATennisScrambleTargetGroup_C_TargetDespawned_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ScrambleTargetRemoved
struct ATennisScrambleTargetGroup_C_ScrambleTargetRemoved_Params
{
	class ATennisScrambleTarget_C*                     TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrambleEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.NewServiceReady
struct ATennisScrambleTargetGroup_C_NewServiceReady_Params
{
	int                                                Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.PointComplete
struct ATennisScrambleTargetGroup_C_PointComplete_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.InPlay
struct ATennisScrambleTargetGroup_C_InPlay_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawn
struct ATennisScrambleTargetGroup_C_GroupSpawn_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawnLoop
struct ATennisScrambleTargetGroup_C_GroupSpawnLoop_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DelayDestroy
struct ATennisScrambleTargetGroup_C_DelayDestroy_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetHit
struct ATennisScrambleTargetGroup_C_TargetHit_Params
{
	class ATennisScrambleTarget_C*                     TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrambleEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.StopTimer
struct ATennisScrambleTargetGroup_C_StopTimer_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.QueueReinforcements
struct ATennisScrambleTargetGroup_C_QueueReinforcements_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.BallCrossedNet
struct ATennisScrambleTargetGroup_C_BallCrossedNet_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnQueuedTargets
struct ATennisScrambleTargetGroup_C_SpawnQueuedTargets_Params
{
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveEndPlay
struct ATennisScrambleTargetGroup_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ExecuteUbergraph_TennisScrambleTargetGroup
struct ATennisScrambleTargetGroup_C_ExecuteUbergraph_TennisScrambleTargetGroup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
