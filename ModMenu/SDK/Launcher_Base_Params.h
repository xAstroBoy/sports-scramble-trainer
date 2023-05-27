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
	 * Function Launcher_Base.Launcher_Base_C.LaunchBallWithTrajectory
	 */
	struct ALauncher_Base_C_LaunchBallWithTrajectory_Params
	{
	public:
		struct FScramTrajectory                                    trajectory;                                              // 0x0000(0x01F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.UpdateBallType
	 */
	struct ALauncher_Base_C_UpdateBallType_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.CreateSpawnSFX
	 */
	struct ALauncher_Base_C_CreateSpawnSFX_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.CreateSpawnVFX
	 */
	struct ALauncher_Base_C_CreateSpawnVFX_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.LaunchBall
	 */
	struct ALauncher_Base_C_LaunchBall_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.UserConstructionScript
	 */
	struct ALauncher_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.InpActEvt_X_K2Node_InputActionEvent_4
	 */
	struct ALauncher_Base_C_InpActEvt_X_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.InpActEvt_Y_K2Node_InputActionEvent_3
	 */
	struct ALauncher_Base_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.InpActEvt_A_K2Node_InputActionEvent_2
	 */
	struct ALauncher_Base_C_InpActEvt_A_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.InpActEvt_B_K2Node_InputActionEvent_1
	 */
	struct ALauncher_Base_C_InpActEvt_B_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.ReceiveBeginPlay
	 */
	struct ALauncher_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.BeginLooping
	 */
	struct ALauncher_Base_C_BeginLooping_Params
	{
	public:
		float                                                      LoopDelay;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.StopLooping
	 */
	struct ALauncher_Base_C_StopLooping_Params
	{	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.ExecuteUbergraph_Launcher_Base
	 */
	struct ALauncher_Base_C_ExecuteUbergraph_Launcher_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Launcher_Base.Launcher_Base_C.BallLaunched__DelegateSignature
	 */
	struct ALauncher_Base_C_BallLaunched__DelegateSignature_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
