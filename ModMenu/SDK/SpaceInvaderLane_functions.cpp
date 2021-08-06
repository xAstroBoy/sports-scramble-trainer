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

// Function SpaceInvaderLane.SpaceInvaderLane_C.UpdateAlienSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SpeedUpdated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USpaceInvaderLane_C::UpdateAlienSpeed(float NewSpeed, bool* SpeedUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceInvaderLane.SpaceInvaderLane_C.UpdateAlienSpeed");

	USpaceInvaderLane_C_UpdateAlienSpeed_Params params;
	params.NewSpeed = NewSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpeedUpdated != nullptr)
		*SpeedUpdated = params.SpeedUpdated;

}


// Function SpaceInvaderLane.SpaceInvaderLane_C.SetInvaderLaneGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Run                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           StateSet                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USpaceInvaderLane_C::SetInvaderLaneGameState(bool Run, bool* StateSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceInvaderLane.SpaceInvaderLane_C.SetInvaderLaneGameState");

	USpaceInvaderLane_C_SetInvaderLaneGameState_Params params;
	params.Run = Run;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StateSet != nullptr)
		*StateSet = params.StateSet;

}


// Function SpaceInvaderLane.SpaceInvaderLane_C.BeginChallengeMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           Patterns                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ChallengeModeStarted           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USpaceInvaderLane_C::BeginChallengeMode(float Speed, TArray<struct FName> Patterns, bool* ChallengeModeStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceInvaderLane.SpaceInvaderLane_C.BeginChallengeMode");

	USpaceInvaderLane_C_BeginChallengeMode_Params params;
	params.Speed = Speed;
	params.Patterns = Patterns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChallengeModeStarted != nullptr)
		*ChallengeModeStarted = params.ChallengeModeStarted;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
