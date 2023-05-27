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
	 * 		Name   -> Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ChallengeRacket_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.UserConstructionScript");
		
		ATN_ChallengeRacket_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ChallengeRacket_Base_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__FinishedFunc");
		
		ATN_ChallengeRacket_Base_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ChallengeRacket_Base_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.Timeline_0__UpdateFunc");
		
		ATN_ChallengeRacket_Base_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.PlayHitShaderFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETennisShotType                                    ShotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETennisBallType                                    BallType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ChallengeRacket_Base_C::PlayHitShaderFX(ETennisShotType ShotType, ETennisBallType BallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.PlayHitShaderFX");
		
		ATN_ChallengeRacket_Base_C_PlayHitShaderFX_Params params {};
		params.ShotType = ShotType;
		params.BallType = BallType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.ExecuteUbergraph_TN_ChallengeRacket_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ChallengeRacket_Base_C::ExecuteUbergraph_TN_ChallengeRacket_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C.ExecuteUbergraph_TN_ChallengeRacket_Base");
		
		ATN_ChallengeRacket_Base_C_ExecuteUbergraph_TN_ChallengeRacket_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_ChallengeRacket_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_ChallengeRacket_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_ChallengeRacket_Base.TN_ChallengeRacket_Base_C");
		return ptr;
	}

}


