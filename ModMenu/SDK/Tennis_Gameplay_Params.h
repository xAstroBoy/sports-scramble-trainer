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
	 * Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveEndPlay
	 */
	struct ATennis_Gameplay_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tennis_Gameplay.Tennis_Gameplay_C.SpawnMenu
	 */
	struct ATennis_Gameplay_C_SpawnMenu_Params
	{
	public:
		class FName                                                NewGeoLevel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveBeginPlay
	 */
	struct ATennis_Gameplay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Tennis_Gameplay.Tennis_Gameplay_C.ExecuteUbergraph_Tennis_Gameplay
	 */
	struct ATennis_Gameplay_C_ExecuteUbergraph_Tennis_Gameplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8A3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
