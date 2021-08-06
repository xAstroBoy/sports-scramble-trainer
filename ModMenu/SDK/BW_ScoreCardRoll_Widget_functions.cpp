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

// Function BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C.ShowRoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBowlingRoll            Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// SportsScramble_EBowlingRollResult PriorRollResult                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBW_ScoreCardRoll_Widget_C::ShowRoll(const struct FBowlingRoll& Roll, SportsScramble_EBowlingRollResult PriorRollResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C.ShowRoll");

	UBW_ScoreCardRoll_Widget_C_ShowRoll_Params params;
	params.Roll = Roll;
	params.PriorRollResult = PriorRollResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
