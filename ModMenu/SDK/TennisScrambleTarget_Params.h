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
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.RemoveGameElement
	 */
	struct ATennisScrambleTarget_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.SpawnScrambleEffect
	 */
	struct ATennisScrambleTarget_C_SpawnScrambleEffect_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PWJL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.SetupNewTarget
	 */
	struct ATennisScrambleTarget_C_SetupNewTarget_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.DisableIcon
	 */
	struct ATennisScrambleTarget_C_DisableIcon_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.RemoveOldBall
	 */
	struct ATennisScrambleTarget_C_RemoveOldBall_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.GetExistingSubclasses
	 */
	struct ATennisScrambleTarget_C_GetExistingSubclasses_Params
	{
	public:
		TArray<class UClass*>                                      ActiveBallClasses;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<class UClass*>                                      ActiveInstrumentClasses;                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.GetAiValue
	 */
	struct ATennisScrambleTarget_C_GetAiValue_Params
	{
	public:
		EScrambleTargetAiValue                                     Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.GetRandomRacketType
	 */
	struct ATennisScrambleTarget_C_GetRandomRacketType_Params
	{
	public:
		class UTexture2D*                                          ScrambleIcon;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.GetRandomBallType
	 */
	struct ATennisScrambleTarget_C_GetRandomBallType_Params
	{
	public:
		class UTexture2D*                                          ScrambleIcon;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Initialize
	 */
	struct ATennisScrambleTarget_C_Initialize_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.UserConstructionScript
	 */
	struct ATennisScrambleTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Timeline_Size_Change__FinishedFunc
	 */
	struct ATennisScrambleTarget_C_Timeline_Size_Change__FinishedFunc_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Timeline_Size_Change__UpdateFunc
	 */
	struct ATennisScrambleTarget_C_Timeline_Size_Change__UpdateFunc_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Timeline_RotateCannon__FinishedFunc
	 */
	struct ATennisScrambleTarget_C_Timeline_RotateCannon__FinishedFunc_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Timeline_RotateCannon__UpdateFunc
	 */
	struct ATennisScrambleTarget_C_Timeline_RotateCannon__UpdateFunc_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Timeline_SpinCannon__FinishedFunc
	 */
	struct ATennisScrambleTarget_C_Timeline_SpinCannon__FinishedFunc_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Timeline_SpinCannon__UpdateFunc
	 */
	struct ATennisScrambleTarget_C_Timeline_SpinCannon__UpdateFunc_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.ReceiveBeginPlay
	 */
	struct ATennisScrambleTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Grow
	 */
	struct ATennisScrambleTarget_C_Grow_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.Shrink
	 */
	struct ATennisScrambleTarget_C_Shrink_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.OnTriggered
	 */
	struct ATennisScrambleTarget_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.SetupCannon
	 */
	struct ATennisScrambleTarget_C_SetupCannon_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.ReceiveEndPlay
	 */
	struct ATennisScrambleTarget_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.FireCannon
	 */
	struct ATennisScrambleTarget_C_FireCannon_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.RotateCannon
	 */
	struct ATennisScrambleTarget_C_RotateCannon_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.SpinCannon
	 */
	struct ATennisScrambleTarget_C_SpinCannon_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.FireFX
	 */
	struct ATennisScrambleTarget_C_FireFX_Params
	{	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.ApplyCannonRotation
	 */
	struct ATennisScrambleTarget_C_ApplyCannonRotation_Params
	{
	public:
		struct FScramTrajectory                                    trajectory;                                              // 0x0000(0x01F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.SetCannonRotation
	 */
	struct ATennisScrambleTarget_C_SetCannonRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.ExecuteUbergraph_TennisScrambleTarget
	 */
	struct ATennisScrambleTarget_C_ExecuteUbergraph_TennisScrambleTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.BallFiredFromTarget__DelegateSignature
	 */
	struct ATennisScrambleTarget_C_BallFiredFromTarget__DelegateSignature_Params
	{
	public:
		class ATN_Ball_Base_C*                                     BallFired;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.ScrambleTargetHit__DelegateSignature
	 */
	struct ATennisScrambleTarget_C_ScrambleTargetHit__DelegateSignature_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ScrambleEvent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTarget.TennisScrambleTarget_C.ScrambleTargetRemoved__DelegateSignature
	 */
	struct ATennisScrambleTarget_C_ScrambleTargetRemoved__DelegateSignature_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ScrambleEvent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
