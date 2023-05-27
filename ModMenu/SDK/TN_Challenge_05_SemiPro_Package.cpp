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
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SetupInfoText");
		
		ATN_Challenge_05_SemiPro_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Challenge_05_SemiPro_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.AddActorToGameElementList");
		
		ATN_Challenge_05_SemiPro_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Challenge_05_SemiPro_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shutdown");
		
		ATN_Challenge_05_SemiPro_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Initialize");
		
		ATN_Challenge_05_SemiPro_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.UserConstructionScript");
		
		ATN_Challenge_05_SemiPro_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_05_SemiPro_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveEndPlay");
		
		ATN_Challenge_05_SemiPro_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SportManager_MatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_05_SemiPro_C::SportManager_MatchComplete(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SportManager_MatchComplete");
		
		ATN_Challenge_05_SemiPro_C_SportManager_MatchComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_05_SemiPro_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.NotifyChallengeContinue");
		
		ATN_Challenge_05_SemiPro_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.TriggerAlternativeCadence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::TriggerAlternativeCadence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.TriggerAlternativeCadence");
		
		ATN_Challenge_05_SemiPro_C_TriggerAlternativeCadence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.DelayDestroy");
		
		ATN_Challenge_05_SemiPro_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.OnInstrumentGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_05_SemiPro_C::OnInstrumentGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.OnInstrumentGrabbed");
		
		ATN_Challenge_05_SemiPro_C_OnInstrumentGrabbed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveBeginPlay");
		
		ATN_Challenge_05_SemiPro_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_05_SemiPro_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shortcut");
		
		ATN_Challenge_05_SemiPro_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ExecuteUbergraph_TN_Challenge_05_SemiPro
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_05_SemiPro_C::ExecuteUbergraph_TN_Challenge_05_SemiPro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ExecuteUbergraph_TN_Challenge_05_SemiPro");
		
		ATN_Challenge_05_SemiPro_C_ExecuteUbergraph_TN_Challenge_05_SemiPro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Challenge_05_SemiPro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Challenge_05_SemiPro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C");
		return ptr;
	}

}


