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

// Function RI_FloorCollision.RI_FloorCollision_C.CreateBallMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_FloorCollision_C::CreateBallMark(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.CreateBallMark");

	ARI_FloorCollision_C_CreateBallMark_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.RemoveMarks
// (Public, BlueprintCallable, BlueprintEvent)
void ARI_FloorCollision_C::RemoveMarks()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.RemoveMarks");

	ARI_FloorCollision_C_RemoveMarks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ARI_FloorCollision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.UserConstructionScript");

	ARI_FloorCollision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ARI_FloorCollision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.ReceiveBeginPlay");

	ARI_FloorCollision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_FloorCollision_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.TargetHit");

	ARI_FloorCollision_C_TargetHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ARI_FloorCollision_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.ReceiveDestroyed");

	ARI_FloorCollision_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.ExecuteUbergraph_RI_FloorCollision
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_FloorCollision_C::ExecuteUbergraph_RI_FloorCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.ExecuteUbergraph_RI_FloorCollision");

	ARI_FloorCollision_C_ExecuteUbergraph_RI_FloorCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.BB_BallLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_FloorCollision_C::BB_BallLanded__DelegateSignature(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.BB_BallLanded__DelegateSignature");

	ARI_FloorCollision_C_BB_BallLanded__DelegateSignature_Params params;
	params.Ball = Ball;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_FloorCollision.RI_FloorCollision_C.BallLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_FloorCollision_C::BallLanded__DelegateSignature(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_FloorCollision.RI_FloorCollision_C.BallLanded__DelegateSignature");

	ARI_FloorCollision_C_BallLanded__DelegateSignature_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
