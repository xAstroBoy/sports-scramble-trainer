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
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.UpdateOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::UpdateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.UpdateOptions");
		
		ATN_Train_08_UnlimitedVolley_C_UpdateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.GetNextLaunchTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBallLauncherParameters                     LauncherParameter                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_08_UnlimitedVolley_C::GetNextLaunchTarget(struct FBallLauncherParameters* LauncherParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.GetNextLaunchTarget");
		
		ATN_Train_08_UnlimitedVolley_C_GetNextLaunchTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LauncherParameter != nullptr)
			*LauncherParameter = params.LauncherParameter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.GetRandomLaunchTargetList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::GetRandomLaunchTargetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.GetRandomLaunchTargetList");
		
		ATN_Train_08_UnlimitedVolley_C_GetRandomLaunchTargetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.InitializeTrainingRoom08
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::InitializeTrainingRoom08()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.InitializeTrainingRoom08");
		
		ATN_Train_08_UnlimitedVolley_C_InitializeTrainingRoom08_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.UserConstructionScript");
		
		ATN_Train_08_UnlimitedVolley_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ReceiveBeginPlay");
		
		ATN_Train_08_UnlimitedVolley_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.LaunchLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::LaunchLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.LaunchLoop");
		
		ATN_Train_08_UnlimitedVolley_C_LaunchLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.NormalLaunch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::NormalLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.NormalLaunch");
		
		ATN_Train_08_UnlimitedVolley_C_NormalLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ChargeShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::ChargeShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ChargeShot");
		
		ATN_Train_08_UnlimitedVolley_C_ChargeShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.SliceShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::SliceShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.SliceShot");
		
		ATN_Train_08_UnlimitedVolley_C_SliceShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ChangePlayerInstrument
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      PlayerInstrumentClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_08_UnlimitedVolley_C::ChangePlayerInstrument(class UClass* PlayerInstrumentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ChangePlayerInstrument");
		
		ATN_Train_08_UnlimitedVolley_C_ChangePlayerInstrument_Params params {};
		params.PlayerInstrumentClass = PlayerInstrumentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.CountDownCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::CountDownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.CountDownCompleted");
		
		ATN_Train_08_UnlimitedVolley_C_CountDownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ShowCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::ShowCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ShowCountdown");
		
		ATN_Train_08_UnlimitedVolley_C_ShowCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.Unpaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Train_08_UnlimitedVolley_C::Unpaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.Unpaused");
		
		ATN_Train_08_UnlimitedVolley_C_Unpaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_08_UnlimitedVolley_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ReceiveEndPlay");
		
		ATN_Train_08_UnlimitedVolley_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ExecuteUbergraph_TN_Train_08_UnlimitedVolley
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Train_08_UnlimitedVolley_C::ExecuteUbergraph_TN_Train_08_UnlimitedVolley(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ExecuteUbergraph_TN_Train_08_UnlimitedVolley");
		
		ATN_Train_08_UnlimitedVolley_C_ExecuteUbergraph_TN_Train_08_UnlimitedVolley_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Train_08_UnlimitedVolley_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Train_08_UnlimitedVolley_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C");
		return ptr;
	}

}


