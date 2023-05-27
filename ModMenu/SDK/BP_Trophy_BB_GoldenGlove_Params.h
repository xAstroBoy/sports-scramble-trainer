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
	 * Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.UserConstructionScript
	 */
	struct ABP_Trophy_BB_GoldenGlove_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.GrabbedBall
	 */
	struct ABP_Trophy_BB_GoldenGlove_C_GrabbedBall_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ReceiveBeginPlay
	 */
	struct ABP_Trophy_BB_GoldenGlove_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.CatchEvent
	 */
	struct ABP_Trophy_BB_GoldenGlove_C_CatchEvent_Params
	{
	public:
		struct FVector                                             FielderPosition;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9DED[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramPlayer*                                        Player;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ExecuteUbergraph_BP_Trophy_BB_GoldenGlove
	 */
	struct ABP_Trophy_BB_GoldenGlove_C_ExecuteUbergraph_BP_Trophy_BB_GoldenGlove_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QMF7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
