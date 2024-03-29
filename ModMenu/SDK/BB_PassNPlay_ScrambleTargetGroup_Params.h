﻿#pragma once

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
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JVKB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Ball_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		int32_t                                                    ID;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NR0G[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScrambleClass;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RemoveAllTargets_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Instrument_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		int32_t                                                    ID;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q8U1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScrambleClass;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.Initialize
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_Initialize_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateBall__FinishedFunc_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateBall__UpdateFunc_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__FinishedFunc_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__UpdateFunc_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateBallIcon_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateInstrumentIcon_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.StopBallIcon
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_StopBallIcon_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_StopInstrumentIcon_Params
	{	};

	/**
	 * Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_BB_PassNPlay_ScrambleTargetGroup
	 */
	struct ABB_PassNPlay_ScrambleTargetGroup_C_ExecuteUbergraph_BB_PassNPlay_ScrambleTargetGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62A1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
