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

// Function DebugString_BP.DebugString_BP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADebugString_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugString_BP.DebugString_BP_C.Initialize");

	ADebugString_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugString_BP.DebugString_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADebugString_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugString_BP.DebugString_BP_C.UserConstructionScript");

	ADebugString_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugString_BP.DebugString_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADebugString_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugString_BP.DebugString_BP_C.ReceiveBeginPlay");

	ADebugString_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugString_BP.DebugString_BP_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugString_BP_C::UpdateText(const struct FString& String, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugString_BP.DebugString_BP_C.UpdateText");

	ADebugString_BP_C_UpdateText_Params params;
	params.String = String;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugString_BP.DebugString_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugString_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugString_BP.DebugString_BP_C.ReceiveTick");

	ADebugString_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugString_BP.DebugString_BP_C.ExecuteUbergraph_DebugString_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugString_BP_C::ExecuteUbergraph_DebugString_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugString_BP.DebugString_BP_C.ExecuteUbergraph_DebugString_BP");

	ADebugString_BP_C_ExecuteUbergraph_DebugString_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
