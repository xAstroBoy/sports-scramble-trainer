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
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AddActorToGameElementList
	 */
	struct ATN_Minigame_ReturnWall_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Shutdown
	 */
	struct ATN_Minigame_ReturnWall_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1IVW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.SpawnGameElements
	 */
	struct ATN_Minigame_ReturnWall_C_SpawnGameElements_Params
	{	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UpdateScore
	 */
	struct ATN_Minigame_ReturnWall_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Initialize
	 */
	struct ATN_Minigame_ReturnWall_C_Initialize_Params
	{	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UserConstructionScript
	 */
	struct ATN_Minigame_ReturnWall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.InpActEvt_A_K2Node_InputActionEvent_1
	 */
	struct ATN_Minigame_ReturnWall_C_InpActEvt_A_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReceiveBeginPlay
	 */
	struct ATN_Minigame_ReturnWall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.DelayDestroy
	 */
	struct ATN_Minigame_ReturnWall_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReturnWallHit
	 */
	struct ATN_Minigame_ReturnWall_C_ReturnWallHit_Params
	{
	public:
		int32_t                                                    Streak;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.HideNets
	 */
	struct ATN_Minigame_ReturnWall_C_HideNets_Params
	{
	public:
		class FName                                                NewGeo;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AllowPlayerInput
	 */
	struct ATN_Minigame_ReturnWall_C_AllowPlayerInput_Params
	{	};

	/**
	 * Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ExecuteUbergraph_TN_Minigame_ReturnWall
	 */
	struct ATN_Minigame_ReturnWall_C_ExecuteUbergraph_TN_Minigame_ReturnWall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8B3Z[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
