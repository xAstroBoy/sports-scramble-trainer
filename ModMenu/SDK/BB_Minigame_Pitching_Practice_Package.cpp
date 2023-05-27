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
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.DisableScoreOnWindows
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Practice_C::DisableScoreOnWindows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.DisableScoreOnWindows");
		
		ABB_Minigame_Pitching_Practice_C_DisableScoreOnWindows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Practice_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.UserConstructionScript");
		
		ABB_Minigame_Pitching_Practice_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Practice_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.ReceiveBeginPlay");
		
		ABB_Minigame_Pitching_Practice_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.ThrowPlayerTheBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Practice_C::ThrowPlayerTheBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.ThrowPlayerTheBall");
		
		ABB_Minigame_Pitching_Practice_C_ThrowPlayerTheBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.PlayerTeleportComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Practice_C::PlayerTeleportComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.PlayerTeleportComplete");
		
		ABB_Minigame_Pitching_Practice_C_PlayerTeleportComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.NoTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Practice_C::NoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.NoTeleport");
		
		ABB_Minigame_Pitching_Practice_C_NoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.ExecuteUbergraph_BB_Minigame_Pitching_Practice
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Practice_C::ExecuteUbergraph_BB_Minigame_Pitching_Practice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C.ExecuteUbergraph_BB_Minigame_Pitching_Practice");
		
		ABB_Minigame_Pitching_Practice_C_ExecuteUbergraph_BB_Minigame_Pitching_Practice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Minigame_Pitching_Practice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Minigame_Pitching_Practice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C");
		return ptr;
	}

}


