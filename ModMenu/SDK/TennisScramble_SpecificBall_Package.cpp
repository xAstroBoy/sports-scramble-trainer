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
	 * 		Name   -> Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.ActivateScrambleEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATN_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScrambleEffectSuccess                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATennisScramble_SpecificBall_C::ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.ActivateScrambleEffect");
		
		ATennisScramble_SpecificBall_C_ActivateScrambleEffect_Params params {};
		params.Ball = Ball;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrambleEffectSuccess != nullptr)
			*ScrambleEffectSuccess = params.ScrambleEffectSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScramble_SpecificBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScramble_SpecificBall.TennisScramble_SpecificBall_C.UserConstructionScript");
		
		ATennisScramble_SpecificBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisScramble_SpecificBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisScramble_SpecificBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisScramble_SpecificBall.TennisScramble_SpecificBall_C");
		return ptr;
	}

}


