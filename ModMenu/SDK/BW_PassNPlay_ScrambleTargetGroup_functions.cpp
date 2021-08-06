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

// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_PassNPlay_ScrambleTargetGroup_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement");

	ABW_PassNPlay_ScrambleTargetGroup_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_PassNPlay_ScrambleTargetGroup_C::SpawnIcon_Ball(const struct FTransform& Transform, int ID, class UClass* ScrambleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball");

	ABW_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Ball_Params params;
	params.Transform = Transform;
	params.ID = ID;
	params.ScrambleClass = ScrambleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RemoveAllTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets");

	ABW_PassNPlay_ScrambleTargetGroup_C_RemoveAllTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ScrambleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_PassNPlay_ScrambleTargetGroup_C::SpawnIcon_Instrument(const struct FTransform& Transform, int ID, class UClass* ScrambleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument");

	ABW_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Instrument_Params params;
	params.Transform = Transform;
	params.ID = ID;
	params.ScrambleClass = ScrambleClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.Initialize");

	ABW_PassNPlay_ScrambleTargetGroup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript");

	ABW_PassNPlay_ScrambleTargetGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc
// (BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RotateBall__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc");

	ABW_PassNPlay_ScrambleTargetGroup_C_RotateBall__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc
// (BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RotateBall__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc");

	ABW_PassNPlay_ScrambleTargetGroup_C_RotateBall__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc
// (BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RotateInstrument__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc");

	ABW_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc
// (BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RotateInstrument__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc");

	ABW_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay");

	ABW_PassNPlay_ScrambleTargetGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_PassNPlay_ScrambleTargetGroup_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay");

	ABW_PassNPlay_ScrambleTargetGroup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon
// (BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RotateBallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon");

	ABW_PassNPlay_ScrambleTargetGroup_C_RotateBallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon
// (BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::RotateInstrumentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon");

	ABW_PassNPlay_ScrambleTargetGroup_C_RotateInstrumentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.StopBallIcon
// (BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::StopBallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.StopBallIcon");

	ABW_PassNPlay_ScrambleTargetGroup_C_StopBallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon
// (BlueprintCallable, BlueprintEvent)
void ABW_PassNPlay_ScrambleTargetGroup_C::StopInstrumentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon");

	ABW_PassNPlay_ScrambleTargetGroup_C_StopInstrumentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_BW_PassNPlay_ScrambleTargetGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_PassNPlay_ScrambleTargetGroup_C::ExecuteUbergraph_BW_PassNPlay_ScrambleTargetGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_PassNPlay_ScrambleTargetGroup.BW_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_BW_PassNPlay_ScrambleTargetGroup");

	ABW_PassNPlay_ScrambleTargetGroup_C_ExecuteUbergraph_BW_PassNPlay_ScrambleTargetGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
