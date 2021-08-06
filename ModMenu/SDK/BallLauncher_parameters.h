#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BallLauncher.BallLauncher_C.RemoveGameElement
struct ABallLauncher_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallLauncher.BallLauncher_C.UpdateRegionTargeting
struct ABallLauncher_C_UpdateRegionTargeting_Params
{
	float                                              horizontalVariance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              verticalVariance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScramTrajectoryRegion                      TargetRegion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BallLauncher.BallLauncher_C.Initialize
struct ABallLauncher_C_Initialize_Params
{
};

// Function BallLauncher.BallLauncher_C.SimpleSetup
struct ABallLauncher_C_SimpleSetup_Params
{
	float                                              InitialHeight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InitialRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LaunchSpin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BounceSpin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreHeightChange;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallLauncher.BallLauncher_C.SetLaunchLocation
struct ABallLauncher_C_SetLaunchLocation_Params
{
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PositionY;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.UserConstructionScript
struct ABallLauncher_C_UserConstructionScript_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Height__FinishedFunc
struct ABallLauncher_C_Timeline_Height__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Height__UpdateFunc
struct ABallLauncher_C_Timeline_Height__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Rotation__FinishedFunc
struct ABallLauncher_C_Timeline_Rotation__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Rotation__UpdateFunc
struct ABallLauncher_C_Timeline_Rotation__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Pitch__FinishedFunc
struct ABallLauncher_C_Timeline_Pitch__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Pitch__UpdateFunc
struct ABallLauncher_C_Timeline_Pitch__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Movement__FinishedFunc
struct ABallLauncher_C_Timeline_Movement__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_Movement__UpdateFunc
struct ABallLauncher_C_Timeline_Movement__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_MovementX__FinishedFunc
struct ABallLauncher_C_Timeline_MovementX__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_MovementX__UpdateFunc
struct ABallLauncher_C_Timeline_MovementX__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__FinishedFunc
struct ABallLauncher_C_Timeline_RotateWheels__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__UpdateFunc
struct ABallLauncher_C_Timeline_RotateWheels__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__FinishedFunc
struct ABallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__UpdateFunc
struct ABallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Spawn__FinishedFunc
struct ABallLauncher_C_Spawn__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Spawn__UpdateFunc
struct ABallLauncher_C_Spawn__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__FinishedFunc
struct ABallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__UpdateFunc
struct ABallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params
{
};

// Function BallLauncher.BallLauncher_C.RandomLaunch
struct ABallLauncher_C_RandomLaunch_Params
{
	float                                              SpeedMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.FireSquence
struct ABallLauncher_C_FireSquence_Params
{
	float                                              BallSpeedMin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeedMax;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.LaunchSequenceUsingSpeed
struct ABallLauncher_C_LaunchSequenceUsingSpeed_Params
{
	float                                              BallSpeedMin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeedMax;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinSpeedChange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinMoveDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollapseSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RaiseSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.QuickRecalc
struct ABallLauncher_C_QuickRecalc_Params
{
};

// Function BallLauncher.BallLauncher_C.SimpleFire
struct ABallLauncher_C_SimpleFire_Params
{
};

// Function BallLauncher.BallLauncher_C.RandomLaunchWithTelegraph
struct ABallLauncher_C_RandomLaunchWithTelegraph_Params
{
	float                                              SpeedMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumSpeedChange;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.LaunchSequenceXY
struct ABallLauncher_C_LaunchSequenceXY_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              horizontalVariance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              verticalVariance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScramTrajectoryRegion                      trajectory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                              NewXPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewYPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollapseSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RaiseSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PostShotRecenter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallLauncher.BallLauncher_C.MoveFBComplete
struct ABallLauncher_C_MoveFBComplete_Params
{
};

// Function BallLauncher.BallLauncher_C.ChangeHeight
struct ABallLauncher_C_ChangeHeight_Params
{
	float                                              NewHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.ChangeRotation
struct ABallLauncher_C_ChangeRotation_Params
{
	float                                              NewRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.ChangePitch
struct ABallLauncher_C_ChangePitch_Params
{
	float                                              NewPitch;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.ChangePosition
struct ABallLauncher_C_ChangePosition_Params
{
	float                                              NewPositionY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.ChangePositionX
struct ABallLauncher_C_ChangePositionX_Params
{
	float                                              NewPositionX;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollapseSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.ScaleUp
struct ABallLauncher_C_ScaleUp_Params
{
};

// Function BallLauncher.BallLauncher_C.ScaleDown
struct ABallLauncher_C_ScaleDown_Params
{
};

// Function BallLauncher.BallLauncher_C.ReceiveBeginPlay
struct ABallLauncher_C_ReceiveBeginPlay_Params
{
};

// Function BallLauncher.BallLauncher_C.Telegraph
struct ABallLauncher_C_Telegraph_Params
{
};

// Function BallLauncher.BallLauncher_C.PlaySpawn
struct ABallLauncher_C_PlaySpawn_Params
{
};

// Function BallLauncher.BallLauncher_C.RaiseHead
struct ABallLauncher_C_RaiseHead_Params
{
};

// Function BallLauncher.BallLauncher_C.UseLaunchTargeting
struct ABallLauncher_C_UseLaunchTargeting_Params
{
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function BallLauncher.BallLauncher_C.UsePlayerAsLaunchTarget
struct ABallLauncher_C_UsePlayerAsLaunchTarget_Params
{
};

// Function BallLauncher.BallLauncher_C.ExecuteUbergraph_BallLauncher
struct ABallLauncher_C_ExecuteUbergraph_BallLauncher_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallLauncher.BallLauncher_C.FinishedAiming__DelegateSignature
struct ABallLauncher_C_FinishedAiming__DelegateSignature_Params
{
};

// Function BallLauncher.BallLauncher_C.FinishedMoveForwardSequence__DelegateSignature
struct ABallLauncher_C_FinishedMoveForwardSequence__DelegateSignature_Params
{
};

// Function BallLauncher.BallLauncher_C.FinishedSpawnSequence__DelegateSignature
struct ABallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
