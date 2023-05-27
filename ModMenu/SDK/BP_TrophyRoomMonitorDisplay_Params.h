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
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.HideTrophyInfo
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_HideTrophyInfo_Params
	{	};

	/**
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ShowTrophyInfo
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_ShowTrophyInfo_Params
	{
	public:
		class FName                                                TrophyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Description;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       WasEarned;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6K78[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DateEarned;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Progress;                                                // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Requirement;                                             // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.UserConstructionScript
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__FinishedFunc
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_IconRotate__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__UpdateFunc
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_IconRotate__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ReceiveBeginPlay
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ExecuteUbergraph_BP_TrophyRoomMonitorDisplay
	 */
	struct ABP_TrophyRoomMonitorDisplay_C_ExecuteUbergraph_BP_TrophyRoomMonitorDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
