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

// Function BowlingUtils.BowlingUtils_C.GetInstigatorBall
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABowlingBall*            Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABowlingBall*            Ball                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBowlingUtils_C::STATIC_GetInstigatorBall(class ABowlingBall* Instigator, class UObject* __WorldContext, class ABowlingBall** Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingUtils.BowlingUtils_C.GetInstigatorBall");

	UBowlingUtils_C_GetInstigatorBall_Params params;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ball != nullptr)
		*Ball = params.Ball;

}


// Function BowlingUtils.BowlingUtils_C.GetModifiedScore
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bonus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ModifiedScore                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBowlingUtils_C::STATIC_GetModifiedScore(class AActor* Instigator, int score, bool bonus, class UObject* __WorldContext, int* ModifiedScore, bool* ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingUtils.BowlingUtils_C.GetModifiedScore");

	UBowlingUtils_C_GetModifiedScore_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
