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

// Function BowlingLane_Base.BowlingLane_Base_C.GetAlley
struct ABowlingLane_Base_C_GetAlley_Params
{
	class ABowlingAlley*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.IsLocalPlayerLane
struct ABowlingLane_Base_C_IsLocalPlayerLane_Params
{
	bool                                               IsLocalPlayerLane;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingLane_Base.BowlingLane_Base_C.Teardown
struct ABowlingLane_Base_C_Teardown_Params
{
};

// Function BowlingLane_Base.BowlingLane_Base_C.ShutdownLane
struct ABowlingLane_Base_C_ShutdownLane_Params
{
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingLane_Base.BowlingLane_Base_C.SetupLane
struct ABowlingLane_Base_C_SetupLane_Params
{
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingLane_Base.BowlingLane_Base_C.UserConstructionScript
struct ABowlingLane_Base_C_UserConstructionScript_Params
{
};

// Function BowlingLane_Base.BowlingLane_Base_C.ReceiveEndPlay
struct ABowlingLane_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABowlingLane_Base_C_BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BowlingLane_Base.BowlingLane_Base_C.LR_AddScore
struct ABowlingLane_Base_C_LR_AddScore_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.Multi_AddScore
struct ABowlingLane_Base_C_Multi_AddScore_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.Server_AddScore
struct ABowlingLane_Base_C_Server_AddScore_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.Local_AddScore
struct ABowlingLane_Base_C_Local_AddScore_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.ExecuteUbergraph_BowlingLane_Base
struct ABowlingLane_Base_C_ExecuteUbergraph_BowlingLane_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLane_Base.BowlingLane_Base_C.LaneReadyForSwap__DelegateSignature
struct ABowlingLane_Base_C_LaneReadyForSwap__DelegateSignature_Params
{
};

// Function BowlingLane_Base.BowlingLane_Base_C.LaneSetupComplete__DelegateSignature
struct ABowlingLane_Base_C_LaneSetupComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
