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
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.GetDelayPerBall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABW_Ball_Base_C*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::GetDelayPerBall(class ABW_Ball_Base_C* NewParam, float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.GetDelayPerBall");
		
		ABW_Train_05_BonusBalls_C_GetDelayPerBall_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TryAdvanceSingleBallProgression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::TryAdvanceSingleBallProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TryAdvanceSingleBallProgression");
		
		ABW_Train_05_BonusBalls_C_TryAdvanceSingleBallProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.GetShouldRespawn
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Train_05_BonusBalls_C::GetShouldRespawn(bool* Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.GetShouldRespawn");
		
		ABW_Train_05_BonusBalls_C_GetShouldRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reset != nullptr)
			*Reset = params.Reset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TryResetSingleBallProgression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::TryResetSingleBallProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TryResetSingleBallProgression");
		
		ABW_Train_05_BonusBalls_C_TryResetSingleBallProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.StopAudioComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::StopAudioComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.StopAudioComponents");
		
		ABW_Train_05_BonusBalls_C_StopAudioComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ProgressTutorialEnum
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::ProgressTutorialEnum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ProgressTutorialEnum");
		
		ABW_Train_05_BonusBalls_C_ProgressTutorialEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.InitializeTrainingRoom04
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::InitializeTrainingRoom04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.InitializeTrainingRoom04");
		
		ABW_Train_05_BonusBalls_C_InitializeTrainingRoom04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.UserConstructionScript");
		
		ABW_Train_05_BonusBalls_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_43C79D984E8A9710EBC30F9943929E81
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_43C79D984E8A9710EBC30F9943929E81(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_43C79D984E8A9710EBC30F9943929E81");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_43C79D984E8A9710EBC30F9943929E81_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_0C28BFC84AB47C78A7F0E8A2BCC877A8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_0C28BFC84AB47C78A7F0E8A2BCC877A8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_0C28BFC84AB47C78A7F0E8A2BCC877A8");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_0C28BFC84AB47C78A7F0E8A2BCC877A8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_E45B12854AFB015C620359B2F85BF11F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_E45B12854AFB015C620359B2F85BF11F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_E45B12854AFB015C620359B2F85BF11F");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_E45B12854AFB015C620359B2F85BF11F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_2B026B40485D31E7C825FFBC106266BB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_2B026B40485D31E7C825FFBC106266BB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_2B026B40485D31E7C825FFBC106266BB");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_2B026B40485D31E7C825FFBC106266BB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_3813B854411DC1FD0E7C7BBE25284E88
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_3813B854411DC1FD0E7C7BBE25284E88(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_3813B854411DC1FD0E7C7BBE25284E88");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_3813B854411DC1FD0E7C7BBE25284E88_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_FA0505B8434A1877054084831073FD1D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_FA0505B8434A1877054084831073FD1D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_FA0505B8434A1877054084831073FD1D");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_FA0505B8434A1877054084831073FD1D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_516A07254005ADEAC749BBBE90FFDB2F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_516A07254005ADEAC749BBBE90FFDB2F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_516A07254005ADEAC749BBBE90FFDB2F");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_516A07254005ADEAC749BBBE90FFDB2F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_4A05E7634166DBD6D74E09AE3106C7FB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_4A05E7634166DBD6D74E09AE3106C7FB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_4A05E7634166DBD6D74E09AE3106C7FB");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_4A05E7634166DBD6D74E09AE3106C7FB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_BD4CE0074B4056EE9A254196F186EA6D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_BD4CE0074B4056EE9A254196F186EA6D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_BD4CE0074B4056EE9A254196F186EA6D");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_BD4CE0074B4056EE9A254196F186EA6D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_BA65F9E24C6492C21538A09533083202
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_BA65F9E24C6492C21538A09533083202(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_BA65F9E24C6492C21538A09533083202");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_BA65F9E24C6492C21538A09533083202_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_642992B74F8FD02D2CC224A4E446C595
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_642992B74F8FD02D2CC224A4E446C595(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_642992B74F8FD02D2CC224A4E446C595");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_642992B74F8FD02D2CC224A4E446C595_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_94137FAF4495F37CD28D2688CD9DCFD0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_94137FAF4495F37CD28D2688CD9DCFD0(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_94137FAF4495F37CD28D2688CD9DCFD0");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_94137FAF4495F37CD28D2688CD9DCFD0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_BC0E761E43B7BCC908874B9539B8A524
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_BC0E761E43B7BCC908874B9539B8A524(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_BC0E761E43B7BCC908874B9539B8A524");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_BC0E761E43B7BCC908874B9539B8A524_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_96BD97464031A388FD34E18F1AD82DB7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_96BD97464031A388FD34E18F1AD82DB7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_96BD97464031A388FD34E18F1AD82DB7");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_96BD97464031A388FD34E18F1AD82DB7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_DC107CBD4A860AE96B28059A0D320162
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_DC107CBD4A860AE96B28059A0D320162(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_DC107CBD4A860AE96B28059A0D320162");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_DC107CBD4A860AE96B28059A0D320162_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_9AA5F0CF48E9B644BF1704A31659FA48
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::OnLoaded_9AA5F0CF48E9B644BF1704A31659FA48(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.OnLoaded_9AA5F0CF48E9B644BF1704A31659FA48");
		
		ABW_Train_05_BonusBalls_C_OnLoaded_9AA5F0CF48E9B644BF1704A31659FA48_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.Spawn A Ball
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::SpawnABall(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.Spawn A Ball");
		
		ABW_Train_05_BonusBalls_C_SpawnABall_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.RespawnLastBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Train_05_BonusBalls_C::RespawnLastBall(bool PlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.RespawnLastBall");
		
		ABW_Train_05_BonusBalls_C_RespawnLastBall_Params params {};
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.SpawnedBallDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::SpawnedBallDied(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.SpawnedBallDied");
		
		ABW_Train_05_BonusBalls_C_SpawnedBallDied_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.SpawnedBallGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::SpawnedBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.SpawnedBallGrabbed");
		
		ABW_Train_05_BonusBalls_C_SpawnedBallGrabbed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ReceiveBeginPlay");
		
		ABW_Train_05_BonusBalls_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepOne
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::TutorialStepOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepOne");
		
		ABW_Train_05_BonusBalls_C_TutorialStepOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepTwo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::TutorialStepTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepTwo");
		
		ABW_Train_05_BonusBalls_C_TutorialStepTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepThree
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::TutorialStepThree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepThree");
		
		ABW_Train_05_BonusBalls_C_TutorialStepThree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepFour
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::TutorialStepFour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.TutorialStepFour");
		
		ABW_Train_05_BonusBalls_C_TutorialStepFour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CountDownCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CountDownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CountDownCompleted");
		
		ABW_Train_05_BonusBalls_C_CountDownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.StartTraining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::StartTraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.StartTraining");
		
		ABW_Train_05_BonusBalls_C_StartTraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.SpawnBalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::SpawnBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.SpawnBalls");
		
		ABW_Train_05_BonusBalls_C_SpawnBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.GetCurrentLaneScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::GetCurrentLaneScore(int32_t LaneID, int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.GetCurrentLaneScore");
		
		ABW_Train_05_BonusBalls_C_GetCurrentLaneScore_Params params {};
		params.LaneID = LaneID;
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ListenForBowlingEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBowlingEvent                                      BowlingEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::ListenForBowlingEvent(int32_t PlayerId, EBowlingEvent BowlingEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ListenForBowlingEvent");
		
		ABW_Train_05_BonusBalls_C_ListenForBowlingEvent_Params params {};
		params.PlayerId = PlayerId;
		params.BowlingEvent = BowlingEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.RemindPlayerToGrabBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::RemindPlayerToGrabBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.RemindPlayerToGrabBall");
		
		ABW_Train_05_BonusBalls_C_RemindPlayerToGrabBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.NotifyTrainingContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::NotifyTrainingContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.NotifyTrainingContinue");
		
		ABW_Train_05_BonusBalls_C_NotifyTrainingContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.AnnouncerExitSequenceComplete");
		
		ABW_Train_05_BonusBalls_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ReceiveEndPlay");
		
		ABW_Train_05_BonusBalls_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_2");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_3");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_4");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_5");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_6");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_7");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_8");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_9");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_10");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_11
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_11");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_12
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Train_05_BonusBalls_C::CustomEvent_12()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.CustomEvent_12");
		
		ABW_Train_05_BonusBalls_C_CustomEvent_12_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ExecuteUbergraph_BW_Train_05_BonusBalls
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Train_05_BonusBalls_C::ExecuteUbergraph_BW_Train_05_BonusBalls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C.ExecuteUbergraph_BW_Train_05_BonusBalls");
		
		ABW_Train_05_BonusBalls_C_ExecuteUbergraph_BW_Train_05_BonusBalls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Train_05_BonusBalls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Train_05_BonusBalls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C");
		return ptr;
	}

}


