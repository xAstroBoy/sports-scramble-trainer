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

// Function TN_Stadium_01_PalmTree_BP.TN_Stadium_01_PalmTree_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Stadium_01_PalmTree_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Stadium_01_PalmTree_BP.TN_Stadium_01_PalmTree_BP_C.UserConstructionScript");

	ATN_Stadium_01_PalmTree_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
