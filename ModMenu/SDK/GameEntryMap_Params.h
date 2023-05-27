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
	 * Function GameEntryMap.GameEntryMap_C.PlayerReady?
	 */
	struct AGameEntryMap_C_PlayerReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F5MH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GameEntryMap.GameEntryMap_C.ReceiveBeginPlay
	 */
	struct AGameEntryMap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GameEntryMap.GameEntryMap_C.ExecuteUbergraph_GameEntryMap
	 */
	struct AGameEntryMap_C_ExecuteUbergraph_GameEntryMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TEQM[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
