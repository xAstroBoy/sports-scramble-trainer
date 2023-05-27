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
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.UpdateOptions
	 */
	struct ATN_Train_08_UnlimitedVolley_C_UpdateOptions_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.GetNextLaunchTarget
	 */
	struct ATN_Train_08_UnlimitedVolley_C_GetNextLaunchTarget_Params
	{
	public:
		struct FBallLauncherParameters                             LauncherParameter;                                       // 0x0000(0x0084)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.GetRandomLaunchTargetList
	 */
	struct ATN_Train_08_UnlimitedVolley_C_GetRandomLaunchTargetList_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.InitializeTrainingRoom08
	 */
	struct ATN_Train_08_UnlimitedVolley_C_InitializeTrainingRoom08_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.UserConstructionScript
	 */
	struct ATN_Train_08_UnlimitedVolley_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ReceiveBeginPlay
	 */
	struct ATN_Train_08_UnlimitedVolley_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.LaunchLoop
	 */
	struct ATN_Train_08_UnlimitedVolley_C_LaunchLoop_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.NormalLaunch
	 */
	struct ATN_Train_08_UnlimitedVolley_C_NormalLaunch_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ChargeShot
	 */
	struct ATN_Train_08_UnlimitedVolley_C_ChargeShot_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.SliceShot
	 */
	struct ATN_Train_08_UnlimitedVolley_C_SliceShot_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ChangePlayerInstrument
	 */
	struct ATN_Train_08_UnlimitedVolley_C_ChangePlayerInstrument_Params
	{
	public:
		class UClass*                                              PlayerInstrumentClass;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.CountDownCompleted
	 */
	struct ATN_Train_08_UnlimitedVolley_C_CountDownCompleted_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ShowCountdown
	 */
	struct ATN_Train_08_UnlimitedVolley_C_ShowCountdown_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.Unpaused
	 */
	struct ATN_Train_08_UnlimitedVolley_C_Unpaused_Params
	{	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ReceiveEndPlay
	 */
	struct ATN_Train_08_UnlimitedVolley_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C.ExecuteUbergraph_TN_Train_08_UnlimitedVolley
	 */
	struct ATN_Train_08_UnlimitedVolley_C_ExecuteUbergraph_TN_Train_08_UnlimitedVolley_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
