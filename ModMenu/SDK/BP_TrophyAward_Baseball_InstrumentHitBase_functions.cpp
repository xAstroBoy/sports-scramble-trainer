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

// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.OnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Baseball                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Instrument_Base_C*   Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBaseballBallType BallType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::OnHit(class ABaseballBall* Baseball, class ABB_Instrument_Base_C* Instrument, SportsScramble_EBaseballBallType BallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.OnHit");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_OnHit_Params params;
	params.Baseball = Baseball;
	params.Instrument = Instrument;
	params.BallType = BallType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.DidLocalPlayerScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DidScore                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::DidLocalPlayerScore(int NewScore, bool* DidScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.DidLocalPlayerScore");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_DidLocalPlayerScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidScore != nullptr)
		*DidScore = params.DidScore;

}


// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.UserConstructionScript");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.OnInstrumentHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::OnInstrumentHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.OnInstrumentHit");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_OnInstrumentHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.ReceiveEndPlay");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.Initialize");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.ExecuteUbergraph_BP_TrophyAward_Baseball_InstrumentHitBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_Baseball_InstrumentHitBase_C::ExecuteUbergraph_BP_TrophyAward_Baseball_InstrumentHitBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Baseball_InstrumentHitBase.BP_TrophyAward_Baseball_InstrumentHitBase_C.ExecuteUbergraph_BP_TrophyAward_Baseball_InstrumentHitBase");

	ABP_TrophyAward_Baseball_InstrumentHitBase_C_ExecuteUbergraph_BP_TrophyAward_Baseball_InstrumentHitBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
