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
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CS7O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Ball_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		int32_t                                                    ID;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SH8Z[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScrambleClass;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RemoveAllTargets_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Instrument_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		int32_t                                                    ID;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_65X2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScrambleClass;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.Initialize
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_Initialize_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RotateBall__FinishedFunc_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RotateBall__UpdateFunc_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__FinishedFunc_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__UpdateFunc_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RotateBallIcon_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_RotateInstrumentIcon_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.StopBallIcon
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_StopBallIcon_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_StopInstrumentIcon_Params
	{	};

	/**
	 * Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_BW_PassNPlay_ScrambleTargetGroup
	 */
	struct ABW_PassNPlay_ScrambleTargetGroup_C_ExecuteUbergraph_BW_PassNPlay_ScrambleTargetGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
