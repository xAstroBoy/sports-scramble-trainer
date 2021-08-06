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

// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_GoldenGlove_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.UserConstructionScript");

	ABP_Trophy_BB_GoldenGlove_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.GrabbedBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_GoldenGlove_C::GrabbedBall(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.GrabbedBall");

	ABP_Trophy_BB_GoldenGlove_C_GrabbedBall_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Trophy_BB_GoldenGlove_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ReceiveBeginPlay");

	ABP_Trophy_BB_GoldenGlove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.CatchEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FielderPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_GoldenGlove_C::CatchEvent(const struct FVector& FielderPosition, class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.CatchEvent");

	ABP_Trophy_BB_GoldenGlove_C_CatchEvent_Params params;
	params.FielderPosition = FielderPosition;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ExecuteUbergraph_BP_Trophy_BB_GoldenGlove
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_GoldenGlove_C::ExecuteUbergraph_BP_Trophy_BB_GoldenGlove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ExecuteUbergraph_BP_Trophy_BB_GoldenGlove");

	ABP_Trophy_BB_GoldenGlove_C_ExecuteUbergraph_BP_Trophy_BB_GoldenGlove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
