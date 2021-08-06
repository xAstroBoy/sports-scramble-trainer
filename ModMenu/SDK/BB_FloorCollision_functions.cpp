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

// Function BB_FloorCollision.BB_FloorCollision_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_FloorCollision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FloorCollision.BB_FloorCollision_C.UserConstructionScript");

	ABB_FloorCollision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FloorCollision.BB_FloorCollision_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_FloorCollision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FloorCollision.BB_FloorCollision_C.ReceiveBeginPlay");

	ABB_FloorCollision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FloorCollision.BB_FloorCollision_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_FloorCollision_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FloorCollision.BB_FloorCollision_C.TargetHit");

	ABB_FloorCollision_C_TargetHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FloorCollision.BB_FloorCollision_C.ExecuteUbergraph_BB_FloorCollision
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_FloorCollision_C::ExecuteUbergraph_BB_FloorCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FloorCollision.BB_FloorCollision_C.ExecuteUbergraph_BB_FloorCollision");

	ABB_FloorCollision_C_ExecuteUbergraph_BB_FloorCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FloorCollision.BB_FloorCollision_C.BB_BallLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_FloorCollision_C::BB_BallLanded__DelegateSignature(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FloorCollision.BB_FloorCollision_C.BB_BallLanded__DelegateSignature");

	ABB_FloorCollision_C_BB_BallLanded__DelegateSignature_Params params;
	params.Ball = Ball;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FloorCollision.BB_FloorCollision_C.BallLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_FloorCollision_C::BallLanded__DelegateSignature(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FloorCollision.BB_FloorCollision_C.BallLanded__DelegateSignature");

	ABB_FloorCollision_C_BallLanded__DelegateSignature_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
