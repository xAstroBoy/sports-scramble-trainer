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
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Minigame_ScrambleTest_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.AddActorToGameElementList");
		
		ATN_Minigame_ScrambleTest_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Minigame_ScrambleTest_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.Shutdown");
		
		ATN_Minigame_ScrambleTest_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.RefreshActivePayloads
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::RefreshActivePayloads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.RefreshActivePayloads");
		
		ATN_Minigame_ScrambleTest_C_RefreshActivePayloads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.IsStreakContinued?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PayloadActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StreakContinues                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Minigame_ScrambleTest_C::IsStreakContinued(class AActor* PayloadActor, bool* StreakContinues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.IsStreakContinued?");
		
		ATN_Minigame_ScrambleTest_C_IsStreakContinued_Params params {};
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
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.SpawnGameElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::SpawnGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.SpawnGameElements");
		
		ATN_Minigame_ScrambleTest_C_SpawnGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.UpdateScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_ScrambleTest_C::UpdateScore(int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.UpdateScore");
		
		ATN_Minigame_ScrambleTest_C_UpdateScore_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.Initialize");
		
		ATN_Minigame_ScrambleTest_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.UserConstructionScript");
		
		ATN_Minigame_ScrambleTest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.ReceiveBeginPlay");
		
		ATN_Minigame_ScrambleTest_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.DelayDestroy");
		
		ATN_Minigame_ScrambleTest_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.NewBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBallActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_ScrambleTest_C::NewBall(class AActor* NewBallActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.NewBall");
		
		ATN_Minigame_ScrambleTest_C_NewBall_Params params {};
		params.NewBallActor = NewBallActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.GameLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::GameLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.GameLoop");
		
		ATN_Minigame_ScrambleTest_C_GameLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.LauncherSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_ScrambleTest_C::LauncherSelected(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.LauncherSelected");
		
		ATN_Minigame_ScrambleTest_C_LauncherSelected_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.SpawnLauncherSelectionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Minigame_ScrambleTest_C::SpawnLauncherSelectionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.SpawnLauncherSelectionMenu");
		
		ATN_Minigame_ScrambleTest_C_SpawnLauncherSelectionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.ExecuteUbergraph_TN_Minigame_ScrambleTest
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Minigame_ScrambleTest_C::ExecuteUbergraph_TN_Minigame_ScrambleTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.ExecuteUbergraph_TN_Minigame_ScrambleTest");
		
		ATN_Minigame_ScrambleTest_C_ExecuteUbergraph_TN_Minigame_ScrambleTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Minigame_ScrambleTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Minigame_ScrambleTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C");
		return ptr;
	}

}


