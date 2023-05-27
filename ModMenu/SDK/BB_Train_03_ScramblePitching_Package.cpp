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
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HasScrambleBallOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasFrisbee                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_03_ScramblePitching_C::HasScrambleBallOption(class UClass* Ball, bool* HasFrisbee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HasScrambleBallOption");
		
		ABB_Train_03_ScramblePitching_C_HasScrambleBallOption_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFrisbee != nullptr)
			*HasFrisbee = params.HasFrisbee;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StopPlayingAudioComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::StopPlayingAudioComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StopPlayingAudioComponents");
		
		ABB_Train_03_ScramblePitching_C_StopPlayingAudioComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.SetupInfoText");
		
		ABB_Train_03_ScramblePitching_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BB_TRN_Balls_Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::BB_TRN_Balls_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BB_TRN_Balls_Initialize");
		
		ABB_Train_03_ScramblePitching_C_BB_TRN_Balls_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.UserConstructionScript");
		
		ABB_Train_03_ScramblePitching_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F952AA99A92
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F952AA99A92(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F952AA99A92");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F952AA99A92_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95113477F2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95113477F2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95113477F2");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95113477F2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95928AE721
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95928AE721(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95928AE721");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95928AE721_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95E4979D6E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95E4979D6E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95E4979D6E");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95E4979D6E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95383FF254
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95383FF254(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95383FF254");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95383FF254_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9556800999
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9556800999(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9556800999");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9556800999_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950B2B0951
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F950B2B0951(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950B2B0951");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F950B2B0951_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9568235135
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9568235135(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9568235135");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9568235135_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9588CA43D4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9588CA43D4(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9588CA43D4");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9588CA43D4_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE2309F4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95AE2309F4(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE2309F4");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95AE2309F4_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950FD91324
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F950FD91324(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950FD91324");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F950FD91324_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F953BBD1590
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F953BBD1590(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F953BBD1590");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F953BBD1590_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9511D283D2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9511D283D2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9511D283D2");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9511D283D2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D5B00049
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95D5B00049(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D5B00049");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95D5B00049_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951D0DADBB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F951D0DADBB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951D0DADBB");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F951D0DADBB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9585D09564
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9585D09564(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9585D09564");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9585D09564_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE0101F5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95AE0101F5(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE0101F5");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95AE0101F5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9515CBE021
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9515CBE021(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9515CBE021");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9515CBE021_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951038066F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F951038066F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951038066F");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F951038066F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95ECD31E11
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95ECD31E11(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95ECD31E11");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95ECD31E11_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95546303AA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95546303AA(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95546303AA");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95546303AA_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_8CA079274ABE8477635E8ABB85851604
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_8CA079274ABE8477635E8ABB85851604(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_8CA079274ABE8477635E8ABB85851604");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_8CA079274ABE8477635E8ABB85851604_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_9925058B4CD241A5192830B0C00DD715
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_9925058B4CD241A5192830B0C00DD715(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_9925058B4CD241A5192830B0C00DD715");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_9925058B4CD241A5192830B0C00DD715_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_06D315AB4ACFB3453B11B49AD83384BD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::OnLoaded_06D315AB4ACFB3453B11B49AD83384BD(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_06D315AB4ACFB3453B11B49AD83384BD");
		
		ABB_Train_03_ScramblePitching_C_OnLoaded_06D315AB4ACFB3453B11B49AD83384BD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BaseballEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BaseballEvent");
		
		ABB_Train_03_ScramblePitching_C_BaseballEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ResetGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ResetGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ResetGate");
		
		ABB_Train_03_ScramblePitching_C_ResetGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.PitcherCaughtSomething
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::PitcherCaughtSomething(class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.PitcherCaughtSomething");
		
		ABB_Train_03_ScramblePitching_C_PitcherCaughtSomething_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_24
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_24");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_25
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_25()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_25");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_25_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerHitFirstFrisbeeTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::StartTimerHitFirstFrisbeeTarget(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerHitFirstFrisbeeTarget");
		
		ABB_Train_03_ScramblePitching_C_StartTimerHitFirstFrisbeeTarget_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.FrisbeeReminderVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::FrisbeeReminderVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.FrisbeeReminderVO");
		
		ABB_Train_03_ScramblePitching_C_FrisbeeReminderVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabFrisbee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::StartTimerGrabFrisbee(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabFrisbee");
		
		ABB_Train_03_ScramblePitching_C_StartTimerGrabFrisbee_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabFrisbee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ReminderGrabFrisbee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabFrisbee");
		
		ABB_Train_03_ScramblePitching_C_ReminderGrabFrisbee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabImbuedFrisbee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::StartTimerGrabImbuedFrisbee(float Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabImbuedFrisbee");
		
		ABB_Train_03_ScramblePitching_C_StartTimerGrabImbuedFrisbee_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabImbuedFrisbee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ReminderGrabImbuedFrisbee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabImbuedFrisbee");
		
		ABB_Train_03_ScramblePitching_C_ReminderGrabImbuedFrisbee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_21
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_21()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_21");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_21_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_22
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_22()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_22");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_22_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_23
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_23()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_23");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_23_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveBeginPlay");
		
		ABB_Train_03_ScramblePitching_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReadyForTraining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ReadyForTraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReadyForTraining");
		
		ABB_Train_03_ScramblePitching_C_ReadyForTraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::Tutorial_Step_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_01");
		
		ABB_Train_03_ScramblePitching_C_Tutorial_Step_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveEndPlay");
		
		ABB_Train_03_ScramblePitching_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CalculateScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CalculateScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CalculateScore");
		
		ABB_Train_03_ScramblePitching_C_CalculateScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CountDownCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CountDownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CountDownCompleted");
		
		ABB_Train_03_ScramblePitching_C_CountDownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::TrainingStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingStart");
		
		ABB_Train_03_ScramblePitching_C_TrainingStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CatcherCaughtBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CatcherCaughtBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CatcherCaughtBall");
		
		ABB_Train_03_ScramblePitching_C_CatcherCaughtBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.LookAtScrambleBalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::LookAtScrambleBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.LookAtScrambleBalls");
		
		ABB_Train_03_ScramblePitching_C_LookAtScrambleBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ScrambleSelectionShown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::ScrambleSelectionShown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ScrambleSelectionShown");
		
		ABB_Train_03_ScramblePitching_C_ScrambleSelectionShown_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NotifyTrainingContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::NotifyTrainingContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NotifyTrainingContinue");
		
		ABB_Train_03_ScramblePitching_C_NotifyTrainingContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.AnnouncerExitSequenceComplete");
		
		ABB_Train_03_ScramblePitching_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::Tutorial_Step_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_02");
		
		ABB_Train_03_ScramblePitching_C_Tutorial_Step_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::TrainingTargetHit(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingTargetHit");
		
		ABB_Train_03_ScramblePitching_C_TrainingTargetHit_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_03
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::Tutorial_Step_03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_03");
		
		ABB_Train_03_ScramblePitching_C_Tutorial_Step_03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::Tutorial_Step_04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_04");
		
		ABB_Train_03_ScramblePitching_C_Tutorial_Step_04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForNonImbuedFrisbeeGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ListenForNonImbuedFrisbeeGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForNonImbuedFrisbeeGrabbed");
		
		ABB_Train_03_ScramblePitching_C_ListenForNonImbuedFrisbeeGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NonImbuedFrisbeeGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::NonImbuedFrisbeeGrab(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NonImbuedFrisbeeGrab");
		
		ABB_Train_03_ScramblePitching_C_NonImbuedFrisbeeGrab_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_05
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::Tutorial_Step_05()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_05");
		
		ABB_Train_03_ScramblePitching_C_Tutorial_Step_05_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForImbuedFrisbeeGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ListenForImbuedFrisbeeGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForImbuedFrisbeeGrabbed");
		
		ABB_Train_03_ScramblePitching_C_ListenForImbuedFrisbeeGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ImbuedFrisbeeGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::ImbuedFrisbeeGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ImbuedFrisbeeGrabbed");
		
		ABB_Train_03_ScramblePitching_C_ImbuedFrisbeeGrabbed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ValidHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::ValidHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ValidHit");
		
		ABB_Train_03_ScramblePitching_C_ValidHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HandlePostTutorialTargetHits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::HandlePostTutorialTargetHits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HandlePostTutorialTargetHits");
		
		ABB_Train_03_ScramblePitching_C_HandlePostTutorialTargetHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.GetNextPitchingTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::GetNextPitchingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.GetNextPitchingTarget");
		
		ABB_Train_03_ScramblePitching_C_GetNextPitchingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.DestroyAllInstruments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::DestroyAllInstruments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.DestroyAllInstruments");
		
		ABB_Train_03_ScramblePitching_C_DestroyAllInstruments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_1");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_2");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_3");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_4");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_5");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_6");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_7");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_8");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_9");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_10");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_11
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_11");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_12
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_12()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_12");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_12_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_13
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_13()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_13");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_13_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_14
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_14()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_14");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_14_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_15
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_15()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_15");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_15_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_16
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_16()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_16");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_16_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_17
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_17()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_17");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_17_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_18
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_18");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_19
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_19()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_19");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_19_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_20
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_03_ScramblePitching_C::CustomEvent_20()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_20");
		
		ABB_Train_03_ScramblePitching_C_CustomEvent_20_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ExecuteUbergraph_BB_Train_03_ScramblePitching
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_03_ScramblePitching_C::ExecuteUbergraph_BB_Train_03_ScramblePitching(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ExecuteUbergraph_BB_Train_03_ScramblePitching");
		
		ABB_Train_03_ScramblePitching_C_ExecuteUbergraph_BB_Train_03_ScramblePitching_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Train_03_ScramblePitching_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Train_03_ScramblePitching_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C");
		return ptr;
	}

}


