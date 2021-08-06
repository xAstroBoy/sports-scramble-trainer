// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisScrambleTargetGroup_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveGameElement");

	ATennisScrambleTargetGroup_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.FilterScrambleSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FScramblerTargetSet> ScramblerTargetSet             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FScramblerTargetSet> FilteredTargetSet              (Parm, OutParm, ZeroConstructor)
void ATennisScrambleTargetGroup_C::FilterScrambleSet(TArray<struct FScramblerTargetSet>* ScramblerTargetSet, TArray<struct FScramblerTargetSet>* FilteredTargetSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.FilterScrambleSet");

	ATennisScrambleTargetGroup_C_FilterScrambleSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScramblerTargetSet != nullptr)
		*ScramblerTargetSet = params.ScramblerTargetSet;
	if (FilteredTargetSet != nullptr)
		*FilteredTargetSet = params.FilteredTargetSet;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificBallActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::SpecificBallActivated(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificBallActivated");

	ATennisScrambleTargetGroup_C_SpecificBallActivated_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificBalls
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          BallDistibutionList            (Parm, OutParm, ZeroConstructor)
void ATennisScrambleTargetGroup_C::GetValidSpecificBalls(TArray<class UClass*>* BallDistibutionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificBalls");

	ATennisScrambleTargetGroup_C_GetValidSpecificBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BallDistibutionList != nullptr)
		*BallDistibutionList = params.BallDistibutionList;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificInstrumentActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::SpecificInstrumentActivated(class UClass* InstrumentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificInstrumentActivated");

	ATennisScrambleTargetGroup_C_SpecificInstrumentActivated_Params params;
	params.InstrumentClass = InstrumentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificInstruments
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          ValidInstruments               (Parm, OutParm, ZeroConstructor)
void ATennisScrambleTargetGroup_C::GetValidSpecificInstruments(TArray<class UClass*>* ValidInstruments)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificInstruments");

	ATennisScrambleTargetGroup_C_GetValidSpecificInstruments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidInstruments != nullptr)
		*ValidInstruments = params.ValidInstruments;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllNetNotifiers
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::RemoveAllNetNotifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllNetNotifiers");

	ATennisScrambleTargetGroup_C_RemoveAllNetNotifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SetSpawnLocsForReinforcements
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::SetSpawnLocsForReinforcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SetSpawnLocsForReinforcements");

	ATennisScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UpdateTennisManagerVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::UpdateTennisManagerVars(int Game, int Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UpdateTennisManagerVars");

	ATennisScrambleTargetGroup_C_UpdateTennisManagerVars_Params params;
	params.Game = Game;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::RemoveAllTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllTargets");

	ATennisScrambleTargetGroup_C_RemoveAllTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetActiveTargetsByClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ScrambleEventClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::GetActiveTargetsByClass(class UClass* ScrambleEventClass, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetActiveTargetsByClass");

	ATennisScrambleTargetGroup_C_GetActiveTargetsByClass_Params params;
	params.ScrambleEventClass = ScrambleEventClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetWeightedClassList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          WeightedList                   (Parm, OutParm, ZeroConstructor)
void ATennisScrambleTargetGroup_C::GetWeightedClassList(TArray<class UClass*>* WeightedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetWeightedClassList");

	ATennisScrambleTargetGroup_C_GetWeightedClassList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeightedList != nullptr)
		*WeightedList = params.WeightedList;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableScrambleEventType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  EventClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::DisableScrambleEventType(class UClass* EventClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableScrambleEventType");

	ATennisScrambleTargetGroup_C_DisableScrambleEventType_Params params;
	params.EventClass = EventClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveDisabledSpawnLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ValidSpawnLocations            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATennisScrambleTargetGroup_C::RemoveDisabledSpawnLocations(TArray<int>* ValidSpawnLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveDisabledSpawnLocations");

	ATennisScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidSpawnLocations != nullptr)
		*ValidSpawnLocations = params.ValidSpawnLocations;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableSpawnLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    DisabledLocations              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATennisScrambleTargetGroup_C::DisableSpawnLocations(TArray<int>* DisabledLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableSpawnLocations");

	ATennisScrambleTargetGroup_C_DisableSpawnLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisabledLocations != nullptr)
		*DisabledLocations = params.DisabledLocations;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnInitial
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::SpawnInitial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnInitial");

	ATennisScrambleTargetGroup_C_SpawnInitial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnRandom
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::SpawnRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnRandom");

	ATennisScrambleTargetGroup_C_SpawnRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::SpawnTarget(int Location, class UClass* ScrambleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnTarget");

	ATennisScrambleTargetGroup_C_SpawnTarget_Params params;
	params.Location = Location;
	params.ScrambleClass = ScrambleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.Initialize");

	ATennisScrambleTargetGroup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UserConstructionScript");

	ATennisScrambleTargetGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennisScrambleTargetGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveBeginPlay");

	ATennisScrambleTargetGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RespawnLoop
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::RespawnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RespawnLoop");

	ATennisScrambleTargetGroup_C_RespawnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetDespawned
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::TargetDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetDespawned");

	ATennisScrambleTargetGroup_C_TargetDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ScrambleTargetRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisScrambleTarget_C* TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::ScrambleTargetRemoved(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ScrambleTargetRemoved");

	ATennisScrambleTargetGroup_C_ScrambleTargetRemoved_Params params;
	params.TargetActor = TargetActor;
	params.ScrambleEvent = ScrambleEvent;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.NewServiceReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisScrambleTargetGroup_C::NewServiceReady(int Game, int Point, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.NewServiceReady");

	ATennisScrambleTargetGroup_C_NewServiceReady_Params params;
	params.Game = Game;
	params.Point = Point;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.PointComplete
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::PointComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.PointComplete");

	ATennisScrambleTargetGroup_C_PointComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.InPlay
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::InPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.InPlay");

	ATennisScrambleTargetGroup_C_InPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::GroupSpawn(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawn");

	ATennisScrambleTargetGroup_C_GroupSpawn_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawnLoop
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::GroupSpawnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawnLoop");

	ATennisScrambleTargetGroup_C_GroupSpawnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DelayDestroy");

	ATennisScrambleTargetGroup_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisScrambleTarget_C* TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::TargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetHit");

	ATennisScrambleTargetGroup_C_TargetHit_Params params;
	params.TargetActor = TargetActor;
	params.ScrambleEvent = ScrambleEvent;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.StopTimer
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::StopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.StopTimer");

	ATennisScrambleTargetGroup_C_StopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.QueueReinforcements
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::QueueReinforcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.QueueReinforcements");

	ATennisScrambleTargetGroup_C_QueueReinforcements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.BallCrossedNet
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::BallCrossedNet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.BallCrossedNet");

	ATennisScrambleTargetGroup_C_BallCrossedNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnQueuedTargets
// (BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_C::SpawnQueuedTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnQueuedTargets");

	ATennisScrambleTargetGroup_C_SpawnQueuedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveEndPlay");

	ATennisScrambleTargetGroup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ExecuteUbergraph_TennisScrambleTargetGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_C::ExecuteUbergraph_TennisScrambleTargetGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ExecuteUbergraph_TennisScrambleTargetGroup");

	ATennisScrambleTargetGroup_C_ExecuteUbergraph_TennisScrambleTargetGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
