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

// Function FireAndForget.FireAndForget_C.RemoveFireAndForgetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFireAndForget_C::RemoveFireAndForgetActor(bool Instant, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireAndForget.FireAndForget_C.RemoveFireAndForgetActor");

	UFireAndForget_C_RemoveFireAndForgetActor_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
