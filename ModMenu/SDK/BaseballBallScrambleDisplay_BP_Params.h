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
	 * Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.UserConstructionScript
	 */
	struct ABaseballBallScrambleDisplay_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ReceiveBeginPlay
	 */
	struct ABaseballBallScrambleDisplay_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.SetIcon
	 */
	struct ABaseballBallScrambleDisplay_BP_C_SetIcon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0QGZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.GoAway
	 */
	struct ABaseballBallScrambleDisplay_BP_C_GoAway_Params
	{	};

	/**
	 * Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.FindIcon_From_BBClass
	 */
	struct ABaseballBallScrambleDisplay_BP_C_FindIcon_From_BBClass_Params
	{
	public:
		class UClass*                                              BBBallClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IconIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ExecuteUbergraph_BaseballBallScrambleDisplay_BP
	 */
	struct ABaseballBallScrambleDisplay_BP_C_ExecuteUbergraph_BaseballBallScrambleDisplay_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
