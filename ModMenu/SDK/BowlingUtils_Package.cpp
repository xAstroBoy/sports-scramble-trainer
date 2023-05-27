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
	 * 		Name   -> Function BowlingUtils.BowlingUtils_C.GetInstigatorBall
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABowlingBall*                                Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABowlingBall*                                Ball                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBowlingUtils_C::STATIC_GetInstigatorBall(class ABowlingBall* Instigator, class UObject* __WorldContext, class ABowlingBall** Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingUtils.BowlingUtils_C.GetInstigatorBall");
		
		UBowlingUtils_C_GetInstigatorBall_Params params {};
		params.Instigator = Instigator;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ball != nullptr)
			*Ball = params.Ball;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingUtils.BowlingUtils_C.GetModifiedScore
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModifiedScore                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ModifiedBonus                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBowlingUtils_C::STATIC_GetModifiedScore(class AActor* Instigator, int32_t score, bool bonus, class UObject* __WorldContext, int32_t* ModifiedScore, bool* ModifiedBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingUtils.BowlingUtils_C.GetModifiedScore");
		
		UBowlingUtils_C_GetModifiedScore_Params params {};
		params.Instigator = Instigator;
		params.score = score;
		params.bonus = bonus;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedScore != nullptr)
			*ModifiedScore = params.ModifiedScore;
		if (ModifiedBonus != nullptr)
			*ModifiedBonus = params.ModifiedBonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingUtils_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingUtils_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BowlingUtils.BowlingUtils_C");
		return ptr;
	}

}


