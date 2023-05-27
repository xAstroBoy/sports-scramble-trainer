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
	 * Function BB_FloorCollision.BB_FloorCollision_C.UserConstructionScript
	 */
	struct ABB_FloorCollision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_FloorCollision.BB_FloorCollision_C.ReceiveBeginPlay
	 */
	struct ABB_FloorCollision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_FloorCollision.BB_FloorCollision_C.TargetHit
	 */
	struct ABB_FloorCollision_C_TargetHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_FloorCollision.BB_FloorCollision_C.ExecuteUbergraph_BB_FloorCollision
	 */
	struct ABB_FloorCollision_C_ExecuteUbergraph_BB_FloorCollision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9BSC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_FloorCollision.BB_FloorCollision_C.BB_BallLanded__DelegateSignature
	 */
	struct ABB_FloorCollision_C_BB_BallLanded__DelegateSignature_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_FloorCollision.BB_FloorCollision_C.BallLanded__DelegateSignature
	 */
	struct ABB_FloorCollision_C_BallLanded__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
