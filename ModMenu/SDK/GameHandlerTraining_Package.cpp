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
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.SetupBaseball
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::SetupBaseball()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.SetupBaseball");
		
		AGameHandlerTraining_C_SetupBaseball_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.SetupBowling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::SetupBowling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.SetupBowling");
		
		AGameHandlerTraining_C_SetupBowling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.Shutdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.Shutdown");
		
		AGameHandlerTraining_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.StartTraining
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::StartTraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.StartTraining");
		
		AGameHandlerTraining_C_StartTraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.SetupTennis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::SetupTennis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.SetupTennis");
		
		AGameHandlerTraining_C_SetupTennis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.UserConstructionScript");
		
		AGameHandlerTraining_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.ReceiveBeginPlay");
		
		AGameHandlerTraining_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.MiniGameDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerTraining_C::MiniGameDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.MiniGameDestroyed");
		
		AGameHandlerTraining_C_MiniGameDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.TrainingComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FResultsData                                Results                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerTraining_C::TrainingComplete(const struct FResultsData& Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.TrainingComplete");
		
		AGameHandlerTraining_C_TrainingComplete_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.QuitGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerTraining_C::QuitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.QuitGame");
		
		AGameHandlerTraining_C_QuitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerTraining.GameHandlerTraining_C.ExecuteUbergraph_GameHandlerTraining
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerTraining_C::ExecuteUbergraph_GameHandlerTraining(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.ExecuteUbergraph_GameHandlerTraining");
		
		AGameHandlerTraining_C_ExecuteUbergraph_GameHandlerTraining_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameHandlerTraining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameHandlerTraining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerTraining.GameHandlerTraining_C");
		return ptr;
	}

}


