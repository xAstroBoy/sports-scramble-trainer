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
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_BaseballGame_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.AddActorToGameElementList");
		
		ABB_Minigame_BaseballGame_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_BaseballGame_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Shutdown");
		
		ABB_Minigame_BaseballGame_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.SpawnActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_BaseballGame_C::SpawnActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.SpawnActors");
		
		ABB_Minigame_BaseballGame_C_SpawnActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_BaseballGame_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Initialize");
		
		ABB_Minigame_BaseballGame_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_BaseballGame_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.UserConstructionScript");
		
		ABB_Minigame_BaseballGame_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Minigame_BaseballGame_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ReceiveBeginPlay");
		
		ABB_Minigame_BaseballGame_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_BaseballGame_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.DelayDestroy");
		
		ABB_Minigame_BaseballGame_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.GameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_BaseballGame_C::GameOver(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.GameOver");
		
		ABB_Minigame_BaseballGame_C_GameOver_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ExecuteUbergraph_BB_Minigame_BaseballGame
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_BaseballGame_C::ExecuteUbergraph_BB_Minigame_BaseballGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ExecuteUbergraph_BB_Minigame_BaseballGame");
		
		ABB_Minigame_BaseballGame_C_ExecuteUbergraph_BB_Minigame_BaseballGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Minigame_BaseballGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Minigame_BaseballGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C");
		return ptr;
	}

}


