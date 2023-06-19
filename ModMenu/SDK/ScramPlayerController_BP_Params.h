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
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.HideSlowConnection
	 */
	struct AScramPlayerController_BP_C_HideSlowConnection_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.ShowSlowConnection
	 */
	struct AScramPlayerController_BP_C_ShowSlowConnection_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnUIFloater
	 */
	struct AScramPlayerController_BP_C_SpawnUIFloater_Params
	{
	public:
		bool                                                       NoPause;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8M2U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Error;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       SlowConnection;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UY2F[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsMultiplayerQueued
	 */
	struct AScramPlayerController_BP_C_IsMultiplayerQueued_Params
	{
	public:
		bool                                                       MultiplayerQueued;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9VLD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.DoesPauseManagerExist?
	 */
	struct AScramPlayerController_BP_C_DoesPauseManagerExist_Params
	{
	public:
		bool                                                       Exists;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DGMQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsPauseRestricted
	 */
	struct AScramPlayerController_BP_C_IsPauseRestricted_Params
	{
	public:
		bool                                                       restricted;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHQ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnNoPause
	 */
	struct AScramPlayerController_BP_C_SpawnNoPause_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.Initialize
	 */
	struct AScramPlayerController_BP_C_Initialize_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.UserConstructionScript
	 */
	struct AScramPlayerController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct AScramPlayerController_BP_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseGame
	 */
	struct AScramPlayerController_BP_C_PauseGame_Params
	{
	public:
		bool                                                       CheckIfPausedAllowed;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveBeginPlay
	 */
	struct AScramPlayerController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.UnpauseGame
	 */
	struct AScramPlayerController_BP_C_UnpauseGame_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEndNotify
	 */
	struct AScramPlayerController_BP_C_PauseEndNotify_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStartNotify
	 */
	struct AScramPlayerController_BP_C_PauseStartNotify_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedPauseGame
	 */
	struct AScramPlayerController_BP_C_QueuedPauseGame_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedUnpauseGame
	 */
	struct AScramPlayerController_BP_C_QueuedUnpauseGame_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanStartTravel
	 */
	struct AScramPlayerController_BP_C_Server_ClientCanStartTravel_Params
	{
	public:
		class AGameHandlerOnline_C*                                GameHandler;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanBeginMatch
	 */
	struct AScramPlayerController_BP_C_Server_ClientCanBeginMatch_Params
	{
	public:
		class AGameHandlerOnline_C*                                GameHandler;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.UpdateSlowConnectionDisplay
	 */
	struct AScramPlayerController_BP_C_UpdateSlowConnectionDisplay_Params
	{
	public:
		bool                                                       isOverThreshold;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveEndPlay
	 */
	struct AScramPlayerController_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.ExecuteUbergraph_ScramPlayerController_BP
	 */
	struct AScramPlayerController_BP_C_ExecuteUbergraph_ScramPlayerController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0Q5C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEnd__DelegateSignature
	 */
	struct AScramPlayerController_BP_C_PauseEnd__DelegateSignature_Params
	{	};

	/**
	 * Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStart__DelegateSignature
	 */
	struct AScramPlayerController_BP_C_PauseStart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
