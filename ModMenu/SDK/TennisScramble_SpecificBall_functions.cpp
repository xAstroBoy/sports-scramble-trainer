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

// Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.ActivateScrambleEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScrambleEffectSuccess          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisScramble_SpecificBall_C::ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.ActivateScrambleEffect");

	ATennisScramble_SpecificBall_C_ActivateScrambleEffect_Params params;
	params.Ball = Ball;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrambleEffectSuccess != nullptr)
		*ScrambleEffectSuccess = params.ScrambleEffectSuccess;

}


// Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisScramble_SpecificBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.UserConstructionScript");

	ATennisScramble_SpecificBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
