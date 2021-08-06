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

// Function BallLauncher.BallLauncher_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallLauncher_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RemoveGameElement");

	ABallLauncher_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function BallLauncher.BallLauncher_C.UpdateRegionTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          horizontalVariance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          verticalVariance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScramTrajectoryRegion  TargetRegion                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABallLauncher_C::UpdateRegionTargeting(float horizontalVariance, float verticalVariance, const struct FScramTrajectoryRegion& TargetRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UpdateRegionTargeting");

	ABallLauncher_C_UpdateRegionTargeting_Params params;
	params.horizontalVariance = horizontalVariance;
	params.verticalVariance = verticalVariance;
	params.TargetRegion = TargetRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Initialize");

	ABallLauncher_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.SimpleSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InitialRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LaunchSpin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BounceSpin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreHeightChange             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallLauncher_C::SimpleSetup(float InitialHeight, const struct FVector& InitialRotation, float BallSpeed, const struct FVector& LaunchSpin, const struct FVector& BounceSpin, TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset, bool IgnoreHeightChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.SimpleSetup");

	ABallLauncher_C_SimpleSetup_Params params;
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


// Function BallLauncher.BallLauncher_C.SetLaunchLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PositionY                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::SetLaunchLocation(float Height, const struct FRotator& Rotation, float PositionY, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.SetLaunchLocation");

	ABallLauncher_C_SetLaunchLocation_Params params;
	params.Height = Height;
	params.Rotation = Rotation;
	params.PositionY = PositionY;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UserConstructionScript");

	ABallLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Height__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Height__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Height__FinishedFunc");

	ABallLauncher_C_Timeline_Height__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Height__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Height__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Height__UpdateFunc");

	ABallLauncher_C_Timeline_Height__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Rotation__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Rotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Rotation__FinishedFunc");

	ABallLauncher_C_Timeline_Rotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Rotation__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Rotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Rotation__UpdateFunc");

	ABallLauncher_C_Timeline_Rotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Pitch__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Pitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Pitch__FinishedFunc");

	ABallLauncher_C_Timeline_Pitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Pitch__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Pitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Pitch__UpdateFunc");

	ABallLauncher_C_Timeline_Pitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Movement__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Movement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Movement__FinishedFunc");

	ABallLauncher_C_Timeline_Movement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_Movement__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_Movement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Movement__UpdateFunc");

	ABallLauncher_C_Timeline_Movement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_MovementX__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_MovementX__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_MovementX__FinishedFunc");

	ABallLauncher_C_Timeline_MovementX__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_MovementX__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_MovementX__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_MovementX__UpdateFunc");

	ABallLauncher_C_Timeline_MovementX__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_RotateWheels__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__FinishedFunc");

	ABallLauncher_C_Timeline_RotateWheels__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_RotateWheels__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__UpdateFunc");

	ABallLauncher_C_Timeline_RotateWheels__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__FinishedFunc");

	ABallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__UpdateFunc");

	ABallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Spawn__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Spawn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Spawn__FinishedFunc");

	ABallLauncher_C_Spawn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Spawn__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Spawn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Spawn__UpdateFunc");

	ABallLauncher_C_Spawn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__FinishedFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_RaiseHead__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__FinishedFunc");

	ABallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__UpdateFunc
// (BlueprintEvent)
void ABallLauncher_C::Timeline_RaiseHead__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__UpdateFunc");

	ABallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.RandomLaunch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpeedMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::RandomLaunch(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RandomLaunch");

	ABallLauncher_C_RandomLaunch_Params params;
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


// Function BallLauncher.BallLauncher_C.FireSquence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeedMin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeedMax                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveYMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::FireSquence(float BallSpeedMin, float BallSpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FireSquence");

	ABallLauncher_C_FireSquence_Params params;
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


// Function BallLauncher.BallLauncher_C.LaunchSequenceUsingSpeed
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
void ABallLauncher_C::LaunchSequenceUsingSpeed(float BallSpeedMin, float BallSpeedMax, float MinSpeedChange, float MoveYMin, float MoveYMax, float MinMoveDistance, float MinHeight, float MaxHeight, float CollapseSpeed, float MovementSpeed, float RaiseSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.LaunchSequenceUsingSpeed");

	ABallLauncher_C_LaunchSequenceUsingSpeed_Params params;
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


// Function BallLauncher.BallLauncher_C.QuickRecalc
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::QuickRecalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.QuickRecalc");

	ABallLauncher_C_QuickRecalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.SimpleFire
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::SimpleFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.SimpleFire");

	ABallLauncher_C_SimpleFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.RandomLaunchWithTelegraph
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
void ABallLauncher_C::RandomLaunchWithTelegraph(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time, float MinimumSpeedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RandomLaunchWithTelegraph");

	ABallLauncher_C_RandomLaunchWithTelegraph_Params params;
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


// Function BallLauncher.BallLauncher_C.LaunchSequenceXY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          horizontalVariance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          verticalVariance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScramTrajectoryRegion  trajectory                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                          NewXPosition                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewYPosition                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CollapseSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MovementSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RaiseSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PostShotRecenter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallLauncher_C::LaunchSequenceXY(float BallSpeed, float horizontalVariance, float verticalVariance, const struct FScramTrajectoryRegion& trajectory, float NewXPosition, float NewYPosition, float Height, float CollapseSpeed, float MovementSpeed, float RaiseSpeed, bool PostShotRecenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.LaunchSequenceXY");

	ABallLauncher_C_LaunchSequenceXY_Params params;
	params.BallSpeed = BallSpeed;
	params.horizontalVariance = horizontalVariance;
	params.verticalVariance = verticalVariance;
	params.trajectory = trajectory;
	params.NewXPosition = NewXPosition;
	params.NewYPosition = NewYPosition;
	params.Height = Height;
	params.CollapseSpeed = CollapseSpeed;
	params.MovementSpeed = MovementSpeed;
	params.RaiseSpeed = RaiseSpeed;
	params.PostShotRecenter = PostShotRecenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.MoveFBComplete
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::MoveFBComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.MoveFBComplete");

	ABallLauncher_C_MoveFBComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ChangeHeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::ChangeHeight(float NewHeight, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangeHeight");

	ABallLauncher_C_ChangeHeight_Params params;
	params.NewHeight = NewHeight;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ChangeRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::ChangeRotation(float NewRotation, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangeRotation");

	ABallLauncher_C_ChangeRotation_Params params;
	params.NewRotation = NewRotation;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ChangePitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::ChangePitch(float NewPitch, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangePitch");

	ABallLauncher_C_ChangePitch_Params params;
	params.NewPitch = NewPitch;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ChangePosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPositionY                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::ChangePosition(float NewPositionY, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangePosition");

	ABallLauncher_C_ChangePosition_Params params;
	params.NewPositionY = NewPositionY;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ChangePositionX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPositionX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CollapseSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::ChangePositionX(float NewPositionX, float MoveSpeed, float CollapseSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangePositionX");

	ABallLauncher_C_ChangePositionX_Params params;
	params.NewPositionX = NewPositionX;
	params.MoveSpeed = MoveSpeed;
	params.CollapseSpeed = CollapseSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ScaleUp");

	ABallLauncher_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ScaleDown");

	ABallLauncher_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABallLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ReceiveBeginPlay");

	ABallLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.Telegraph
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::Telegraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Telegraph");

	ABallLauncher_C_Telegraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.PlaySpawn
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::PlaySpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.PlaySpawn");

	ABallLauncher_C_PlaySpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.RaiseHead
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::RaiseHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RaiseHead");

	ABallLauncher_C_RaiseHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.UseLaunchTargeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ABallLauncher_C::UseLaunchTargeting(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UseLaunchTargeting");

	ABallLauncher_C_UseLaunchTargeting_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.UsePlayerAsLaunchTarget
// (BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::UsePlayerAsLaunchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UsePlayerAsLaunchTarget");

	ABallLauncher_C_UsePlayerAsLaunchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.ExecuteUbergraph_BallLauncher
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallLauncher_C::ExecuteUbergraph_BallLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ExecuteUbergraph_BallLauncher");

	ABallLauncher_C_ExecuteUbergraph_BallLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.FinishedAiming__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::FinishedAiming__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FinishedAiming__DelegateSignature");

	ABallLauncher_C_FinishedAiming__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.FinishedMoveForwardSequence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::FinishedMoveForwardSequence__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FinishedMoveForwardSequence__DelegateSignature");

	ABallLauncher_C_FinishedMoveForwardSequence__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallLauncher.BallLauncher_C.FinishedSpawnSequence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABallLauncher_C::FinishedSpawnSequence__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FinishedSpawnSequence__DelegateSignature");

	ABallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
