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

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DidLocalPlayerWinGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           won                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAward_BaseballBase_C::DidLocalPlayerWinGame(bool* won)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DidLocalPlayerWinGame");

	ABP_TrophyAward_BaseballBase_C_DidLocalPlayerWinGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (won != nullptr)
		*won = params.won;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.NewFunction_1_1
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::NewFunction_1_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.NewFunction_1_1");

	ABP_TrophyAward_BaseballBase_C_NewFunction_1_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckBBPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerBatting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isThisPlayer                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAward_BaseballBase_C::CheckBBPlayer(bool IsPlayerBatting, bool* isThisPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckBBPlayer");

	ABP_TrophyAward_BaseballBase_C_CheckBBPlayer_Params params;
	params.IsPlayerBatting = IsPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isThisPlayer != nullptr)
		*isThisPlayer = params.isThisPlayer;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsLocalPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAward_BaseballBase_C::CheckPlayer(int PlayerIndex, bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckPlayer");

	ABP_TrophyAward_BaseballBase_C_CheckPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GetLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::GetLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GetLocalPlayer");

	ABP_TrophyAward_BaseballBase_C_GetLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.UserConstructionScript");

	ABP_TrophyAward_BaseballBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Initialize");

	ABP_TrophyAward_BaseballBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DebugEarn");

	ABP_TrophyAward_BaseballBase_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ReceiveEndPlay");

	ABP_TrophyAward_BaseballBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Baseball
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::Baseball(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Baseball");

	ABP_TrophyAward_BaseballBase_C_Baseball_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Strike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::Strike(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Strike");

	ABP_TrophyAward_BaseballBase_C_Strike_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.HomeRun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::HomeRun(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.HomeRun");

	ABP_TrophyAward_BaseballBase_C_HomeRun_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.RunnerHome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::RunnerHome(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.RunnerHome");

	ABP_TrophyAward_BaseballBase_C_RunnerHome_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.AirCatchEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::AirCatchEvent(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.AirCatchEvent");

	ABP_TrophyAward_BaseballBase_C_AirCatchEvent_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.TakeBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::TakeBase(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.TakeBase");

	ABP_TrophyAward_BaseballBase_C_TakeBase_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.SwingAndMiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::SwingAndMiss(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.SwingAndMiss");

	ABP_TrophyAward_BaseballBase_C_SwingAndMiss_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Freebee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::Freebee(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Freebee");

	ABP_TrophyAward_BaseballBase_C_Freebee_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CatchEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FielderPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::CatchEvent(const struct FVector& FielderPosition, class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CatchEvent");

	ABP_TrophyAward_BaseballBase_C_CatchEvent_Params params;
	params.FielderPosition = FielderPosition;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::GameEnd(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GameEnd");

	ABP_TrophyAward_BaseballBase_C_GameEnd_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.PitchEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::PitchEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.PitchEvent");

	ABP_TrophyAward_BaseballBase_C_PitchEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.WalkEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::WalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.WalkEvent");

	ABP_TrophyAward_BaseballBase_C_WalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BadPitch
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::BadPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BadPitch");

	ABP_TrophyAward_BaseballBase_C_BadPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BallEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::BallEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BallEvent");

	ABP_TrophyAward_BaseballBase_C_BallEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.OnHit
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BaseballBase_C::OnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.OnHit");

	ABP_TrophyAward_BaseballBase_C_OnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ExecuteUbergraph_BP_TrophyAward_BaseballBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BaseballBase_C::ExecuteUbergraph_BP_TrophyAward_BaseballBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ExecuteUbergraph_BP_TrophyAward_BaseballBase");

	ABP_TrophyAward_BaseballBase_C_ExecuteUbergraph_BP_TrophyAward_BaseballBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
