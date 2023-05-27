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
	 * Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.SetNoGameActive
	 */
	struct UBB_Scoreboard_Bases_C_SetNoGameActive_Params
	{	};

	/**
	 * Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.NewInning
	 */
	struct UBB_Scoreboard_Bases_C_NewInning_Params
	{
	public:
		int32_t                                                    Inning;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Top;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.UpdateBaserunners
	 */
	struct UBB_Scoreboard_Bases_C_UpdateBaserunners_Params
	{
	public:
		bool                                                       RunnerOn1;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnderOn2;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnderOn3;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.ExecuteUbergraph_BB_Scoreboard_Bases
	 */
	struct UBB_Scoreboard_Bases_C_ExecuteUbergraph_BB_Scoreboard_Bases_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
