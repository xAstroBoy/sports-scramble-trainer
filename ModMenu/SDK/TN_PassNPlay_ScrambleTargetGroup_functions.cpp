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

// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_PassNPlay_ScrambleTargetGroup_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement");

	ATN_PassNPlay_ScrambleTargetGroup_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_PassNPlay_ScrambleTargetGroup_C::SpawnIcon_Ball(const struct FTransform& Transform, int ID, class UClass* ScrambleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball");

	ATN_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Ball_Params params;
	params.Transform = Transform;
	params.ID = ID;
	params.ScrambleClass = ScrambleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RemoveAllTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets");

	ATN_PassNPlay_ScrambleTargetGroup_C_RemoveAllTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_PassNPlay_ScrambleTargetGroup_C::SpawnIcon_Instrument(const struct FTransform& Transform, int ID, class UClass* ScrambleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument");

	ATN_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Instrument_Params params;
	params.Transform = Transform;
	params.ID = ID;
	params.ScrambleClass = ScrambleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.Initialize");

	ATN_PassNPlay_ScrambleTargetGroup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript");

	ATN_PassNPlay_ScrambleTargetGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc
// (BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RotateBall__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc");

	ATN_PassNPlay_ScrambleTargetGroup_C_RotateBall__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc
// (BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RotateBall__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc");

	ATN_PassNPlay_ScrambleTargetGroup_C_RotateBall__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc
// (BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RotateInstrument__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc");

	ATN_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc
// (BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RotateInstrument__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc");

	ATN_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay");

	ATN_PassNPlay_ScrambleTargetGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_PassNPlay_ScrambleTargetGroup_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay");

	ATN_PassNPlay_ScrambleTargetGroup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon
// (BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RotateBallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon");

	ATN_PassNPlay_ScrambleTargetGroup_C_RotateBallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon
// (BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::RotateInstrumentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon");

	ATN_PassNPlay_ScrambleTargetGroup_C_RotateInstrumentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopBallIcon
// (BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::StopBallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopBallIcon");

	ATN_PassNPlay_ScrambleTargetGroup_C_StopBallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon
// (BlueprintCallable, BlueprintEvent)
void ATN_PassNPlay_ScrambleTargetGroup_C::StopInstrumentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon");

	ATN_PassNPlay_ScrambleTargetGroup_C_StopInstrumentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_PassNPlay_ScrambleTargetGroup_C::ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup");

	ATN_PassNPlay_ScrambleTargetGroup_C_ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
