// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.RacquetChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATN_Instrument_Base_C*   Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScramble_RandomRacket_C::RacquetChanged(class AActor* Player, class ATN_Instrument_Base_C* Instrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.RacquetChanged");

	ATennisScramble_RandomRacket_C_RacquetChanged_Params params;
	params.Player = Player;
	params.Instrument = Instrument;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.GetRandomInstrument
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  NewInstrument                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScramble_RandomRacket_C::GetRandomInstrument(class UClass* InstrumentClass, class UClass** NewInstrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.GetRandomInstrument");

	ATennisScramble_RandomRacket_C_GetRandomInstrument_Params params;
	params.InstrumentClass = InstrumentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewInstrument != nullptr)
		*NewInstrument = params.NewInstrument;

}


// Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.ActivateScrambleEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScrambleEffectSuccess          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisScramble_RandomRacket_C::ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.ActivateScrambleEffect");

	ATennisScramble_RandomRacket_C_ActivateScrambleEffect_Params params;
	params.Ball = Ball;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrambleEffectSuccess != nullptr)
		*ScrambleEffectSuccess = params.ScrambleEffectSuccess;

}


// Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisScramble_RandomRacket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScramble_RandomRacket.TennisScramble_RandomRacket_C.UserConstructionScript");

	ATennisScramble_RandomRacket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
