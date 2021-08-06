#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TennisScramble_ProRacket.TennisScramble_ProRacket_C.RacquetChanged
struct ATennisScramble_ProRacket_C_RacquetChanged_Params
{
	class AActor*                                      Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATN_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScramble_ProRacket.TennisScramble_ProRacket_C.GetRandomInstrument
struct ATennisScramble_ProRacket_C_GetRandomInstrument_Params
{
	class UClass*                                      InstrumentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NewInstrument;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisScramble_ProRacket.TennisScramble_ProRacket_C.ActivateScrambleEffect
struct ATennisScramble_ProRacket_C_ActivateScrambleEffect_Params
{
	class ATN_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScrambleEffectSuccess;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisScramble_ProRacket.TennisScramble_ProRacket_C.UserConstructionScript
struct ATennisScramble_ProRacket_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
