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

// Function ServeLauncher.ServeLauncher_C.UpdatePostionsMoveAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AlphaValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::UpdatePostionsMoveAnimation(float AlphaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.UpdatePostionsMoveAnimation");

	AServeLauncher_C_UpdatePostionsMoveAnimation_Params params;
	params.AlphaValue = AlphaValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.RemoveInstructions
// (Public, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::RemoveInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.RemoveInstructions");

	AServeLauncher_C_RemoveInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.SpawnInstructions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::SpawnInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.SpawnInstructions");

	AServeLauncher_C_SpawnInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.SetupBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::SetupBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.SetupBall");

	AServeLauncher_C_SetupBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.OnRep_Ball
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::OnRep_Ball()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.OnRep_Ball");

	AServeLauncher_C_OnRep_Ball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.SetTNBallScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              TN_Scram_Ball                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::SetTNBallScale(class AScramBall* TN_Scram_Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.SetTNBallScale");

	AServeLauncher_C_SetTNBallScale_Params params;
	params.TN_Scram_Ball = TN_Scram_Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.UserConstructionScript");

	AServeLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_Spin__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_Spin__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_Spin__FinishedFunc");

	AServeLauncher_C_Timeline_Spin__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_Spin__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_Spin__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_Spin__UpdateFunc");

	AServeLauncher_C_Timeline_Spin__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_Bobble__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_Bobble__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_Bobble__FinishedFunc");

	AServeLauncher_C_Timeline_Bobble__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_Bobble__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_Bobble__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_Bobble__UpdateFunc");

	AServeLauncher_C_Timeline_Bobble__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_Rise__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_Rise__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_Rise__FinishedFunc");

	AServeLauncher_C_Timeline_Rise__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_Rise__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_Rise__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_Rise__UpdateFunc");

	AServeLauncher_C_Timeline_Rise__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.LauncherGrowShrink__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::LauncherGrowShrink__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.LauncherGrowShrink__FinishedFunc");

	AServeLauncher_C_LauncherGrowShrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.LauncherGrowShrink__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::LauncherGrowShrink__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.LauncherGrowShrink__UpdateFunc");

	AServeLauncher_C_LauncherGrowShrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ScaleBallUpDown__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::ScaleBallUpDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ScaleBallUpDown__FinishedFunc");

	AServeLauncher_C_ScaleBallUpDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ScaleBallUpDown__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::ScaleBallUpDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ScaleBallUpDown__UpdateFunc");

	AServeLauncher_C_ScaleBallUpDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_DelayHack__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_DelayHack__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_DelayHack__FinishedFunc");

	AServeLauncher_C_Timeline_DelayHack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_DelayHack__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_DelayHack__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_DelayHack__UpdateFunc");

	AServeLauncher_C_Timeline_DelayHack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_MoveToSide__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_MoveToSide__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_MoveToSide__FinishedFunc");

	AServeLauncher_C_Timeline_MoveToSide__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_MoveToSide__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_MoveToSide__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_MoveToSide__UpdateFunc");

	AServeLauncher_C_Timeline_MoveToSide__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_SpeedHack__FinishedFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_SpeedHack__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_SpeedHack__FinishedFunc");

	AServeLauncher_C_Timeline_SpeedHack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.Timeline_SpeedHack__UpdateFunc
// (BlueprintEvent)
void AServeLauncher_C::Timeline_SpeedHack__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.Timeline_SpeedHack__UpdateFunc");

	AServeLauncher_C_Timeline_SpeedHack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.MoveBallToServePosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FloorHeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::MoveBallToServePosition(float FloorHeight, bool Player1Serve, class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.MoveBallToServePosition");

	AServeLauncher_C_MoveBallToServePosition_Params params;
	params.FloorHeight = FloorHeight;
	params.Player1Serve = Player1Serve;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.GentleBallSpin
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::GentleBallSpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.GentleBallSpin");

	AServeLauncher_C_GentleBallSpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.BobbleBall
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::BobbleBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.BobbleBall");

	AServeLauncher_C_BobbleBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.BallGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.BallGrabbed");

	AServeLauncher_C_BallGrabbed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ReleaseBall
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::ReleaseBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ReleaseBall");

	AServeLauncher_C_ReleaseBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AServeLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ReceiveBeginPlay");

	AServeLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.StartRise
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FloorHeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::StartRise(float FloorHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.StartRise");

	AServeLauncher_C_StartRise_Params params;
	params.FloorHeight = FloorHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.StopRise
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::StopRise()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.StopRise");

	AServeLauncher_C_StopRise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.LauncherGrow
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::LauncherGrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.LauncherGrow");

	AServeLauncher_C_LauncherGrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.LauncherShrink
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::LauncherShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.LauncherShrink");

	AServeLauncher_C_LauncherShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ScaleBallUp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::ScaleBallUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ScaleBallUp");

	AServeLauncher_C_ScaleBallUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.SetupGraphics
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AServeLauncher_C::SetupGraphics(bool Player1Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.SetupGraphics");

	AServeLauncher_C_SetupGraphics_Params params;
	params.Player1Serve = Player1Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.DoneGrowing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::DoneGrowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.DoneGrowing");

	AServeLauncher_C_DoneGrowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.TeeBallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::TeeBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.TeeBallHit");

	AServeLauncher_C_TeeBallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.DisableHitMe
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::DisableHitMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.DisableHitMe");

	AServeLauncher_C_DisableHitMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.BallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.BallHit");

	AServeLauncher_C_BallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.MoveTest
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::MoveTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.MoveTest");

	AServeLauncher_C_MoveTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.SpeedHack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::SpeedHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.SpeedHack");

	AServeLauncher_C_SpeedHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.AllowHit
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::AllowHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.AllowHit");

	AServeLauncher_C_AllowHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ReceiveEndPlay");

	AServeLauncher_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.GrabbedBallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::GrabbedBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.GrabbedBallHit");

	AServeLauncher_C_GrabbedBallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.CheckIfShouldResetBall
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::CheckIfShouldResetBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.CheckIfShouldResetBall");

	AServeLauncher_C_CheckIfShouldResetBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.GrabbedBallGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::GrabbedBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.GrabbedBallGrabbed");

	AServeLauncher_C_GrabbedBallGrabbed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ResetBall
// (BlueprintCallable, BlueprintEvent)
void AServeLauncher_C::ResetBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ResetBall");

	AServeLauncher_C_ResetBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.ExecuteUbergraph_ServeLauncher
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::ExecuteUbergraph_ServeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.ExecuteUbergraph_ServeLauncher");

	AServeLauncher_C_ExecuteUbergraph_ServeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLauncher.ServeLauncher_C.OnBallHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLauncher_C::OnBallHit__DelegateSignature(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLauncher.ServeLauncher_C.OnBallHit__DelegateSignature");

	AServeLauncher_C_OnBallHit__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
