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

// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.UpdateOptions
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.UpdateOptions");

	ABB_Train_07_UnlimitedBatting_C_UpdateOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetAllInstruments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::GetAllInstruments()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetAllInstruments");

	ABB_Train_07_UnlimitedBatting_C_GetAllInstruments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetAllBallClasses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::GetAllBallClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetAllBallClasses");

	ABB_Train_07_UnlimitedBatting_C_GetAllBallClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetRandomBallClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  RandomBallClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::GetRandomBallClass(class UClass** RandomBallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetRandomBallClass");

	ABB_Train_07_UnlimitedBatting_C_GetRandomBallClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomBallClass != nullptr)
		*RandomBallClass = params.RandomBallClass;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.BB_TRN_Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::BB_TRN_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.BB_TRN_Initialize");

	ABB_Train_07_UnlimitedBatting_C_BB_TRN_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.UserConstructionScript");

	ABB_Train_07_UnlimitedBatting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ReceiveBeginPlay");

	ABB_Train_07_UnlimitedBatting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.SpawnLauncherAndBarrier
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::SpawnLauncherAndBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.SpawnLauncherAndBarrier");

	ABB_Train_07_UnlimitedBatting_C_SpawnLauncherAndBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ChangeBallClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewBallClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::ChangeBallClass(class UClass* NewBallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ChangeBallClass");

	ABB_Train_07_UnlimitedBatting_C_ChangeBallClass_Params params;
	params.NewBallClass = NewBallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.LaunchTrainingBall
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::LaunchTrainingBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.LaunchTrainingBall");

	ABB_Train_07_UnlimitedBatting_C_LaunchTrainingBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.TrainingBallLaunched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::TrainingBallLaunched(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.TrainingBallLaunched");

	ABB_Train_07_UnlimitedBatting_C_TrainingBallLaunched_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InitializeOutfieldTargets
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::InitializeOutfieldTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InitializeOutfieldTargets");

	ABB_Train_07_UnlimitedBatting_C_InitializeOutfieldTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::TargetHit(class AScramBall* Ball, int TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.TargetHit");

	ABB_Train_07_UnlimitedBatting_C_TargetHit_Params params;
	params.Ball = Ball;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InitializeInstrumentSelector
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::InitializeInstrumentSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InitializeInstrumentSelector");

	ABB_Train_07_UnlimitedBatting_C_InitializeInstrumentSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InstrumentSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::InstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InstrumentSelected");

	ABB_Train_07_UnlimitedBatting_C_InstrumentSelected_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.StartTheLauncher
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::StartTheLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.StartTheLauncher");

	ABB_Train_07_UnlimitedBatting_C_StartTheLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.WhenTutorialBallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::WhenTutorialBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.WhenTutorialBallHit");

	ABB_Train_07_UnlimitedBatting_C_WhenTutorialBallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ReceiveEndPlay");

	ABB_Train_07_UnlimitedBatting_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.Unpaused
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::Unpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.Unpaused");

	ABB_Train_07_UnlimitedBatting_C_Unpaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ResetOutfieldTargets
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::ResetOutfieldTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ResetOutfieldTargets");

	ABB_Train_07_UnlimitedBatting_C_ResetOutfieldTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.CountDownCompleted
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::CountDownCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.CountDownCompleted");

	ABB_Train_07_UnlimitedBatting_C_CountDownCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ShowCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_07_UnlimitedBatting_C::ShowCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ShowCountdown");

	ABB_Train_07_UnlimitedBatting_C_ShowCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ExecuteUbergraph_BB_Train_07_UnlimitedBatting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_07_UnlimitedBatting_C::ExecuteUbergraph_BB_Train_07_UnlimitedBatting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ExecuteUbergraph_BB_Train_07_UnlimitedBatting");

	ABB_Train_07_UnlimitedBatting_C_ExecuteUbergraph_BB_Train_07_UnlimitedBatting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
