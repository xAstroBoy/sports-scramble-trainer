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
	 * Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.UserConstructionScript
	 */
	struct ADoubleCross_ParticleTrigger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.OnTriggered
	 */
	struct ADoubleCross_ParticleTrigger_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.ExecuteUbergraph_DoubleCross_ParticleTrigger
	 */
	struct ADoubleCross_ParticleTrigger_C_ExecuteUbergraph_DoubleCross_ParticleTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZTBI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
