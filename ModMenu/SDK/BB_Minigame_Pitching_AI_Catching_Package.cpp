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
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.Shutdown");
		
		ABB_Minigame_Pitching_AI_Catching_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.AddActorToGameElementList");
		
		ABB_Minigame_Pitching_AI_Catching_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.SpawnActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::SpawnActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.SpawnActors");
		
		ABB_Minigame_Pitching_AI_Catching_C_SpawnActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.InitializeMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::InitializeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.InitializeMode");
		
		ABB_Minigame_Pitching_AI_Catching_C_InitializeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.UserConstructionScript");
		
		ABB_Minigame_Pitching_AI_Catching_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.ReceiveBeginPlay");
		
		ABB_Minigame_Pitching_AI_Catching_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.DelayDestroy");
		
		ABB_Minigame_Pitching_AI_Catching_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.ExecuteUbergraph_BB_Minigame_Pitching_AI_Catching
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_AI_Catching_C::ExecuteUbergraph_BB_Minigame_Pitching_AI_Catching(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C.ExecuteUbergraph_BB_Minigame_Pitching_AI_Catching");
		
		ABB_Minigame_Pitching_AI_Catching_C_ExecuteUbergraph_BB_Minigame_Pitching_AI_Catching_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Minigame_Pitching_AI_Catching_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Minigame_Pitching_AI_Catching_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_AI_Catching.BB_Minigame_Pitching_AI_Catching_C");
		return ptr;
	}

}


