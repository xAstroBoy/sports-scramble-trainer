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

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_TrophyAwardBase_C::DebugMessage2(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage2");

	ABP_TrophyAwardBase_C_DebugMessage2_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAwardBase_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.NewFunction_1");

	ABP_TrophyAwardBase_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ModeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shldContinue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAwardBase_C::ModeCheck(bool* shldContinue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ModeCheck");

	ABP_TrophyAwardBase_C_ModeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (shldContinue != nullptr)
		*shldContinue = params.shldContinue;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.CheckPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsLocalPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAwardBase_C::CheckPlayer(int PlayerIndex, bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.CheckPlayer");

	ABP_TrophyAwardBase_C_CheckPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.IsMultiplayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           isMulti                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAwardBase_C::IsMultiplayer(bool* isMulti)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.IsMultiplayer");

	ABP_TrophyAwardBase_C_IsMultiplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isMulti != nullptr)
		*isMulti = params.isMulti;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ForceEarn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WorldObject                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventTennisEventPayload* Payload                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAwardBase_C::ForceEarn(class AActor** WorldObject, class UScramEventTennisEventPayload** Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ForceEarn");

	ABP_TrophyAwardBase_C_ForceEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorldObject != nullptr)
		*WorldObject = params.WorldObject;
	if (Payload != nullptr)
		*Payload = params.Payload;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAwardBase_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugEarn");

	ABP_TrophyAwardBase_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_TrophyAwardBase_C::DebugMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage");

	ABP_TrophyAwardBase_C_DebugMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAwardBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.UserConstructionScript");

	ABP_TrophyAwardBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TrophyAwardBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ReceiveBeginPlay");

	ABP_TrophyAwardBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ExecuteUbergraph_BP_TrophyAwardBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAwardBase_C::ExecuteUbergraph_BP_TrophyAwardBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ExecuteUbergraph_BP_TrophyAwardBase");

	ABP_TrophyAwardBase_C_ExecuteUbergraph_BP_TrophyAwardBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
