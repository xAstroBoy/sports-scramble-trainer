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
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.GetTrophyID
	 */
	struct ABW_Challenge_07_HardAI_C_GetTrophyID_Params
	{
	public:
		class FName                                                TrophyID;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.InitializeChallengeRoom
	 */
	struct ABW_Challenge_07_HardAI_C_InitializeChallengeRoom_Params
	{	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.SetupInfoText
	 */
	struct ABW_Challenge_07_HardAI_C_SetupInfoText_Params
	{	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.UserConstructionScript
	 */
	struct ABW_Challenge_07_HardAI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveBeginPlay
	 */
	struct ABW_Challenge_07_HardAI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.NotifyChallengeContinue
	 */
	struct ABW_Challenge_07_HardAI_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveEndPlay
	 */
	struct ABW_Challenge_07_HardAI_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.Shortcut
	 */
	struct ABW_Challenge_07_HardAI_C_Shortcut_Params
	{	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.BW_CHG_SportManagerGameEnd
	 */
	struct ABW_Challenge_07_HardAI_C_BW_CHG_SportManagerGameEnd_Params
	{
	public:
		EGameResult                                                MatchResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H6EJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.AnnouncerExitSequenceComplete
	 */
	struct ABW_Challenge_07_HardAI_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.OnScore
	 */
	struct ABW_Challenge_07_HardAI_C_OnScore_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ExecuteUbergraph_BW_Challenge_07_HardAI
	 */
	struct ABW_Challenge_07_HardAI_C_ExecuteUbergraph_BW_Challenge_07_HardAI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RQ1T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
