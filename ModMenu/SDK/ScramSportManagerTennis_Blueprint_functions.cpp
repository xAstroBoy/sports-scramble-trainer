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

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SaveTennisState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  player1Instrument              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  player2Instrument              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  activeArenaScramble            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::SaveTennisState(class UClass** Ball, class UClass** player1Instrument, class UClass** player2Instrument, class UClass** activeArenaScramble)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SaveTennisState");

	AScramSportManagerTennis_Blueprint_C_SaveTennisState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ball != nullptr)
		*Ball = params.Ball;
	if (player1Instrument != nullptr)
		*player1Instrument = params.player1Instrument;
	if (player2Instrument != nullptr)
		*player2Instrument = params.player2Instrument;
	if (activeArenaScramble != nullptr)
		*activeArenaScramble = params.activeArenaScramble;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InitializeSpectator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::InitializeSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InitializeSpectator");

	AScramSportManagerTennis_Blueprint_C_InitializeSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetActiveScrambles
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::ResetActiveScrambles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetActiveScrambles");

	AScramSportManagerTennis_Blueprint_C_ResetActiveScrambles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindExistingServeLocationIndicator
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::BindExistingServeLocationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindExistingServeLocationIndicator");

	AScramSportManagerTennis_Blueprint_C_BindExistingServeLocationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnRep_ServeLocationIndicator
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::OnRep_ServeLocationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnRep_ServeLocationIndicator");

	AScramSportManagerTennis_Blueprint_C_OnRep_ServeLocationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindNewServeLocationIndicator
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::BindNewServeLocationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindNewServeLocationIndicator");

	AScramSportManagerTennis_Blueprint_C_BindNewServeLocationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ShowDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::ShowDebugInfo(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ShowDebugInfo");

	AScramSportManagerTennis_Blueprint_C_ShowDebugInfo_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateServeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::CreateServeLocation(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateServeLocation");

	AScramSportManagerTennis_Blueprint_C_CreateServeLocation_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.AllowAIServe
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::AllowAIServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.AllowAIServe");

	AScramSportManagerTennis_Blueprint_C_AllowAIServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateReceiveLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::CreateReceiveLocation(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateReceiveLocation");

	AScramSportManagerTennis_Blueprint_C_CreateReceiveLocation_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetGameStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (Parm, OutParm)
void AScramSportManagerTennis_Blueprint_C::GetGameStatus(struct FText* StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetGameStatus");

	AScramSportManagerTennis_Blueprint_C_GetGameStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusText != nullptr)
		*StatusText = params.StatusText;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetPointType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PointType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::GetPointType(struct FName* PointType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetPointType");

	AScramSportManagerTennis_Blueprint_C_GetPointType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PointType != nullptr)
		*PointType = params.PointType;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetResultBools
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::ResetResultBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetResultBools");

	AScramSportManagerTennis_Blueprint_C_ResetResultBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Cleanup");

	AScramSportManagerTennis_Blueprint_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Initialize");

	AScramSportManagerTennis_Blueprint_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UserConstructionScript");

	AScramSportManagerTennis_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__FinishedFunc
// (BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::Timeline_Fade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__FinishedFunc");

	AScramSportManagerTennis_Blueprint_C_Timeline_Fade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__UpdateFunc
// (BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::Timeline_Fade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__UpdateFunc");

	AScramSportManagerTennis_Blueprint_C_Timeline_Fade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_38F84231481C3446BB8F2BBBF214C4CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::OnLoaded_38F84231481C3446BB8F2BBBF214C4CE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_38F84231481C3446BB8F2BBBF214C4CE");

	AScramSportManagerTennis_Blueprint_C_OnLoaded_38F84231481C3446BB8F2BBBF214C4CE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_A90B74D8415A762510668AB9493CBDF6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::OnLoaded_A90B74D8415A762510668AB9493CBDF6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_A90B74D8415A762510668AB9493CBDF6");

	AScramSportManagerTennis_Blueprint_C_OnLoaded_A90B74D8415A762510668AB9493CBDF6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_0D0A114843992570557A2E82FF9BA28B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::OnLoaded_0D0A114843992570557A2E82FF9BA28B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_0D0A114843992570557A2E82FF9BA28B");

	AScramSportManagerTennis_Blueprint_C_OnLoaded_0D0A114843992570557A2E82FF9BA28B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveBeginPlay");

	AScramSportManagerTennis_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.TennisEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_ETennisEvent    TennisEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::TennisEvent(int Player, SportsScramble_ETennisEvent TennisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.TennisEvent");

	AScramSportManagerTennis_Blueprint_C_TennisEvent_Params params;
	params.Player = Player;
	params.TennisEvent = TennisEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveEndPlay");

	AScramSportManagerTennis_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointMade
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            P1Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::PointMade(int P1Score, int P2Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointMade");

	AScramSportManagerTennis_Blueprint_C_PointMade_Params params;
	params.P1Score = P1Score;
	params.P2Score = P2Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LET
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::LET()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LET");

	AScramSportManagerTennis_Blueprint_C_LET_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.WaitForOpponentServe
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::WaitForOpponentServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.WaitForOpponentServe");

	AScramSportManagerTennis_Blueprint_C_WaitForOpponentServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InPlay
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::InPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InPlay");

	AScramSportManagerTennis_Blueprint_C_InPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Fault
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::Fault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Fault");

	AScramSportManagerTennis_Blueprint_C_Fault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PrePareServe
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::PrePareServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PrePareServe");

	AScramSportManagerTennis_Blueprint_C_PrePareServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StartOrgan
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::StartOrgan()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StartOrgan");

	AScramSportManagerTennis_Blueprint_C_StartOrgan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StopOrgan
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::StopOrgan()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StopOrgan");

	AScramSportManagerTennis_Blueprint_C_StopOrgan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallGrabbed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::BallGrabbed(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallGrabbed");

	AScramSportManagerTennis_Blueprint_C_BallGrabbed_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::BallSpawned(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned");

	AScramSportManagerTennis_Blueprint_C_BallSpawned_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SendDebugString
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 S                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::SendDebugString(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SendDebugString");

	AScramSportManagerTennis_Blueprint_C_SendDebugString_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameIntroSequence
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::GameIntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameIntroSequence");

	AScramSportManagerTennis_Blueprint_C_GameIntroSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayDoubleFaultSFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::PlayDoubleFaultSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayDoubleFaultSFX");

	AScramSportManagerTennis_Blueprint_C_PlayDoubleFaultSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayOutSFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::PlayOutSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayOutSFX");

	AScramSportManagerTennis_Blueprint_C_PlayOutSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeSwitch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::ServeSwitch(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeSwitch");

	AScramSportManagerTennis_Blueprint_C_ServeSwitch_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoopOrgan
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::LoopOrgan()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoopOrgan");

	AScramSportManagerTennis_Blueprint_C_LoopOrgan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_DisplayPointResults
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PointType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P1Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Winner                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TextOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::MC_DisplayPointResults(const struct FName& PointType, int P1Score, int P2Score, bool Player1Winner, bool TextOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_DisplayPointResults");

	AScramSportManagerTennis_Blueprint_C_MC_DisplayPointResults_Params params;
	params.PointType = PointType;
	params.P1Score = P1Score;
	params.P2Score = P2Score;
	params.Player1Winner = Player1Winner;
	params.TextOnly = TextOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_MatchComplete
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OC5Demo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            P1GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::MC_MatchComplete(bool OC5Demo, int P1GamesWon, int P2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_MatchComplete");

	AScramSportManagerTennis_Blueprint_C_MC_MatchComplete_Params params;
	params.OC5Demo = OC5Demo;
	params.P1GamesWon = P1GamesWon;
	params.P2GamesWon = P2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_GameComplete
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GameCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P1GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2GamesWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::MC_GameComplete(int GameCount, int P1GamesWon, int P2GamesWon, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_GameComplete");

	AScramSportManagerTennis_Blueprint_C_MC_GameComplete_Params params;
	params.GameCount = GameCount;
	params.P1GamesWon = P1GamesWon;
	params.P2GamesWon = P2GamesWon;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_ShowPreServeInfo
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GameStatusText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::MC_ShowPreServeInfo(const struct FText& GameStatusText, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_ShowPreServeInfo");

	AScramSportManagerTennis_Blueprint_C_MC_ShowPreServeInfo_Params params;
	params.GameStatusText = GameStatusText;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_CreateStandLocations
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::MC_CreateStandLocations(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_CreateStandLocations");

	AScramSportManagerTennis_Blueprint_C_MC_CreateStandLocations_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeChangeCommunicated
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::ServeChangeCommunicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeChangeCommunicated");

	AScramSportManagerTennis_Blueprint_C_ServeChangeCommunicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::UpdatePauseInfo(bool IsPaused, bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseInfo");

	AScramSportManagerTennis_Blueprint_C_UpdatePauseInfo_Params params;
	params.IsPaused = IsPaused;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseBubble
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::UpdatePauseBubble(bool IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseBubble");

	AScramSportManagerTennis_Blueprint_C_UpdatePauseBubble_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameResume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::OnGameResume(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameResume");

	AScramSportManagerTennis_Blueprint_C_OnGameResume_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGamePause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::OnGamePause(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGamePause");

	AScramSportManagerTennis_Blueprint_C_OnGamePause_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoadTennisState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  player1Instrument              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  player2Instrument              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  activeArenaScramble            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::LoadTennisState(class UClass* Ball, class UClass* player1Instrument, class UClass* player2Instrument, class UClass* activeArenaScramble)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoadTennisState");

	AScramSportManagerTennis_Blueprint_C_LoadTennisState_Params params;
	params.Ball = Ball;
	params.player1Instrument = player1Instrument;
	params.player2Instrument = player2Instrument;
	params.activeArenaScramble = activeArenaScramble;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Multi_RestoreState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            P1Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            P2Score                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::Multi_RestoreState(int P1Score, int P2Score, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Multi_RestoreState");

	AScramSportManagerTennis_Blueprint_C_Multi_RestoreState_Params params;
	params.P1Score = P1Score;
	params.P2Score = P2Score;
	params.Player1Games = Player1Games;
	params.Player2Games = Player2Games;
	params.Player1Serve = Player1Serve;
	params.Player2Serve = Player2Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServerReady
// (Event, Public, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::ServerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServerReady");

	AScramSportManagerTennis_Blueprint_C_ServerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameDone
// (Event, Public, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::OnGameDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameDone");

	AScramSportManagerTennis_Blueprint_C_OnGameDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.NetDisablePause
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::NetDisablePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.NetDisablePause");

	AScramSportManagerTennis_Blueprint_C_NetDisablePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseUmpVox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::PlayPoint(bool UseUmpVox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayPoint");

	AScramSportManagerTennis_Blueprint_C_PlayPoint_Params params;
	params.UseUmpVox = UseUmpVox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ExecuteUbergraph_ScramSportManagerTennis_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::ExecuteUbergraph_ScramSportManagerTennis_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ExecuteUbergraph_ScramSportManagerTennis_Blueprint");

	AScramSportManagerTennis_Blueprint_C_ExecuteUbergraph_ScramSportManagerTennis_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.FaultServeResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::FaultServeResult__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.FaultServeResult__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_FaultServeResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LetServeResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::LetServeResult__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LetServeResult__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_LetServeResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PreServeStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerTennis_Blueprint_C::PreServeStart__DelegateSignature(int Game, int Point, bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PreServeStart__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_PreServeStart__DelegateSignature_Params params;
	params.Game = Game;
	params.Point = Point;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallInPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::BallInPlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallInPlay__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_BallInPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::PointComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointComplete__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_PointComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::ServeReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeReady__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_ServeReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerTennis_Blueprint_C::GameComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameComplete__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_GameComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MatchComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerTennis_Blueprint_C::MatchComplete__DelegateSignature(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MatchComplete__DelegateSignature");

	AScramSportManagerTennis_Blueprint_C_MatchComplete__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
