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
	 * Function SpaceInvaderLane.SpaceInvaderLane_C.UpdateAlienSpeed
	 */
	struct USpaceInvaderLane_C_UpdateAlienSpeed_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SpeedUpdated;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceInvaderLane.SpaceInvaderLane_C.SetInvaderLaneGameState
	 */
	struct USpaceInvaderLane_C_SetInvaderLaneGameState_Params
	{
	public:
		bool                                                       Run;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StateSet;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceInvaderLane.SpaceInvaderLane_C.BeginChallengeMode
	 */
	struct USpaceInvaderLane_C_BeginChallengeMode_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VMF0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        Patterns;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ChallengeModeStarted;                                    // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
