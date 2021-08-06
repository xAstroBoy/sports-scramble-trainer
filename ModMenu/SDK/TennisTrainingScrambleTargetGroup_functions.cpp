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

// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisTrainingScrambleTargetGroup_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveGameElement");

	ATennisTrainingScrambleTargetGroup_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllDemoTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::RemoveAllDemoTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllDemoTargets");

	ATennisTrainingScrambleTargetGroup_C_RemoveAllDemoTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TennisTrainingSingleScrambleTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  TargetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<TN_Training_ScrambleTargets_ETN_Training_ScrambleTargets> TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::TennisTrainingSingleScrambleTarget(class UClass* TargetClass, int ID, TEnumAsByte<TN_Training_ScrambleTargets_ETN_Training_ScrambleTargets> TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TennisTrainingSingleScrambleTarget");

	ATennisTrainingScrambleTargetGroup_C_TennisTrainingSingleScrambleTarget_Params params;
	params.TargetClass = TargetClass;
	params.ID = ID;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemovePairTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::RemovePairTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemovePairTargets");

	ATennisTrainingScrambleTargetGroup_C_RemovePairTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTrainingTargetPair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  TargetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<TN_Training_ScrambleTargets_ETN_Training_ScrambleTargets> Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::SpawnTrainingTargetPair(class UClass* TargetClass, int ID, class UTexture2D* Icon, TEnumAsByte<TN_Training_ScrambleTargets_ETN_Training_ScrambleTargets> Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTrainingTargetPair");

	ATennisTrainingScrambleTargetGroup_C_SpawnTrainingTargetPair_Params params;
	params.TargetClass = TargetClass;
	params.ID = ID;
	params.Icon = Icon;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTrainingTargetClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UClass*                  TargetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::SpawnTrainingTargetClass(const struct FTransform& Transform, class UClass* TargetClass, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTrainingTargetClass");

	ATennisTrainingScrambleTargetGroup_C_SpawnTrainingTargetClass_Params params;
	params.Transform = Transform;
	params.TargetClass = TargetClass;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.FilterScrambleSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FScramblerTargetSet> ScramblerTargetSet             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FScramblerTargetSet> FilteredTargetSet              (Parm, OutParm, ZeroConstructor)
void ATennisTrainingScrambleTargetGroup_C::FilterScrambleSet(TArray<struct FScramblerTargetSet>* ScramblerTargetSet, TArray<struct FScramblerTargetSet>* FilteredTargetSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.FilterScrambleSet");

	ATennisTrainingScrambleTargetGroup_C_FilterScrambleSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScramblerTargetSet != nullptr)
		*ScramblerTargetSet = params.ScramblerTargetSet;
	if (FilteredTargetSet != nullptr)
		*FilteredTargetSet = params.FilteredTargetSet;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpecificBallActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::SpecificBallActivated(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpecificBallActivated");

	ATennisTrainingScrambleTargetGroup_C_SpecificBallActivated_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetValidSpecificBalls
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          BallDistibutionList            (Parm, OutParm, ZeroConstructor)
void ATennisTrainingScrambleTargetGroup_C::GetValidSpecificBalls(TArray<class UClass*>* BallDistibutionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetValidSpecificBalls");

	ATennisTrainingScrambleTargetGroup_C_GetValidSpecificBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BallDistibutionList != nullptr)
		*BallDistibutionList = params.BallDistibutionList;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpecificInstrumentActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::SpecificInstrumentActivated(class UClass* InstrumentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpecificInstrumentActivated");

	ATennisTrainingScrambleTargetGroup_C_SpecificInstrumentActivated_Params params;
	params.InstrumentClass = InstrumentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetValidSpecificInstruments
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          ValidInstruments               (Parm, OutParm, ZeroConstructor)
void ATennisTrainingScrambleTargetGroup_C::GetValidSpecificInstruments(TArray<class UClass*>* ValidInstruments)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetValidSpecificInstruments");

	ATennisTrainingScrambleTargetGroup_C_GetValidSpecificInstruments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidInstruments != nullptr)
		*ValidInstruments = params.ValidInstruments;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllNetNotifiers
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::RemoveAllNetNotifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllNetNotifiers");

	ATennisTrainingScrambleTargetGroup_C_RemoveAllNetNotifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SetSpawnLocsForReinforcements
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SetSpawnLocsForReinforcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SetSpawnLocsForReinforcements");

	ATennisTrainingScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.UpdateTennisManagerVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::UpdateTennisManagerVars(int Game, int Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.UpdateTennisManagerVars");

	ATennisTrainingScrambleTargetGroup_C_UpdateTennisManagerVars_Params params;
	params.Game = Game;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::RemoveAllTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllTargets");

	ATennisTrainingScrambleTargetGroup_C_RemoveAllTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetActiveTargetsByClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ScrambleEventClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::GetActiveTargetsByClass(class UClass* ScrambleEventClass, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetActiveTargetsByClass");

	ATennisTrainingScrambleTargetGroup_C_GetActiveTargetsByClass_Params params;
	params.ScrambleEventClass = ScrambleEventClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetWeightedClassList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          WeightedList                   (Parm, OutParm, ZeroConstructor)
void ATennisTrainingScrambleTargetGroup_C::GetWeightedClassList(TArray<class UClass*>* WeightedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetWeightedClassList");

	ATennisTrainingScrambleTargetGroup_C_GetWeightedClassList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeightedList != nullptr)
		*WeightedList = params.WeightedList;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.DisableScrambleEventType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  EventClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::DisableScrambleEventType(class UClass* EventClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.DisableScrambleEventType");

	ATennisTrainingScrambleTargetGroup_C_DisableScrambleEventType_Params params;
	params.EventClass = EventClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveDisabledSpawnLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ValidSpawnLocations            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATennisTrainingScrambleTargetGroup_C::RemoveDisabledSpawnLocations(TArray<int>* ValidSpawnLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveDisabledSpawnLocations");

	ATennisTrainingScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidSpawnLocations != nullptr)
		*ValidSpawnLocations = params.ValidSpawnLocations;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.DisableSpawnLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    DisabledLocations              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATennisTrainingScrambleTargetGroup_C::DisableSpawnLocations(TArray<int>* DisabledLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.DisableSpawnLocations");

	ATennisTrainingScrambleTargetGroup_C_DisableSpawnLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisabledLocations != nullptr)
		*DisabledLocations = params.DisabledLocations;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnInitial
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnInitial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnInitial");

	ATennisTrainingScrambleTargetGroup_C_SpawnInitial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnRandom
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnRandom");

	ATennisTrainingScrambleTargetGroup_C_SpawnRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTarget(const struct FTransform& Transform, int ID, class UClass* ScrambleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTarget");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTarget_Params params;
	params.Transform = Transform;
	params.ID = ID;
	params.ScrambleClass = ScrambleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.Initialize");

	ATennisTrainingScrambleTargetGroup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.UserConstructionScript");

	ATennisTrainingScrambleTargetGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RespawnLoop
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::RespawnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RespawnLoop");

	ATennisTrainingScrambleTargetGroup_C_RespawnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetDespawned
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::TargetDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetDespawned");

	ATennisTrainingScrambleTargetGroup_C_TargetDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ScrambleTargetRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisScrambleTarget_C* TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::ScrambleTargetRemoved(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ScrambleTargetRemoved");

	ATennisTrainingScrambleTargetGroup_C_ScrambleTargetRemoved_Params params;
	params.TargetActor = TargetActor;
	params.ScrambleEvent = ScrambleEvent;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisScrambleTarget_C* TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::TargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetHit");

	ATennisTrainingScrambleTargetGroup_C_TargetHit_Params params;
	params.TargetActor = TargetActor;
	params.ScrambleEvent = ScrambleEvent;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Basketball
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_Basketball()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Basketball");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Basketball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_RandRacket
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_RandRacket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_RandRacket");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_RandRacket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_NetRaise
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetCenter_NetRaise()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_NetRaise");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_NetRaise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Basketball
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_Basketball()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Basketball");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_Basketball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_SoccerBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_SoccerBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_SoccerBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_SoccerBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_GolfBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_GolfBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_GolfBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_GolfBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Chicken
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_Chicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Chicken");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Chicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_Basketball
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_Basketball()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_Basketball");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_Basketball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Bat
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_Bat()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Bat");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Bat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetFiredBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         BallFired                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::TargetFiredBall(class ATN_Ball_Base_C* BallFired)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetFiredBall");

	ATennisTrainingScrambleTargetGroup_C_TargetFiredBall_Params params;
	params.BallFired = BallFired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_PoolNoodle
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_PoolNoodle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_PoolNoodle");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_PoolNoodle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_FoamFinger
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_FoamFinger()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_FoamFinger");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_FoamFinger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_FloppyFish
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_FloppyFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_FloppyFish");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_FloppyFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnOneOfScrambleTargetPair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  TargetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<TN_Training_ScrambleTargets_ETN_Training_ScrambleTargets> Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::SpawnOneOfScrambleTargetPair(class UClass* TargetClass, int ID, class UTexture2D* Icon, TEnumAsByte<TN_Training_ScrambleTargets_ETN_Training_ScrambleTargets> Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnOneOfScrambleTargetPair");

	ATennisTrainingScrambleTargetGroup_C_SpawnOneOfScrambleTargetPair_Params params;
	params.TargetClass = TargetClass;
	params.ID = ID;
	params.Icon = Icon;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Baseball
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_Baseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Baseball");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_Baseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Bat
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_Bat()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Bat");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_Bat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Baseball
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_Baseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Baseball");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Baseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_FoamFinger
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_FoamFinger()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_FoamFinger");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_FoamFinger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_BeachBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_BeachBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_BeachBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_BeachBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Paddle
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_Paddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Paddle");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Paddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_PingPongBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetLeft_PingPongBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_PingPongBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_PingPongBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_PoolNoodle
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_PoolNoodle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_PoolNoodle");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_PoolNoodle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ReceiveEndPlay");

	ATennisTrainingScrambleTargetGroup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_HockeyStick
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_HockeyStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_HockeyStick");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_HockeyStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_GolfClub
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetCenter_GolfClub()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_GolfClub");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_GolfClub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_TennisRacket
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnTargetRight_TennisRacket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_TennisRacket");

	ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_TennisRacket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_TennisRacket
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_TennisRacket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_TennisRacket");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_TennisRacket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_HockeyStick
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetRight_HockeyStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_HockeyStick");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetRight_HockeyStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ReceiveBeginPlay");

	ATennisTrainingScrambleTargetGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_Basketball
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetCenter_Basketball()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_Basketball");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_Basketball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_Frisbee
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_Frisbee()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_Frisbee");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_Frisbee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_PingPongBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetRight_PingPongBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_PingPongBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetRight_PingPongBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_Frisbee
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetRight_Frisbee()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_Frisbee");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetRight_Frisbee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_PingPongBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_PingPongBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_PingPongBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_PingPongBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_TennisBall
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetCenter_TennisBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_TennisBall");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_TennisBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_HockeyPuck
// (BlueprintCallable, BlueprintEvent)
void ATennisTrainingScrambleTargetGroup_C::SpawnDemoTargetLeft_HockeyPuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_HockeyPuck");

	ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_HockeyPuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ExecuteUbergraph_TennisTrainingScrambleTargetGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::ExecuteUbergraph_TennisTrainingScrambleTargetGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ExecuteUbergraph_TennisTrainingScrambleTargetGroup");

	ATennisTrainingScrambleTargetGroup_C_ExecuteUbergraph_TennisTrainingScrambleTargetGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetHasBeenHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisScrambleTarget_C* TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  EventClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::TargetHasBeenHit__DelegateSignature(class ATennisScrambleTarget_C* TargetActor, class UClass* EventClass, int TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetHasBeenHit__DelegateSignature");

	ATennisTrainingScrambleTargetGroup_C_TargetHasBeenHit__DelegateSignature_Params params;
	params.TargetActor = TargetActor;
	params.EventClass = EventClass;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.BallHasBeenFiredByTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         LaunchedBall                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisTrainingScrambleTargetGroup_C::BallHasBeenFiredByTarget__DelegateSignature(class ATN_Ball_Base_C* LaunchedBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.BallHasBeenFiredByTarget__DelegateSignature");

	ATennisTrainingScrambleTargetGroup_C_BallHasBeenFiredByTarget__DelegateSignature_Params params;
	params.LaunchedBall = LaunchedBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
