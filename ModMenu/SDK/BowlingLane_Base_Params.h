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
	 * Function BowlingLane_Base.BowlingLane_Base_C.GetAlley
	 */
	struct ABowlingLane_Base_C_GetAlley_Params
	{
	public:
		class ABowlingAlley*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.IsLocalPlayerLane
	 */
	struct ABowlingLane_Base_C_IsLocalPlayerLane_Params
	{
	public:
		bool                                                       IsLocalPlayerLane;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.Teardown
	 */
	struct ABowlingLane_Base_C_Teardown_Params
	{	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.ShutdownLane
	 */
	struct ABowlingLane_Base_C_ShutdownLane_Params
	{
	public:
		bool                                                       Callback;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.SetupLane
	 */
	struct ABowlingLane_Base_C_SetupLane_Params
	{
	public:
		bool                                                       Callback;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.UserConstructionScript
	 */
	struct ABowlingLane_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.ReceiveEndPlay
	 */
	struct ABowlingLane_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABowlingLane_Base_C_BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CXL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.LR_AddScore
	 */
	struct ABowlingLane_Base_C_LR_AddScore_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddedScore;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.Multi_AddScore
	 */
	struct ABowlingLane_Base_C_Multi_AddScore_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddedScore;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.Server_AddScore
	 */
	struct ABowlingLane_Base_C_Server_AddScore_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddedScore;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.Local_AddScore
	 */
	struct ABowlingLane_Base_C_Local_AddScore_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddedScore;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.ExecuteUbergraph_BowlingLane_Base
	 */
	struct ABowlingLane_Base_C_ExecuteUbergraph_BowlingLane_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.LaneReadyForSwap__DelegateSignature
	 */
	struct ABowlingLane_Base_C_LaneReadyForSwap__DelegateSignature_Params
	{	};

	/**
	 * Function BowlingLane_Base.BowlingLane_Base_C.LaneSetupComplete__DelegateSignature
	 */
	struct ABowlingLane_Base_C_LaneSetupComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
