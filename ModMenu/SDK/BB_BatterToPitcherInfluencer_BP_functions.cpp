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

// Function BB_BatterToPitcherInfluencer_BP.BB_BatterToPitcherInfluencer_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_BatterToPitcherInfluencer_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatterToPitcherInfluencer_BP.BB_BatterToPitcherInfluencer_BP_C.UserConstructionScript");

	ABB_BatterToPitcherInfluencer_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
