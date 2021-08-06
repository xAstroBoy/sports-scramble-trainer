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

// Function GameEntryMap.GameEntryMap_C.PlayerReady?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameEntryMap_C::PlayerReady_(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameEntryMap.GameEntryMap_C.PlayerReady?");

	AGameEntryMap_C_PlayerReady__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;

}


// Function GameEntryMap.GameEntryMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGameEntryMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameEntryMap.GameEntryMap_C.ReceiveBeginPlay");

	AGameEntryMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameEntryMap.GameEntryMap_C.ExecuteUbergraph_GameEntryMap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameEntryMap_C::ExecuteUbergraph_GameEntryMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameEntryMap.GameEntryMap_C.ExecuteUbergraph_GameEntryMap");

	AGameEntryMap_C_ExecuteUbergraph_GameEntryMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
