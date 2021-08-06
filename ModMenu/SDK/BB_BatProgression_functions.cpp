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

// Function BB_BatProgression.BB_BatProgression_C.ClearPlayByPlay
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_BatProgression_C::ClearPlayByPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.ClearPlayByPlay");

	ABB_BatProgression_C_ClearPlayByPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.SwapBat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerHand*        BattingPlayerHand              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseballAIBatter_Blueprint_C* BattingAI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBaseballInstrumentType newBatType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::SwapBat(class AScramPlayerHand* BattingPlayerHand, class ABaseballAIBatter_Blueprint_C* BattingAI, SportsScramble_EBaseballInstrumentType newBatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.SwapBat");

	ABB_BatProgression_C_SwapBat_Params params;
	params.BattingPlayerHand = BattingPlayerHand;
	params.BattingAI = BattingAI;
	params.newBatType = newBatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.UpdateProgression
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerHand*        BattingPlayerHand              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseballAIBatter_Blueprint_C* BattingAI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseballInstrument*     Bat                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::UpdateProgression(class AScramPlayerHand* BattingPlayerHand, class ABaseballAIBatter_Blueprint_C* BattingAI, class ABaseballInstrument* Bat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.UpdateProgression");

	ABB_BatProgression_C_UpdateProgression_Params params;
	params.BattingPlayerHand = BattingPlayerHand;
	params.BattingAI = BattingAI;
	params.Bat = Bat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_BatProgression_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.UserConstructionScript");

	ABB_BatProgression_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_BatProgression_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.ReceiveBeginPlay");

	ABB_BatProgression_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.OnBaseballEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::OnBaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.OnBaseballEvent");

	ABB_BatProgression_C_OnBaseballEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.ReceiveEndPlay");

	ABB_BatProgression_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.ProcessPlayByPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballInstrumentType newBatType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::ProcessPlayByPlay(SportsScramble_EBaseballInstrumentType newBatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.ProcessPlayByPlay");

	ABB_BatProgression_C_ProcessPlayByPlay_Params params;
	params.newBatType = newBatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.QueuScramblePBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballInstrumentType ScrambleBatType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::QueuScramblePBP(SportsScramble_EBaseballInstrumentType ScrambleBatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.QueuScramblePBP");

	ABB_BatProgression_C_QueuScramblePBP_Params params;
	params.ScrambleBatType = ScrambleBatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.ExecuteUbergraph_BB_BatProgression
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::ExecuteUbergraph_BB_BatProgression(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.ExecuteUbergraph_BB_BatProgression");

	ABB_BatProgression_C_ExecuteUbergraph_BB_BatProgression_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_BatProgression.BB_BatProgression_C.BatProgressionBatSwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballInstrumentType newBatType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_BatProgression_C::BatProgressionBatSwap__DelegateSignature(SportsScramble_EBaseballInstrumentType newBatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_BatProgression.BB_BatProgression_C.BatProgressionBatSwap__DelegateSignature");

	ABB_BatProgression_C_BatProgressionBatSwap__DelegateSignature_Params params;
	params.newBatType = newBatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
