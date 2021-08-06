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

// Function BB_BallLauncher.BB_BallLauncher_C.RemoveGameElement
struct ABB_BallLauncher_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_BallLauncher.BB_BallLauncher_C.Initialize
struct ABB_BallLauncher_C_Initialize_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.SimpleSetup
struct ABB_BallLauncher_C_SimpleSetup_Params
{
	float                                              InitialHeight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InitialRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LaunchSpin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BounceSpin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreHeightChange;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_BallLauncher.BB_BallLauncher_C.SetLaunchLocation
struct ABB_BallLauncher_C_SetLaunchLocation_Params
{
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PositionY;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.UserConstructionScript
struct ABB_BallLauncher_C_UserConstructionScript_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__FinishedFunc
struct ABB_BallLauncher_C_Timeline_Height__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__UpdateFunc
struct ABB_BallLauncher_C_Timeline_Height__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__FinishedFunc
struct ABB_BallLauncher_C_Timeline_Rotation__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__UpdateFunc
struct ABB_BallLauncher_C_Timeline_Rotation__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__FinishedFunc
struct ABB_BallLauncher_C_Timeline_Pitch__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__UpdateFunc
struct ABB_BallLauncher_C_Timeline_Pitch__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__FinishedFunc
struct ABB_BallLauncher_C_Timeline_Movement__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__UpdateFunc
struct ABB_BallLauncher_C_Timeline_Movement__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__FinishedFunc
struct ABB_BallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__UpdateFunc
struct ABB_BallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Spawn__FinishedFunc
struct ABB_BallLauncher_C_Spawn__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Spawn__UpdateFunc
struct ABB_BallLauncher_C_Spawn__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__FinishedFunc
struct ABB_BallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__UpdateFunc
struct ABB_BallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunch
struct ABB_BallLauncher_C_RandomLaunch_Params
{
	float                                              SpeedMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.FireSquence
struct ABB_BallLauncher_C_FireSquence_Params
{
	float                                              BallSpeedMin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeedMax;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveYMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.LaunchSequenceUsingSpeed
struct ABB_BallLauncher_C_LaunchSequenceUsingSpeed_Params
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

// Function BB_BallLauncher.BB_BallLauncher_C.QuickRecalc
struct ABB_BallLauncher_C_QuickRecalc_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.SimpleFire
struct ABB_BallLauncher_C_SimpleFire_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunchWithTelegraph
struct ABB_BallLauncher_C_RandomLaunchWithTelegraph_Params
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

// Function BB_BallLauncher.BB_BallLauncher_C.ChangeHeight
struct ABB_BallLauncher_C_ChangeHeight_Params
{
	float                                              NewHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.ChangeRotation
struct ABB_BallLauncher_C_ChangeRotation_Params
{
	float                                              NewRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.ChangePitch
struct ABB_BallLauncher_C_ChangePitch_Params
{
	float                                              NewPitch;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.ChangePosition
struct ABB_BallLauncher_C_ChangePosition_Params
{
	float                                              NewPositionY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.ScaleUp
struct ABB_BallLauncher_C_ScaleUp_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.ScaleDown
struct ABB_BallLauncher_C_ScaleDown_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.ReceiveBeginPlay
struct ABB_BallLauncher_C_ReceiveBeginPlay_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.Telegraph
struct ABB_BallLauncher_C_Telegraph_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.PlaySpawn
struct ABB_BallLauncher_C_PlaySpawn_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.RaiseHead
struct ABB_BallLauncher_C_RaiseHead_Params
{
};

// Function BB_BallLauncher.BB_BallLauncher_C.ExecuteUbergraph_BB_BallLauncher
struct ABB_BallLauncher_C_ExecuteUbergraph_BB_BallLauncher_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BallLauncher.BB_BallLauncher_C.FinishedSpawnSequence__DelegateSignature
struct ABB_BallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
