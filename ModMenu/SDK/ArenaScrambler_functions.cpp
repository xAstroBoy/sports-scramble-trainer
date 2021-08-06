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

// Function ArenaScrambler.ArenaScrambler_C.ArenaScrambleEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UArenaScrambler_C::ArenaScrambleEnd(bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArenaScrambler.ArenaScrambler_C.ArenaScrambleEnd");

	UArenaScrambler_C_ArenaScrambleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
