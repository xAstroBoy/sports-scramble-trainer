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

// Function GameHandlerBase.GameHandlerBase_C.PreMenuCleanup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           empty_return                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerBase_C::PreMenuCleanup(bool* empty_return)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.PreMenuCleanup");

	AGameHandlerBase_C_PreMenuCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (empty_return != nullptr)
		*empty_return = params.empty_return;

}


// Function GameHandlerBase.GameHandlerBase_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerBase_C::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.QuitGame");

	AGameHandlerBase_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerBase.GameHandlerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.UserConstructionScript");

	AGameHandlerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerBase.GameHandlerBase_C.TeleportThePlayArea__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TrainingLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   LevelOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerBase_C::TeleportThePlayArea__DelegateSignature(SportsScramble_EScramSport Sport, bool TrainingLevel, const struct FName& LevelOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.TeleportThePlayArea__DelegateSignature");

	AGameHandlerBase_C_TeleportThePlayArea__DelegateSignature_Params params;
	params.Sport = Sport;
	params.TrainingLevel = TrainingLevel;
	params.LevelOverride = LevelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerBase.GameHandlerBase_C.GameOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGameHandlerBase_C::GameOver__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.GameOver__DelegateSignature");

	AGameHandlerBase_C_GameOver__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
