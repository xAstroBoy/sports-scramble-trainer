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

// Function CenterReturnWall.CenterReturnWall_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACenterReturnWall_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.RemoveGameElement");

	ACenterReturnWall_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function CenterReturnWall.CenterReturnWall_C.Setup6targetInfluencers
// (Public, BlueprintCallable, BlueprintEvent)
void ACenterReturnWall_C::Setup6targetInfluencers()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Setup6targetInfluencers");

	ACenterReturnWall_C_Setup6targetInfluencers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ACenterReturnWall_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Initialize");

	ACenterReturnWall_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACenterReturnWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.UserConstructionScript");

	ACenterReturnWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.Rise__FinishedFunc
// (BlueprintEvent)
void ACenterReturnWall_C::Rise__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Rise__FinishedFunc");

	ACenterReturnWall_C_Rise__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.Rise__UpdateFunc
// (BlueprintEvent)
void ACenterReturnWall_C::Rise__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Rise__UpdateFunc");

	ACenterReturnWall_C_Rise__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACenterReturnWall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.ReceiveBeginPlay");

	ACenterReturnWall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.RiseUp
// (BlueprintCallable, BlueprintEvent)
void ACenterReturnWall_C::RiseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.RiseUp");

	ACenterReturnWall_C_RiseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.LowerDown
// (BlueprintCallable, BlueprintEvent)
void ACenterReturnWall_C::LowerDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.LowerDown");

	ACenterReturnWall_C_LowerDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CenterReturnWall.CenterReturnWall_C.ExecuteUbergraph_CenterReturnWall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACenterReturnWall_C::ExecuteUbergraph_CenterReturnWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.ExecuteUbergraph_CenterReturnWall");

	ACenterReturnWall_C_ExecuteUbergraph_CenterReturnWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
