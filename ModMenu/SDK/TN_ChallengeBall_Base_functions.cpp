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

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_ChallengeBall_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UserConstructionScript");

	ATN_ChallengeBall_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Change Trail Color
// (BlueprintCallable, BlueprintEvent)
void ATN_ChallengeBall_Base_C::Challenge_Change_Trail_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Change Trail Color");

	ATN_ChallengeBall_Base_C_Challenge_Change_Trail_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Pomp & Destruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeDelay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeBall_Base_C::Challenge_Pomp___Destruction(float TimeDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Pomp & Destruction");

	ATN_ChallengeBall_Base_C_Challenge_Pomp___Destruction_Params params;
	params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_ChallengeBall_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveBeginPlay");

	ATN_ChallengeBall_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeBall_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveEndPlay");

	ATN_ChallengeBall_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ChallengeHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeBall_Base_C::ChallengeHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ChallengeHit");

	ATN_ChallengeBall_Base_C_ChallengeHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.SetTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_ETennisShotType ShotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NoHitSFX                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_ChallengeBall_Base_C::SetTrail(SportsScramble_ETennisShotType ShotType, bool NoHitSFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.SetTrail");

	ATN_ChallengeBall_Base_C_SetTrail_Params params;
	params.ShotType = ShotType;
	params.NoHitSFX = NoHitSFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UpdateMesh
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_ChallengeBall_Base_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UpdateMesh");

	ATN_ChallengeBall_Base_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ExecuteUbergraph_TN_ChallengeBall_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ChallengeBall_Base_C::ExecuteUbergraph_TN_ChallengeBall_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ExecuteUbergraph_TN_ChallengeBall_Base");

	ATN_ChallengeBall_Base_C_ExecuteUbergraph_TN_ChallengeBall_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
