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
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.GetSpecificBall
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::GetSpecificBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.GetSpecificBall");
		
		ABB_Train_06_UnlimitedPitching_C_GetSpecificBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.UpdateBallOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::UpdateBallOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.UpdateBallOptions");
		
		ABB_Train_06_UnlimitedPitching_C_UpdateBallOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.BB_TRN_Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::BB_TRN_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.BB_TRN_Initialize");
		
		ABB_Train_06_UnlimitedPitching_C_BB_TRN_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.UserConstructionScript");
		
		ABB_Train_06_UnlimitedPitching_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ReceiveBeginPlay");
		
		ABB_Train_06_UnlimitedPitching_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_06_UnlimitedPitching_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ReceiveEndPlay");
		
		ABB_Train_06_UnlimitedPitching_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ChangeBallClass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BB_Ball_Base                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_06_UnlimitedPitching_C::ChangeBallClass(class UClass* BB_Ball_Base)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ChangeBallClass");
		
		ABB_Train_06_UnlimitedPitching_C_ChangeBallClass_Params params {};
		params.BB_Ball_Base = BB_Ball_Base;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.CountDownCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::CountDownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.CountDownCompleted");
		
		ABB_Train_06_UnlimitedPitching_C_CountDownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ShowCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::ShowCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ShowCountdown");
		
		ABB_Train_06_UnlimitedPitching_C_ShowCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.Unpaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_06_UnlimitedPitching_C::Unpaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.Unpaused");
		
		ABB_Train_06_UnlimitedPitching_C_Unpaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ExecuteUbergraph_BB_Train_06_UnlimitedPitching
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_06_UnlimitedPitching_C::ExecuteUbergraph_BB_Train_06_UnlimitedPitching(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C.ExecuteUbergraph_BB_Train_06_UnlimitedPitching");
		
		ABB_Train_06_UnlimitedPitching_C_ExecuteUbergraph_BB_Train_06_UnlimitedPitching_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Train_06_UnlimitedPitching_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Train_06_UnlimitedPitching_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C");
		return ptr;
	}

}


