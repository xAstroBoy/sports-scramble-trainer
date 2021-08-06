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

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UpdateOptions
struct ATN_Train_09_UnlimitedServing_C_UpdateOptions_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.InitializeTrainingRoom09
struct ATN_Train_09_UnlimitedServing_C_InitializeTrainingRoom09_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UserConstructionScript
struct ATN_Train_09_UnlimitedServing_C_UserConstructionScript_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveBeginPlay
struct ATN_Train_09_UnlimitedServing_C_ReceiveBeginPlay_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.TN_TNG_BallHit
struct ATN_Train_09_UnlimitedServing_C_TN_TNG_BallHit_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.SpawnServeBall
struct ATN_Train_09_UnlimitedServing_C_SpawnServeBall_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.BallDestroyed
struct ATN_Train_09_UnlimitedServing_C_BallDestroyed_Params
{
	class AScramPrimitiveActor*                        DestroyedPrimitive;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.CountDownCompleted
struct ATN_Train_09_UnlimitedServing_C_CountDownCompleted_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ShowCountdown
struct ATN_Train_09_UnlimitedServing_C_ShowCountdown_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.Unpaused
struct ATN_Train_09_UnlimitedServing_C_Unpaused_Params
{
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveEndPlay
struct ATN_Train_09_UnlimitedServing_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ExecuteUbergraph_TN_Train_09_UnlimitedServing
struct ATN_Train_09_UnlimitedServing_C_ExecuteUbergraph_TN_Train_09_UnlimitedServing_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
