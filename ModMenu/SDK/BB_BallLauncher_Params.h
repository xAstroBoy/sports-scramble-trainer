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
	 * Function BB_BallLauncher.BB_BallLauncher_C.RemoveGameElement
	 */
	struct ABB_BallLauncher_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Initialize
	 */
	struct ABB_BallLauncher_C_Initialize_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.SimpleSetup
	 */
	struct ABB_BallLauncher_C_SimpleSetup_Params
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
	 * Function BB_BallLauncher.BB_BallLauncher_C.SetLaunchLocation
	 */
	struct ABB_BallLauncher_C_SetLaunchLocation_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PositionY;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.UserConstructionScript
	 */
	struct ABB_BallLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Height__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Height__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Rotation__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Rotation__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Pitch__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Pitch__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Movement__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Timeline_Movement__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Spawn__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Spawn__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Spawn__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Spawn__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__FinishedFunc
	 */
	struct ABB_BallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__UpdateFunc
	 */
	struct ABB_BallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunch
	 */
	struct ABB_BallLauncher_C_RandomLaunch_Params
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
	 * Function BB_BallLauncher.BB_BallLauncher_C.FireSquence
	 */
	struct ABB_BallLauncher_C_FireSquence_Params
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
	 * Function BB_BallLauncher.BB_BallLauncher_C.LaunchSequenceUsingSpeed
	 */
	struct ABB_BallLauncher_C_LaunchSequenceUsingSpeed_Params
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
	 * Function BB_BallLauncher.BB_BallLauncher_C.QuickRecalc
	 */
	struct ABB_BallLauncher_C_QuickRecalc_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.SimpleFire
	 */
	struct ABB_BallLauncher_C_SimpleFire_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunchWithTelegraph
	 */
	struct ABB_BallLauncher_C_RandomLaunchWithTelegraph_Params
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
	 * Function BB_BallLauncher.BB_BallLauncher_C.ChangeHeight
	 */
	struct ABB_BallLauncher_C_ChangeHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ChangeRotation
	 */
	struct ABB_BallLauncher_C_ChangeRotation_Params
	{
	public:
		float                                                      NewRotation;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ChangePitch
	 */
	struct ABB_BallLauncher_C_ChangePitch_Params
	{
	public:
		float                                                      NewPitch;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ChangePosition
	 */
	struct ABB_BallLauncher_C_ChangePosition_Params
	{
	public:
		float                                                      NewPositionY;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ScaleUp
	 */
	struct ABB_BallLauncher_C_ScaleUp_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ScaleDown
	 */
	struct ABB_BallLauncher_C_ScaleDown_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ReceiveBeginPlay
	 */
	struct ABB_BallLauncher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.Telegraph
	 */
	struct ABB_BallLauncher_C_Telegraph_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.PlaySpawn
	 */
	struct ABB_BallLauncher_C_PlaySpawn_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.RaiseHead
	 */
	struct ABB_BallLauncher_C_RaiseHead_Params
	{	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.ExecuteUbergraph_BB_BallLauncher
	 */
	struct ABB_BallLauncher_C_ExecuteUbergraph_BB_BallLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_672S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_BallLauncher.BB_BallLauncher_C.FinishedSpawnSequence__DelegateSignature
	 */
	struct ABB_BallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
