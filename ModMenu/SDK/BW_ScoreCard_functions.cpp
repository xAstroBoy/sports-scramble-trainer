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

// Function BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_ScoreCard_C::UpdatePlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames");

	ABW_ScoreCard_C_UpdatePlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.PrepareForGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumFrames                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_ScoreCard_C::PrepareForGame(int NumFrames, int NumPlayers, bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.PrepareForGame");

	ABW_ScoreCard_C_PrepareForGame_Params params;
	params.NumFrames = NumFrames;
	params.NumPlayers = NumPlayers;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBowlingFrameSet> FrameSets                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CurrentPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrentFrame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_ScoreCard_C::UpdateFrameSets(TArray<struct FBowlingFrameSet> FrameSets, int CurrentPlayer, int CurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets");

	ABW_ScoreCard_C_UpdateFrameSets_Params params;
	params.FrameSets = FrameSets;
	params.CurrentPlayer = CurrentPlayer;
	params.CurrentFrame = CurrentFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_ScoreCard_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.Initialize");

	ABW_ScoreCard_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBowlingFrameSet        frameSet                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBW_ScoreCardFrame_Widget_C*> FrameWidgets                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsPlayerActive                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentFrame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_ScoreCard_C::UpdateFrameSet(const struct FBowlingFrameSet& frameSet, class UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget, TArray<class UBW_ScoreCardFrame_Widget_C*>* FrameWidgets, bool IsPlayerActive, int CurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet");

	ABW_ScoreCard_C_UpdateFrameSet_Params params;
	params.frameSet = frameSet;
	params.FrameSetWidget = FrameSetWidget;
	params.IsPlayerActive = IsPlayerActive;
	params.CurrentFrame = CurrentFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FrameWidgets != nullptr)
		*FrameWidgets = params.FrameWidgets;

}


// Function BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_ScoreCard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript");

	ABW_ScoreCard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc
// (BlueprintEvent)
void ABW_ScoreCard_C::Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc");

	ABW_ScoreCard_C_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc
// (BlueprintEvent)
void ABW_ScoreCard_C::Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc");

	ABW_ScoreCard_C_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBowlingFrameSet> FrameSets                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CurrentPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrentFrame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_ScoreCard_C::NetUpdateFrameSets(TArray<struct FBowlingFrameSet> FrameSets, int CurrentPlayer, int CurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets");

	ABW_ScoreCard_C_NetUpdateFrameSets_Params params;
	params.FrameSets = FrameSets;
	params.CurrentPlayer = CurrentPlayer;
	params.CurrentFrame = CurrentFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_ScoreCard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay");

	ABW_ScoreCard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumFrames                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_ScoreCard_C::NetPrepareForGame(int NumFrames, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame");

	ABW_ScoreCard_C_NetPrepareForGame_Params params;
	params.NumFrames = NumFrames;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.NetHide
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABW_ScoreCard_C::NetHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.NetHide");

	ABW_ScoreCard_C_NetHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_ScoreCard_C::TravelCapsuleOpened(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened");

	ABW_ScoreCard_C_TravelCapsuleOpened_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_ScoreCard_C::ExecuteUbergraph_BW_ScoreCard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard");

	ABW_ScoreCard_C_ExecuteUbergraph_BW_ScoreCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
