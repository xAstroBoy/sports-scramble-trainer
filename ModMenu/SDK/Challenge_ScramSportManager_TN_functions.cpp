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

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TN_SportMgr_UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::TN_SportMgr_UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TN_SportMgr_UnbindEvents");

	AChallenge_ScramSportManager_TN_C_TN_SportMgr_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SpawnChallengeLocalHelper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseScoreboard                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::SpawnChallengeLocalHelper(bool UseScoreboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SpawnChallengeLocalHelper");

	AChallenge_ScramSportManager_TN_C_SpawnChallengeLocalHelper_Params params;
	params.UseScoreboard = UseScoreboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindExistingServeLocationIndicator
// (Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::BindExistingServeLocationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindExistingServeLocationIndicator");

	AChallenge_ScramSportManager_TN_C_BindExistingServeLocationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnRep_ServeLocationIndicator
// (BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::OnRep_ServeLocationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnRep_ServeLocationIndicator");

	AChallenge_ScramSportManager_TN_C_OnRep_ServeLocationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindNewServeLocationIndicator
// (Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::BindNewServeLocationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindNewServeLocationIndicator");

	AChallenge_ScramSportManager_TN_C_BindNewServeLocationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ShowDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::ShowDebugInfo(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ShowDebugInfo");

	AChallenge_ScramSportManager_TN_C_ShowDebugInfo_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateServeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::CreateServeLocation(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateServeLocation");

	AChallenge_ScramSportManager_TN_C_CreateServeLocation_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.AllowAIServe
// (Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::AllowAIServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.AllowAIServe");

	AChallenge_ScramSportManager_TN_C_AllowAIServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateReceiveLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::CreateReceiveLocation(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateReceiveLocation");

	AChallenge_ScramSportManager_TN_C_CreateReceiveLocation_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetGameStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (Parm, OutParm)
void AChallenge_ScramSportManager_TN_C::GetGameStatus(struct FText* StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetGameStatus");

	AChallenge_ScramSportManager_TN_C_GetGameStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusText != nullptr)
		*StatusText = params.StatusText;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetPointType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PointType                      (Parm, OutParm)
void AChallenge_ScramSportManager_TN_C::GetPointType(struct FText* PointType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetPointType");

	AChallenge_ScramSportManager_TN_C_GetPointType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PointType != nullptr)
		*PointType = params.PointType;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ResetResultBools
// (Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::ResetResultBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ResetResultBools");

	AChallenge_ScramSportManager_TN_C_ResetResultBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Cleanup");

	AChallenge_ScramSportManager_TN_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Initialize");

	AChallenge_ScramSportManager_TN_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.UserConstructionScript");

	AChallenge_ScramSportManager_TN_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8");

	AChallenge_ScramSportManager_TN_C_OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_C4FE474944769B8438FACDAFB40F4516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::OnLoaded_C4FE474944769B8438FACDAFB40F4516(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_C4FE474944769B8438FACDAFB40F4516");

	AChallenge_ScramSportManager_TN_C_OnLoaded_C4FE474944769B8438FACDAFB40F4516_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C");

	AChallenge_ScramSportManager_TN_C_OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveBeginPlay");

	AChallenge_ScramSportManager_TN_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TennisEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_ETennisEvent    TennisEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::TennisEvent(int Player, SportsScramble_ETennisEvent TennisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TennisEvent");

	AChallenge_ScramSportManager_TN_C_TennisEvent_Params params;
	params.Player = Player;
	params.TennisEvent = TennisEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveEndPlay");

	AChallenge_ScramSportManager_TN_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointMade
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            P1Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::PointMade(int P1Score, int P2Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointMade");

	AChallenge_ScramSportManager_TN_C_PointMade_Params params;
	params.P1Score = P1Score;
	params.P2Score = P2Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LET
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::LET()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LET");

	AChallenge_ScramSportManager_TN_C_LET_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.WaitForOpponentServe
// (BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::WaitForOpponentServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.WaitForOpponentServe");

	AChallenge_ScramSportManager_TN_C_WaitForOpponentServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.InPlay
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::InPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.InPlay");

	AChallenge_ScramSportManager_TN_C_InPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Fault
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::Fault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Fault");

	AChallenge_ScramSportManager_TN_C_Fault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PrePareServe
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::PrePareServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PrePareServe");

	AChallenge_ScramSportManager_TN_C_PrePareServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallGrabbed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::BallGrabbed(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallGrabbed");

	AChallenge_ScramSportManager_TN_C_BallGrabbed_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallSpawned
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::BallSpawned(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallSpawned");

	AChallenge_ScramSportManager_TN_C_BallSpawned_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SendDebugString
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 S                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::SendDebugString(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SendDebugString");

	AChallenge_ScramSportManager_TN_C_SendDebugString_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateDebugButton
// (BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::CreateDebugButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateDebugButton");

	AChallenge_ScramSportManager_TN_C_CreateDebugButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ToggleDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::ToggleDebug(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ToggleDebug");

	AChallenge_ScramSportManager_TN_C_ToggleDebug_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayDoubleFaultSFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::PlayDoubleFaultSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayDoubleFaultSFX");

	AChallenge_ScramSportManager_TN_C_PlayDoubleFaultSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_DisplayPointResults
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PointType                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            P1Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Winner                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TextOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::MC_DisplayPointResults(const struct FText& PointType, int P1Score, int P2Score, bool Player1Winner, bool TextOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_DisplayPointResults");

	AChallenge_ScramSportManager_TN_C_MC_DisplayPointResults_Params params;
	params.PointType = PointType;
	params.P1Score = P1Score;
	params.P2Score = P2Score;
	params.Player1Winner = Player1Winner;
	params.TextOnly = TextOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_MatchComplete
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OC5Demo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            P1GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::MC_MatchComplete(bool OC5Demo, int P1GamesWon, int P2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_MatchComplete");

	AChallenge_ScramSportManager_TN_C_MC_MatchComplete_Params params;
	params.OC5Demo = OC5Demo;
	params.P1GamesWon = P1GamesWon;
	params.P2GamesWon = P2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_GameComplete
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GameCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P1GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::MC_GameComplete(int GameCount, int P1GamesWon, int P2GamesWon, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_GameComplete");

	AChallenge_ScramSportManager_TN_C_MC_GameComplete_Params params;
	params.GameCount = GameCount;
	params.P1GamesWon = P1GamesWon;
	params.P2GamesWon = P2GamesWon;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_ShowPreServeInfo
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GameStatusText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::MC_ShowPreServeInfo(const struct FText& GameStatusText, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_ShowPreServeInfo");

	AChallenge_ScramSportManager_TN_C_MC_ShowPreServeInfo_Params params;
	params.GameStatusText = GameStatusText;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_CreateStandLocations
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::MC_CreateStandLocations(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_CreateStandLocations");

	AChallenge_ScramSportManager_TN_C_MC_CreateStandLocations_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseUmpVox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::PlayPoint(bool UseUmpVox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayPoint");

	AChallenge_ScramSportManager_TN_C_PlayPoint_Params params;
	params.UseUmpVox = UseUmpVox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ExecuteUbergraph_Challenge_ScramSportManager_TN
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::ExecuteUbergraph_Challenge_ScramSportManager_TN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ExecuteUbergraph_Challenge_ScramSportManager_TN");

	AChallenge_ScramSportManager_TN_C_ExecuteUbergraph_Challenge_ScramSportManager_TN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.FaultServeResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::FaultServeResult__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.FaultServeResult__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_FaultServeResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LetServeResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::LetServeResult__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LetServeResult__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_LetServeResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PreServeStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallenge_ScramSportManager_TN_C::PreServeStart__DelegateSignature(int Game, int Point, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PreServeStart__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_PreServeStart__DelegateSignature_Params params;
	params.Game = Game;
	params.Point = Point;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallInPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::BallInPlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallInPlay__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_BallInPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::PointComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointComplete__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_PointComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ServeReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::ServeReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ServeReady__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_ServeReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GameComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AChallenge_ScramSportManager_TN_C::GameComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GameComplete__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_GameComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MatchComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallenge_ScramSportManager_TN_C::MatchComplete__DelegateSignature(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MatchComplete__DelegateSignature");

	AChallenge_ScramSportManager_TN_C_MatchComplete__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
