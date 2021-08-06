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

// Function CMN_Imbued_Base.CMN_Imbued_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACMN_Imbued_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Imbued_Base.CMN_Imbued_Base_C.UserConstructionScript");

	ACMN_Imbued_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
