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

// Function StandIcon.StandIcon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AStandIcon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIcon.StandIcon_C.UserConstructionScript");

	AStandIcon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StandIcon.StandIcon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AStandIcon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIcon.StandIcon_C.ReceiveBeginPlay");

	AStandIcon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StandIcon.StandIcon_C.ExecuteUbergraph_StandIcon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStandIcon_C::ExecuteUbergraph_StandIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIcon.StandIcon_C.ExecuteUbergraph_StandIcon");

	AStandIcon_C_ExecuteUbergraph_StandIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
