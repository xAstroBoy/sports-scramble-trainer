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

// Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_ChallengeBall_Red_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UserConstructionScript");

	ATN_ChallengeBall_Red_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UpdateMesh
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_ChallengeBall_Red_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UpdateMesh");

	ATN_ChallengeBall_Red_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.ExecuteUbergraph_TN_ChallengeBall_Red
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeBall_Red_C::ExecuteUbergraph_TN_ChallengeBall_Red(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.ExecuteUbergraph_TN_ChallengeBall_Red");

	ATN_ChallengeBall_Red_C_ExecuteUbergraph_TN_ChallengeBall_Red_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
