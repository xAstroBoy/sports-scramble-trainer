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
	 * Function ScramGameState_BP.ScramGameState_BP_C.UserConstructionScript
	 */
	struct AScramGameState_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramGameState_BP.ScramGameState_BP_C.ReceiveBeginPlay
	 */
	struct AScramGameState_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyPause
	 */
	struct AScramGameState_BP_C_ServerNotifyPause_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyResume
	 */
	struct AScramGameState_BP_C_ServerNotifyResume_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGamePaused
	 */
	struct AScramGameState_BP_C_BlueprintCall_OnMultiplayerGamePaused_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGameResume
	 */
	struct AScramGameState_BP_C_BlueprintCall_OnMultiplayerGameResume_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameState_BP.ScramGameState_BP_C.ExecuteUbergraph_ScramGameState_BP
	 */
	struct AScramGameState_BP_C_ExecuteUbergraph_ScramGameState_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNRT[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
