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
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.CheckTrophyCompletion
	 */
	struct AScramTrophyRoomTrophy_C_CheckTrophyCompletion_Params
	{	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.Initialize
	 */
	struct AScramTrophyRoomTrophy_C_Initialize_Params
	{	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.UserConstructionScript
	 */
	struct AScramTrophyRoomTrophy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveBeginPlay
	 */
	struct AScramTrophyRoomTrophy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerLookAtTrophy
	 */
	struct AScramTrophyRoomTrophy_C_OnPlayerLookAtTrophy_Params
	{	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerStopLookAtTrophy
	 */
	struct AScramTrophyRoomTrophy_C_OnPlayerStopLookAtTrophy_Params
	{	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveEndPlay
	 */
	struct AScramTrophyRoomTrophy_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ExecuteUbergraph_ScramTrophyRoomTrophy
	 */
	struct AScramTrophyRoomTrophy_C_ExecuteUbergraph_ScramTrophyRoomTrophy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
