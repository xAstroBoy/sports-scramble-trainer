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

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInstrumentSelectionObject_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.Initialize");

	AInstrumentSelectionObject_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInstrumentSelectionObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.UserConstructionScript");

	AInstrumentSelectionObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInstrumentSelectionObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.ReceiveBeginPlay");

	AInstrumentSelectionObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedTN
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInstrumentSelectionObject_C::GrabbedTN(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedTN");

	AInstrumentSelectionObject_C_GrabbedTN_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.NotSelected
// (BlueprintCallable, BlueprintEvent)
void AInstrumentSelectionObject_C::NotSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.NotSelected");

	AInstrumentSelectionObject_C_NotSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInstrumentSelectionObject_C::DestroySelf(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.DestroySelf");

	AInstrumentSelectionObject_C_DestroySelf_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.DisableNotSelected
// (BlueprintCallable, BlueprintEvent)
void AInstrumentSelectionObject_C::DisableNotSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.DisableNotSelected");

	AInstrumentSelectionObject_C_DisableNotSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInstrumentSelectionObject_C::GrabbedBB(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedBB");

	AInstrumentSelectionObject_C_GrabbedBB_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInstrumentSelectionObject_C::GrabbedDB(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedDB");

	AInstrumentSelectionObject_C_GrabbedDB_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.ExecuteUbergraph_InstrumentSelectionObject
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInstrumentSelectionObject_C::ExecuteUbergraph_InstrumentSelectionObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.ExecuteUbergraph_InstrumentSelectionObject");

	AInstrumentSelectionObject_C_ExecuteUbergraph_InstrumentSelectionObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelectionObject.InstrumentSelectionObject_C.InstrumentSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AInstrumentSelectionObject_C::InstrumentSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelectionObject.InstrumentSelectionObject_C.InstrumentSelected__DelegateSignature");

	AInstrumentSelectionObject_C_InstrumentSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
