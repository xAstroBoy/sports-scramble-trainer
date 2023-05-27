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
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Minigame_RoboTest_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddActorToGameElementList");
		
		ATN_Minigame_RoboTest_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Minigame_RoboTest_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Shutdown");
		
		ATN_Minigame_RoboTest_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.RefreshActivePayloads
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::RefreshActivePayloads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.RefreshActivePayloads");
		
		ATN_Minigame_RoboTest_C_RefreshActivePayloads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.IsStreakContinued?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PayloadActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StreakContinues                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Minigame_RoboTest_C::IsStreakContinued(class AActor* PayloadActor, bool* StreakContinues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.IsStreakContinued?");
		
		ATN_Minigame_RoboTest_C_IsStreakContinued_Params params {};
		params.PayloadActor = PayloadActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StreakContinues != nullptr)
			*StreakContinues = params.StreakContinues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.SpawnGameElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::SpawnGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.SpawnGameElements");
		
		ATN_Minigame_RoboTest_C_SpawnGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UpdateScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_RoboTest_C::UpdateScore(int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UpdateScore");
		
		ATN_Minigame_RoboTest_C_UpdateScore_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Initialize");
		
		ATN_Minigame_RoboTest_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UserConstructionScript");
		
		ATN_Minigame_RoboTest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ReceiveBeginPlay");
		
		ATN_Minigame_RoboTest_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddScore2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PayloadActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      BallTargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RegionHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_RoboTest_C::AddScore2(class AActor* PayloadActor, class AActor* BallTargetActor, int32_t RegionHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddScore2");
		
		ATN_Minigame_RoboTest_C_AddScore2_Params params {};
		params.PayloadActor = PayloadActor;
		params.BallTargetActor = BallTargetActor;
		params.RegionHit = RegionHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.DelayDestroy");
		
		ATN_Minigame_RoboTest_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.NewBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBallActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_RoboTest_C::NewBall(class AActor* NewBallActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.NewBall");
		
		ATN_Minigame_RoboTest_C_NewBall_Params params {};
		params.NewBallActor = NewBallActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.GameLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_RoboTest_C::GameLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.GameLoop");
		
		ATN_Minigame_RoboTest_C_GameLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ExecuteUbergraph_TN_Minigame_RoboTest
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_RoboTest_C::ExecuteUbergraph_TN_Minigame_RoboTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ExecuteUbergraph_TN_Minigame_RoboTest");
		
		ATN_Minigame_RoboTest_C_ExecuteUbergraph_TN_Minigame_RoboTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Minigame_RoboTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Minigame_RoboTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Minigame_RoboTest.TN_Minigame_RoboTest_C");
		return ptr;
	}

}


