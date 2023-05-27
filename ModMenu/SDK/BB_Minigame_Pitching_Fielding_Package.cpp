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
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Fielding_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.Shutdown");
		
		ABB_Minigame_Pitching_Fielding_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Fielding_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.AddActorToGameElementList");
		
		ABB_Minigame_Pitching_Fielding_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.SpawnActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::SpawnActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.SpawnActors");
		
		ABB_Minigame_Pitching_Fielding_C_SpawnActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.InitializeMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::InitializeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.InitializeMode");
		
		ABB_Minigame_Pitching_Fielding_C_InitializeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.UserConstructionScript");
		
		ABB_Minigame_Pitching_Fielding_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ReceiveBeginPlay");
		
		ABB_Minigame_Pitching_Fielding_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.DelayDestroy");
		
		ABB_Minigame_Pitching_Fielding_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.TeleportComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::TeleportComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.TeleportComplete");
		
		ABB_Minigame_Pitching_Fielding_C_TeleportComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.NoTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::NoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.NoTeleport");
		
		ABB_Minigame_Pitching_Fielding_C_NoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.LaunchBallAtPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::LaunchBallAtPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.LaunchBallAtPlayer");
		
		ABB_Minigame_Pitching_Fielding_C_LaunchBallAtPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.EquipmentGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABB_Mitt_C*                                  Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Fielding_C::EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.EquipmentGrabbed");
		
		ABB_Minigame_Pitching_Fielding_C_EquipmentGrabbed_Params params {};
		params.DominantHand = DominantHand;
		params.Mitt = Mitt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallLaunched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Fielding_C::BallLaunched(class AActor* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallLaunched");
		
		ABB_Minigame_Pitching_Fielding_C_BallLaunched_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallCaught
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Fielding_C::BallCaught(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallCaught");
		
		ABB_Minigame_Pitching_Fielding_C_BallCaught_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.OpenGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Fielding_C::OpenGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.OpenGate");
		
		ABB_Minigame_Pitching_Fielding_C_OpenGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Fielding_C::BallDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallDestroyed");
		
		ABB_Minigame_Pitching_Fielding_C_BallDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ExecuteUbergraph_BB_Minigame_Pitching_Fielding
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Fielding_C::ExecuteUbergraph_BB_Minigame_Pitching_Fielding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ExecuteUbergraph_BB_Minigame_Pitching_Fielding");
		
		ABB_Minigame_Pitching_Fielding_C_ExecuteUbergraph_BB_Minigame_Pitching_Fielding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Minigame_Pitching_Fielding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Minigame_Pitching_Fielding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C");
		return ptr;
	}

}


