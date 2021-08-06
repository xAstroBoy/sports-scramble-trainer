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

// Function TrophyUIPassthrough.TrophyUIPassthrough_C.PlayHaptic
// (Public, BlueprintCallable, BlueprintEvent)
void ATrophyUIPassthrough_C::PlayHaptic()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.PlayHaptic");

	ATrophyUIPassthrough_C_PlayHaptic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AButton_Standard_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrophyUIPassthrough_C::Initialize(class AButton_Standard_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.Initialize");

	ATrophyUIPassthrough_C_Initialize_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.TriggerPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrophyGlove_C*       TrophyGlove                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrophyUIPassthrough_C::TriggerPressed(class ABP_TrophyGlove_C* TrophyGlove)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.TriggerPressed");

	ATrophyUIPassthrough_C_TriggerPressed_Params params;
	params.TrophyGlove = TrophyGlove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrophyUIPassthrough_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.UserConstructionScript");

	ATrophyUIPassthrough_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATrophyUIPassthrough_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveBeginPlay");

	ATrophyUIPassthrough_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStopPointingAt
// (Event, Public, BlueprintEvent)
void ATrophyUIPassthrough_C::OnStopPointingAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStopPointingAt");

	ATrophyUIPassthrough_C_OnStopPointingAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStartPointingAt
// (Event, Public, BlueprintEvent)
void ATrophyUIPassthrough_C::OnStartPointingAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStartPointingAt");

	ATrophyUIPassthrough_C_OnStartPointingAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnTrophyGrabbed
// (Event, Public, BlueprintEvent)
void ATrophyUIPassthrough_C::OnTrophyGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnTrophyGrabbed");

	ATrophyUIPassthrough_C_OnTrophyGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnGrabbableActivated
// (Event, Public, BlueprintEvent)
void ATrophyUIPassthrough_C::OnGrabbableActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnGrabbableActivated");

	ATrophyUIPassthrough_C_OnGrabbableActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrophyUIPassthrough_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveTick");

	ATrophyUIPassthrough_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyUIPassthrough.TrophyUIPassthrough_C.ExecuteUbergraph_TrophyUIPassthrough
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrophyUIPassthrough_C::ExecuteUbergraph_TrophyUIPassthrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.ExecuteUbergraph_TrophyUIPassthrough");

	ATrophyUIPassthrough_C_ExecuteUbergraph_TrophyUIPassthrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
