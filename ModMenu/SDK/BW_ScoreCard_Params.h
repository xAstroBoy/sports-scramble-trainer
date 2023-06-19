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
	 * Function BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames
	 */
	struct ABW_ScoreCard_C_UpdatePlayerNames_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.PrepareForGame
	 */
	struct ABW_ScoreCard_C_PrepareForGame_Params
	{
	public:
		int32_t                                                    NumFrames;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumPlayers;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hidden;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J5AV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets
	 */
	struct ABW_ScoreCard_C_UpdateFrameSets_Params
	{
	public:
		TArray<struct FBowlingFrameSet>                            FrameSets;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    CurrentPlayer;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentFrame;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.Initialize
	 */
	struct ABW_ScoreCard_C_Initialize_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet
	 */
	struct ABW_ScoreCard_C_UpdateFrameSet_Params
	{
	public:
		struct FBowlingFrameSet                                    frameSet;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBW_ScoreCardFrameSet_Widget_C*                      FrameSetWidget;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UBW_ScoreCardFrame_Widget_C*>                 FrameWidgets;                                            // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       IsPlayerActive;                                          // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RXPQ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentFrame;                                            // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript
	 */
	struct ABW_ScoreCard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc
	 */
	struct ABW_ScoreCard_C_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc
	 */
	struct ABW_ScoreCard_C_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets
	 */
	struct ABW_ScoreCard_C_NetUpdateFrameSets_Params
	{
	public:
		TArray<struct FBowlingFrameSet>                            FrameSets;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    CurrentPlayer;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentFrame;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay
	 */
	struct ABW_ScoreCard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame
	 */
	struct ABW_ScoreCard_C_NetPrepareForGame_Params
	{
	public:
		int32_t                                                    NumFrames;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumPlayers;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.NetHide
	 */
	struct ABW_ScoreCard_C_NetHide_Params
	{	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened
	 */
	struct ABW_ScoreCard_C_TravelCapsuleOpened_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard
	 */
	struct ABW_ScoreCard_C_ExecuteUbergraph_BW_ScoreCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
