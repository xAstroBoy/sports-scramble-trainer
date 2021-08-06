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

// Function Tball_Impact_BP.Tball_Impact_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATball_Impact_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.UserConstructionScript");

	ATball_Impact_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__FinishedFunc
// (BlueprintEvent)
void ATball_Impact_BP_C::ScaleDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__FinishedFunc");

	ATball_Impact_BP_C_ScaleDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__UpdateFunc
// (BlueprintEvent)
void ATball_Impact_BP_C::ScaleDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__UpdateFunc");

	ATball_Impact_BP_C_ScaleDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tball_Impact_BP.Tball_Impact_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATball_Impact_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ReceiveBeginPlay");

	ATball_Impact_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tball_Impact_BP.Tball_Impact_BP_C.RemoveMark
// (BlueprintCallable, BlueprintEvent)
void ATball_Impact_BP_C::RemoveMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.RemoveMark");

	ATball_Impact_BP_C_RemoveMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tball_Impact_BP.Tball_Impact_BP_C.UpdateMesh
// (BlueprintCallable, BlueprintEvent)
void ATball_Impact_BP_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.UpdateMesh");

	ATball_Impact_BP_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tball_Impact_BP.Tball_Impact_BP_C.ExecuteUbergraph_Tball_Impact_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATball_Impact_BP_C::ExecuteUbergraph_Tball_Impact_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ExecuteUbergraph_Tball_Impact_BP");

	ATball_Impact_BP_C_ExecuteUbergraph_Tball_Impact_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
