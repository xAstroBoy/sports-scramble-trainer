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

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABaseballAIBatter_Blueprint_C::SetLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetLook");

	ABaseballAIBatter_Blueprint_C_SetLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.RandomizeLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABaseballAIBatter_Blueprint_C::RandomizeLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.RandomizeLook");

	ABaseballAIBatter_Blueprint_C_RandomizeLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ClearBat
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballAIBatter_Blueprint_C::ClearBat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ClearBat");

	ABaseballAIBatter_Blueprint_C_ClearBat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetBat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BatClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PlayEffects                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballAIBatter_Blueprint_C::SetBat(class UClass* BatClass, bool PlayEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetBat");

	ABaseballAIBatter_Blueprint_C_SetBat_Params params;
	params.BatClass = BatClass;
	params.PlayEffects = PlayEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetTeamColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballAIBatter_Blueprint_C::SetTeamColor(bool Home)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetTeamColor");

	ABaseballAIBatter_Blueprint_C_SetTeamColor_Params params;
	params.Home = Home;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballAIBatter_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.UserConstructionScript");

	ABaseballAIBatter_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballAIBatter_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveBeginPlay");

	ABaseballAIBatter_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.PlayBatSound
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIBatter_Blueprint_C::PlayBatSound(class ABaseballBall* Ball, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.PlayBatSound");

	ABaseballAIBatter_Blueprint_C_PlayBatSound_Params params;
	params.Ball = Ball;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIBatter_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveEndPlay");

	ABaseballAIBatter_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ExecuteUbergraph_BaseballAIBatter_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIBatter_Blueprint_C::ExecuteUbergraph_BaseballAIBatter_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ExecuteUbergraph_BaseballAIBatter_Blueprint");

	ABaseballAIBatter_Blueprint_C_ExecuteUbergraph_BaseballAIBatter_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.LookRandomzied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAvatarLook             AvatarLook                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABaseballAIBatter_Blueprint_C::LookRandomzied__DelegateSignature(const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.LookRandomzied__DelegateSignature");

	ABaseballAIBatter_Blueprint_C_LookRandomzied__DelegateSignature_Params params;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
