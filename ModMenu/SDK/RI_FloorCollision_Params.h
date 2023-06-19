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
	 * Function RI_FloorCollision.RI_FloorCollision_C.CreateBallMark
	 */
	struct ARI_FloorCollision_C_CreateBallMark_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.RemoveMarks
	 */
	struct ARI_FloorCollision_C_RemoveMarks_Params
	{	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.UserConstructionScript
	 */
	struct ARI_FloorCollision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.ReceiveBeginPlay
	 */
	struct ARI_FloorCollision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.TargetHit
	 */
	struct ARI_FloorCollision_C_TargetHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.ReceiveDestroyed
	 */
	struct ARI_FloorCollision_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.ExecuteUbergraph_RI_FloorCollision
	 */
	struct ARI_FloorCollision_C_ExecuteUbergraph_RI_FloorCollision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LE3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.BB_BallLanded__DelegateSignature
	 */
	struct ARI_FloorCollision_C_BB_BallLanded__DelegateSignature_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RI_FloorCollision.RI_FloorCollision_C.BallLanded__DelegateSignature
	 */
	struct ARI_FloorCollision_C_BallLanded__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
