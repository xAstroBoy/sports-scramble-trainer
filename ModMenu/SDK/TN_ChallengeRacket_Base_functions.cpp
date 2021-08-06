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

// Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_ChallengeRacket_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.UserConstructionScript");

	ATN_ChallengeRacket_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ATN_ChallengeRacket_Base_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__FinishedFunc");

	ATN_ChallengeRacket_Base_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ATN_ChallengeRacket_Base_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__UpdateFunc");

	ATN_ChallengeRacket_Base_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.PlayHitShaderFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_ETennisShotType ShotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_ETennisBallType BallType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeRacket_Base_C::PlayHitShaderFX(SportsScramble_ETennisShotType ShotType, SportsScramble_ETennisBallType BallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.PlayHitShaderFX");

	ATN_ChallengeRacket_Base_C_PlayHitShaderFX_Params params;
	params.ShotType = ShotType;
	params.BallType = BallType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.ExecuteUbergraph_TN_ChallengeRacket_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeRacket_Base_C::ExecuteUbergraph_TN_ChallengeRacket_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.ExecuteUbergraph_TN_ChallengeRacket_Base");

	ATN_ChallengeRacket_Base_C_ExecuteUbergraph_TN_ChallengeRacket_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
