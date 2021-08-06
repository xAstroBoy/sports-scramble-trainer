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

// Function HitMe.HitMe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHitMe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.UserConstructionScript");

	AHitMe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HitMe.HitMe_C.Timeline_Scale__FinishedFunc
// (BlueprintEvent)
void AHitMe_C::Timeline_Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.Timeline_Scale__FinishedFunc");

	AHitMe_C_Timeline_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HitMe.HitMe_C.Timeline_Scale__UpdateFunc
// (BlueprintEvent)
void AHitMe_C::Timeline_Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.Timeline_Scale__UpdateFunc");

	AHitMe_C_Timeline_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HitMe.HitMe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHitMe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.ReceiveBeginPlay");

	AHitMe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HitMe.HitMe_C.Grow
// (BlueprintCallable, BlueprintEvent)
void AHitMe_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.Grow");

	AHitMe_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HitMe.HitMe_C.Shrink
// (BlueprintCallable, BlueprintEvent)
void AHitMe_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.Shrink");

	AHitMe_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HitMe.HitMe_C.ExecuteUbergraph_HitMe
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHitMe_C::ExecuteUbergraph_HitMe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitMe.HitMe_C.ExecuteUbergraph_HitMe");

	AHitMe_C_ExecuteUbergraph_HitMe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
