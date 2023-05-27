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
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Cleanup");
		
		APauseCapsule_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.SpawnPauseMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::SpawnPauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.SpawnPauseMenu");
		
		APauseCapsule_C_SpawnPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Initialize");
		
		APauseCapsule_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.UserConstructionScript");
		
		APauseCapsule_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APauseCapsule_C::Timeline_BlackPulse__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__FinishedFunc");
		
		APauseCapsule_C_Timeline_BlackPulse__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APauseCapsule_C::Timeline_BlackPulse__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__UpdateFunc");
		
		APauseCapsule_C_Timeline_BlackPulse__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APauseCapsule_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ReceiveBeginPlay");
		
		APauseCapsule_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.ShowCapsule
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::ShowCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ShowCapsule");
		
		APauseCapsule_C_ShowCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.Unpause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               KeepCapsule                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APauseCapsule_C::Unpause(bool KeepCapsule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Unpause");
		
		APauseCapsule_C_Unpause_Params params {};
		params.KeepCapsule = KeepCapsule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseCapsule_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ReceiveEndPlay");
		
		APauseCapsule_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.BlackPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::BlackPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.BlackPulse");
		
		APauseCapsule_C_BlackPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.BlackPulseOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::BlackPulseOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.BlackPulseOff");
		
		APauseCapsule_C_BlackPulseOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.CreateCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::CreateCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.CreateCapsule");
		
		APauseCapsule_C_CreateCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.RemoveCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::RemoveCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.RemoveCapsule");
		
		APauseCapsule_C_RemoveCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseCapsule_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ReceiveTick");
		
		APauseCapsule_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.RemoveThisActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::RemoveThisActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.RemoveThisActor");
		
		APauseCapsule_C_RemoveThisActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.DemoUnpause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               KeepCapsule                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReenablePause                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APauseCapsule_C::DemoUnpause(bool KeepCapsule, bool ReenablePause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.DemoUnpause");
		
		APauseCapsule_C_DemoUnpause_Params params {};
		params.KeepCapsule = KeepCapsule;
		params.ReenablePause = ReenablePause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.BeginUnpause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::BeginUnpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.BeginUnpause");
		
		APauseCapsule_C_BeginUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.QueuedRemoveCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::QueuedRemoveCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.QueuedRemoveCapsule");
		
		APauseCapsule_C_QueuedRemoveCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.ExecuteUbergraph_PauseCapsule
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseCapsule_C::ExecuteUbergraph_PauseCapsule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ExecuteUbergraph_PauseCapsule");
		
		APauseCapsule_C_ExecuteUbergraph_PauseCapsule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.PulseEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::PulseEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.PulseEnd__DelegateSignature");
		
		APauseCapsule_C_PulseEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseCapsule.PauseCapsule_C.TransitionReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APauseCapsule_C::TransitionReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.TransitionReady__DelegateSignature");
		
		APauseCapsule_C_TransitionReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APauseCapsule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APauseCapsule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PauseCapsule.PauseCapsule_C");
		return ptr;
	}

}


