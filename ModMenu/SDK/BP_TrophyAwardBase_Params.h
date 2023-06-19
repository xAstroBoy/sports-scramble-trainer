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
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage2
	 */
	struct ABP_TrophyAwardBase_C_DebugMessage2_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.NewFunction_1
	 */
	struct ABP_TrophyAwardBase_C_NewFunction_1_Params
	{	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ModeCheck
	 */
	struct ABP_TrophyAwardBase_C_ModeCheck_Params
	{
	public:
		bool                                                       shldContinue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.CheckPlayer
	 */
	struct ABP_TrophyAwardBase_C_CheckPlayer_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocalPlayer;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.IsMultiplayer
	 */
	struct ABP_TrophyAwardBase_C_IsMultiplayer_Params
	{
	public:
		bool                                                       isMulti;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BI39[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ForceEarn
	 */
	struct ABP_TrophyAwardBase_C_ForceEarn_Params
	{
	public:
		class AActor*                                              WorldObject;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventTennisEventPayload*                       Payload;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugEarn
	 */
	struct ABP_TrophyAwardBase_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage
	 */
	struct ABP_TrophyAwardBase_C_DebugMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.UserConstructionScript
	 */
	struct ABP_TrophyAwardBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ReceiveBeginPlay
	 */
	struct ABP_TrophyAwardBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ExecuteUbergraph_BP_TrophyAwardBase
	 */
	struct ABP_TrophyAwardBase_C_ExecuteUbergraph_BP_TrophyAwardBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2Y5Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
