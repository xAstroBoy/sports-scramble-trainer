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
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.Cleanup");
		
		AScramPlayer_BP_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoDecrement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScramPlayer_BP_C::SlomoDecrement(int32_t* Index, TArray<float> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoDecrement");
		
		AScramPlayer_BP_C_SlomoDecrement_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoIncrement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScramPlayer_BP_C::SlomoIncrement(int32_t* Index, TArray<float> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoIncrement");
		
		AScramPlayer_BP_C_SlomoIncrement_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.Slomo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::Slomo(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.Slomo");
		
		AScramPlayer_BP_C_Slomo_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetDefaults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::SetDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetDefaults");
		
		AScramPlayer_BP_C_SetDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetCommonPreferences
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCommonPlayerPreferences                    preferences                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetCommonPreferences(const struct FCommonPlayerPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetCommonPreferences");
		
		AScramPlayer_BP_C_SetCommonPreferences_Params params {};
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.GetCommonPreferences
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FCommonPlayerPreferences                    preferences                                                (Parm, OutParm, NoDestructor)
	 */
	void AScramPlayer_BP_C::GetCommonPreferences(struct FCommonPlayerPreferences* preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.GetCommonPreferences");
		
		AScramPlayer_BP_C_GetCommonPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (preferences != nullptr)
			*preferences = params.preferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetBowlingPreferences
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingPlayerPreferences                   preferences                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetBowlingPreferences(const struct FBowlingPlayerPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetBowlingPreferences");
		
		AScramPlayer_BP_C_SetBowlingPreferences_Params params {};
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballBatterPreferences
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBaseballBatterPreferences                  preferences                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetBaseballBatterPreferences(const struct FBaseballBatterPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballBatterPreferences");
		
		AScramPlayer_BP_C_SetBaseballBatterPreferences_Params params {};
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballPitcherPreferences
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBaseballPitcherPreferences                 preferences                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetBaseballPitcherPreferences(const struct FBaseballPitcherPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballPitcherPreferences");
		
		AScramPlayer_BP_C_SetBaseballPitcherPreferences_Params params {};
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetTennisPreferences
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTennisPlayerPreferences                    preferences                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetTennisPreferences(const struct FTennisPlayerPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetTennisPreferences");
		
		AScramPlayer_BP_C_SetTennisPreferences_Params params {};
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.GetBowlingPreferences
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FBowlingPlayerPreferences                   preferences                                                (Parm, OutParm, NoDestructor)
	 */
	void AScramPlayer_BP_C::GetBowlingPreferences(struct FBowlingPlayerPreferences* preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.GetBowlingPreferences");
		
		AScramPlayer_BP_C_GetBowlingPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (preferences != nullptr)
			*preferences = params.preferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballBatterPreferences
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FBaseballBatterPreferences                  preferences                                                (Parm, OutParm, NoDestructor)
	 */
	void AScramPlayer_BP_C::GetBaseballBatterPreferences(struct FBaseballBatterPreferences* preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballBatterPreferences");
		
		AScramPlayer_BP_C_GetBaseballBatterPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (preferences != nullptr)
			*preferences = params.preferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballPitcherPreferences
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FBaseballPitcherPreferences                 preferences                                                (Parm, OutParm, NoDestructor)
	 */
	void AScramPlayer_BP_C::GetBaseballPitcherPreferences(struct FBaseballPitcherPreferences* preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballPitcherPreferences");
		
		AScramPlayer_BP_C_GetBaseballPitcherPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (preferences != nullptr)
			*preferences = params.preferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.GetTennisPreferences
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTennisPlayerPreferences                    preferences                                                (Parm, OutParm, NoDestructor)
	 */
	void AScramPlayer_BP_C::GetTennisPreferences(struct FTennisPlayerPreferences* preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.GetTennisPreferences");
		
		AScramPlayer_BP_C_GetTennisPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (preferences != nullptr)
			*preferences = params.preferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.Initialize");
		
		AScramPlayer_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetPlayerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetPlayerVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetPlayerVisibility");
		
		AScramPlayer_BP_C_SetPlayerVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.UserConstructionScript");
		
		AScramPlayer_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramPlayer_BP_C::Timeline_Fade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__FinishedFunc");
		
		AScramPlayer_BP_C_Timeline_Fade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramPlayer_BP_C::Timeline_Fade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__UpdateFunc");
		
		AScramPlayer_BP_C_Timeline_Fade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7");
		
		AScramPlayer_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_X_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_6");
		
		AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_X_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_5");
		
		AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1");
		
		AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_Y_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_4");
		
		AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_Y_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_3");
		
		AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_X_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_2");
		
		AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::InpActEvt_Y_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_1");
		
		AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveTick");
		
		AScramPlayer_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveBeginPlay");
		
		AScramPlayer_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.FadeToBlack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::FadeToBlack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.FadeToBlack");
		
		AScramPlayer_BP_C_FadeToBlack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.FadeFromBlack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::FadeFromBlack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.FadeFromBlack");
		
		AScramPlayer_BP_C_FadeFromBlack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.InitialFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::InitialFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.InitialFadeIn");
		
		AScramPlayer_BP_C_InitialFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.GrabbedSomething
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::GrabbedSomething(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.GrabbedSomething");
		
		AScramPlayer_BP_C_GrabbedSomething_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  ReturnTransform                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayer_BP_C::OnPlayerOutOfBoundary(const struct FTransform& ReturnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary");
		
		AScramPlayer_BP_C_OnPlayerOutOfBoundary_Params params {};
		params.ReturnTransform = ReturnTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerEnterBoundary
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::OnPlayerEnterBoundary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerEnterBoundary");
		
		AScramPlayer_BP_C_OnPlayerEnterBoundary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.PauseGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::PauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.PauseGame");
		
		AScramPlayer_BP_C_PauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.ResumeGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::ResumeGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.ResumeGame");
		
		AScramPlayer_BP_C_ResumeGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::QueuedPlayerOutOfBoundary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary");
		
		AScramPlayer_BP_C_QueuedPlayerOutOfBoundary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerEnterBoundary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::QueuedPlayerEnterBoundary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerEnterBoundary");
		
		AScramPlayer_BP_C_QueuedPlayerEnterBoundary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.ClientReady
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::ClientReady(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.ClientReady");
		
		AScramPlayer_BP_C_ClientReady_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.HostFadeToBlack
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::HostFadeToBlack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.HostFadeToBlack");
		
		AScramPlayer_BP_C_HostFadeToBlack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.SetAvatarMaterials
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AScramPlayer_BP_C::SetAvatarMaterials(const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.SetAvatarMaterials");
		
		AScramPlayer_BP_C_SetAvatarMaterials_Params params {};
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.RecenterDetected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::RecenterDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.RecenterDetected");
		
		AScramPlayer_BP_C_RecenterDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.TravelCapsuleOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::TravelCapsuleOpened(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.TravelCapsuleOpened");
		
		AScramPlayer_BP_C_TravelCapsuleOpened_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveEndPlay");
		
		AScramPlayer_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.ExecuteUbergraph_ScramPlayer_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::ExecuteUbergraph_ScramPlayer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.ExecuteUbergraph_ScramPlayer_BP");
		
		AScramPlayer_BP_C_ExecuteUbergraph_ScramPlayer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerRecentered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::PlayerRecentered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerRecentered__DelegateSignature");
		
		AScramPlayer_BP_C_PlayerRecentered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.RemotePlayerReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayer_BP_C::RemotePlayerReady__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.RemotePlayerReady__DelegateSignature");
		
		AScramPlayer_BP_C_RemotePlayerReady__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerEnterBoundary__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::PlayerEnterBoundary__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerEnterBoundary__DelegateSignature");
		
		AScramPlayer_BP_C_PlayerEnterBoundary__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::PlayerExitBoundary__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature");
		
		AScramPlayer_BP_C_PlayerExitBoundary__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerFadedOut__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayer_BP_C::PlayerFadedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerFadedOut__DelegateSignature");
		
		AScramPlayer_BP_C_PlayerFadedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayer_BP.ScramPlayer_BP_C");
		return ptr;
	}

}


