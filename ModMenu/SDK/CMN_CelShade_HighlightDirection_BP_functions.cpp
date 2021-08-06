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

// Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACMN_CelShade_HighlightDirection_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.UserConstructionScript");

	ACMN_CelShade_HighlightDirection_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACMN_CelShade_HighlightDirection_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ReceiveBeginPlay");

	ACMN_CelShade_HighlightDirection_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_CelShade_HighlightDirection_BP_C::ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP");

	ACMN_CelShade_HighlightDirection_BP_C_ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
