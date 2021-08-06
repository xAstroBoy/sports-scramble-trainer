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

// Function BW_CenterScoreboard_Widget.BW_CenterScoreboard_Widget_C.Get_RedMotion_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBW_CenterScoreboard_Widget_C::Get_RedMotion_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard_Widget.BW_CenterScoreboard_Widget_C.Get_RedMotion_bIsEnabled_1");

	UBW_CenterScoreboard_Widget_C_Get_RedMotion_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
