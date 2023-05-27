#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BallLauncher.BallLauncher_C.RemoveGameElement
	 */
	struct ABallLauncher_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.UpdateRegionTargeting
	 */
	struct ABallLauncher_C_UpdateRegionTargeting_Params
	{
	public:
		float                                                      horizontalVariance;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      verticalVariance;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FScramTrajectoryRegion                              TargetRegion;                                            // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.Initialize
	 */
	struct ABallLauncher_C_Initialize_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.SimpleSetup
	 */
	struct ABallLauncher_C_SimpleSetup_Params
	{
	public:
		float                                                      InitialHeight;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InitialRotation;                                         // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeed;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LaunchSpin;                                              // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BounceSpin;                                              // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELauncherAimingPreset                                      AimPreset;                                               // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IgnoreHeightChange;                                      // 0x002D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.SetLaunchLocation
	 */
	struct ABallLauncher_C_SetLaunchLocation_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PositionY;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.UserConstructionScript
	 */
	struct ABallLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Height__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_Height__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Height__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_Height__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Rotation__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_Rotation__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Rotation__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_Rotation__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Pitch__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_Pitch__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Pitch__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_Pitch__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Movement__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_Movement__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_Movement__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_Movement__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_MovementX__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_MovementX__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_MovementX__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_MovementX__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_RotateWheels__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_RotateWheels__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Spawn__FinishedFunc
	 */
	struct ABallLauncher_C_Spawn__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Spawn__UpdateFunc
	 */
	struct ABallLauncher_C_Spawn__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__FinishedFunc
	 */
	struct ABallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__UpdateFunc
	 */
	struct ABallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.RandomLaunch
	 */
	struct ABallLauncher_C_RandomLaunch_Params
	{
	public:
		float                                                      SpeedMin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpeedMax;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMin;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMax;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinHeight;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxHeight;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.FireSquence
	 */
	struct ABallLauncher_C_FireSquence_Params
	{
	public:
		float                                                      BallSpeedMin;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeedMax;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMin;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMax;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinHeight;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxHeight;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.LaunchSequenceUsingSpeed
	 */
	struct ABallLauncher_C_LaunchSequenceUsingSpeed_Params
	{
	public:
		float                                                      BallSpeedMin;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeedMax;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinSpeedChange;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMin;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMax;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinMoveDistance;                                         // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinHeight;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxHeight;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CollapseSpeed;                                           // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MovementSpeed;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RaiseSpeed;                                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.QuickRecalc
	 */
	struct ABallLauncher_C_QuickRecalc_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.SimpleFire
	 */
	struct ABallLauncher_C_SimpleFire_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.RandomLaunchWithTelegraph
	 */
	struct ABallLauncher_C_RandomLaunchWithTelegraph_Params
	{
	public:
		float                                                      SpeedMin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpeedMax;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMin;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveYMax;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinHeight;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxHeight;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinimumSpeedChange;                                      // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.LaunchSequenceXY
	 */
	struct ABallLauncher_C_LaunchSequenceXY_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      horizontalVariance;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      verticalVariance;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FScramTrajectoryRegion                              trajectory;                                              // 0x000C(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      NewXPosition;                                            // 0x005C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewYPosition;                                            // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0064(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CollapseSpeed;                                           // 0x0068(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MovementSpeed;                                           // 0x006C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RaiseSpeed;                                              // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PostShotRecenter;                                        // 0x0074(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.MoveFBComplete
	 */
	struct ABallLauncher_C_MoveFBComplete_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.ChangeHeight
	 */
	struct ABallLauncher_C_ChangeHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.ChangeRotation
	 */
	struct ABallLauncher_C_ChangeRotation_Params
	{
	public:
		float                                                      NewRotation;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.ChangePitch
	 */
	struct ABallLauncher_C_ChangePitch_Params
	{
	public:
		float                                                      NewPitch;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.ChangePosition
	 */
	struct ABallLauncher_C_ChangePosition_Params
	{
	public:
		float                                                      NewPositionY;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.ChangePositionX
	 */
	struct ABallLauncher_C_ChangePositionX_Params
	{
	public:
		float                                                      NewPositionX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveSpeed;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CollapseSpeed;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.ScaleUp
	 */
	struct ABallLauncher_C_ScaleUp_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.ScaleDown
	 */
	struct ABallLauncher_C_ScaleDown_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.ReceiveBeginPlay
	 */
	struct ABallLauncher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.Telegraph
	 */
	struct ABallLauncher_C_Telegraph_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.PlaySpawn
	 */
	struct ABallLauncher_C_PlaySpawn_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.RaiseHead
	 */
	struct ABallLauncher_C_RaiseHead_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.UseLaunchTargeting
	 */
	struct ABallLauncher_C_UseLaunchTargeting_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.UsePlayerAsLaunchTarget
	 */
	struct ABallLauncher_C_UsePlayerAsLaunchTarget_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.ExecuteUbergraph_BallLauncher
	 */
	struct ABallLauncher_C_ExecuteUbergraph_BallLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallLauncher.BallLauncher_C.FinishedAiming__DelegateSignature
	 */
	struct ABallLauncher_C_FinishedAiming__DelegateSignature_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.FinishedMoveForwardSequence__DelegateSignature
	 */
	struct ABallLauncher_C_FinishedMoveForwardSequence__DelegateSignature_Params
	{	};

	/**
	 * Function BallLauncher.BallLauncher_C.FinishedSpawnSequence__DelegateSignature
	 */
	struct ABallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
