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
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.GetNextRandomLaneRef
	 */
	struct ABW_Train_07_UnlimitedBowling_C_GetNextRandomLaneRef_Params
	{
	public:
		unsigned char                                              UnknownData_FY9Y[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.UpdateOptions
	 */
	struct ABW_Train_07_UnlimitedBowling_C_UpdateOptions_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.InitializeTrainingRoom
	 */
	struct ABW_Train_07_UnlimitedBowling_C_InitializeTrainingRoom_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.UserConstructionScript
	 */
	struct ABW_Train_07_UnlimitedBowling_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.OnLoaded_4BFEE13A4C44A361BB83B39438BC711B
	 */
	struct ABW_Train_07_UnlimitedBowling_C_OnLoaded_4BFEE13A4C44A361BB83B39438BC711B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.OnLoaded_D837615244B3F303E1BC4BBE5AAAB6CE
	 */
	struct ABW_Train_07_UnlimitedBowling_C_OnLoaded_D837615244B3F303E1BC4BBE5AAAB6CE_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.ReceiveBeginPlay
	 */
	struct ABW_Train_07_UnlimitedBowling_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.CountDownCompleted
	 */
	struct ABW_Train_07_UnlimitedBowling_C_CountDownCompleted_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.StartBowling
	 */
	struct ABW_Train_07_UnlimitedBowling_C_StartBowling_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.GetNextRandomLane
	 */
	struct ABW_Train_07_UnlimitedBowling_C_GetNextRandomLane_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.ListenForBowlingEvent
	 */
	struct ABW_Train_07_UnlimitedBowling_C_ListenForBowlingEvent_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.Unpaused
	 */
	struct ABW_Train_07_UnlimitedBowling_C_Unpaused_Params
	{	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.ReceiveEndPlay
	 */
	struct ABW_Train_07_UnlimitedBowling_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.ExecuteUbergraph_BW_Train_07_UnlimitedBowling
	 */
	struct ABW_Train_07_UnlimitedBowling_C_ExecuteUbergraph_BW_Train_07_UnlimitedBowling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XF9G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
