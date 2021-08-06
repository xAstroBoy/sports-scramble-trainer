// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FrontEndManager.FrontEndManager_C.SetDemoVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SetDemoVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SetDemoVars");

	AFrontEndManager_C_SetDemoVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.PlayThemeMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayIntro                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          FadeTime                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::PlayThemeMusic(bool PlayIntro, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayThemeMusic");

	AFrontEndManager_C_PlayThemeMusic_Params params;
	params.PlayIntro = PlayIntro;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnMenuStand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SpawnMenuStand()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnMenuStand");

	AFrontEndManager_C_SpawnMenuStand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.TeleportPlayAreaToArena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseTransitionDuration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::TeleportPlayAreaToArena(const struct FName& RowName, bool UseTransitionDuration, float TransitionDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TeleportPlayAreaToArena");

	AFrontEndManager_C_TeleportPlayAreaToArena_Params params;
	params.RowName = RowName;
	params.UseTransitionDuration = UseTransitionDuration;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.RemoveLogo
// (Public, BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::RemoveLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RemoveLogo");

	AFrontEndManager_C_RemoveLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnLogo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LogoOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFrontEndManager_C::SpawnLogo(bool LogoOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnLogo");

	AFrontEndManager_C_SpawnLogo_Params params;
	params.LogoOnly = LogoOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnGame
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameHandlerBase_C*      GameplayHandler                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::SpawnGame(class AGameHandlerBase_C** GameplayHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnGame");

	AFrontEndManager_C_SpawnGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayHandler != nullptr)
		*GameplayHandler = params.GameplayHandler;

}


// Function FrontEndManager.FrontEndManager_C.SpawnTempMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AFrontEndManager_C::SpawnTempMenu(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnTempMenu");

	AFrontEndManager_C_SpawnTempMenu_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DemoStart
// (Public, BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::DemoStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DemoStart");

	AFrontEndManager_C_DemoStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CheckDebugMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DebugActive                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFrontEndManager_C::CheckDebugMode(bool* DebugActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CheckDebugMode");

	AFrontEndManager_C_CheckDebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DebugActive != nullptr)
		*DebugActive = params.DebugActive;

}


// Function FrontEndManager.FrontEndManager_C.CheckDemoMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DemoActive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFrontEndManager_C::CheckDemoMode(bool* DemoActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CheckDemoMode");

	AFrontEndManager_C_CheckDemoMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DemoActive != nullptr)
		*DemoActive = params.DemoActive;

}


// Function FrontEndManager.FrontEndManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Initialize");

	AFrontEndManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.UserConstructionScript");

	AFrontEndManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__FinishedFunc
// (BlueprintEvent)
void AFrontEndManager_C::Timeline_RotateAnnouncer__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__FinishedFunc");

	AFrontEndManager_C_Timeline_RotateAnnouncer__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__UpdateFunc
// (BlueprintEvent)
void AFrontEndManager_C::Timeline_RotateAnnouncer__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__UpdateFunc");

	AFrontEndManager_C_Timeline_RotateAnnouncer__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__FinishedFunc
// (BlueprintEvent)
void AFrontEndManager_C::Timeline_ErrorMessageScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__FinishedFunc");

	AFrontEndManager_C_Timeline_ErrorMessageScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__UpdateFunc
