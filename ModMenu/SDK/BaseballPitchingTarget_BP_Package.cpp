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
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AScramBall*                                  IncomingBall                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValidHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballPitchingTarget_BP_C::ValidateBallTrajectory(class AScramBall* IncomingBall, bool* ValidHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory");
		
		ABaseballPitchingTarget_BP_C_ValidateBallTrajectory_Params params {};
		params.IncomingBall = IncomingBall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidHit != nullptr)
			*ValidHit = params.ValidHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::SetVisibleElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements");
		
		ABaseballPitchingTarget_BP_C_SetVisibleElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript");
		
		ABaseballPitchingTarget_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay");
		
		ABaseballPitchingTarget_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPitchingTarget_BP_C::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered");
		
		ABaseballPitchingTarget_BP_C_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::AutoCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup");
		
		ABaseballPitchingTarget_BP_C_AutoCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::BreakTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target");
		
		ABaseballPitchingTarget_BP_C_BreakTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::LocalShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow");
		
		ABaseballPitchingTarget_BP_C_LocalShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPitchingTarget_BP_C::LocalHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide");
		
		ABaseballPitchingTarget_BP_C_LocalHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballPitchingTarget_BP_C::ChangeTargetVisibility(bool ShowTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility");
		
		ABaseballPitchingTarget_BP_C_ChangeTargetVisibility_Params params {};
		params.ShowTarget = ShowTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPitchingTarget_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay");
		
		ABaseballPitchingTarget_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPitchingTarget_BP_C::ExecuteUbergraph_BaseballPitchingTarget_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP");
		
		ABaseballPitchingTarget_BP_C_ExecuteUbergraph_BaseballPitchingTarget_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPitchingTarget_BP_C::PitchingTargetHit__DelegateSignature(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature");
		
		ABaseballPitchingTarget_BP_C_PitchingTargetHit__DelegateSignature_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballPitchingTarget_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballPitchingTarget_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C");
		return ptr;
	}

}


