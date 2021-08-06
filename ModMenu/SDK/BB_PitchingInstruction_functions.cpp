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

// Function BB_PitchingInstruction.BB_PitchingInstruction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_PitchingInstruction_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchingInstruction.BB_PitchingInstruction_C.PreConstruct");

	UBB_PitchingInstruction_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchingInstruction.BB_PitchingInstruction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBB_PitchingInstruction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchingInstruction.BB_PitchingInstruction_C.Construct");

	UBB_PitchingInstruction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchingInstruction.BB_PitchingInstruction_C.ExecuteUbergraph_BB_PitchingInstruction
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBB_PitchingInstruction_C::ExecuteUbergraph_BB_PitchingInstruction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchingInstruction.BB_PitchingInstruction_C.ExecuteUbergraph_BB_PitchingInstruction");

	UBB_PitchingInstruction_C_ExecuteUbergraph_BB_PitchingInstruction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
