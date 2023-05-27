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
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UpdateOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::UpdateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UpdateOptions");
		
		ATN_Train_09_UnlimitedServing_C_UpdateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.InitializeTrainingRoom09
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::InitializeTrainingRoom09()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.InitializeTrainingRoom09");
		
		ATN_Train_09_UnlimitedServing_C_InitializeTrainingRoom09_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UserConstructionScript");
		
		ATN_Train_09_UnlimitedServing_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveBeginPlay");
		
		ATN_Train_09_UnlimitedServing_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.TN_TNG_BallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_09_UnlimitedServing_C::TN_TNG_BallHit(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.TN_TNG_BallHit");
		
		ATN_Train_09_UnlimitedServing_C_TN_TNG_BallHit_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.SpawnServeBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::SpawnServeBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.SpawnServeBall");
		
		ATN_Train_09_UnlimitedServing_C_SpawnServeBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.BallDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_09_UnlimitedServing_C::BallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.BallDestroyed");
		
		ATN_Train_09_UnlimitedServing_C_BallDestroyed_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.CountDownCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::CountDownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.CountDownCompleted");
		
		ATN_Train_09_UnlimitedServing_C_CountDownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ShowCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::ShowCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ShowCountdown");
		
		ATN_Train_09_UnlimitedServing_C_ShowCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.Unpaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_09_UnlimitedServing_C::Unpaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.Unpaused");
		
		ATN_Train_09_UnlimitedServing_C_Unpaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_09_UnlimitedServing_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveEndPlay");
		
		ATN_Train_09_UnlimitedServing_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ExecuteUbergraph_TN_Train_09_UnlimitedServing
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_09_UnlimitedServing_C::ExecuteUbergraph_TN_Train_09_UnlimitedServing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ExecuteUbergraph_TN_Train_09_UnlimitedServing");
		
		ATN_Train_09_UnlimitedServing_C_ExecuteUbergraph_TN_Train_09_UnlimitedServing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Train_09_UnlimitedServing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Train_09_UnlimitedServing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C");
		return ptr;
	}

}


