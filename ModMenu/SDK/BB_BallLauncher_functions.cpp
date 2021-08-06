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

// Function BB_BallLauncher.BB_BallLauncher_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_BallLauncher_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RemoveGameElement");

	ABB_BallLauncher_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Initialize");

	ABB_BallLauncher_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.SimpleSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InitialRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LaunchSpin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BounceSpin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreHeightChange             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_BallLauncher_C::SimpleSetup(float InitialHeight, const struct FVector& InitialRotation, float BallSpeed, const struct FVector& LaunchSpin, const struct FVector& BounceSpin, TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset, bool IgnoreHeightChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.SimpleSetup");

	ABB_BallLauncher_C_SimpleSetup_Params params;
	params.InitialHeight = InitialHeight;
	params.InitialRotation = InitialRotation;
	params.BallSpeed = BallSpeed;
	params.LaunchSpin = LaunchSpin;
	params.BounceSpin = BounceSpin;
	params.AimPreset = AimPreset;
	params.IgnoreHeightChange = IgnoreHeightChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.SetLaunchLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PositionY                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::SetLaunchLocation(float Height, const struct FRotator& Rotation, float PositionY, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.SetLaunchLocation");

	ABB_BallLauncher_C_SetLaunchLocation_Params params;
	params.Height = Height;
	params.Rotation = Rotation;
	params.PositionY = PositionY;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.UserConstructionScript");

	ABB_BallLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Height__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__FinishedFunc");

	ABB_BallLauncher_C_Timeline_Height__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Height__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__UpdateFunc");

	ABB_BallLauncher_C_Timeline_Height__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Rotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__FinishedFunc");

	ABB_BallLauncher_C_Timeline_Rotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Rotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__UpdateFunc");

	ABB_BallLauncher_C_Timeline_Rotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Pitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__FinishedFunc");

	ABB_BallLauncher_C_Timeline_Pitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Pitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__UpdateFunc");

	ABB_BallLauncher_C_Timeline_Pitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Movement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__FinishedFunc");

	ABB_BallLauncher_C_Timeline_Movement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_Movement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__UpdateFunc");

	ABB_BallLauncher_C_Timeline_Movement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__FinishedFunc");

	ABB_BallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__UpdateFunc");

	ABB_BallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Spawn__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Spawn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Spawn__FinishedFunc");

	ABB_BallLauncher_C_Spawn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Spawn__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Spawn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Spawn__UpdateFunc");

	ABB_BallLauncher_C_Spawn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__FinishedFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_RaiseHead__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__FinishedFunc");

	ABB_BallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__UpdateFunc
// (BlueprintEvent)
void ABB_BallLauncher_C::Timeline_RaiseHead__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__UpdateFunc");

	ABB_BallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpeedMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::RandomLaunch(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunch");

	ABB_BallLauncher_C_RandomLaunch_Params params;
	params.SpeedMin = SpeedMin;
	params.SpeedMax = SpeedMax;
	params.MoveYMin = MoveYMin;
	params.MoveYMax = MoveYMax;
	params.MinHeight = MinHeight;
	params.MaxHeight = MaxHeight;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.FireSquence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeedMin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeedMax                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::FireSquence(float BallSpeedMin, float BallSpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.FireSquence");

	ABB_BallLauncher_C_FireSquence_Params params;
	params.BallSpeedMin = BallSpeedMin;
	params.BallSpeedMax = BallSpeedMax;
	params.MoveYMin = MoveYMin;
	params.MoveYMax = MoveYMax;
	params.MinHeight = MinHeight;
	params.MaxHeight = MaxHeight;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.LaunchSequenceUsingSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeedMin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeedMax                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinSpeedChange                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinMoveDistance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CollapseSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MovementSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RaiseSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::LaunchSequenceUsingSpeed(float BallSpeedMin, float BallSpeedMax, float MinSpeedChange, float MoveYMin, float MoveYMax, float MinMoveDistance, float MinHeight, float MaxHeight, float CollapseSpeed, float MovementSpeed, float RaiseSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.LaunchSequenceUsingSpeed");

	ABB_BallLauncher_C_LaunchSequenceUsingSpeed_Params params;
	params.BallSpeedMin = BallSpeedMin;
	params.BallSpeedMax = BallSpeedMax;
	params.MinSpeedChange = MinSpeedChange;
	params.MoveYMin = MoveYMin;
	params.MoveYMax = MoveYMax;
	params.MinMoveDistance = MinMoveDistance;
	params.MinHeight = MinHeight;
	params.MaxHeight = MaxHeight;
	params.CollapseSpeed = CollapseSpeed;
	params.MovementSpeed = MovementSpeed;
	params.RaiseSpeed = RaiseSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.QuickRecalc
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::QuickRecalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.QuickRecalc");

	ABB_BallLauncher_C_QuickRecalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.SimpleFire
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::SimpleFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.SimpleFire");

	ABB_BallLauncher_C_SimpleFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunchWithTelegraph
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpeedMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinimumSpeedChange             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::RandomLaunchWithTelegraph(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time, float MinimumSpeedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunchWithTelegraph");

	ABB_BallLauncher_C_RandomLaunchWithTelegraph_Params params;
	params.SpeedMin = SpeedMin;
	params.SpeedMax = SpeedMax;
	params.MoveYMin = MoveYMin;
	params.MoveYMax = MoveYMax;
	params.MinHeight = MinHeight;
	params.MaxHeight = MaxHeight;
	params.Time = Time;
	params.MinimumSpeedChange = MinimumSpeedChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ChangeHeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::ChangeHeight(float NewHeight, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangeHeight");

	ABB_BallLauncher_C_ChangeHeight_Params params;
	params.NewHeight = NewHeight;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ChangeRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::ChangeRotation(float NewRotation, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangeRotation");

	ABB_BallLauncher_C_ChangeRotation_Params params;
	params.NewRotation = NewRotation;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ChangePitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::ChangePitch(float NewPitch, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangePitch");

	ABB_BallLauncher_C_ChangePitch_Params params;
	params.NewPitch = NewPitch;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ChangePosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPositionY                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::ChangePosition(float NewPositionY, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangePosition");

	ABB_BallLauncher_C_ChangePosition_Params params;
	params.NewPositionY = NewPositionY;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ScaleUp");

	ABB_BallLauncher_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ScaleDown");

	ABB_BallLauncher_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_BallLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ReceiveBeginPlay");

	ABB_BallLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.Telegraph
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::Telegraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Telegraph");

	ABB_BallLauncher_C_Telegraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.PlaySpawn
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::PlaySpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.PlaySpawn");

	ABB_BallLauncher_C_PlaySpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.RaiseHead
// (BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::RaiseHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RaiseHead");

	ABB_BallLauncher_C_RaiseHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.ExecuteUbergraph_BB_BallLauncher
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BallLauncher_C::ExecuteUbergraph_BB_BallLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ExecuteUbergraph_BB_BallLauncher");

	ABB_BallLauncher_C_ExecuteUbergraph_BB_BallLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BallLauncher.BB_BallLauncher_C.FinishedSpawnSequence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_BallLauncher_C::FinishedSpawnSequence__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.FinishedSpawnSequence__DelegateSignature");

	ABB_BallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
