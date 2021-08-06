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

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayCountdown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACountdown_C*            CountdownActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayCountdown(class ACountdown_C** CountdownActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayCountdown");

	AManagerBowling_LocalHelper_C_DisplayCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountdownActor != nullptr)
		*CountdownActor = params.CountdownActor;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayInfo(const struct FText& DisplayText, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayInfo");

	AManagerBowling_LocalHelper_C_DisplayInfo_Params params;
	params.DisplayText = DisplayText;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Cleanup");

	AManagerBowling_LocalHelper_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Initialize");

	AManagerBowling_LocalHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.UserConstructionScript");

	AManagerBowling_LocalHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_906AE94D4F152913F520DB9BC9980BB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::OnLoaded_906AE94D4F152913F520DB9BC9980BB7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_906AE94D4F152913F520DB9BC9980BB7");

	AManagerBowling_LocalHelper_C_OnLoaded_906AE94D4F152913F520DB9BC9980BB7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7");

	AManagerBowling_LocalHelper_C_OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAudienceDisappointed
// (BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::PlayAudienceDisappointed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAudienceDisappointed");

	AManagerBowling_LocalHelper_C_PlayAudienceDisappointed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.CrowdApplause
// (BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::CrowdApplause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.CrowdApplause");

	AManagerBowling_LocalHelper_C_CrowdApplause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveEndPlay");

	AManagerBowling_LocalHelper_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GamesToWin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayStartOfMatchInfo(int GamesToWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfMatchInfo");

	AManagerBowling_LocalHelper_C_DisplayStartOfMatchInfo_Params params;
	params.GamesToWin = GamesToWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayNextGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PreviousGameWinner             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayNextGame(int PreviousGameWinner, int Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayNextGame");

	AManagerBowling_LocalHelper_C_DisplayNextGame_Params params;
	params.PreviousGameWinner = PreviousGameWinner;
	params.Game = Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayMatchOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> GameResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayMatchOver(TEnumAsByte<GameResult_EGameResult> GameResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayMatchOver");

	AManagerBowling_LocalHelper_C_DisplayMatchOver_Params params;
	params.GameResult = GameResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerBallChange
// (BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::PlayAnnouncerBallChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerBallChange");

	AManagerBowling_LocalHelper_C_PlayAnnouncerBallChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerVO
// (BlueprintCallable, BlueprintEvent)
void AManagerBowling_LocalHelper_C::PlayAnnouncerVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerVO");

	AManagerBowling_LocalHelper_C_PlayAnnouncerVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AManagerBowling_LocalHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveBeginPlay");

	AManagerBowling_LocalHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlinkoLaunchSFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::PlinkoLaunchSFX(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlinkoLaunchSFX");

	AManagerBowling_LocalHelper_C_PlinkoLaunchSFX_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayAlternateMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GamesTo_Win                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayAlternateMatchInfo(int GamesTo_Win)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayAlternateMatchInfo");

	AManagerBowling_LocalHelper_C_DisplayAlternateMatchInfo_Params params;
	params.GamesTo_Win = GamesTo_Win;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayPlayerTurnStart(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnStart");

	AManagerBowling_LocalHelper_C_DisplayPlayerTurnStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayPlayerTurnEnd(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnEnd");

	AManagerBowling_LocalHelper_C_DisplayPlayerTurnEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfTraditionalMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Frames                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::DisplayStartOfTraditionalMatchInfo(int Frames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfTraditionalMatchInfo");

	AManagerBowling_LocalHelper_C_DisplayStartOfTraditionalMatchInfo_Params params;
	params.Frames = Frames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ExecuteUbergraph_ManagerBowling_LocalHelper
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBowling_LocalHelper_C::ExecuteUbergraph_ManagerBowling_LocalHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ExecuteUbergraph_ManagerBowling_LocalHelper");

	AManagerBowling_LocalHelper_C_ExecuteUbergraph_ManagerBowling_LocalHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
