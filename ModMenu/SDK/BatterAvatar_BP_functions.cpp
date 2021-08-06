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

// Function BatterAvatar_BP.BatterAvatar_BP_C.GetGlobalColor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   globalColorName                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor ABatterAvatar_BP_C::GetGlobalColor(const struct FName& globalColorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.GetGlobalColor");

	ABatterAvatar_BP_C_GetGlobalColor_Params params;
	params.globalColorName = globalColorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BatterAvatar_BP.BatterAvatar_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABatterAvatar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.UserConstructionScript");

	ABatterAvatar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BatterAvatar_BP.BatterAvatar_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABatterAvatar_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.Timeline_0__FinishedFunc");

	ABatterAvatar_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BatterAvatar_BP.BatterAvatar_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABatterAvatar_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.Timeline_0__UpdateFunc");

	ABatterAvatar_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BatterAvatar_BP.BatterAvatar_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABatterAvatar_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.ReceiveBeginPlay");

	ABatterAvatar_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BatterAvatar_BP.BatterAvatar_BP_C.RevealAvatar_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABatterAvatar_BP_C::RevealAvatar_BP(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.RevealAvatar_BP");

	ABatterAvatar_BP_C_RevealAvatar_BP_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BatterAvatar_BP.BatterAvatar_BP_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ABatterAvatar_BP_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.ScaleUp");

	ABatterAvatar_BP_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BatterAvatar_BP.BatterAvatar_BP_C.ExecuteUbergraph_BatterAvatar_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABatterAvatar_BP_C::ExecuteUbergraph_BatterAvatar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BatterAvatar_BP.BatterAvatar_BP_C.ExecuteUbergraph_BatterAvatar_BP");

	ABatterAvatar_BP_C_ExecuteUbergraph_BatterAvatar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
