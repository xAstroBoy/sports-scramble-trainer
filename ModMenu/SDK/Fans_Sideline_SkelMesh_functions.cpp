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

// Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatToHeadDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HatOffDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFans_Sideline_SkelMesh_C::HatToHeadDistance(float* HatOffDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatToHeadDistance");

	AFans_Sideline_SkelMesh_C_HatToHeadDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HatOffDistance != nullptr)
		*HatOffDistance = params.HatOffDistance;

}


// Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AFans_Sideline_SkelMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.UserConstructionScript");

	AFans_Sideline_SkelMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__FinishedFunc
// (BlueprintEvent)
void AFans_Sideline_SkelMesh_C::HatOff_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__FinishedFunc");

	AFans_Sideline_SkelMesh_C_HatOff_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__UpdateFunc
// (BlueprintEvent)
void AFans_Sideline_SkelMesh_C::HatOff_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__UpdateFunc");

	AFans_Sideline_SkelMesh_C_HatOff_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFans_Sideline_SkelMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ReceiveBeginPlay");

	AFans_Sideline_SkelMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ExecuteUbergraph_Fans_Sideline_SkelMesh
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFans_Sideline_SkelMesh_C::ExecuteUbergraph_Fans_Sideline_SkelMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ExecuteUbergraph_Fans_Sideline_SkelMesh");

	AFans_Sideline_SkelMesh_C_ExecuteUbergraph_Fans_Sideline_SkelMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
