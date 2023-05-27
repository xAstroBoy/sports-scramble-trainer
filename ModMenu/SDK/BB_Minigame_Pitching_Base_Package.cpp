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
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList");
		
		ABB_Minigame_Pitching_Base_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Base_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown");
		
		ABB_Minigame_Pitching_Base_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::ClearCurrentBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall");
		
		ABB_Minigame_Pitching_Base_C_ClearCurrentBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RollingPitch                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Base_C::GetMaxBounces(class AActor* Actor, int32_t* Result, bool* RollingPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces");
		
		ABB_Minigame_Pitching_Base_C_GetMaxBounces_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (RollingPitch != nullptr)
			*RollingPitch = params.RollingPitch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::UpdatePitchTargetScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard");
		
		ABB_Minigame_Pitching_Base_C_UpdatePitchTargetScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowBallCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Base_C::ResetPitchingScoreboard(bool ShowBallCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard");
		
		ABB_Minigame_Pitching_Base_C_ResetPitchingScoreboard_Params params {};
		params.ShowBallCount = ShowBallCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::CleanupScoreboards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards");
		
		ABB_Minigame_Pitching_Base_C_CleanupScoreboards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseStrikeZone                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayStrikezoneSounds                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnTargets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DisplayStrikezoneText                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowQuad                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Base_C::SpawnGameElements(bool UseStrikeZone, bool PlayStrikezoneSounds, bool SpawnTargets, bool DisplayStrikezoneText, bool ShowQuad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements");
		
		ABB_Minigame_Pitching_Base_C_SpawnGameElements_Params params {};
		params.UseStrikeZone = UseStrikeZone;
		params.PlayStrikezoneSounds = PlayStrikezoneSounds;
		params.SpawnTargets = SpawnTargets;
		params.DisplayStrikezoneText = DisplayStrikezoneText;
		params.ShowQuad = ShowQuad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowBallCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Base_C::UpdatePitchingScoreboard(bool ShowBallCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard");
		
		ABB_Minigame_Pitching_Base_C_UpdatePitchingScoreboard_Params params {};
		params.ShowBallCount = ShowBallCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize");
		
		ABB_Minigame_Pitching_Base_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript");
		
		ABB_Minigame_Pitching_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay");
		
		ABB_Minigame_Pitching_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy");
		
		ABB_Minigame_Pitching_Base_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              delayBeforeThrow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DelayAfterThrow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::ThrowBallAtPlayer(float delayBeforeThrow, float DelayAfterThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer");
		
		ABB_Minigame_Pitching_Base_C_ThrowBallAtPlayer_Params params {};
		params.delayBeforeThrow = delayBeforeThrow;
		params.DelayAfterThrow = DelayAfterThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::BallLaunched(class AActor* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched");
		
		ABB_Minigame_Pitching_Base_C_BallLaunched_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABB_Mitt_C*                                  Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::EquipmentGrabbedByPlayer(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer");
		
		ABB_Minigame_Pitching_Base_C_EquipmentGrabbedByPlayer_Params params {};
		params.DominantHand = DominantHand;
		params.Mitt = Mitt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::TeleportComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete");
		
		ABB_Minigame_Pitching_Base_C_TeleportComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::NoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport");
		
		ABB_Minigame_Pitching_Base_C_NoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::SpawnEquipmentSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet");
		
		ABB_Minigame_Pitching_Base_C_SpawnEquipmentSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::GameReadyRunOperations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations");
		
		ABB_Minigame_Pitching_Base_C_GameReadyRunOperations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::ActiveBallScramHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit");
		
		ABB_Minigame_Pitching_Base_C_ActiveBallScramHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::BallCaughtEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent");
		
		ABB_Minigame_Pitching_Base_C_BallCaughtEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EScramStrikeResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::StrikeZoneHit(class ABaseballBall* Ball, EScramStrikeResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit");
		
		ABB_Minigame_Pitching_Base_C_StrikeZoneHit_Params params {};
		params.Ball = Ball;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::BallThrown(class ABaseballBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown");
		
		ABB_Minigame_Pitching_Base_C_BallThrown_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::CurrentBallInvalidated(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated");
		
		ABB_Minigame_Pitching_Base_C_CurrentBallInvalidated_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::BallDropped(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped");
		
		ABB_Minigame_Pitching_Base_C_BallDropped_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::ActiveBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed");
		
		ABB_Minigame_Pitching_Base_C_ActiveBallDestroyed_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Base_C::ExecuteUbergraph_BB_Minigame_Pitching_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base");
		
		ABB_Minigame_Pitching_Base_C_ExecuteUbergraph_BB_Minigame_Pitching_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Base_C::EquipmentGrabbed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature");
		
		ABB_Minigame_Pitching_Base_C_EquipmentGrabbed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Minigame_Pitching_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Minigame_Pitching_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C");
		return ptr;
	}

}


