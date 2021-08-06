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

// Function BW_Train_Base.BW_Train_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Train_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.AddActorToGameElementList");

	ABW_Train_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BW_Train_Base.BW_Train_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Train_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.Shutdown");

	ABW_Train_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BW_Train_Base.BW_Train_Base_C.ToggleLaneChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableLaneChanges             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Train_Base_C::ToggleLaneChanging(bool DisableLaneChanges)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ToggleLaneChanging");

	ABW_Train_Base_C_ToggleLaneChanging_Params params;
	params.DisableLaneChanges = DisableLaneChanges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.ShowScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::ShowScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ShowScoreboard");

	ABW_Train_Base_C_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.CalculateEndScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::CalculateEndScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.CalculateEndScore");

	ABW_Train_Base_C_CalculateEndScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.ResetLane
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResetScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetPins                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetBallCounter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Train_Base_C::ResetLane(bool ResetScore, bool ResetPins, bool ResetBallCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ResetLane");

	ABW_Train_Base_C_ResetLane_Params params;
	params.ResetScore = ResetScore;
	params.ResetPins = ResetPins;
	params.ResetBallCounter = ResetBallCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.DestroyAllBalls_1
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::DestroyAllBalls_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.DestroyAllBalls_1");

	ABW_Train_Base_C_DestroyAllBalls_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.Initialize");

	ABW_Train_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.UserConstructionScript");

	ABW_Train_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.OnLoaded_B645D8DE43A43D6A03D922BF743B0B01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::OnLoaded_B645D8DE43A43D6A03D922BF743B0B01(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.OnLoaded_B645D8DE43A43D6A03D922BF743B0B01");

	ABW_Train_Base_C_OnLoaded_B645D8DE43A43D6A03D922BF743B0B01_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Train_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ReceiveBeginPlay");

	ABW_Train_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.BowlingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBowlingEvent   BowlingEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.BowlingEvent");

	ABW_Train_Base_C_BowlingEvent_Params params;
	params.Player = Player;
	params.BowlingEvent = BowlingEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.SpecificBallCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::SpecificBallCreated(class ABW_Ball_Base_C* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.SpecificBallCreated");

	ABW_Train_Base_C_SpecificBallCreated_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.RandomBallCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::RandomBallCreated(class ABW_Ball_Base_C* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.RandomBallCreated");

	ABW_Train_Base_C_RandomBallCreated_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.GetCurrentLaneScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::GetCurrentLaneScore(int LaneID, int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.GetCurrentLaneScore");

	ABW_Train_Base_C_GetCurrentLaneScore_Params params;
	params.LaneID = LaneID;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.EndOfGame");

	ABW_Train_Base_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.SpecialScoreEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::SpecialScoreEvent(int LaneID, int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.SpecialScoreEvent");

	ABW_Train_Base_C_SpecialScoreEvent_Params params;
	params.LaneID = LaneID;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.PlayAudio_Countdown
// (BlueprintCallable, BlueprintEvent)
void ABW_Train_Base_C::PlayAudio_Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.PlayAudio_Countdown");

	ABW_Train_Base_C_PlayAudio_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Train_Base.BW_Train_Base_C.ExecuteUbergraph_BW_Train_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Train_Base_C::ExecuteUbergraph_BW_Train_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Train_Base.BW_Train_Base_C.ExecuteUbergraph_BW_Train_Base");

	ABW_Train_Base_C_ExecuteUbergraph_BW_Train_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
