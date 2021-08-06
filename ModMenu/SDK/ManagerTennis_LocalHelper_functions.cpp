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

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayTradScoreAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ServerScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReceiverScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Advantage_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::PlayTradScoreAudio(int ServerScore, int ReceiverScore, bool Advantage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayTradScoreAudio");

	AManagerTennis_LocalHelper_C_PlayTradScoreAudio_Params params;
	params.ServerScore = ServerScore;
	params.ReceiverScore = ReceiverScore;
	params.Advantage_ = Advantage_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateAdvantage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowAdvantage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::UpdateAdvantage(bool ShowAdvantage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateAdvantage");

	AManagerTennis_LocalHelper_C_UpdateAdvantage_Params params;
	params.ShowAdvantage = ShowAdvantage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::UpdateArenaScoreboardsServe(bool Player1Serve, bool Player2Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe");

	AManagerTennis_LocalHelper_C_UpdateArenaScoreboardsServe_Params params;
	params.Player1Serve = Player1Serve;
	params.Player2Serve = Player2Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayDebugInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::DisplayDebugInfo(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayDebugInfo");

	AManagerTennis_LocalHelper_C_DisplayDebugInfo_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayServeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerServe             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            GameCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OC5Demo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::DisplayServeInfo(bool IsLocalPlayerServe, int GameCount, bool OC5Demo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayServeInfo");

	AManagerTennis_LocalHelper_C_DisplayServeInfo_Params params;
	params.IsLocalPlayerServe = IsLocalPlayerServe;
	params.GameCount = GameCount;
	params.OC5Demo = OC5Demo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::DisplayInfo(const struct FText& Text, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayInfo");

	AManagerTennis_LocalHelper_C_DisplayInfo_Params params;
	params.Text = Text;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GetArenaScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::GetArenaScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GetArenaScoreboards");

	AManagerTennis_LocalHelper_C_GetArenaScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UpdateScoreOnly                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::UpdateArenaScoreboards(int Player1Score, int Player2Score, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboards");

	AManagerTennis_LocalHelper_C_UpdateArenaScoreboards_Params params;
	params.Player1Score = Player1Score;
	params.Player2Score = Player2Score;
	params.Player1Games = Player1Games;
	params.Player2Games = Player2Games;
	params.Player1Serve = Player1Serve;
	params.Player2Serve = Player2Serve;
	params.UpdateScoreOnly = UpdateScoreOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Cleanup");

	AManagerTennis_LocalHelper_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Initialize");

	AManagerTennis_LocalHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UserConstructionScript");

	AManagerTennis_LocalHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_8DC83B8546799256223C67B1B376E3D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_8DC83B8546799256223C67B1B376E3D3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_8DC83B8546799256223C67B1B376E3D3");

	AManagerTennis_LocalHelper_C_OnLoaded_8DC83B8546799256223C67B1B376E3D3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_211B117B46368DDCD41D0D919D520B4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_211B117B46368DDCD41D0D919D520B4C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_211B117B46368DDCD41D0D919D520B4C");

	AManagerTennis_LocalHelper_C_OnLoaded_211B117B46368DDCD41D0D919D520B4C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_C0EE7AB1401C402783205A821574D41D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_C0EE7AB1401C402783205A821574D41D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_C0EE7AB1401C402783205A821574D41D");

	AManagerTennis_LocalHelper_C_OnLoaded_C0EE7AB1401C402783205A821574D41D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4");

	AManagerTennis_LocalHelper_C_OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940");

	AManagerTennis_LocalHelper_C_OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_A772A71E43B570E3A370DCA564865ED7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_A772A71E43B570E3A370DCA564865ED7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_A772A71E43B570E3A370DCA564865ED7");

	AManagerTennis_LocalHelper_C_OnLoaded_A772A71E43B570E3A370DCA564865ED7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684");

	AManagerTennis_LocalHelper_C_OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AManagerTennis_LocalHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveBeginPlay");

	AManagerTennis_LocalHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveEndPlay");

	AManagerTennis_LocalHelper_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayPointResults
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PointType                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NewScoreP1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewScoreP2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1WonPoint                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TextOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::DisplayPointResults(const struct FText& PointType, int NewScoreP1, int NewScoreP2, bool Player1WonPoint, bool TextOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayPointResults");

	AManagerTennis_LocalHelper_C_DisplayPointResults_Params params;
	params.PointType = PointType;
	params.NewScoreP1 = NewScoreP1;
	params.NewScoreP2 = NewScoreP2;
	params.Player1WonPoint = Player1WonPoint;
	params.TextOnly = TextOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayLet
// (BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::DisplayLet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayLet");

	AManagerTennis_LocalHelper_C_DisplayLet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayFault
// (BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::DisplayFault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayFault");

	AManagerTennis_LocalHelper_C_DisplayFault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GamesToWin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OC5Demo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::DisplayStartOfMatchInfo(int GamesToWin, bool Player1Serve, bool OC5Demo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo");

	AManagerTennis_LocalHelper_C_DisplayStartOfMatchInfo_Params params;
	params.GamesToWin = GamesToWin;
	params.Player1Serve = Player1Serve;
	params.OC5Demo = OC5Demo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ShowNetPreServeInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GameStatusText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::ShowNetPreServeInfo(const struct FText& GameStatusText, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ShowNetPreServeInfo");

	AManagerTennis_LocalHelper_C_ShowNetPreServeInfo_Params params;
	params.GameStatusText = GameStatusText;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.HideNetScoreboard
// (BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::HideNetScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.HideNetScoreboard");

	AManagerTennis_LocalHelper_C_HideNetScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GameComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GameCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::GameComplete(int GameCount, int Player1GamesWon, int Player2GamesWon, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GameComplete");

	AManagerTennis_LocalHelper_C_GameComplete_Params params;
	params.GameCount = GameCount;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.MatchCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OC5Demo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::MatchCompleted(int Player1GamesWon, int Player2GamesWon, bool OC5Demo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.MatchCompleted");

	AManagerTennis_LocalHelper_C_MatchCompleted_Params params;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;
	params.OC5Demo = OC5Demo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.SwitchServeMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::SwitchServeMessage(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.SwitchServeMessage");

	AManagerTennis_LocalHelper_C_SwitchServeMessage_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.RestoreResults
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PointType                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NewScoreP1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewScoreP2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerTennis_LocalHelper_C::RestoreResults(const struct FText& PointType, int NewScoreP1, int NewScoreP2, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.RestoreResults");

	AManagerTennis_LocalHelper_C_RestoreResults_Params params;
	params.PointType = PointType;
	params.NewScoreP1 = NewScoreP1;
	params.NewScoreP2 = NewScoreP2;
	params.Player1Games = Player1Games;
	params.Player2Games = Player2Games;
	params.Player1Serve = Player1Serve;
	params.Player2Serve = Player2Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayAsync2D
// (BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::PlayAsync2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayAsync2D");

	AManagerTennis_LocalHelper_C_PlayAsync2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ExecuteUbergraph_ManagerTennis_LocalHelper
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerTennis_LocalHelper_C::ExecuteUbergraph_ManagerTennis_LocalHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ExecuteUbergraph_ManagerTennis_LocalHelper");

	AManagerTennis_LocalHelper_C_ExecuteUbergraph_ManagerTennis_LocalHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AManagerTennis_LocalHelper_C::ServeMessageComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature");

	AManagerTennis_LocalHelper_C_ServeMessageComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
