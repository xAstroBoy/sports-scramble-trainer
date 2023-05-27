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
	 * Function BB_Strikezone.BB_Strikezone_C.Initialize
	 */
	struct ABB_Strikezone_C_Initialize_Params
	{	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.GrowQuad
	 */
	struct ABB_Strikezone_C_GrowQuad_Params
	{	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.ShrinkQuad
	 */
	struct ABB_Strikezone_C_ShrinkQuad_Params
	{	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.ShowDebugText
	 */
	struct ABB_Strikezone_C_ShowDebugText_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0N4M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.UserConstructionScript
	 */
	struct ABB_Strikezone_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.ReceiveBeginPlay
	 */
	struct ABB_Strikezone_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.UpdateStrikeZoneVisibility
	 */
	struct ABB_Strikezone_C_UpdateStrikeZoneVisibility_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.UpdateQuadVisibility
	 */
	struct ABB_Strikezone_C_UpdateQuadVisibility_Params
	{
	public:
		bool                                                       TL;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TR;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BL;                                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BR;                                                      // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.PitchingTargetHit
	 */
	struct ABB_Strikezone_C_PitchingTargetHit_Params
	{
	public:
		EBaseballScrambleTargetLocations                           TargetLocation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.StrikezoneEventReceived
	 */
	struct ABB_Strikezone_C_StrikezoneEventReceived_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EScramStrikeResult                                         Result;                                                  // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.ReceiveEndPlay
	 */
	struct ABB_Strikezone_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.ExecuteUbergraph_BB_Strikezone
	 */
	struct ABB_Strikezone_C_ExecuteUbergraph_BB_Strikezone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.BallDetected__DelegateSignature
	 */
	struct ABB_Strikezone_C_BallDetected__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Strikezone.BB_Strikezone_C.StrikeDetected__DelegateSignature
	 */
	struct ABB_Strikezone_C_StrikeDetected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
