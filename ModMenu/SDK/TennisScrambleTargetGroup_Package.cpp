/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATennisScrambleTargetGroup_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveGameElement");
		
		ATennisScrambleTargetGroup_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.FilterScrambleSet
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FScramblerTargetSet>                 ScramblerTargetSet                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FScramblerTargetSet>                 FilteredTargetSet                                          (Parm, OutParm, ZeroConstructor)
	 */
	void ATennisScrambleTargetGroup_C::FilterScrambleSet(TArray<struct FScramblerTargetSet>* ScramblerTargetSet, TArray<struct FScramblerTargetSet>* FilteredTargetSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.FilterScrambleSet");
		
		ATennisScrambleTargetGroup_C_FilterScrambleSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScramblerTargetSet != nullptr)
			*ScramblerTargetSet = params.ScramblerTargetSet;
		if (FilteredTargetSet != nullptr)
			*FilteredTargetSet = params.FilteredTargetSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificBallActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::SpecificBallActivated(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificBallActivated");
		
		ATennisScrambleTargetGroup_C_SpecificBallActivated_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificBalls
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              BallDistibutionList                                        (Parm, OutParm, ZeroConstructor)
	 */
	void ATennisScrambleTargetGroup_C::GetValidSpecificBalls(TArray<class UClass*>* BallDistibutionList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificBalls");
		
		ATennisScrambleTargetGroup_C_GetValidSpecificBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BallDistibutionList != nullptr)
			*BallDistibutionList = params.BallDistibutionList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificInstrumentActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InstrumentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::SpecificInstrumentActivated(class UClass* InstrumentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificInstrumentActivated");
		
		ATennisScrambleTargetGroup_C_SpecificInstrumentActivated_Params params {};
		params.InstrumentClass = InstrumentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificInstruments
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              ValidInstruments                                           (Parm, OutParm, ZeroConstructor)
	 */
	void ATennisScrambleTargetGroup_C::GetValidSpecificInstruments(TArray<class UClass*>* ValidInstruments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificInstruments");
		
		ATennisScrambleTargetGroup_C_GetValidSpecificInstruments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidInstruments != nullptr)
			*ValidInstruments = params.ValidInstruments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllNetNotifiers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::RemoveAllNetNotifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllNetNotifiers");
		
		ATennisScrambleTargetGroup_C_RemoveAllNetNotifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SetSpawnLocsForReinforcements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::SetSpawnLocsForReinforcements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SetSpawnLocsForReinforcements");
		
		ATennisScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UpdateTennisManagerVars
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::UpdateTennisManagerVars(int32_t Game, int32_t Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UpdateTennisManagerVars");
		
		ATennisScrambleTargetGroup_C_UpdateTennisManagerVars_Params params {};
		params.Game = Game;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::RemoveAllTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllTargets");
		
		ATennisScrambleTargetGroup_C_RemoveAllTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetActiveTargetsByClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScrambleEventClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::GetActiveTargetsByClass(class UClass* ScrambleEventClass, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetActiveTargetsByClass");
		
		ATennisScrambleTargetGroup_C_GetActiveTargetsByClass_Params params {};
		params.ScrambleEventClass = ScrambleEventClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetWeightedClassList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              WeightedList                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ATennisScrambleTargetGroup_C::GetWeightedClassList(TArray<class UClass*>* WeightedList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetWeightedClassList");
		
		ATennisScrambleTargetGroup_C_GetWeightedClassList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeightedList != nullptr)
			*WeightedList = params.WeightedList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableScrambleEventType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      EventClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::DisableScrambleEventType(class UClass* EventClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableScrambleEventType");
		
		ATennisScrambleTargetGroup_C_DisableScrambleEventType_Params params {};
		params.EventClass = EventClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveDisabledSpawnLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    ValidSpawnLocations                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATennisScrambleTargetGroup_C::RemoveDisabledSpawnLocations(TArray<int32_t>* ValidSpawnLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveDisabledSpawnLocations");
		
		ATennisScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidSpawnLocations != nullptr)
			*ValidSpawnLocations = params.ValidSpawnLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableSpawnLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    DisabledLocations                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATennisScrambleTargetGroup_C::DisableSpawnLocations(TArray<int32_t>* DisabledLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableSpawnLocations");
		
		ATennisScrambleTargetGroup_C_DisableSpawnLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisabledLocations != nullptr)
			*DisabledLocations = params.DisabledLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnInitial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::SpawnInitial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnInitial");
		
		ATennisScrambleTargetGroup_C_SpawnInitial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnRandom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::SpawnRandom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnRandom");
		
		ATennisScrambleTargetGroup_C_SpawnRandom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ScrambleClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::SpawnTarget(int32_t Location, class UClass* ScrambleClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnTarget");
		
		ATennisScrambleTargetGroup_C_SpawnTarget_Params params {};
		params.Location = Location;
		params.ScrambleClass = ScrambleClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.Initialize");
		
		ATennisScrambleTargetGroup_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UserConstructionScript");
		
		ATennisScrambleTargetGroup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveBeginPlay");
		
		ATennisScrambleTargetGroup_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RespawnLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::RespawnLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RespawnLoop");
		
		ATennisScrambleTargetGroup_C_RespawnLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetDespawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::TargetDespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetDespawned");
		
		ATennisScrambleTargetGroup_C_TargetDespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ScrambleTargetRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisScrambleTarget_C*                     TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ScrambleEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::ScrambleTargetRemoved(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ScrambleTargetRemoved");
		
		ATennisScrambleTargetGroup_C_ScrambleTargetRemoved_Params params {};
		params.TargetActor = TargetActor;
		params.ScrambleEvent = ScrambleEvent;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.NewServiceReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATennisScrambleTargetGroup_C::NewServiceReady(int32_t Game, int32_t Point, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.NewServiceReady");
		
		ATennisScrambleTargetGroup_C_NewServiceReady_Params params {};
		params.Game = Game;
		params.Point = Point;
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.PointComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::PointComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.PointComplete");
		
		ATennisScrambleTargetGroup_C_PointComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.InPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::InPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.InPlay");
		
		ATennisScrambleTargetGroup_C_InPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::GroupSpawn(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawn");
		
		ATennisScrambleTargetGroup_C_GroupSpawn_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawnLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::GroupSpawnLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawnLoop");
		
		ATennisScrambleTargetGroup_C_GroupSpawnLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DelayDestroy");
		
		ATennisScrambleTargetGroup_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisScrambleTarget_C*                     TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ScrambleEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::TargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetHit");
		
		ATennisScrambleTargetGroup_C_TargetHit_Params params {};
		params.TargetActor = TargetActor;
		params.ScrambleEvent = ScrambleEvent;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.StopTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::StopTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.StopTimer");
		
		ATennisScrambleTargetGroup_C_StopTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.QueueReinforcements
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::QueueReinforcements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.QueueReinforcements");
		
		ATennisScrambleTargetGroup_C_QueueReinforcements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.BallCrossedNet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::BallCrossedNet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.BallCrossedNet");
		
		ATennisScrambleTargetGroup_C_BallCrossedNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnQueuedTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_C::SpawnQueuedTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnQueuedTargets");
		
		ATennisScrambleTargetGroup_C_SpawnQueuedTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveEndPlay");
		
		ATennisScrambleTargetGroup_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ExecuteUbergraph_TennisScrambleTargetGroup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_C::ExecuteUbergraph_TennisScrambleTargetGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ExecuteUbergraph_TennisScrambleTargetGroup");
		
		ATennisScrambleTargetGroup_C_ExecuteUbergraph_TennisScrambleTargetGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisScrambleTargetGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisScrambleTargetGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisScrambleTargetGroup.TennisScrambleTargetGroup_C");
		return ptr;
	}

}


