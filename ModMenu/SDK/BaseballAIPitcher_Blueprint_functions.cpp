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

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetGloveColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballAIPitcher_Blueprint_C::SetGloveColor(bool Home)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetGloveColor");

	ABaseballAIPitcher_Blueprint_C_SetGloveColor_Params params;
	params.Home = Home;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABaseballAIPitcher_Blueprint_C::SetLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetLook");

	ABaseballAIPitcher_Blueprint_C_SetLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.RandomizeLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABaseballAIPitcher_Blueprint_C::RandomizeLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.RandomizeLook");

	ABaseballAIPitcher_Blueprint_C_RandomizeLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.GetScrambleBallClass
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABaseballAIPitcher_Blueprint_C::GetScrambleBallClass(class UClass** Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.GetScrambleBallClass");

	ABaseballAIPitcher_Blueprint_C_GetScrambleBallClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ball != nullptr)
		*Ball = params.Ball;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetTeamColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballAIPitcher_Blueprint_C::SetTeamColor(bool Home)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetTeamColor");

	ABaseballAIPitcher_Blueprint_C_SetTeamColor_Params params;
	params.Home = Home;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballAIPitcher_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.UserConstructionScript");

	ABaseballAIPitcher_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.PlayMittSound
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIPitcher_Blueprint_C::PlayMittSound(class ABaseballBall* Ball, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.PlayMittSound");

	ABaseballAIPitcher_Blueprint_C_PlayMittSound_Params params;
	params.Ball = Ball;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballAIPitcher_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ReceiveBeginPlay");

	ABaseballAIPitcher_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ExecuteUbergraph_BaseballAIPitcher_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIPitcher_Blueprint_C::ExecuteUbergraph_BaseballAIPitcher_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ExecuteUbergraph_BaseballAIPitcher_Blueprint");

	ABaseballAIPitcher_Blueprint_C_ExecuteUbergraph_BaseballAIPitcher_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.LookRandomized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAvatarLook             AvatarLook                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABaseballAIPitcher_Blueprint_C::LookRandomized__DelegateSignature(const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.LookRandomized__DelegateSignature");

	ABaseballAIPitcher_Blueprint_C_LookRandomized__DelegateSignature_Params params;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
