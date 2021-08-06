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

// Function BB_Strikezone.BB_Strikezone_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Strikezone_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.Initialize");

	ABB_Strikezone_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.GrowQuad
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Strikezone_C::GrowQuad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.GrowQuad");

	ABB_Strikezone_C_GrowQuad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.ShrinkQuad
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Strikezone_C::ShrinkQuad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.ShrinkQuad");

	ABB_Strikezone_C_ShrinkQuad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.ShowDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Strikezone_C::ShowDebugText(const struct FString& String, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.ShowDebugText");

	ABB_Strikezone_C_ShowDebugText_Params params;
	params.String = String;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Strikezone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.UserConstructionScript");

	ABB_Strikezone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Strikezone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.ReceiveBeginPlay");

	ABB_Strikezone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.UpdateStrikeZoneVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Strikezone_C::UpdateStrikeZoneVisibility(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.UpdateStrikeZoneVisibility");

	ABB_Strikezone_C_UpdateStrikeZoneVisibility_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.UpdateQuadVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TL                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TR                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BL                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BR                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Strikezone_C::UpdateQuadVisibility(bool TL, bool TR, bool BL, bool BR)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.UpdateQuadVisibility");

	ABB_Strikezone_C_UpdateQuadVisibility_Params params;
	params.TL = TL;
	params.TR = TR;
	params.BL = BL;
	params.BR = BR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.PitchingTargetHit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Strikezone_C::PitchingTargetHit(SportsScramble_EBaseballScrambleTargetLocations TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.PitchingTargetHit");

	ABB_Strikezone_C_PitchingTargetHit_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.StrikezoneEventReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EScramStrikeResult Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Strikezone_C::StrikezoneEventReceived(class ABaseballBall* Ball, SportsScramble_EScramStrikeResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.StrikezoneEventReceived");

	ABB_Strikezone_C_StrikezoneEventReceived_Params params;
	params.Ball = Ball;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Strikezone_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.ReceiveEndPlay");

	ABB_Strikezone_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.ExecuteUbergraph_BB_Strikezone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Strikezone_C::ExecuteUbergraph_BB_Strikezone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.ExecuteUbergraph_BB_Strikezone");

	ABB_Strikezone_C_ExecuteUbergraph_BB_Strikezone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.BallDetected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Strikezone_C::BallDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.BallDetected__DelegateSignature");

	ABB_Strikezone_C_BallDetected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Strikezone.BB_Strikezone_C.StrikeDetected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Strikezone_C::StrikeDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Strikezone.BB_Strikezone_C.StrikeDetected__DelegateSignature");

	ABB_Strikezone_C_StrikeDetected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
