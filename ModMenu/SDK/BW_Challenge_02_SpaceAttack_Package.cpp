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
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UnbindEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::UnbindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UnbindEvents");
		
		ABW_Challenge_02_SpaceAttack_C_UnbindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.InitializeChallengeRoom
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::InitializeChallengeRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.InitializeChallengeRoom");
		
		ABW_Challenge_02_SpaceAttack_C_InitializeChallengeRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SetupInfoText");
		
		ABW_Challenge_02_SpaceAttack_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UserConstructionScript");
		
		ABW_Challenge_02_SpaceAttack_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveBeginPlay");
		
		ABW_Challenge_02_SpaceAttack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SpawnBalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::SpawnBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SpawnBalls");
		
		ABW_Challenge_02_SpaceAttack_C_SpawnBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_02_SpaceAttack_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.NotifyChallengeContinue");
		
		ABW_Challenge_02_SpaceAttack_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_02_SpaceAttack_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveEndPlay");
		
		ABW_Challenge_02_SpaceAttack_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.BW_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::BW_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.BW_TriggerCountdown");
		
		ABW_Challenge_02_SpaceAttack_C_BW_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.GameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.GameEnd");
		
		ABW_Challenge_02_SpaceAttack_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.Shortcut");
		
		ABW_Challenge_02_SpaceAttack_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateCurrentScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_02_SpaceAttack_C::UpdateCurrentScore(int32_t LaneID, int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateCurrentScore");
		
		ABW_Challenge_02_SpaceAttack_C_UpdateCurrentScore_Params params {};
		params.LaneID = LaneID;
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.LaneReplacement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingLane_Base_C*                         ReplacementLane                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABowlingLane_Base_C*                         OutgoingLane                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_02_SpaceAttack_C::LaneReplacement(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.LaneReplacement");
		
		ABW_Challenge_02_SpaceAttack_C_LaneReplacement_Params params {};
		params.ReplacementLane = ReplacementLane;
		params.OutgoingLane = OutgoingLane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateAlienSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::UpdateAlienSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateAlienSpeed");
		
		ABW_Challenge_02_SpaceAttack_C_UpdateAlienSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_02_SpaceAttack_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.AnnouncerExitSequenceComplete");
		
		ABW_Challenge_02_SpaceAttack_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ExecuteUbergraph_BW_Challenge_02_SpaceAttack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_02_SpaceAttack_C::ExecuteUbergraph_BW_Challenge_02_SpaceAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ExecuteUbergraph_BW_Challenge_02_SpaceAttack");
		
		ABW_Challenge_02_SpaceAttack_C_ExecuteUbergraph_BW_Challenge_02_SpaceAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Challenge_02_SpaceAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Challenge_02_SpaceAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C");
		return ptr;
	}

}


