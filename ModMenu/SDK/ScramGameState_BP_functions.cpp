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

// Function ScramGameState_BP.ScramGameState_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramGameState_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.UserConstructionScript");

	AScramGameState_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameState_BP.ScramGameState_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramGameState_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ReceiveBeginPlay");

	AScramGameState_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyPause
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCalledByHost                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// SportsScramble_EGamePauseReason reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameState_BP_C::ServerNotifyPause(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyPause");

	AScramGameState_BP_C_ServerNotifyPause_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyResume
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCalledByHost                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// SportsScramble_EGamePauseReason reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameState_BP_C::ServerNotifyResume(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyResume");

	AScramGameState_BP_C_ServerNotifyResume_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGamePaused
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isCalledByHost                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// SportsScramble_EGamePauseReason reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameState_BP_C::BlueprintCall_OnMultiplayerGamePaused(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGamePaused");

	AScramGameState_BP_C_BlueprintCall_OnMultiplayerGamePaused_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGameResume
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isCalledByHost                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// SportsScramble_EGamePauseReason reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameState_BP_C::BlueprintCall_OnMultiplayerGameResume(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGameResume");

	AScramGameState_BP_C_BlueprintCall_OnMultiplayerGameResume_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameState_BP.ScramGameState_BP_C.ExecuteUbergraph_ScramGameState_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameState_BP_C::ExecuteUbergraph_ScramGameState_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ExecuteUbergraph_ScramGameState_BP");

	AScramGameState_BP_C_ExecuteUbergraph_ScramGameState_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
