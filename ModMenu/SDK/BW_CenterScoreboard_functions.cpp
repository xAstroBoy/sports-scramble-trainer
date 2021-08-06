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

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetBlurTranslationAndScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CarX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Translation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::GetBlurTranslationAndScale(float CarX, float* Translation, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetBlurTranslationAndScale");

	ABW_CenterScoreboard_C_GetBlurTranslationAndScale_Params params;
	params.CarX = CarX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetCarPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Red                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CarPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::GetCarPosition(bool Red, float* CarPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetCarPosition");

	ABW_CenterScoreboard_C_GetCarPosition_Params params;
	params.Red = Red;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CarPosition != nullptr)
		*CarPosition = params.CarPosition;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetAbsoluteCarPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CarPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::GetAbsoluteCarPosition(float* CarPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetAbsoluteCarPosition");

	ABW_CenterScoreboard_C_GetAbsoluteCarPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CarPosition != nullptr)
		*CarPosition = params.CarPosition;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetRelativeCarPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Red                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          RelativePosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::GetRelativeCarPosition(bool Red, float* RelativePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetRelativeCarPosition");

	ABW_CenterScoreboard_C_GetRelativeCarPosition_Params params;
	params.Red = Red;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelativePosition != nullptr)
		*RelativePosition = params.RelativePosition;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeTraditionalActors
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::InitializeTraditionalActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeTraditionalActors");

	ABW_CenterScoreboard_C_InitializeTraditionalActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateVideoScoreboardActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Traditional                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ActorFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_CenterScoreboard_C::UpdateVideoScoreboardActor(bool Traditional, bool* ActorFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateVideoScoreboardActor");

	ABW_CenterScoreboard_C_UpdateVideoScoreboardActor_Params params;
	params.Traditional = Traditional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorFound != nullptr)
		*ActorFound = params.ActorFound;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetTimeRemaining
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABW_CenterScoreboard_C::GetTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetTimeRemaining");

	ABW_CenterScoreboard_C_GetTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeRoadActors
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::InitializeRoadActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeRoadActors");

	ABW_CenterScoreboard_C_InitializeRoadActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.Initialize");

	ABW_CenterScoreboard_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UserConstructionScript");

	ABW_CenterScoreboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::StartRoad__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__FinishedFunc");

	ABW_CenterScoreboard_C_StartRoad__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::StartRoad__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__UpdateFunc");

	ABW_CenterScoreboard_C_StartRoad__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::BlueCarDriftTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__FinishedFunc");

	ABW_CenterScoreboard_C_BlueCarDriftTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::BlueCarDriftTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__UpdateFunc");

	ABW_CenterScoreboard_C_BlueCarDriftTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::RedCarDriftTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__FinishedFunc");

	ABW_CenterScoreboard_C_RedCarDriftTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::RedCarDriftTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__UpdateFunc");

	ABW_CenterScoreboard_C_RedCarDriftTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateFinishLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__FinishedFunc");

	ABW_CenterScoreboard_C_AnimateFinishLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateFinishLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__UpdateFunc");

	ABW_CenterScoreboard_C_AnimateFinishLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateStartingLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__FinishedFunc");

	ABW_CenterScoreboard_C_AnimateStartingLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateStartingLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__UpdateFunc");

	ABW_CenterScoreboard_C_AnimateStartingLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::BlueCarDriveAway__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__FinishedFunc");

	ABW_CenterScoreboard_C_BlueCarDriveAway__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::BlueCarDriveAway__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__UpdateFunc");

	ABW_CenterScoreboard_C_BlueCarDriveAway__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::RedCarDriveAway__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__FinishedFunc");

	ABW_CenterScoreboard_C_RedCarDriveAway__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::RedCarDriveAway__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__UpdateFunc");

	ABW_CenterScoreboard_C_RedCarDriveAway__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateBlueCarY__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__FinishedFunc");

	ABW_CenterScoreboard_C_AnimateBlueCarY__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateBlueCarY__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__UpdateFunc");

	ABW_CenterScoreboard_C_AnimateBlueCarY__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateRedCarY__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__FinishedFunc");

	ABW_CenterScoreboard_C_AnimateRedCarY__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::AnimateRedCarY__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__UpdateFunc");

	ABW_CenterScoreboard_C_AnimateRedCarY__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::ScaleStartingLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__FinishedFunc");

	ABW_CenterScoreboard_C_ScaleStartingLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::ScaleStartingLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__UpdateFunc");

	ABW_CenterScoreboard_C_ScaleStartingLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::SpawnAnimBlueCar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__FinishedFunc");

	ABW_CenterScoreboard_C_SpawnAnimBlueCar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::SpawnAnimBlueCar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__UpdateFunc");

	ABW_CenterScoreboard_C_SpawnAnimBlueCar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::SpawnAnimRedCar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__FinishedFunc");

	ABW_CenterScoreboard_C_SpawnAnimRedCar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::SpawnAnimRedCar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__UpdateFunc");

	ABW_CenterScoreboard_C_SpawnAnimRedCar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__FinishedFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::Timeline_TestingFinishLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__FinishedFunc");

	ABW_CenterScoreboard_C_Timeline_TestingFinishLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__UpdateFunc
// (BlueprintEvent)
void ABW_CenterScoreboard_C::Timeline_TestingFinishLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__UpdateFunc");

	ABW_CenterScoreboard_C_Timeline_TestingFinishLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_CenterScoreboard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveBeginPlay");

	ABW_CenterScoreboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::BW_StartTimer(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimer");

	ABW_CenterScoreboard_C_BW_StartTimer_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerLoop
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::TimerLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerLoop");

	ABW_CenterScoreboard_C_TimerLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ClearTimer
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::ClearTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ClearTimer");

	ABW_CenterScoreboard_C_ClearTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall1Thrown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AlleyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::PlayerBall1Thrown(int AlleyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall1Thrown");

	ABW_CenterScoreboard_C_PlayerBall1Thrown_Params params;
	params.AlleyID = AlleyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall2Thrown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AlleyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::PlayerBall2Thrown(int AlleyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall2Thrown");

	ABW_CenterScoreboard_C_PlayerBall2Thrown_Params params;
	params.AlleyID = AlleyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBallCountReset
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AlleyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::PlayerBallCountReset(int AlleyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBallCountReset");

	ABW_CenterScoreboard_C_PlayerBallCountReset_Params params;
	params.AlleyID = AlleyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceTrack
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::StartRaceTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceTrack");

	ABW_CenterScoreboard_C_StartRaceTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopMovingRoad
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::StopMovingRoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopMovingRoad");

	ABW_CenterScoreboard_C_StopMovingRoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDrift
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::BlueCarDrift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDrift");

	ABW_CenterScoreboard_C_BlueCarDrift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDrift
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::RedCarDrift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDrift");

	ABW_CenterScoreboard_C_RedCarDrift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowFinishLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TrainingTimer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_CenterScoreboard_C::ShowFinishLine(bool TrainingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowFinishLine");

	ABW_CenterScoreboard_C_ShowFinishLine_Params params;
	params.TrainingTimer = TrainingTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideFinishLine
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::HideFinishLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideFinishLine");

	ABW_CenterScoreboard_C_HideFinishLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetStartLine
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::ResetStartLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetStartLine");

	ABW_CenterScoreboard_C_ResetStartLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarExit
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::BlueCarExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarExit");

	ABW_CenterScoreboard_C_BlueCarExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarExit
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::RedCarExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarExit");

	ABW_CenterScoreboard_C_RedCarExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveTick");

	ABW_CenterScoreboard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateCarFromScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::UpdateCarFromScore(int Player, int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateCarFromScore");

	ABW_CenterScoreboard_C_UpdateCarFromScore_Params params;
	params.Player = Player;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateBlueCarPosition
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::UpdateBlueCarPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateBlueCarPosition");

	ABW_CenterScoreboard_C_UpdateBlueCarPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateRedCarPosition
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::UpdateRedCarPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateRedCarPosition");

	ABW_CenterScoreboard_C_UpdateRedCarPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.CarsExitScoreboard
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::CarsExitScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.CarsExitScoreboard");

	ABW_CenterScoreboard_C_CarsExitScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetBlueCar
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::ResetBlueCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetBlueCar");

	ABW_CenterScoreboard_C_ResetBlueCar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetRedCar
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::ResetRedCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetRedCar");

	ABW_CenterScoreboard_C_ResetRedCar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetCars
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::ResetCars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetCars");

	ABW_CenterScoreboard_C_ResetCars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceSounds
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::StartRaceSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceSounds");

	ABW_CenterScoreboard_C_StartRaceSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopRaceLoop
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::StopRaceLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopRaceLoop");

	ABW_CenterScoreboard_C_StopRaceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimerNoRace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::BW_StartTimerNoRace(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimerNoRace");

	ABW_CenterScoreboard_C_BW_StartTimerNoRace_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_SetInitialTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InitialTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TrainingTimer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_CenterScoreboard_C::BW_SetInitialTimer(int InitialTime, bool TrainingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_SetInitialTimer");

	ABW_CenterScoreboard_C_BW_SetInitialTimer_Params params;
	params.InitialTime = InitialTime;
	params.TrainingTimer = TrainingTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowTrainingFinishLine
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::ShowTrainingFinishLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowTrainingFinishLine");

	ABW_CenterScoreboard_C_ShowTrainingFinishLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideTrainingFinishLine
// (BlueprintCallable, BlueprintEvent)
void ABW_CenterScoreboard_C::HideTrainingFinishLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideTrainingFinishLine");

	ABW_CenterScoreboard_C_HideTrainingFinishLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateMatchScore
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::UpdateMatchScore(int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateMatchScore");

	ABW_CenterScoreboard_C_UpdateMatchScore_Params params;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.TravelCapsuleOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::TravelCapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.TravelCapsuleOpening");

	ABW_CenterScoreboard_C_TravelCapsuleOpening_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ExecuteUbergraph_BW_CenterScoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::ExecuteUbergraph_BW_CenterScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ExecuteUbergraph_BW_CenterScoreboard");

	ABW_CenterScoreboard_C_ExecuteUbergraph_BW_CenterScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_CenterScoreboard_C::TimerChange__DelegateSignature(int TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerChange__DelegateSignature");

	ABW_CenterScoreboard_C_TimerChange__DelegateSignature_Params params;
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
