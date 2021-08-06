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

// Function BW_GoldenBall.BW_GoldenBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_GoldenBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GoldenBall.BW_GoldenBall_C.UserConstructionScript");

	ABW_GoldenBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
