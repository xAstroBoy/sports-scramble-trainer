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

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HasScrambleOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballMitt*           Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasOption                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballBallSelector_BP_C::HasScrambleOption(class ABaseballMitt* Mitt, class UClass* BallClass, bool* HasOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HasScrambleOption");

	ABaseballBallSelector_BP_C_HasScrambleOption_Params params;
	params.Mitt = Mitt;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasOption != nullptr)
		*HasOption = params.HasOption;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_Training_GetBallVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ball_Class                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::BB_Training_GetBallVO(class UClass* Ball_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_Training_GetBallVO");

	ABaseballBallSelector_BP_C_BB_Training_GetBallVO_Params params;
	params.Ball_Class = Ball_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetIconLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TL                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TR                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BL                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BR                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballBallSelector_BP_C::GetIconLocations(bool* TL, bool* TR, bool* BL, bool* BR)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetIconLocations");

	ABaseballBallSelector_BP_C_GetIconLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TL != nullptr)
		*TL = params.TL;
	if (TR != nullptr)
		*TR = params.TR;
	if (BL != nullptr)
		*BL = params.BL;
	if (BR != nullptr)
		*BR = params.BR;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetImbuingOdds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChance                 Imbue_Chance                   (Parm, OutParm, NoDestructor)
void ABaseballBallSelector_BP_C::GetImbuingOdds(struct FChance* Imbue_Chance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetImbuingOdds");

	ABaseballBallSelector_BP_C_GetImbuingOdds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Imbue_Chance != nullptr)
		*Imbue_Chance = params.Imbue_Chance;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Show All Target
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::Show_All_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Show All Target");

	ABaseballBallSelector_BP_C_Show_All_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetNumToSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Spawn_Number                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::GetNumToSpawn(int* Spawn_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetNumToSpawn");

	ABaseballBallSelector_BP_C_GetNumToSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawn_Number != nullptr)
		*Spawn_Number = params.Spawn_Number;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CanSpawnBalls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Spawn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballBallSelector_BP_C::CanSpawnBalls(bool* Can_Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CanSpawnBalls");

	ABaseballBallSelector_BP_C_CanSpawnBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Spawn != nullptr)
		*Can_Spawn = params.Can_Spawn;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.UserConstructionScript");

	ABaseballBallSelector_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3");

	ABaseballBallSelector_BP_C_OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_SpawnBlankTargets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BindOnHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballBallSelector_BP_C::BB_TNG_SpawnBlankTargets(bool BindOnHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_SpawnBlankTargets");

	ABaseballBallSelector_BP_C_BB_TNG_SpawnBlankTargets_Params params;
	params.BindOnHit = BindOnHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_BlinkTargets
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::BB_TNG_BlinkTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_BlinkTargets");

	ABaseballBallSelector_BP_C_BB_TNG_BlinkTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_CleanUpDemoTargets
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::BB_TNG_CleanUpDemoTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_CleanUpDemoTargets");

	ABaseballBallSelector_BP_C_BB_TNG_CleanUpDemoTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::HitTrainingTarget_01(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_01");

	ABaseballBallSelector_BP_C_HitTrainingTarget_01_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_TrackTargetHits
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::BB_TNG_TrackTargetHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_TrackTargetHits");

	ABaseballBallSelector_BP_C_BB_TNG_TrackTargetHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::HitTrainingTarget_02(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_02");

	ABaseballBallSelector_BP_C_HitTrainingTarget_02_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::HitTrainingTarget_03(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_03");

	ABaseballBallSelector_BP_C_HitTrainingTarget_03_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::HitTrainingTarget_04(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_04");

	ABaseballBallSelector_BP_C_HitTrainingTarget_04_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SpawnInitialIcons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BB_BallClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBaseballBallType BB_BallType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              BB_BallIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          imbueChance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::BB_TNG_RM03_SpawnInitialIcons(class UClass* BB_BallClass, SportsScramble_EBaseballBallType BB_BallType, class UTexture2D* BB_BallIcon, float imbueChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SpawnInitialIcons");

	ABaseballBallSelector_BP_C_BB_TNG_RM03_SpawnInitialIcons_Params params;
	params.BB_BallClass = BB_BallClass;
	params.BB_BallType = BB_BallType;
	params.BB_BallIcon = BB_BallIcon;
	params.imbueChance = imbueChance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_CleanUpAllButFrisbee
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::BB_TNG_RM03_CleanUpAllButFrisbee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_CleanUpAllButFrisbee");

	ABaseballBallSelector_BP_C_BB_TNG_RM03_CleanUpAllButFrisbee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::CustomEvent(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CustomEvent");

	ABaseballBallSelector_BP_C_CustomEvent_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_GiveMittScrambleBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ball_Class                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Imbued                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballBallSelector_BP_C::BB_TNG_GiveMittScrambleBall(class UClass* Ball_Class, bool Imbued)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_GiveMittScrambleBall");

	ABaseballBallSelector_BP_C_BB_TNG_GiveMittScrambleBall_Params params;
	params.Ball_Class = Ball_Class;
	params.Imbued = Imbued;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SingleIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BB_BallClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBaseballBallType BB_BallType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              BB_BallIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          imbueChance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::BB_TNG_RM03_SingleIcon(class UClass* BB_BallClass, SportsScramble_EBaseballBallType BB_BallType, class UTexture2D* BB_BallIcon, float imbueChance, SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SingleIcon");

	ABaseballBallSelector_BP_C_BB_TNG_RM03_SingleIcon_Params params;
	params.BB_BallClass = BB_BallClass;
	params.BB_BallType = BB_BallType;
	params.BB_BallIcon = BB_BallIcon;
	params.imbueChance = imbueChance;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.IndividualTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::IndividualTargetHit(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.IndividualTargetHit");

	ABaseballBallSelector_BP_C_IndividualTargetHit_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballBallSelector_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveBeginPlay");

	ABaseballBallSelector_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReadyBalls
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::ReadyBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReadyBalls");

	ABaseballBallSelector_BP_C_ReadyBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Change Round
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::Change_Round()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Change Round");

	ABaseballBallSelector_BP_C_Change_Round_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ResolveAndClear
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::ResolveAndClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ResolveAndClear");

	ABaseballBallSelector_BP_C_ResolveAndClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.SendThroughBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballPitchingTarget* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::SendThroughBall(class ABaseballPitchingTarget* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.SendThroughBall");

	ABaseballBallSelector_BP_C_SendThroughBall_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveEndPlay");

	ABaseballBallSelector_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.PlayAsync2D
// (BlueprintCallable, BlueprintEvent)
void ABaseballBallSelector_BP_C::PlayAsync2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.PlayAsync2D");

	ABaseballBallSelector_BP_C_PlayAsync2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ExecuteUbergraph_BaseballBallSelector_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::ExecuteUbergraph_BaseballBallSelector_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ExecuteUbergraph_BaseballBallSelector_BP");

	ABaseballBallSelector_BP_C_ExecuteUbergraph_BaseballBallSelector_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TrainingTargetHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallSelector_BP_C::TrainingTargetHit__DelegateSignature(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TrainingTargetHit__DelegateSignature");

	ABaseballBallSelector_BP_C_TrainingTargetHit__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TargetsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TL                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TR                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BL                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BR                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballBallSelector_BP_C::TargetsUpdated__DelegateSignature(bool TL, bool TR, bool BL, bool BR)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TargetsUpdated__DelegateSignature");

	ABaseballBallSelector_BP_C_TargetsUpdated__DelegateSignature_Params params;
	params.TL = TL;
	params.TR = TR;
	params.BL = BL;
	params.BR = BR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
