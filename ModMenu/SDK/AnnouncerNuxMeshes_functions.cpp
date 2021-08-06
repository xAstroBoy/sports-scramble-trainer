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

// Function AnnouncerNuxMeshes.AnnouncerNuxMeshes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAnnouncerNuxMeshes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnnouncerNuxMeshes.AnnouncerNuxMeshes_C.UserConstructionScript");

	AAnnouncerNuxMeshes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
