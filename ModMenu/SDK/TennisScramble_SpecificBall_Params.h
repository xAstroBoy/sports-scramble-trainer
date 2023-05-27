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
	 * Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.ActivateScrambleEffect
	 */
	struct ATennisScramble_SpecificBall_C_ActivateScrambleEffect_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScrambleEffectSuccess;                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.UserConstructionScript
	 */
	struct ATennisScramble_SpecificBall_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
