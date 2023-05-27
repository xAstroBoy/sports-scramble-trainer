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
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SetDemoVars
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SetDemoVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SetDemoVars");
		
		AFrontEndManager_C_SetDemoVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.PlayThemeMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayIntro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FadeTime                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::PlayThemeMusic(bool PlayIntro, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayThemeMusic");
		
		AFrontEndManager_C_PlayThemeMusic_Params params {};
		params.PlayIntro = PlayIntro;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnMenuStand
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SpawnMenuStand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnMenuStand");
		
		AFrontEndManager_C_SpawnMenuStand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.TeleportPlayAreaToArena
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseTransitionDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TransitionDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::TeleportPlayAreaToArena(const class FName& RowName, bool UseTransitionDuration, float TransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TeleportPlayAreaToArena");
		
		AFrontEndManager_C_TeleportPlayAreaToArena_Params params {};
		params.RowName = RowName;
		params.UseTransitionDuration = UseTransitionDuration;
		params.TransitionDuration = TransitionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.RemoveLogo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::RemoveLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RemoveLogo");
		
		AFrontEndManager_C_RemoveLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnLogo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LogoOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_C::SpawnLogo(bool LogoOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnLogo");
		
		AFrontEndManager_C_SpawnLogo_Params params {};
		params.LogoOnly = LogoOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnGame
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGameHandlerBase_C*                          GameplayHandler                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::SpawnGame(class AGameHandlerBase_C** GameplayHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnGame");
		
		AFrontEndManager_C_SpawnGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameplayHandler != nullptr)
			*GameplayHandler = params.GameplayHandler;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnTempMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AFrontEndManager_C::SpawnTempMenu(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnTempMenu");
		
		AFrontEndManager_C_SpawnTempMenu_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DemoStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::DemoStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DemoStart");
		
		AFrontEndManager_C_DemoStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CheckDebugMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DebugActive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_C::CheckDebugMode(bool* DebugActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CheckDebugMode");
		
		AFrontEndManager_C_CheckDebugMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebugActive != nullptr)
			*DebugActive = params.DebugActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CheckDemoMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DemoActive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_C::CheckDemoMode(bool* DemoActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CheckDemoMode");
		
		AFrontEndManager_C_CheckDemoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DemoActive != nullptr)
			*DemoActive = params.DemoActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Initialize");
		
		AFrontEndManager_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.UserConstructionScript");
		
		AFrontEndManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFrontEndManager_C::Timeline_RotateAnnouncer__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__FinishedFunc");
		
		AFrontEndManager_C_Timeline_RotateAnnouncer__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFrontEndManager_C::Timeline_RotateAnnouncer__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__UpdateFunc");
		
		AFrontEndManager_C_Timeline_RotateAnnouncer__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFrontEndManager_C::Timeline_ErrorMessageScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__FinishedFunc");
		
		AFrontEndManager_C_Timeline_ErrorMessageScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFrontEndManager_C::Timeline_ErrorMessageScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__UpdateFunc");
		
		AFrontEndManager_C_Timeline_ErrorMessageScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB35583454BD2A5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnFailure_FE43AE584DB619A31AB35583454BD2A5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB35583454BD2A5");
		
		AFrontEndManager_C_OnFailure_FE43AE584DB619A31AB35583454BD2A5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB35583454BD2A5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnSuccess_FE43AE584DB619A31AB35583454BD2A5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB35583454BD2A5");
		
		AFrontEndManager_C_OnSuccess_FE43AE584DB619A31AB35583454BD2A5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A0078B2E5D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnFailure_CB7A18C444F2E804805EC3A0078B2E5D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A0078B2E5D");
		
		AFrontEndManager_C_OnFailure_CB7A18C444F2E804805EC3A0078B2E5D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D");
		
		AFrontEndManager_C_OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D");
		
		AFrontEndManager_C_OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnLoaded_4D0F72764B0410B81B87F38AD33A1025
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::OnLoaded_4D0F72764B0410B81B87F38AD33A1025(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnLoaded_4D0F72764B0410B81B87F38AD33A1025");
		
		AFrontEndManager_C_OnLoaded_4D0F72764B0410B81B87F38AD33A1025_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.InpActEvt_DebugButton_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::InpActEvt_DebugButton_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.InpActEvt_DebugButton_K2Node_InputActionEvent_2");
		
		AFrontEndManager_C_InpActEvt_DebugButton_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A01E43AE2F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnFailure_CB7A18C444F2E804805EC3A01E43AE2F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A01E43AE2F");
		
		AFrontEndManager_C_OnFailure_CB7A18C444F2E804805EC3A01E43AE2F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F");
		
		AFrontEndManager_C_OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB355835C8352D7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnFailure_FE43AE584DB619A31AB355835C8352D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB355835C8352D7");
		
		AFrontEndManager_C_OnFailure_FE43AE584DB619A31AB355835C8352D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB355835C8352D7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnSuccess_FE43AE584DB619A31AB355835C8352D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB355835C8352D7");
		
		AFrontEndManager_C_OnSuccess_FE43AE584DB619A31AB355835C8352D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1");
		
		AFrontEndManager_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02");
		
		AFrontEndManager_C_OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02");
		
		AFrontEndManager_C_OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnDemoMainMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SpawnDemoMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnDemoMainMenu");
		
		AFrontEndManager_C_SpawnDemoMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DemoMainMenuChoiceMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::DemoMainMenuChoiceMade(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DemoMainMenuChoiceMade");
		
		AFrontEndManager_C_DemoMainMenuChoiceMade_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.BuyNow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::BuyNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BuyNow");
		
		AFrontEndManager_C_BuyNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.BuyNowPositionReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::BuyNowPositionReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BuyNowPositionReady");
		
		AFrontEndManager_C_BuyNowPositionReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.BuyNowReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::BuyNowReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BuyNowReady");
		
		AFrontEndManager_C_BuyNowReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CustomEvent_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::CustomEvent_4(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CustomEvent_4");
		
		AFrontEndManager_C_CustomEvent_4_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnFeaturesMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SpawnFeaturesMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnFeaturesMenu");
		
		AFrontEndManager_C_SpawnFeaturesMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DestroyFeaturesMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::DestroyFeaturesMenu(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DestroyFeaturesMenu");
		
		AFrontEndManager_C_DestroyFeaturesMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Features
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::Features()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Features");
		
		AFrontEndManager_C_Features_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.FeaturePositionReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::FeaturePositionReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.FeaturePositionReady");
		
		AFrontEndManager_C_FeaturePositionReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShowFeatures
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShowFeatures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowFeatures");
		
		AFrontEndManager_C_ShowFeatures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.BeginIntro
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::BeginIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BeginIntro");
		
		AFrontEndManager_C_BeginIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.StartAnnouncerAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::StartAnnouncerAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StartAnnouncerAudio");
		
		AFrontEndManager_C_StartAnnouncerAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.AnnouncerReveal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::AnnouncerReveal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AnnouncerReveal");
		
		AFrontEndManager_C_AnnouncerReveal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.AnnouncerTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::AnnouncerTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AnnouncerTransform");
		
		AFrontEndManager_C_AnnouncerTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.TransformComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::TransformComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TransformComplete");
		
		AFrontEndManager_C_TransformComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.AnnouncerExitComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::AnnouncerExitComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AnnouncerExitComplete");
		
		AFrontEndManager_C_AnnouncerExitComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShortIntroBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShortIntroBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShortIntroBegin");
		
		AFrontEndManager_C_ShortIntroBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.NuxIntroBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::NuxIntroBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.NuxIntroBegin");
		
		AFrontEndManager_C_NuxIntroBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Hub01AnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::Hub01AnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub01AnimComplete");
		
		AFrontEndManager_C_Hub01AnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Hub02AnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::Hub02AnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub02AnimComplete");
		
		AFrontEndManager_C_Hub02AnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Hub03AnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::Hub03AnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub03AnimComplete");
		
		AFrontEndManager_C_Hub03AnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Hub04AnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::Hub04AnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub04AnimComplete");
		
		AFrontEndManager_C_Hub04AnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReturnAnnouncerToSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseHubExit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_C::ReturnAnnouncerToSpawn(bool UseHubExit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReturnAnnouncerToSpawn");
		
		AFrontEndManager_C_ReturnAnnouncerToSpawn_Params params {};
		params.UseHubExit = UseHubExit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShortIntroClipComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShortIntroClipComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShortIntroClipComplete");
		
		AFrontEndManager_C_ShortIntroClipComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.RevealBeacon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    BeaconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::RevealBeacon(EHubMenuChoices BeaconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RevealBeacon");
		
		AFrontEndManager_C_RevealBeacon_Params params {};
		params.BeaconType = BeaconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.RotateAnnouncer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::RotateAnnouncer(EHubMenuChoices Choice, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RotateAnnouncer");
		
		AFrontEndManager_C_RotateAnnouncer_Params params {};
		params.Choice = Choice;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.StartShortAnnouncer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::StartShortAnnouncer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StartShortAnnouncer");
		
		AFrontEndManager_C_StartShortAnnouncer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Start Reveal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::StartReveal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Start Reveal");
		
		AFrontEndManager_C_StartReveal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.BeginIntroTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::BeginIntroTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BeginIntroTimer");
		
		AFrontEndManager_C_BeginIntroTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Reveal Timer Return
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::RevealTimerReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Reveal Timer Return");
		
		AFrontEndManager_C_RevealTimerReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.TeleportToVenue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TrainingLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        LevelOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::TeleportToVenue(EScramSport Sport, bool TrainingLevel, const class FName& LevelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TeleportToVenue");
		
		AFrontEndManager_C_TeleportToVenue_Params params {};
		params.Sport = Sport;
		params.TrainingLevel = TrainingLevel;
		params.LevelOverride = LevelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.LoadGameplayLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::LoadGameplayLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LoadGameplayLevel");
		
		AFrontEndManager_C_LoadGameplayLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.RemoveTravelTunnel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewGeoLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::RemoveTravelTunnel(const class FName& NewGeoLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RemoveTravelTunnel");
		
		AFrontEndManager_C_RemoveTravelTunnel_Params params {};
		params.NewGeoLevel = NewGeoLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CustomLevelLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::CustomLevelLoaded(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CustomLevelLoaded");
		
		AFrontEndManager_C_CustomLevelLoaded_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReadyToStartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReadyToStartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToStartGame");
		
		AFrontEndManager_C_ReadyToStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.GameHandlerTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TrainingLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        LevelOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::GameHandlerTeleport(EScramSport Sport, bool TrainingLevel, const class FName& LevelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.GameHandlerTeleport");
		
		AFrontEndManager_C_GameHandlerTeleport_Params params {};
		params.Sport = Sport;
		params.TrainingLevel = TrainingLevel;
		params.LevelOverride = LevelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.Reset Gameplay Level
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SpawnLocOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ResetGameplayLevel(const class FName& SpawnLocOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Reset Gameplay Level");
		
		AFrontEndManager_C_ResetGameplayLevel_Params params {};
		params.SpawnLocOverride = SpawnLocOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReceiveBeginPlay");
		
		AFrontEndManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.AllowSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::AllowSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AllowSwap");
		
		AFrontEndManager_C_AllowSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CreateMainMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::CreateMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CreateMainMenu");
		
		AFrontEndManager_C_CreateMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShowLogoScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShowLogoScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowLogoScreen");
		
		AFrontEndManager_C_ShowLogoScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ToggleDebugMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ToggleDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ToggleDebugMenu");
		
		AFrontEndManager_C_ToggleDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DisallowSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::DisallowSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DisallowSwap");
		
		AFrontEndManager_C_DisallowSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CreateDebugMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::CreateDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CreateDebugMenu");
		
		AFrontEndManager_C_CreateDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.MainMenuSelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMainMenuChoices                                   Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::MainMenuSelectionMade(EMainMenuChoices Choice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.MainMenuSelectionMade");
		
		AFrontEndManager_C_MainMenuSelectionMade_Params params {};
		params.Choice = Choice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnHubMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NUX                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_C::SpawnHubMenu(bool NUX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnHubMenu");
		
		AFrontEndManager_C_SpawnHubMenu_Params params {};
		params.NUX = NUX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.HubMenuSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::HubMenuSelection(EHubMenuChoices Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.HubMenuSelection");
		
		AFrontEndManager_C_HubMenuSelection_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CreateDetailsMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESelectionDetailsMenuType                          MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameModeTypes                                     ResultsType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::CreateDetailsMenu(ESelectionDetailsMenuType MenuType, EScramSport Sport, EGameModeTypes ResultsType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CreateDetailsMenu");
		
		AFrontEndManager_C_CreateDetailsMenu_Params params {};
		params.MenuType = MenuType;
		params.Sport = Sport;
		params.ResultsType = ResultsType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.GameSelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SinglePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_C::GameSelectionMade(EScramSport Sport, bool SinglePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.GameSelectionMade");
		
		AFrontEndManager_C_GameSelectionMade_Params params {};
		params.Sport = Sport;
		params.SinglePlayer = SinglePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReturnToHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReturnToHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReturnToHub");
		
		AFrontEndManager_C_ReturnToHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReadyToReturnToHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReadyToReturnToHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToReturnToHub");
		
		AFrontEndManager_C_ReadyToReturnToHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.PlayerHasReturnedToHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::PlayerHasReturnedToHub(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayerHasReturnedToHub");
		
		AFrontEndManager_C_PlayerHasReturnedToHub_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReloadHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReloadHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReloadHub");
		
		AFrontEndManager_C_ReloadHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.HiddenHubLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::HiddenHubLoaded(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.HiddenHubLoaded");
		
		AFrontEndManager_C_HiddenHubLoaded_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.LevelChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::LevelChanged(const class FName& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LevelChanged");
		
		AFrontEndManager_C_LevelChanged_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnResultsScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SpawnResultsScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnResultsScreen");
		
		AFrontEndManager_C_SpawnResultsScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReceiveTick");
		
		AFrontEndManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.TrophyRoomLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::TrophyRoomLoaded(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TrophyRoomLoaded");
		
		AFrontEndManager_C_TrophyRoomLoaded_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.GoToTrophyRoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::GoToTrophyRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.GoToTrophyRoom");
		
		AFrontEndManager_C_GoToTrophyRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.TrophyRoomPositionConfirmed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::TrophyRoomPositionConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TrophyRoomPositionConfirmed");
		
		AFrontEndManager_C_TrophyRoomPositionConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReadyToLoadTrophyRoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReadyToLoadTrophyRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToLoadTrophyRoom");
		
		AFrontEndManager_C_ReadyToLoadTrophyRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ExitTrophies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ExitTrophies(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ExitTrophies");
		
		AFrontEndManager_C_ExitTrophies_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DebugResetTrophies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::DebugResetTrophies(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DebugResetTrophies");
		
		AFrontEndManager_C_DebugResetTrophies_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SetupDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::SetupDone(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SetupDone");
		
		AFrontEndManager_C_SetupDone_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.QuitGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::QuitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.QuitGame");
		
		AFrontEndManager_C_QuitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShowQuitConfirmation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShowQuitConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowQuitConfirmation");
		
		AFrontEndManager_C_ShowQuitConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReadyToShowConfirmation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReadyToShowConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToShowConfirmation");
		
		AFrontEndManager_C_ReadyToShowConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.QuitChoiceMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::QuitChoiceMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.QuitChoiceMade");
		
		AFrontEndManager_C_QuitChoiceMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.PlayerReadyForIntro
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::PlayerReadyForIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayerReadyForIntro");
		
		AFrontEndManager_C_PlayerReadyForIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.PlayerFadedOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::PlayerFadedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayerFadedOut");
		
		AFrontEndManager_C_PlayerFadedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OptionMenuPostionConfirmed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::OptionMenuPostionConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OptionMenuPostionConfirmed");
		
		AFrontEndManager_C_OptionMenuPostionConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ReadyToSpawnOptionsMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ReadyToSpawnOptionsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToSpawnOptionsMenu");
		
		AFrontEndManager_C_ReadyToSpawnOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShowOptionsMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShowOptionsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowOptionsMenu");
		
		AFrontEndManager_C_ShowOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OptionsMenuDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::OptionsMenuDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OptionsMenuDestroyed");
		
		AFrontEndManager_C_OptionsMenuDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.StandButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::StandButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StandButtonPressed");
		
		AFrontEndManager_C_StandButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.StandSelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::StandSelectionMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StandSelectionMade");
		
		AFrontEndManager_C_StandSelectionMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.CloseMenuStnad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::CloseMenuStnad(EHubMenuChoices Choice, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CloseMenuStnad");
		
		AFrontEndManager_C_CloseMenuStnad_Params params {};
		params.Choice = Choice;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnIntroOnlyConfettiCannonVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SpawnIntroOnlyConfettiCannonVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnIntroOnlyConfettiCannonVFX");
		
		AFrontEndManager_C_SpawnIntroOnlyConfettiCannonVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.LevelsUnloaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::LevelsUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LevelsUnloaded");
		
		AFrontEndManager_C_LevelsUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.HubSelectionStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::HubSelectionStarted(EHubMenuChoices Choice, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.HubSelectionStarted");
		
		AFrontEndManager_C_HubSelectionStarted_Params params {};
		params.Choice = Choice;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.StartLoopingConfetti
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::StartLoopingConfetti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StartLoopingConfetti");
		
		AFrontEndManager_C_StartLoopingConfetti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.StopLoopingConfetti
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::StopLoopingConfetti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StopLoopingConfetti");
		
		AFrontEndManager_C_StopLoopingConfetti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ShellInviteFromRelaunchFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ShellInviteFromRelaunchFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShellInviteFromRelaunchFailed");
		
		AFrontEndManager_C_ShellInviteFromRelaunchFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.OnShellInviteAccepted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramGameInvite                            GameInvite                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AFrontEndManager_C::OnShellInviteAccepted(const struct FScramGameInvite& GameInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnShellInviteAccepted");
		
		AFrontEndManager_C_OnShellInviteAccepted_Params params {};
		params.GameInvite = GameInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ClientUnrealJoinFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramPendingGameFailure                           failureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ClientUnrealJoinFailed(EScramPendingGameFailure failureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ClientUnrealJoinFailed");
		
		AFrontEndManager_C_ClientUnrealJoinFailed_Params params {};
		params.failureType = failureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ErrorMessageComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ErrorMessageComplete(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ErrorMessageComplete");
		
		AFrontEndManager_C_ErrorMessageComplete_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ScaleUpErrorMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ScaleUpErrorMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ScaleUpErrorMessage");
		
		AFrontEndManager_C_ScaleUpErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ScaleDownErrorMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ScaleDownErrorMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ScaleDownErrorMessage");
		
		AFrontEndManager_C_ScaleDownErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DisplayErrorMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::DisplayErrorMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DisplayErrorMessage");
		
		AFrontEndManager_C_DisplayErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.SpawnErrorMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::SpawnErrorMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnErrorMenu");
		
		AFrontEndManager_C_SpawnErrorMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ErrorButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ErrorButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ErrorButtonPressed");
		
		AFrontEndManager_C_ErrorButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.DisplayIntroMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::DisplayIntroMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DisplayIntroMessage");
		
		AFrontEndManager_C_DisplayIntroMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.EndIntroMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::EndIntroMessage(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.EndIntroMessage");
		
		AFrontEndManager_C_EndIntroMessage_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ContinueSetup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ContinueSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ContinueSetup");
		
		AFrontEndManager_C_ContinueSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ContinueIntro
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ContinueIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ContinueIntro");
		
		AFrontEndManager_C_ContinueIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ChooseLanguage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_C::ChooseLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ChooseLanguage");
		
		AFrontEndManager_C_ChooseLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.LanguageSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::LanguageSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LanguageSelected");
		
		AFrontEndManager_C_LanguageSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FrontEndManager.FrontEndManager_C.ExecuteUbergraph_FrontEndManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndManager_C::ExecuteUbergraph_FrontEndManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ExecuteUbergraph_FrontEndManager");
		
		AFrontEndManager_C_ExecuteUbergraph_FrontEndManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrontEndManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontEndManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontEndManager.FrontEndManager_C");
		return ptr;
	}

}


