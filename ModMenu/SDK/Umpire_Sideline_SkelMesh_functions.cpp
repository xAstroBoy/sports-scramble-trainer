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

// Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AUmpire_Sideline_SkelMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.UserConstructionScript");

	AUmpire_Sideline_SkelMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AUmpire_Sideline_SkelMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ReceiveBeginPlay");

	AUmpire_Sideline_SkelMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ExecuteUbergraph_Umpire_Sideline_SkelMesh
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AUmpire_Sideline_SkelMesh_C::ExecuteUbergraph_Umpire_Sideline_SkelMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ExecuteUbergraph_Umpire_Sideline_SkelMesh");

	AUmpire_Sideline_SkelMesh_C_ExecuteUbergraph_Umpire_Sideline_SkelMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
