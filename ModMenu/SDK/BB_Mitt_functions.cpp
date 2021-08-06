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

// Function BB_Mitt.BB_Mitt_C.OnRep_Material
// (BlueprintCallable, BlueprintEvent)
void ABB_Mitt_C::OnRep_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.OnRep_Material");

	ABB_Mitt_C_OnRep_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.ApplyMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Mitt_C::ApplyMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.ApplyMaterial");

	ABB_Mitt_C_ApplyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       NewMaterial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Mitt_C::SetMaterial(class UMaterialInstance* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.SetMaterial");

	ABB_Mitt_C_SetMaterial_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Mitt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.UserConstructionScript");

	ABB_Mitt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Mitt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.ReceiveBeginPlay");

	ABB_Mitt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.BallCatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Mitt_C::BallCatch(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.BallCatch");

	ABB_Mitt_C_BallCatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.ASyncScrambleLoad
// (BlueprintCallable, BlueprintEvent)
void ABB_Mitt_C::ASyncScrambleLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.ASyncScrambleLoad");

	ABB_Mitt_C_ASyncScrambleLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.SetColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HomeTeam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Mitt_C::SetColors(bool HomeTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.SetColors");

	ABB_Mitt_C_SetColors_Params params;
	params.HomeTeam = HomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.NetSetColors
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HomeTeam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Mitt_C::NetSetColors(bool HomeTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.NetSetColors");

	ABB_Mitt_C_NetSetColors_Params params;
	params.HomeTeam = HomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Mitt_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.DestroyPrimitive");

	ABB_Mitt_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.NetResetColor
// (BlueprintCallable, BlueprintEvent)
void ABB_Mitt_C::NetResetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.NetResetColor");

	ABB_Mitt_C_NetResetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.ExecuteUbergraph_BB_Mitt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Mitt_C::ExecuteUbergraph_BB_Mitt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.ExecuteUbergraph_BB_Mitt");

	ABB_Mitt_C_ExecuteUbergraph_BB_Mitt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Mitt.BB_Mitt_C.BallCaught__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Mitt_C::BallCaught__DelegateSignature(class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Mitt.BB_Mitt_C.BallCaught__DelegateSignature");

	ABB_Mitt_C_BallCaught__DelegateSignature_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
