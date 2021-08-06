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

// Function PitcherAvatar_BP.PitcherAvatar_BP_C.GetGlobalColor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   globalColorName                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor APitcherAvatar_BP_C::GetGlobalColor(const struct FName& globalColorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.GetGlobalColor");

	APitcherAvatar_BP_C_GetGlobalColor_Params params;
	params.globalColorName = globalColorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APitcherAvatar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.UserConstructionScript");

	APitcherAvatar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void APitcherAvatar_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__FinishedFunc");

	APitcherAvatar_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void APitcherAvatar_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__UpdateFunc");

	APitcherAvatar_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APitcherAvatar_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.ReceiveBeginPlay");

	APitcherAvatar_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.TryInitializeMaterial
// (BlueprintCallable, BlueprintEvent)
void APitcherAvatar_BP_C::TryInitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.TryInitializeMaterial");

	APitcherAvatar_BP_C_TryInitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.RevealAvatar_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APitcherAvatar_BP_C::RevealAvatar_BP(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.RevealAvatar_BP");

	APitcherAvatar_BP_C_RevealAvatar_BP_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void APitcherAvatar_BP_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.ScaleUp");

	APitcherAvatar_BP_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PitcherAvatar_BP.PitcherAvatar_BP_C.ExecuteUbergraph_PitcherAvatar_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APitcherAvatar_BP_C::ExecuteUbergraph_PitcherAvatar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.ExecuteUbergraph_PitcherAvatar_BP");

	APitcherAvatar_BP_C_ExecuteUbergraph_PitcherAvatar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
