/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SpaceInvaderLane.SpaceInvaderLane_C.UpdateAlienSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SpeedUpdated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceInvaderLane_C::UpdateAlienSpeed(float NewSpeed, bool* SpeedUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceInvaderLane.SpaceInvaderLane_C.UpdateAlienSpeed");
		
		USpaceInvaderLane_C_UpdateAlienSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpeedUpdated != nullptr)
			*SpeedUpdated = params.SpeedUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SpaceInvaderLane.SpaceInvaderLane_C.SetInvaderLaneGameState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Run                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StateSet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceInvaderLane_C::SetInvaderLaneGameState(bool Run, bool* StateSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceInvaderLane.SpaceInvaderLane_C.SetInvaderLaneGameState");
		
		USpaceInvaderLane_C_SetInvaderLaneGameState_Params params {};
		params.Run = Run;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StateSet != nullptr)
			*StateSet = params.StateSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SpaceInvaderLane.SpaceInvaderLane_C.BeginChallengeMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                Patterns                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               ChallengeModeStarted                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceInvaderLane_C::BeginChallengeMode(float Speed, TArray<class FName> Patterns, bool* ChallengeModeStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceInvaderLane.SpaceInvaderLane_C.BeginChallengeMode");
		
		USpaceInvaderLane_C_BeginChallengeMode_Params params {};
		params.Speed = Speed;
		params.Patterns = Patterns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChallengeModeStarted != nullptr)
			*ChallengeModeStarted = params.ChallengeModeStarted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceInvaderLane_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceInvaderLane_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceInvaderLane.SpaceInvaderLane_C");
		return ptr;
	}

}


