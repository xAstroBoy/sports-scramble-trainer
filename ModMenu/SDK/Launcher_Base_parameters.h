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

// Function Launcher_Base.Launcher_Base_C.LaunchBallWithTrajectory
struct ALauncher_Base_C_LaunchBallWithTrajectory_Params
{
	struct FScramTrajectory                            trajectory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Launcher_Base.Launcher_Base_C.UpdateBallType
struct ALauncher_Base_C_UpdateBallType_Params
{
};

// Function Launcher_Base.Launcher_Base_C.CreateSpawnSFX
struct ALauncher_Base_C_CreateSpawnSFX_Params
{
};

// Function Launcher_Base.Launcher_Base_C.CreateSpawnVFX
struct ALauncher_Base_C_CreateSpawnVFX_Params
{
};

// Function Launcher_Base.Launcher_Base_C.LaunchBall
struct ALauncher_Base_C_LaunchBall_Params
{
};

// Function Launcher_Base.Launcher_Base_C.UserConstructionScript
struct ALauncher_Base_C_UserConstructionScript_Params
{
};

// Function Launcher_Base.Launcher_Base_C.InpActEvt_X_K2Node_InputActionEvent_4
struct ALauncher_Base_C_InpActEvt_X_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Launcher_Base.Launcher_Base_C.InpActEvt_Y_K2Node_InputActionEvent_3
struct ALauncher_Base_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Launcher_Base.Launcher_Base_C.InpActEvt_A_K2Node_InputActionEvent_2
struct ALauncher_Base_C_InpActEvt_A_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Launcher_Base.Launcher_Base_C.InpActEvt_B_K2Node_InputActionEvent_1
struct ALauncher_Base_C_InpActEvt_B_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Launcher_Base.Launcher_Base_C.ReceiveBeginPlay
struct ALauncher_Base_C_ReceiveBeginPlay_Params
{
};

// Function Launcher_Base.Launcher_Base_C.BeginLooping
struct ALauncher_Base_C_BeginLooping_Params
{
	float                                              LoopDelay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Launcher_Base.Launcher_Base_C.StopLooping
struct ALauncher_Base_C_StopLooping_Params
{
};

// Function Launcher_Base.Launcher_Base_C.ExecuteUbergraph_Launcher_Base
struct ALauncher_Base_C_ExecuteUbergraph_Launcher_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Launcher_Base.Launcher_Base_C.BallLaunched__DelegateSignature
struct ALauncher_Base_C_BallLaunched__DelegateSignature_Params
{
	class AActor*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
