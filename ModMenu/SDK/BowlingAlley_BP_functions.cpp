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

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetBallReturn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABowlingBallReturn*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ABowlingBallReturn* ABowlingAlley_BP_C::GetBallReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetBallReturn");

	ABowlingAlley_BP_C_GetBallReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BowlingAlley_BP.BowlingAlley_BP_C.GetOverrideLaneName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   LaneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::GetOverrideLaneName(const struct FName& LaneName, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetOverrideLaneName");

	ABowlingAlley_BP_C_GetOverrideLaneName_Params params;
	params.LaneName = LaneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SetQueuedBalls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          QueuedBalls                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABowlingAlley_BP_C::SetQueuedBalls(TArray<class UClass*>* QueuedBalls)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SetQueuedBalls");

	ABowlingAlley_BP_C_SetQueuedBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueuedBalls != nullptr)
		*QueuedBalls = params.QueuedBalls;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.QueueRandomBalls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          Balls                          (Parm, OutParm, ZeroConstructor)
void ABowlingAlley_BP_C::QueueRandomBalls(int Num, TArray<class UClass*>* Balls)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.QueueRandomBalls");

	ABowlingAlley_BP_C_QueueRandomBalls_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Balls != nullptr)
		*Balls = params.Balls;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.GetLaneManagerFromAlley
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingLaneManager_C*   BowlingLaneManager             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::GetLaneManagerFromAlley(class ABowlingLaneManager_C** BowlingLaneManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetLaneManagerFromAlley");

	ABowlingAlley_BP_C_GetLaneManagerFromAlley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BowlingLaneManager != nullptr)
		*BowlingLaneManager = params.BowlingLaneManager;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.GetCenterScoreboardFromAlley
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_CenterScoreboard_C*  CenterScoreboard               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::GetCenterScoreboardFromAlley(class ABW_CenterScoreboard_C** CenterScoreboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetCenterScoreboardFromAlley");

	ABowlingAlley_BP_C_GetCenterScoreboardFromAlley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CenterScoreboard != nullptr)
		*CenterScoreboard = params.CenterScoreboard;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.DebugDecrementLane
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::DebugDecrementLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DebugDecrementLane");

	ABowlingAlley_BP_C_DebugDecrementLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.GetScore
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABowlingAlley_BP_C::GetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetScore");

	ABowlingAlley_BP_C_GetScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SendBowlingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBowlingEvent   Bowling_Event                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::SendBowlingEvent(SportsScramble_EBowlingEvent Bowling_Event, class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SendBowlingEvent");

	ABowlingAlley_BP_C_SendBowlingEvent_Params params;
	params.Bowling_Event = Bowling_Event;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SetLaneList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LaneList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ResetToAll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::SetLaneList(TArray<struct FName>* LaneList, bool ResetToAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SetLaneList");

	ABowlingAlley_BP_C_SetLaneList_Params params;
	params.ResetToAll = ResetToAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LaneList != nullptr)
		*LaneList = params.LaneList;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateFrameBallCounter
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::UpdateFrameBallCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateFrameBallCounter");

	ABowlingAlley_BP_C_UpdateFrameBallCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecialBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<SpecialBallType_ESpecialBallType> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::SpawnSpecialBall(TEnumAsByte<SpecialBallType_ESpecialBallType> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecialBall");

	ABowlingAlley_BP_C_SpawnSpecialBall_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.IsLocallyControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LocallyControlled              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::IsLocallyControlled(bool* LocallyControlled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.IsLocallyControlled");

	ABowlingAlley_BP_C_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocallyControlled != nullptr)
		*LocallyControlled = params.LocallyControlled;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessAudienceSound
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ProcessAudienceSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessAudienceSound");

	ABowlingAlley_BP_C_ProcessAudienceSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.CycleThroughLanes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::CycleThroughLanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.CycleThroughLanes");

	ABowlingAlley_BP_C_CycleThroughLanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.IsLaneReady
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABowlingAlley_BP_C::IsLaneReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.IsLaneReady");

	ABowlingAlley_BP_C_IsLaneReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ResetScore
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ResetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ResetScore");

	ABowlingAlley_BP_C_ResetScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.DebugIncrementLane
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::DebugIncrementLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DebugIncrementLane");

	ABowlingAlley_BP_C_DebugIncrementLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NewLaneCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LaneChangeIncoming             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::NewLaneCheck(bool* LaneChangeIncoming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NewLaneCheck");

	ABowlingAlley_BP_C_NewLaneCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LaneChangeIncoming != nullptr)
		*LaneChangeIncoming = params.LaneChangeIncoming;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.GetRandomBall
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::GetRandomBall(class UClass** BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetRandomBall");

	ABowlingAlley_BP_C_GetRandomBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BallClass != nullptr)
		*BallClass = params.BallClass;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PinsDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABowlingBall*            BowlingBall                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ProcessScore(int PinsDown, class ABowlingBall* BowlingBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessScore");

	ABowlingAlley_BP_C_ProcessScore_Params params;
	params.PinsDown = PinsDown;
	params.BowlingBall = BowlingBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateScoreBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddedPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::UpdateScoreBoard(int AddedPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateScoreBoard");

	ABowlingAlley_BP_C_UpdateScoreBoard_Params params;
	params.AddedPoints = AddedPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.GetActiveLane
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABowlingLane*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ABowlingLane* ABowlingAlley_BP_C::GetActiveLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetActiveLane");

	ABowlingAlley_BP_C_GetActiveLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Cleanup");

	ABowlingAlley_BP_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Initialize");

	ABowlingAlley_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.UserConstructionScript");

	ABowlingAlley_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__FinishedFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_ShowStrike__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__FinishedFunc");

	ABowlingAlley_BP_C_Timeline_ShowStrike__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__UpdateFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_ShowStrike__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__UpdateFunc");

	ABowlingAlley_BP_C_Timeline_ShowStrike__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__FinishedFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_ShowSpare__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__FinishedFunc");

	ABowlingAlley_BP_C_Timeline_ShowSpare__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__UpdateFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_ShowSpare__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__UpdateFunc");

	ABowlingAlley_BP_C_Timeline_ShowSpare__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__FinishedFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_LargeTrainScore__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__FinishedFunc");

	ABowlingAlley_BP_C_Timeline_LargeTrainScore__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__UpdateFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_LargeTrainScore__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__UpdateFunc");

	ABowlingAlley_BP_C_Timeline_LargeTrainScore__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__FinishedFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_SmallTrainScore__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__FinishedFunc");

	ABowlingAlley_BP_C_Timeline_SmallTrainScore__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__UpdateFunc
// (BlueprintEvent)
void ABowlingAlley_BP_C::Timeline_SmallTrainScore__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__UpdateFunc");

	ABowlingAlley_BP_C_Timeline_SmallTrainScore__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.CreateDebugButtons
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::CreateDebugButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.CreateDebugButtons");

	ABowlingAlley_BP_C_CreateDebugButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.DebugButtonsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::DebugButtonsSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DebugButtonsSelected");

	ABowlingAlley_BP_C_DebugButtonsSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetCreateDebugButtons
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::NetCreateDebugButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetCreateDebugButtons");

	ABowlingAlley_BP_C_NetCreateDebugButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplayStrike
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::NetDisplayStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplayStrike");

	ABowlingAlley_BP_C_NetDisplayStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplaySpare
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::NetDisplaySpare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplaySpare");

	ABowlingAlley_BP_C_NetDisplaySpare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.RedrawScoreBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::RedrawScoreBoard(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.RedrawScoreBoard");

	ABowlingAlley_BP_C_RedrawScoreBoard_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetRedrawTrainingScoreboard
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::NetRedrawTrainingScoreboard(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetRedrawTrainingScoreboard");

	ABowlingAlley_BP_C_NetRedrawTrainingScoreboard_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetTrainingScoreFontSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewFontSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::NetTrainingScoreFontSize(int NewFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetTrainingScoreFontSize");

	ABowlingAlley_BP_C_NetTrainingScoreFontSize_Params params;
	params.NewFontSize = NewFontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ClearTrainingScoreboard
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ClearTrainingScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ClearTrainingScoreboard");

	ABowlingAlley_BP_C_ClearTrainingScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerRedrawTrainingScoreboard
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ServerRedrawTrainingScoreboard(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerRedrawTrainingScoreboard");

	ABowlingAlley_BP_C_ServerRedrawTrainingScoreboard_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerUpdateScoreBoard
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddedPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ServerUpdateScoreBoard(int AddedPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerUpdateScoreBoard");

	ABowlingAlley_BP_C_ServerUpdateScoreBoard_Params params;
	params.AddedPoints = AddedPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetUpdateScoreBoard
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddedPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::NetUpdateScoreBoard(int AddedPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetUpdateScoreBoard");

	ABowlingAlley_BP_C_NetUpdateScoreBoard_Params params;
	params.AddedPoints = AddedPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplayStrike
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerDisplayStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplayStrike");

	ABowlingAlley_BP_C_ServerDisplayStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplaySpare
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerDisplaySpare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplaySpare");

	ABowlingAlley_BP_C_ServerDisplaySpare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.PrepRevealTrainingScoreboard
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::PrepRevealTrainingScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.PrepRevealTrainingScoreboard");

	ABowlingAlley_BP_C_PrepRevealTrainingScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.RevealTrainingScoreboard
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::RevealTrainingScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.RevealTrainingScoreboard");

	ABowlingAlley_BP_C_RevealTrainingScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABowlingAlley_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveBeginPlay");

	ABowlingAlley_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.BallRollComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Scoring                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Out                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           restricted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::BallRollComplete(class ABowlingBall* Ball, bool Scoring, bool Out, bool restricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BallRollComplete");

	ABowlingAlley_BP_C_BallRollComplete_Params params;
	params.Ball = Ball;
	params.Scoring = Scoring;
	params.Out = Out;
	params.restricted = restricted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.OnBallOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           pit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           restricted                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::OnBallOut(class ABowlingBall* Ball, bool pit, bool restricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.OnBallOut");

	ABowlingAlley_BP_C_OnBallOut_Params params;
	params.Ball = Ball;
	params.pit = pit;
	params.restricted = restricted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwap
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::LaneSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwap");

	ABowlingAlley_BP_C_LaneSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.WaitForPinResetComplete
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::WaitForPinResetComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.WaitForPinResetComplete");

	ABowlingAlley_BP_C_WaitForPinResetComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwapComplete
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::LaneSwapComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwapComplete");

	ABowlingAlley_BP_C_LaneSwapComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveEndPlay");

	ABowlingAlley_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.PindeckHidden
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::PindeckHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.PindeckHidden");

	ABowlingAlley_BP_C_PindeckHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_Ball_Base_C*         NewBall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::StandardBallCreated(class ABW_Ball_Base_C* NewBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallCreated");

	ABowlingAlley_BP_C_StandardBallCreated_Params params;
	params.NewBall = NewBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.EnableAlley
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableDebug                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DisableLaneChanges             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Traditional                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::EnableAlley(bool EnableDebug, bool DisableLaneChanges, bool Traditional)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.EnableAlley");

	ABowlingAlley_BP_C_EnableAlley_Params params;
	params.EnableDebug = EnableDebug;
	params.DisableLaneChanges = DisableLaneChanges;
	params.Traditional = Traditional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.DisableAlley
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResetLane                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::DisableAlley(bool ResetLane)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DisableAlley");

	ABowlingAlley_BP_C_DisableAlley_Params params;
	params.ResetLane = ResetLane;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.AdditionalAddedScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::AdditionalAddedScore(class AActor* Instigator, int AddedScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.AdditionalAddedScore");

	ABowlingAlley_BP_C_AdditionalAddedScore_Params params;
	params.Instigator = Instigator;
	params.AddedScore = AddedScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.FinishLaneReset
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::FinishLaneReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.FinishLaneReset");

	ABowlingAlley_BP_C_FinishLaneReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecificBalls
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::SpawnSpecificBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecificBalls");

	ABowlingAlley_BP_C_SpawnSpecificBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_Ball_Base_C*         NewBall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ScrambleBallCreated(class ABW_Ball_Base_C* NewBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallCreated");

	ABowlingAlley_BP_C_ScrambleBallCreated_Params params;
	params.NewBall = NewBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnStandardBalls
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::SpawnStandardBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnStandardBalls");

	ABowlingAlley_BP_C_SpawnStandardBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.BallFinishedLane
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::BallFinishedLane(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BallFinishedLane");

	ABowlingAlley_BP_C_BallFinishedLane_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ClearBall
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ClearBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ClearBall");

	ABowlingAlley_BP_C_ClearBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetPlayerAnnouncerVO
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SoftSoundIDX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::NetPlayerAnnouncerVO(float Delay, int SoftSoundIDX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetPlayerAnnouncerVO");

	ABowlingAlley_BP_C_NetPlayerAnnouncerVO_Params params;
	params.Delay = Delay;
	params.SoftSoundIDX = SoftSoundIDX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ResetAnnouncerVO
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ResetAnnouncerVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ResetAnnouncerVO");

	ABowlingAlley_BP_C_ResetAnnouncerVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPrimitiveActor*    DestroyedPrimitive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::StandardBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallDestroyed");

	ABowlingAlley_BP_C_StandardBallDestroyed_Params params;
	params.DestroyedPrimitive = DestroyedPrimitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPrimitiveActor*    DestroyedPrimitive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ScrambleBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallDestroyed");

	ABowlingAlley_BP_C_ScrambleBallDestroyed_Params params;
	params.DestroyedPrimitive = DestroyedPrimitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.InstigatorBallDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPrimitiveActor*    DestroyedPrimitive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::InstigatorBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.InstigatorBallDestroyed");

	ABowlingAlley_BP_C_InstigatorBallDestroyed_Params params;
	params.DestroyedPrimitive = DestroyedPrimitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            InstigatorBall                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::AddInstigatorBall(class ABowlingBall* InstigatorBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBall");

	ABowlingAlley_BP_C_AddInstigatorBall_Params params;
	params.InstigatorBall = InstigatorBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NotifyGameEnding
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::NotifyGameEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NotifyGameEnding");

	ABowlingAlley_BP_C_NotifyGameEnding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnRandomBall
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::SpawnRandomBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnRandomBall");

	ABowlingAlley_BP_C_SpawnRandomBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.BeginTraditionalFrame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Solo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::BeginTraditionalFrame(bool Solo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BeginTraditionalFrame");

	ABowlingAlley_BP_C_BeginTraditionalFrame_Params params;
	params.Solo = Solo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.EndTraditionalFrame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Solo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LastFrame                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::EndTraditionalFrame(bool Solo, bool LastFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.EndTraditionalFrame");

	ABowlingAlley_BP_C_EndTraditionalFrame_Params params;
	params.Solo = Solo;
	params.LastFrame = LastFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ResetLane
// (BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ResetLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ResetLane");

	ABowlingAlley_BP_C_ResetLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer1BallThrown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerPlayer1BallThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer1BallThrown");

	ABowlingAlley_BP_C_ServerPlayer1BallThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer2BallThrown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerPlayer2BallThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer2BallThrown");

	ABowlingAlley_BP_C_ServerPlayer2BallThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerCycleThroughLanes
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerCycleThroughLanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerCycleThroughLanes");

	ABowlingAlley_BP_C_ServerCycleThroughLanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerResetPins
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerResetPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerResetPins");

	ABowlingAlley_BP_C_ServerResetPins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayerBallCountReset
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::ServerPlayerBallCountReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayerBallCountReset");

	ABowlingAlley_BP_C_ServerPlayerBallCountReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerSpawnSpecialBall
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<SpecialBallType_ESpecialBallType> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ServerSpawnSpecialBall(TEnumAsByte<SpecialBallType_ESpecialBallType> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerSpawnSpecialBall");

	ABowlingAlley_BP_C_ServerSpawnSpecialBall_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerProcessPinsDown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Pins                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ServerProcessPinsDown(int Pins)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerProcessPinsDown");

	ABowlingAlley_BP_C_ServerProcessPinsDown_Params params;
	params.Pins = Pins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SlideBallReturn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           slideForward                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::SlideBallReturn(bool slideForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SlideBallReturn");

	ABowlingAlley_BP_C_SlideBallReturn_Params params;
	params.slideForward = slideForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Multi_ResetFrameCounts
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::Multi_ResetFrameCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Multi_ResetFrameCounts");

	ABowlingAlley_BP_C_Multi_ResetFrameCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.Server_SpawnSpecificBall
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::Server_SpawnSpecificBall(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Server_SpawnSpecificBall");

	ABowlingAlley_BP_C_Server_SpawnSpecificBall_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.PlayerAnnouncerVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::PlayerAnnouncerVO(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.PlayerAnnouncerVO");

	ABowlingAlley_BP_C_PlayerAnnouncerVO_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBallCode
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::AddInstigatorBallCode(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBallCode");

	ABowlingAlley_BP_C_AddInstigatorBallCode_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.NetSetLaneList
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LaneList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ResetToAll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingAlley_BP_C::NetSetLaneList(TArray<struct FName>* LaneList, bool ResetToAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetSetLaneList");

	ABowlingAlley_BP_C_NetSetLaneList_Params params;
	params.ResetToAll = ResetToAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LaneList != nullptr)
		*LaneList = params.LaneList;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.MoveBallReturn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::MoveBallReturn(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.MoveBallReturn");

	ABowlingAlley_BP_C_MoveBallReturn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ExecuteUbergraph_BowlingAlley_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ExecuteUbergraph_BowlingAlley_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ExecuteUbergraph_BowlingAlley_BP");

	ABowlingAlley_BP_C_ExecuteUbergraph_BowlingAlley_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessPinsDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Pins                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::ProcessPinsDown__DelegateSignature(int ID, int Pins)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessPinsDown__DelegateSignature");

	ABowlingAlley_BP_C_ProcessPinsDown__DelegateSignature_Params params;
	params.ID = ID;
	params.Pins = Pins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.LaneReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABowlingAlley_BP_C::LaneReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.LaneReady__DelegateSignature");

	ABowlingAlley_BP_C_LaneReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.SpecialScoring__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SpecialPoints                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::SpecialScoring__DelegateSignature(int LaneID, int SpecialPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpecialScoring__DelegateSignature");

	ABowlingAlley_BP_C_SpecialScoring__DelegateSignature_Params params;
	params.LaneID = LaneID;
	params.SpecialPoints = SpecialPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.CurrentLaneScore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::CurrentLaneScore__DelegateSignature(int LaneID, int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.CurrentLaneScore__DelegateSignature");

	ABowlingAlley_BP_C_CurrentLaneScore__DelegateSignature_Params params;
	params.LaneID = LaneID;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAlley_BP.BowlingAlley_BP_C.BowlingEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBowlingEvent   BowlingEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAlley_BP_C::BowlingEvent__DelegateSignature(int PlayerId, SportsScramble_EBowlingEvent BowlingEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BowlingEvent__DelegateSignature");

	ABowlingAlley_BP_C_BowlingEvent__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.BowlingEvent = BowlingEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