// (BlueprintEvent)
void AFrontEndManager_C::Timeline_ErrorMessageScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__UpdateFunc");

	AFrontEndManager_C_Timeline_ErrorMessageScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB35583454BD2A5
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnFailure_FE43AE584DB619A31AB35583454BD2A5()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB35583454BD2A5");

	AFrontEndManager_C_OnFailure_FE43AE584DB619A31AB35583454BD2A5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB35583454BD2A5
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnSuccess_FE43AE584DB619A31AB35583454BD2A5()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB35583454BD2A5");

	AFrontEndManager_C_OnSuccess_FE43AE584DB619A31AB35583454BD2A5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A0078B2E5D
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnFailure_CB7A18C444F2E804805EC3A0078B2E5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A0078B2E5D");

	AFrontEndManager_C_OnFailure_CB7A18C444F2E804805EC3A0078B2E5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D");

	AFrontEndManager_C_OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D");

	AFrontEndManager_C_OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnLoaded_4D0F72764B0410B81B87F38AD33A1025
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::OnLoaded_4D0F72764B0410B81B87F38AD33A1025(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnLoaded_4D0F72764B0410B81B87F38AD33A1025");

	AFrontEndManager_C_OnLoaded_4D0F72764B0410B81B87F38AD33A1025_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.InpActEvt_DebugButton_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFrontEndManager_C::InpActEvt_DebugButton_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.InpActEvt_DebugButton_K2Node_InputActionEvent_2");

	AFrontEndManager_C_InpActEvt_DebugButton_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A01E43AE2F
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnFailure_CB7A18C444F2E804805EC3A01E43AE2F()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A01E43AE2F");

	AFrontEndManager_C_OnFailure_CB7A18C444F2E804805EC3A01E43AE2F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F");

	AFrontEndManager_C_OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB355835C8352D7
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnFailure_FE43AE584DB619A31AB355835C8352D7()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB355835C8352D7");

	AFrontEndManager_C_OnFailure_FE43AE584DB619A31AB355835C8352D7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB355835C8352D7
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnSuccess_FE43AE584DB619A31AB355835C8352D7()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB355835C8352D7");

	AFrontEndManager_C_OnSuccess_FE43AE584DB619A31AB355835C8352D7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFrontEndManager_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1");

	AFrontEndManager_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02");

	AFrontEndManager_C_OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02");

	AFrontEndManager_C_OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnDemoMainMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SpawnDemoMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnDemoMainMenu");

	AFrontEndManager_C_SpawnDemoMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DemoMainMenuChoiceMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::DemoMainMenuChoiceMade(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DemoMainMenuChoiceMade");

	AFrontEndManager_C_DemoMainMenuChoiceMade_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.BuyNow
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::BuyNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BuyNow");

	AFrontEndManager_C_BuyNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.BuyNowPositionReady
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::BuyNowPositionReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BuyNowPositionReady");

	AFrontEndManager_C_BuyNowPositionReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.BuyNowReady
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::BuyNowReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BuyNowReady");

	AFrontEndManager_C_BuyNowReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::CustomEvent_4(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CustomEvent_4");

	AFrontEndManager_C_CustomEvent_4_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnFeaturesMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SpawnFeaturesMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnFeaturesMenu");

	AFrontEndManager_C_SpawnFeaturesMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DestroyFeaturesMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::DestroyFeaturesMenu(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DestroyFeaturesMenu");

	AFrontEndManager_C_DestroyFeaturesMenu_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Features
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Features()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Features");

	AFrontEndManager_C_Features_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.FeaturePositionReady
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::FeaturePositionReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.FeaturePositionReady");

	AFrontEndManager_C_FeaturePositionReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShowFeatures
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShowFeatures()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowFeatures");

	AFrontEndManager_C_ShowFeatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.BeginIntro
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::BeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BeginIntro");

	AFrontEndManager_C_BeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.StartAnnouncerAudio
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::StartAnnouncerAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StartAnnouncerAudio");

	AFrontEndManager_C_StartAnnouncerAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.AnnouncerReveal
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::AnnouncerReveal()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AnnouncerReveal");

	AFrontEndManager_C_AnnouncerReveal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.AnnouncerTransform
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::AnnouncerTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AnnouncerTransform");

	AFrontEndManager_C_AnnouncerTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.TransformComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::TransformComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TransformComplete");

	AFrontEndManager_C_TransformComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.AnnouncerExitComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::AnnouncerExitComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AnnouncerExitComplete");

	AFrontEndManager_C_AnnouncerExitComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShortIntroBegin
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShortIntroBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShortIntroBegin");

	AFrontEndManager_C_ShortIntroBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.NuxIntroBegin
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::NuxIntroBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.NuxIntroBegin");

	AFrontEndManager_C_NuxIntroBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Hub01AnimComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Hub01AnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub01AnimComplete");

	AFrontEndManager_C_Hub01AnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Hub02AnimComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Hub02AnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub02AnimComplete");

	AFrontEndManager_C_Hub02AnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Hub03AnimComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Hub03AnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub03AnimComplete");

	AFrontEndManager_C_Hub03AnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Hub04AnimComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Hub04AnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Hub04AnimComplete");

	AFrontEndManager_C_Hub04AnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReturnAnnouncerToSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseHubExit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFrontEndManager_C::ReturnAnnouncerToSpawn(bool UseHubExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReturnAnnouncerToSpawn");

	AFrontEndManager_C_ReturnAnnouncerToSpawn_Params params;
	params.UseHubExit = UseHubExit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShortIntroClipComplete
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShortIntroClipComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShortIntroClipComplete");

	AFrontEndManager_C_ShortIntroClipComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.RevealBeacon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> BeaconType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::RevealBeacon(TEnumAsByte<HubMenuChoices_EHubMenuChoices> BeaconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RevealBeacon");

	AFrontEndManager_C_RevealBeacon_Params params;
	params.BeaconType = BeaconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.RotateAnnouncer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::RotateAnnouncer(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RotateAnnouncer");

	AFrontEndManager_C_RotateAnnouncer_Params params;
	params.Choice = Choice;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.StartShortAnnouncer
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::StartShortAnnouncer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StartShortAnnouncer");

	AFrontEndManager_C_StartShortAnnouncer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Start Reveal
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Start_Reveal()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Start Reveal");

	AFrontEndManager_C_Start_Reveal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.BeginIntroTimer
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::BeginIntroTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.BeginIntroTimer");

	AFrontEndManager_C_BeginIntroTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Reveal Timer Return
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::Reveal_Timer_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Reveal Timer Return");

	AFrontEndManager_C_Reveal_Timer_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.TeleportToVenue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TrainingLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   LevelOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::TeleportToVenue(SportsScramble_EScramSport Sport, bool TrainingLevel, const struct FName& LevelOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TeleportToVenue");

	AFrontEndManager_C_TeleportToVenue_Params params;
	params.Sport = Sport;
	params.TrainingLevel = TrainingLevel;
	params.LevelOverride = LevelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.LoadGameplayLevel
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::LoadGameplayLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LoadGameplayLevel");

	AFrontEndManager_C_LoadGameplayLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.RemoveTravelTunnel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewGeoLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::RemoveTravelTunnel(const struct FName& NewGeoLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.RemoveTravelTunnel");

	AFrontEndManager_C_RemoveTravelTunnel_Params params;
	params.NewGeoLevel = NewGeoLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CustomLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewPrimaryLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::CustomLevelLoaded(const struct FName& NewPrimaryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CustomLevelLoaded");

	AFrontEndManager_C_CustomLevelLoaded_Params params;
	params.NewPrimaryLevel = NewPrimaryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReadyToStartGame
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReadyToStartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToStartGame");

	AFrontEndManager_C_ReadyToStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.GameHandlerTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TrainingLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   LevelOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::GameHandlerTeleport(SportsScramble_EScramSport Sport, bool TrainingLevel, const struct FName& LevelOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.GameHandlerTeleport");

	AFrontEndManager_C_GameHandlerTeleport_Params params;
	params.Sport = Sport;
	params.TrainingLevel = TrainingLevel;
	params.LevelOverride = LevelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.Reset Gameplay Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SpawnLocOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::Reset_Gameplay_Level(const struct FName& SpawnLocOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.Reset Gameplay Level");

	AFrontEndManager_C_Reset_Gameplay_Level_Params params;
	params.SpawnLocOverride = SpawnLocOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFrontEndManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReceiveBeginPlay");

	AFrontEndManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.AllowSwap
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::AllowSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.AllowSwap");

	AFrontEndManager_C_AllowSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CreateMainMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::CreateMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CreateMainMenu");

	AFrontEndManager_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShowLogoScreen
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShowLogoScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowLogoScreen");

	AFrontEndManager_C_ShowLogoScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ToggleDebugMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ToggleDebugMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ToggleDebugMenu");

	AFrontEndManager_C_ToggleDebugMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DisallowSwap
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::DisallowSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DisallowSwap");

	AFrontEndManager_C_DisallowSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CreateDebugMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::CreateDebugMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CreateDebugMenu");

	AFrontEndManager_C_CreateDebugMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.MainMenuSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<MainMenuChoices_EMainMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::MainMenuSelectionMade(TEnumAsByte<MainMenuChoices_EMainMenuChoices> Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.MainMenuSelectionMade");

	AFrontEndManager_C_MainMenuSelectionMade_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnHubMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NUX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFrontEndManager_C::SpawnHubMenu(bool NUX)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnHubMenu");

	AFrontEndManager_C_SpawnHubMenu_Params params;
	params.NUX = NUX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.HubMenuSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::HubMenuSelection(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.HubMenuSelection");

	AFrontEndManager_C_HubMenuSelection_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CreateDetailsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<SelectionDetailsMenuType_ESelectionDetailsMenuType> MenuType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<GameModeTypes_EGameModeTypes> ResultsType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::CreateDetailsMenu(TEnumAsByte<SelectionDetailsMenuType_ESelectionDetailsMenuType> MenuType, SportsScramble_EScramSport Sport, TEnumAsByte<GameModeTypes_EGameModeTypes> ResultsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CreateDetailsMenu");

	AFrontEndManager_C_CreateDetailsMenu_Params params;
	params.MenuType = MenuType;
	params.Sport = Sport;
	params.ResultsType = ResultsType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.GameSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SinglePlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFrontEndManager_C::GameSelectionMade(SportsScramble_EScramSport Sport, bool SinglePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.GameSelectionMade");

	AFrontEndManager_C_GameSelectionMade_Params params;
	params.Sport = Sport;
	params.SinglePlayer = SinglePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReturnToHub
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReturnToHub()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReturnToHub");

	AFrontEndManager_C_ReturnToHub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReadyToReturnToHub
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReadyToReturnToHub()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToReturnToHub");

	AFrontEndManager_C_ReadyToReturnToHub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.PlayerHasReturnedToHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewPrimaryLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::PlayerHasReturnedToHub(const struct FName& NewPrimaryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayerHasReturnedToHub");

	AFrontEndManager_C_PlayerHasReturnedToHub_Params params;
	params.NewPrimaryLevel = NewPrimaryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReloadHub
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReloadHub()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReloadHub");

	AFrontEndManager_C_ReloadHub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.HiddenHubLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewPrimaryLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::HiddenHubLoaded(const struct FName& NewPrimaryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.HiddenHubLoaded");

	AFrontEndManager_C_HiddenHubLoaded_Params params;
	params.NewPrimaryLevel = NewPrimaryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.LevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::LevelChanged(const struct FName& Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LevelChanged");

	AFrontEndManager_C_LevelChanged_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnResultsScreen
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SpawnResultsScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnResultsScreen");

	AFrontEndManager_C_SpawnResultsScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReceiveTick");

	AFrontEndManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.TrophyRoomLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewPrimaryLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::TrophyRoomLoaded(const struct FName& NewPrimaryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TrophyRoomLoaded");

	AFrontEndManager_C_TrophyRoomLoaded_Params params;
	params.NewPrimaryLevel = NewPrimaryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.GoToTrophyRoom
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::GoToTrophyRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.GoToTrophyRoom");

	AFrontEndManager_C_GoToTrophyRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.TrophyRoomPositionConfirmed
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::TrophyRoomPositionConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.TrophyRoomPositionConfirmed");

	AFrontEndManager_C_TrophyRoomPositionConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReadyToLoadTrophyRoom
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReadyToLoadTrophyRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToLoadTrophyRoom");

	AFrontEndManager_C_ReadyToLoadTrophyRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ExitTrophies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::ExitTrophies(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ExitTrophies");

	AFrontEndManager_C_ExitTrophies_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DebugResetTrophies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::DebugResetTrophies(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DebugResetTrophies");

	AFrontEndManager_C_DebugResetTrophies_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SetupDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::SetupDone(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SetupDone");

	AFrontEndManager_C_SetupDone_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.QuitGame
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.QuitGame");

	AFrontEndManager_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShowQuitConfirmation
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShowQuitConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowQuitConfirmation");

	AFrontEndManager_C_ShowQuitConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReadyToShowConfirmation
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReadyToShowConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToShowConfirmation");

	AFrontEndManager_C_ReadyToShowConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.QuitChoiceMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::QuitChoiceMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.QuitChoiceMade");

	AFrontEndManager_C_QuitChoiceMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.PlayerReadyForIntro
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::PlayerReadyForIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayerReadyForIntro");

	AFrontEndManager_C_PlayerReadyForIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.PlayerFadedOut
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::PlayerFadedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.PlayerFadedOut");

	AFrontEndManager_C_PlayerFadedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OptionMenuPostionConfirmed
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::OptionMenuPostionConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OptionMenuPostionConfirmed");

	AFrontEndManager_C_OptionMenuPostionConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ReadyToSpawnOptionsMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ReadyToSpawnOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ReadyToSpawnOptionsMenu");

	AFrontEndManager_C_ReadyToSpawnOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShowOptionsMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShowOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShowOptionsMenu");

	AFrontEndManager_C_ShowOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OptionsMenuDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::OptionsMenuDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OptionsMenuDestroyed");

	AFrontEndManager_C_OptionsMenuDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.StandButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::StandButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StandButtonPressed");

	AFrontEndManager_C_StandButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.StandSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::StandSelectionMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StandSelectionMade");

	AFrontEndManager_C_StandSelectionMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.CloseMenuStnad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::CloseMenuStnad(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.CloseMenuStnad");

	AFrontEndManager_C_CloseMenuStnad_Params params;
	params.Choice = Choice;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnIntroOnlyConfettiCannonVFX
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SpawnIntroOnlyConfettiCannonVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnIntroOnlyConfettiCannonVFX");

	AFrontEndManager_C_SpawnIntroOnlyConfettiCannonVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.LevelsUnloaded
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::LevelsUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LevelsUnloaded");

	AFrontEndManager_C_LevelsUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.HubSelectionStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::HubSelectionStarted(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.HubSelectionStarted");

	AFrontEndManager_C_HubSelectionStarted_Params params;
	params.Choice = Choice;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.StartLoopingConfetti
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::StartLoopingConfetti()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StartLoopingConfetti");

	AFrontEndManager_C_StartLoopingConfetti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.StopLoopingConfetti
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::StopLoopingConfetti()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.StopLoopingConfetti");

	AFrontEndManager_C_StopLoopingConfetti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ShellInviteFromRelaunchFailed
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ShellInviteFromRelaunchFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ShellInviteFromRelaunchFailed");

	AFrontEndManager_C_ShellInviteFromRelaunchFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.OnShellInviteAccepted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramGameInvite        GameInvite                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AFrontEndManager_C::OnShellInviteAccepted(const struct FScramGameInvite& GameInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.OnShellInviteAccepted");

	AFrontEndManager_C_OnShellInviteAccepted_Params params;
	params.GameInvite = GameInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ClientUnrealJoinFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramPendingGameFailure failureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::ClientUnrealJoinFailed(SportsScramble_EScramPendingGameFailure failureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ClientUnrealJoinFailed");

	AFrontEndManager_C_ClientUnrealJoinFailed_Params params;
	params.failureType = failureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ErrorMessageComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::ErrorMessageComplete(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ErrorMessageComplete");

	AFrontEndManager_C_ErrorMessageComplete_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ScaleUpErrorMessage
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ScaleUpErrorMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ScaleUpErrorMessage");

	AFrontEndManager_C_ScaleUpErrorMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ScaleDownErrorMessage
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ScaleDownErrorMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ScaleDownErrorMessage");

	AFrontEndManager_C_ScaleDownErrorMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DisplayErrorMessage
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::DisplayErrorMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DisplayErrorMessage");

	AFrontEndManager_C_DisplayErrorMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.SpawnErrorMenu
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::SpawnErrorMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.SpawnErrorMenu");

	AFrontEndManager_C_SpawnErrorMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ErrorButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::ErrorButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ErrorButtonPressed");

	AFrontEndManager_C_ErrorButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.DisplayIntroMessage
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::DisplayIntroMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.DisplayIntroMessage");

	AFrontEndManager_C_DisplayIntroMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.EndIntroMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::EndIntroMessage(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.EndIntroMessage");

	AFrontEndManager_C_EndIntroMessage_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ContinueSetup
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ContinueSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ContinueSetup");

	AFrontEndManager_C_ContinueSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ContinueIntro
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ContinueIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ContinueIntro");

	AFrontEndManager_C_ContinueIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ChooseLanguage
// (BlueprintCallable, BlueprintEvent)
void AFrontEndManager_C::ChooseLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ChooseLanguage");

	AFrontEndManager_C_ChooseLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.LanguageSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::LanguageSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.LanguageSelected");

	AFrontEndManager_C_LanguageSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontEndManager.FrontEndManager_C.ExecuteUbergraph_FrontEndManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFrontEndManager_C::ExecuteUbergraph_FrontEndManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndManager.FrontEndManager_C.ExecuteUbergraph_FrontEndManager");

	AFrontEndManager_C_ExecuteUbergraph_FrontEndManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
