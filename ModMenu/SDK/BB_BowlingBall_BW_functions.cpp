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

// Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_BowlingBall_BW_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UserConstructionScript");

	ABB_BowlingBall_BW_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UpdateMesh
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_BowlingBall_BW_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UpdateMesh");

	ABB_BowlingBall_BW_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.ExecuteUbergraph_BB_BowlingBall_BW
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BowlingBall_BW_C::ExecuteUbergraph_BB_BowlingBall_BW(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.ExecuteUbergraph_BB_BowlingBall_BW");

	ABB_BowlingBall_BW_C_ExecuteUbergraph_BB_BowlingBall_BW_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
