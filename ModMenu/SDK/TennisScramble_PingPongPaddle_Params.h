﻿#pragma once

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
	 * Function TennisScramble_PingPongPaddle.TennisScramble_PingPongPaddle_C.RacquetChanged
	 */
	struct ATennisScramble_PingPongPaddle_C_RacquetChanged_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATN_Instrument_Base_C*                               Instrument;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScramble_PingPongPaddle.TennisScramble_PingPongPaddle_C.GetRandomInstrument
	 */
	struct ATennisScramble_PingPongPaddle_C_GetRandomInstrument_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewInstrument;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScramble_PingPongPaddle.TennisScramble_PingPongPaddle_C.ActivateScrambleEffect
	 */
	struct ATennisScramble_PingPongPaddle_C_ActivateScrambleEffect_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScrambleEffectSuccess;                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EA2X[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisScramble_PingPongPaddle.TennisScramble_PingPongPaddle_C.UserConstructionScript
	 */
	struct ATennisScramble_PingPongPaddle_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif