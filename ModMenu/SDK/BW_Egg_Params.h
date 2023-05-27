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
	 * Function BW_Egg.BW_Egg_C.HasHatched
	 */
	struct ABW_Egg_C_HasHatched_Params
	{
	public:
		bool                                                       Hatched;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.Local_Hatch
	 */
	struct ABW_Egg_C_Local_Hatch_Params
	{
	public:
		struct FMotionState                                        MotionState;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.UserConstructionScript
	 */
	struct ABW_Egg_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Egg.BW_Egg_C.ReceiveBeginPlay
	 */
	struct ABW_Egg_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Egg.BW_Egg_C.ReceiveEndPlay
	 */
	struct ABW_Egg_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.HatchCheck
	 */
	struct ABW_Egg_C_HatchCheck_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.HatchFX
	 */
	struct ABW_Egg_C_HatchFX_Params
	{	};

	/**
	 * Function BW_Egg.BW_Egg_C.Hide Egg
	 */
	struct ABW_Egg_C_HideEgg_Params
	{	};

	/**
	 * Function BW_Egg.BW_Egg_C.Turkey Destroyed
	 */
	struct ABW_Egg_C_TurkeyDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                PrimitveActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.SM_Hatch
	 */
	struct ABW_Egg_C_SM_Hatch_Params
	{
	public:
		struct FMotionState                                        MotionState;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.Multi_Hatch
	 */
	struct ABW_Egg_C_Multi_Hatch_Params
	{
	public:
		struct FMotionState                                        MotionState;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg
	 */
	struct ABW_Egg_C_ExecuteUbergraph_BW_Egg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
