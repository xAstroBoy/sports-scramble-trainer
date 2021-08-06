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

// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.UserConstructionScript");

	ABP_TrophyAward_BW_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Initialize");

	ABP_TrophyAward_BW_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Base_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.DebugEarn");

	ABP_TrophyAward_BW_Base_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ReceiveEndPlay");

	ABP_TrophyAward_BW_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Bowl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::Bowl(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Bowl");

	ABP_TrophyAward_BW_Base_C_Bowl_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            BallActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::OnMatchComplete(class ABowlingBall* BallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnMatchComplete");

	ABP_TrophyAward_BW_Base_C_OnMatchComplete_Params params;
	params.BallActor = BallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::OnStrike(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnStrike");

	ABP_TrophyAward_BW_Base_C_OnStrike_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnSpare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::OnSpare(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnSpare");

	ABP_TrophyAward_BW_Base_C_OnSpare_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGutterBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::OnGutterBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGutterBall");

	ABP_TrophyAward_BW_Base_C_OnGutterBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGameEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Base_C::OnGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGameEnd");

	ABP_TrophyAward_BW_Base_C_OnGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ExecuteUbergraph_BP_TrophyAward_BW_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Base_C::ExecuteUbergraph_BP_TrophyAward_BW_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ExecuteUbergraph_BP_TrophyAward_BW_Base");

	ABP_TrophyAward_BW_Base_C_ExecuteUbergraph_BP_TrophyAward_BW_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
