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
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UserConstructionScript
	 */
	struct ATN_ChallengeBall_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Change Trail Color
	 */
	struct ATN_ChallengeBall_Base_C_ChallengeChangeTrailColor_Params
	{	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Pomp & Destruction
	 */
	struct ATN_ChallengeBall_Base_C_ChallengePompDestruction_Params
	{
	public:
		float                                                      TimeDelay;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveBeginPlay
	 */
	struct ATN_ChallengeBall_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveEndPlay
	 */
	struct ATN_ChallengeBall_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ChallengeHit
	 */
	struct ATN_ChallengeBall_Base_C_ChallengeHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.SetTrail
	 */
	struct ATN_ChallengeBall_Base_C_SetTrail_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoHitSFX;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UpdateMesh
	 */
	struct ATN_ChallengeBall_Base_C_UpdateMesh_Params
	{	};

	/**
	 * Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ExecuteUbergraph_TN_ChallengeBall_Base
	 */
	struct ATN_ChallengeBall_Base_C_ExecuteUbergraph_TN_ChallengeBall_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
