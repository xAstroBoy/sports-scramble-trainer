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
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Train_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.AddActorToGameElementList");
		
		ABW_Train_Base_C_AddActorToGameElementList_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Train_Base_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.Shutdown");
		
		ABW_Train_Base_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.ToggleLaneChanging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisableLaneChanges                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Train_Base_C::ToggleLaneChanging(bool DisableLaneChanges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ToggleLaneChanging");
		
		ABW_Train_Base_C_ToggleLaneChanging_Params params {};
		params.DisableLaneChanges = DisableLaneChanges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.ShowScoreboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::ShowScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ShowScoreboard");
		
		ABW_Train_Base_C_ShowScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.CalculateEndScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::CalculateEndScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.CalculateEndScore");
		
		ABW_Train_Base_C_CalculateEndScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.ResetLane
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ResetScore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetPins                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetBallCounter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Train_Base_C::ResetLane(bool ResetScore, bool ResetPins, bool ResetBallCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ResetLane");
		
		ABW_Train_Base_C_ResetLane_Params params {};
		params.ResetScore = ResetScore;
		params.ResetPins = ResetPins;
		params.ResetBallCounter = ResetBallCounter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.DestroyAllBalls_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::DestroyAllBalls_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.DestroyAllBalls_1");
		
		ABW_Train_Base_C_DestroyAllBalls_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.Initialize");
		
		ABW_Train_Base_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.UserConstructionScript");
		
		ABW_Train_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.OnLoaded_B645D8DE43A43D6A03D922BF743B0B01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::OnLoaded_B645D8DE43A43D6A03D922BF743B0B01(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.OnLoaded_B645D8DE43A43D6A03D922BF743B0B01");
		
		ABW_Train_Base_C_OnLoaded_B645D8DE43A43D6A03D922BF743B0B01_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Train_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ReceiveBeginPlay");
		
		ABW_Train_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.BowlingEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBowlingEvent                                      BowlingEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::BowlingEvent(int32_t Player, EBowlingEvent BowlingEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.BowlingEvent");
		
		ABW_Train_Base_C_BowlingEvent_Params params {};
		params.Player = Player;
		params.BowlingEvent = BowlingEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.SpecificBallCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABW_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::SpecificBallCreated(class ABW_Ball_Base_C* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.SpecificBallCreated");
		
		ABW_Train_Base_C_SpecificBallCreated_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.RandomBallCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABW_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::RandomBallCreated(class ABW_Ball_Base_C* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.RandomBallCreated");
		
		ABW_Train_Base_C_RandomBallCreated_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.GetCurrentLaneScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::GetCurrentLaneScore(int32_t LaneID, int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.GetCurrentLaneScore");
		
		ABW_Train_Base_C_GetCurrentLaneScore_Params params {};
		params.LaneID = LaneID;
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.EndOfGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::EndOfGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.EndOfGame");
		
		ABW_Train_Base_C_EndOfGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.SpecialScoreEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::SpecialScoreEvent(int32_t LaneID, int32_t Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.SpecialScoreEvent");
		
		ABW_Train_Base_C_SpecialScoreEvent_Params params {};
		params.LaneID = LaneID;
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.PlayAudio_Countdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_Base_C::PlayAudio_Countdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.PlayAudio_Countdown");
		
		ABW_Train_Base_C_PlayAudio_Countdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_Base.BW_Train_Base_C.ExecuteUbergraph_BW_Train_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_Base_C::ExecuteUbergraph_BW_Train_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ExecuteUbergraph_BW_Train_Base");
		
		ABW_Train_Base_C_ExecuteUbergraph_BW_Train_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Train_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Train_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_Base.BW_Train_Base_C");
		return ptr;
	}

}


