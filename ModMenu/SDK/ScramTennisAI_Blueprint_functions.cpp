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

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UpdateHandVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTennisAI_Blueprint_C::UpdateHandVisibility(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UpdateHandVisibility");

	AScramTennisAI_Blueprint_C_UpdateHandVisibility_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.RandomizeLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramTennisAI_Blueprint_C::RandomizeLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.RandomizeLook");

	AScramTennisAI_Blueprint_C_RandomizeLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramTennisAI_Blueprint_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Initialize");

	AScramTennisAI_Blueprint_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTennisAI_Blueprint_C::PlayHitSound(class UClass* BallClass, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayHitSound");

	AScramTennisAI_Blueprint_C_PlayHitSound_Params params;
	params.BallClass = BallClass;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ChangeRacket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NoFX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTennisAI_Blueprint_C::ChangeRacket(class UClass* InstrumentClass, bool NoFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ChangeRacket");

	AScramTennisAI_Blueprint_C_ChangeRacket_Params params;
	params.InstrumentClass = InstrumentClass;
	params.NoFX = NoFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramTennisAI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UserConstructionScript");

	AScramTennisAI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void AScramTennisAI_Blueprint_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__FinishedFunc");

	AScramTennisAI_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void AScramTennisAI_Blueprint_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__UpdateFunc");

	AScramTennisAI_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramTennisAI_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveBeginPlay");

	AScramTennisAI_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTennisAI_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveEndPlay");

	AScramTennisAI_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayRacquetSound
// (Event, Public, BlueprintEvent)
// Parameters:
// class ATennisBall*             Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTennisAI_Blueprint_C::PlayRacquetSound(class ATennisBall* Ball, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayRacquetSound");

	AScramTennisAI_Blueprint_C_PlayRacquetSound_Params params;
	params.Ball = Ball;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlaySwingFX
// (BlueprintCallable, BlueprintEvent)
void AScramTennisAI_Blueprint_C::PlaySwingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlaySwingFX");

	AScramTennisAI_Blueprint_C_PlaySwingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void AScramTennisAI_Blueprint_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ScaleUp");

	AScramTennisAI_Blueprint_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ExecuteUbergraph_ScramTennisAI_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTennisAI_Blueprint_C::ExecuteUbergraph_ScramTennisAI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ExecuteUbergraph_ScramTennisAI_Blueprint");

	AScramTennisAI_Blueprint_C_ExecuteUbergraph_ScramTennisAI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.AI_Hit_Ball__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisBall*             Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTennisAI_Blueprint_C::AI_Hit_Ball__DelegateSignature(class ATennisBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.AI_Hit_Ball__DelegateSignature");

	AScramTennisAI_Blueprint_C_AI_Hit_Ball__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
