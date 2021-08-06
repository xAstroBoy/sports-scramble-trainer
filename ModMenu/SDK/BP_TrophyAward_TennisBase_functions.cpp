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

// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TennisBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.UserConstructionScript");

	ABP_TrophyAward_TennisBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TennisBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ReceiveEndPlay");

	ABP_TrophyAward_TennisBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnTennisEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TennisBase_C::OnTennisEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnTennisEvent");

	ABP_TrophyAward_TennisBase_C_OnTennisEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TennisBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.Initialize");

	ABP_TrophyAward_TennisBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnScorePoint
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TennisBase_C::OnScorePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnScorePoint");

	ABP_TrophyAward_TennisBase_C_OnScorePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TennisBase_C::OnMatchComplete(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnMatchComplete");

	ABP_TrophyAward_TennisBase_C_OnMatchComplete_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnAceEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TennisBase_C::OnAceEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnAceEvent");

	ABP_TrophyAward_TennisBase_C_OnAceEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.BallInPlay
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TennisBase_C::BallInPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.BallInPlay");

	ABP_TrophyAward_TennisBase_C_BallInPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ExecuteUbergraph_BP_TrophyAward_TennisBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TennisBase_C::ExecuteUbergraph_BP_TrophyAward_TennisBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ExecuteUbergraph_BP_TrophyAward_TennisBase");

	ABP_TrophyAward_TennisBase_C_ExecuteUbergraph_BP_TrophyAward_TennisBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
