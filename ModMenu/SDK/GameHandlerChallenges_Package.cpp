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
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBaseball
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::SetupBaseball()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBaseball");
		
		AGameHandlerChallenges_C_SetupBaseball_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBowling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::SetupBowling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBowling");
		
		AGameHandlerChallenges_C_SetupBowling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.Shutdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.Shutdown");
		
		AGameHandlerChallenges_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.StartChallenges
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::StartChallenges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.StartChallenges");
		
		AGameHandlerChallenges_C_StartChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.SetupTennis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::SetupTennis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.SetupTennis");
		
		AGameHandlerChallenges_C_SetupTennis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.UserConstructionScript");
		
		AGameHandlerChallenges_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.ReceiveBeginPlay");
		
		AGameHandlerChallenges_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.MiniGameDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerChallenges_C::MiniGameDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.MiniGameDestroyed");
		
		AGameHandlerChallenges_C_MiniGameDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.QuitGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::QuitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.QuitGame");
		
		AGameHandlerChallenges_C_QuitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.ChallengeComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FResultsData                                Results                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerChallenges_C::ChallengeComplete(const struct FResultsData& Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.ChallengeComplete");
		
		AGameHandlerChallenges_C_ChallengeComplete_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.RestartMinigame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerChallenges_C::RestartMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.RestartMinigame");
		
		AGameHandlerChallenges_C_RestartMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerChallenges.GameHandlerChallenges_C.ExecuteUbergraph_GameHandlerChallenges
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerChallenges_C::ExecuteUbergraph_GameHandlerChallenges(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.ExecuteUbergraph_GameHandlerChallenges");
		
		AGameHandlerChallenges_C_ExecuteUbergraph_GameHandlerChallenges_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameHandlerChallenges_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameHandlerChallenges_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerChallenges.GameHandlerChallenges_C");
		return ptr;
	}

}


