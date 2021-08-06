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

// Function BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingPractice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C.UserConstructionScript");

	ABB_Minigame_BattingPractice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_BattingPractice_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C.ReceiveBeginPlay");

	ABB_Minigame_BattingPractice_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C.ExecuteUbergraph_BB_Minigame_BattingPractice
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_BattingPractice_C::ExecuteUbergraph_BB_Minigame_BattingPractice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C.ExecuteUbergraph_BB_Minigame_BattingPractice");

	ABB_Minigame_BattingPractice_C_ExecuteUbergraph_BB_Minigame_BattingPractice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
