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

// Function BB_Train_Base.BB_Train_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.AddActorToGameElementList");

	ABB_Train_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Train_Base.BB_Train_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Shutdown");

	ABB_Train_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTargetListener
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnPitchTargetListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTargetListener");

	ABB_Train_Base_C_BB_SpawnPitchTargetListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_TNG_SpawnNeverMissBatter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_TNG_SpawnNeverMissBatter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_TNG_SpawnNeverMissBatter");

	ABB_Train_Base_C_BB_TNG_SpawnNeverMissBatter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_TNG_TrackBasketballBounces
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_BasketBall_C*        Basketball                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DestroyBasketball              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_Base_C::BB_TNG_TrackBasketballBounces(class ABB_BasketBall_C* Basketball, bool* DestroyBasketball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_TNG_TrackBasketballBounces");

	ABB_Train_Base_C_BB_TNG_TrackBasketballBounces_Params params;
	params.Basketball = Basketball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DestroyBasketball != nullptr)
		*DestroyBasketball = params.DestroyBasketball;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchingEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnPitchingEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchingEquipment");

	ABB_Train_Base_C_BB_SpawnPitchingEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBBScrambleDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnBBScrambleDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBBScrambleDisplay");

	ABB_Train_Base_C_BB_SpawnBBScrambleDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncherBarrier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnLauncherBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncherBarrier");

	ABB_Train_Base_C_BB_SpawnLauncherBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnScrambleTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnScrambleTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnScrambleTargets");

	ABB_Train_Base_C_BB_SpawnScrambleTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_GetBattingSide
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBattingSide    Side                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::BB_GetBattingSide(SportsScramble_EBattingSide* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_GetBattingSide");

	ABB_Train_Base_C_BB_GetBattingSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Side != nullptr)
		*Side = params.Side;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_UpdateLargeScoreboardScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_Base_C::BB_UpdateLargeScoreboardScore(int score, bool Player2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_UpdateLargeScoreboardScore");

	ABB_Train_Base_C_BB_UpdateLargeScoreboardScore_Params params;
	params.score = score;
	params.Player2 = Player2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_TeleportBatter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_TeleportBatter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_TeleportBatter");

	ABB_Train_Base_C_BB_TeleportBatter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnOutfieldTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnOutfieldTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnOutfieldTarget");

	ABB_Train_Base_C_BB_SpawnOutfieldTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnWindows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowTargetScore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_Base_C::BB_SpawnWindows(bool ShowTargetScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnWindows");

	ABB_Train_Base_C_BB_SpawnWindows_Params params;
	params.ShowTargetScore = ShowTargetScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBattingCage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnBattingCage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBattingCage");

	ABB_Train_Base_C_BB_SpawnBattingCage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncher");

	ABB_Train_Base_C_BB_SpawnLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_SpawnPitchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTarget");

	ABB_Train_Base_C_BB_SpawnPitchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_MakeStrikezoneVisible
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_MakeStrikezoneVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_MakeStrikezoneVisible");

	ABB_Train_Base_C_BB_MakeStrikezoneVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::BB_UpdateTrainingScoreboardCount(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardCount");

	ABB_Train_Base_C_BB_UpdateTrainingScoreboardCount_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::BB_UpdateTrainingScoreboardScore(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardScore");

	ABB_Train_Base_C_BB_UpdateTrainingScoreboardScore_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_CalculateEndScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_CalculateEndScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_CalculateEndScore");

	ABB_Train_Base_C_BB_CalculateEndScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.SpawnPitchingEquipment_DEPRECATED
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::SpawnPitchingEquipment_DEPRECATED()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SpawnPitchingEquipment_DEPRECATED");

	ABB_Train_Base_C_SpawnPitchingEquipment_DEPRECATED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.ClearScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::ClearScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ClearScoreboards");

	ABB_Train_Base_C_ClearScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Initialize");

	ABB_Train_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.UserConstructionScript");

	ABB_Train_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.ShowScoreboardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::ShowScoreboardAnimation(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ShowScoreboardAnimation");

	ABB_Train_Base_C_ShowScoreboardAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.SetScoreMaterialAndFont
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::SetScoreMaterialAndFont(int FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SetScoreMaterialAndFont");

	ABB_Train_Base_C_SetScoreMaterialAndFont_Params params;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.SetScoreVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::SetScoreVisibility(UMG_ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SetScoreVisibility");

	ABB_Train_Base_C_SetScoreVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.AttachTrainingScoreboard
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::AttachTrainingScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.AttachTrainingScoreboard");

	ABB_Train_Base_C_AttachTrainingScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BindToScoring
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BindToScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BindToScoring");

	ABB_Train_Base_C_BindToScoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PlayerHitSingle
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::PlayerHitSingle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitSingle");

	ABB_Train_Base_C_PlayerHitSingle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PlayerHitDouble
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::PlayerHitDouble()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitDouble");

	ABB_Train_Base_C_PlayerHitDouble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PlayerHitTriple
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::PlayerHitTriple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitTriple");

	ABB_Train_Base_C_PlayerHitTriple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PlayerHitHomerun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BasesLoaded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_Base_C::PlayerHitHomerun(bool BasesLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitHomerun");

	ABB_Train_Base_C_PlayerHitHomerun_Params params;
	params.BasesLoaded = BasesLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.UnbindScoring
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::UnbindScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.UnbindScoring");

	ABB_Train_Base_C_UnbindScoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.TrainingTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::TrainingTargetHit(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.TrainingTargetHit");

	ABB_Train_Base_C_TrainingTargetHit_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_OutfieldTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::BB_OutfieldTargetHit(class AScramBall* Ball, int TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_OutfieldTargetHit");

	ABB_Train_Base_C_BB_OutfieldTargetHit_Params params;
	params.Ball = Ball;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_BallLaunched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LaunchedBall                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::BB_BallLaunched(class AActor* LaunchedBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_BallLaunched");

	ABB_Train_Base_C_BB_BallLaunched_Params params;
	params.LaunchedBall = LaunchedBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.Strikezone_Strike
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::Strikezone_Strike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Strikezone_Strike");

	ABB_Train_Base_C_Strikezone_Strike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.Strikezone_Ball
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::Strikezone_Ball()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Strikezone_Ball");

	ABB_Train_Base_C_Strikezone_Ball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.SportMgr_CatcherThrewBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::SportMgr_CatcherThrewBall(class ABaseballBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SportMgr_CatcherThrewBall");

	ABB_Train_Base_C_SportMgr_CatcherThrewBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.SportMgr_PitcherReady
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::SportMgr_PitcherReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SportMgr_PitcherReady");

	ABB_Train_Base_C_SportMgr_PitcherReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.HitFloorCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::HitFloorCollision(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.HitFloorCollision");

	ABB_Train_Base_C_HitFloorCollision_Params params;
	params.Ball = Ball;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.CatcherCaughtBall
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::CatcherCaughtBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.CatcherCaughtBall");

	ABB_Train_Base_C_CatcherCaughtBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PitchTargetHit
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::PitchTargetHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PitchTargetHit");

	ABB_Train_Base_C_PitchTargetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Train_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ReceiveBeginPlay");

	ABB_Train_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.EndOfGame");

	ABB_Train_Base_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PlayerMoved
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::PlayerMoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerMoved");

	ABB_Train_Base_C_PlayerMoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.NoTeleport");

	ABB_Train_Base_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.ReadyForTraining
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::ReadyForTraining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ReadyForTraining");

	ABB_Train_Base_C_ReadyForTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_EquipmentGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DominantHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Mitt_C*              Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::BB_EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_EquipmentGrabbed");

	ABB_Train_Base_C_BB_EquipmentGrabbed_Params params;
	params.DominantHand = DominantHand;
	params.Mitt = Mitt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PitcherCaughtSomething
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::PitcherCaughtSomething(class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PitcherCaughtSomething");

	ABB_Train_Base_C_PitcherCaughtSomething_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.BB_ResetScoreboards
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::BB_ResetScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_ResetScoreboards");

	ABB_Train_Base_C_BB_ResetScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.LargeScoreboard_TrainingProgress
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::LargeScoreboard_TrainingProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.LargeScoreboard_TrainingProgress");

	ABB_Train_Base_C_LargeScoreboard_TrainingProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.PitcherMittReleasedBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonReleased                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABB_Train_Base_C::PitcherMittReleasedBall(class AActor* TouchedActor, const struct FKey& ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PitcherMittReleasedBall");

	ABB_Train_Base_C_PitcherMittReleasedBall_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.OpenTravelCapsule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::OpenTravelCapsule(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.OpenTravelCapsule");

	ABB_Train_Base_C_OpenTravelCapsule_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.CloseTravelCapsule
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_Base_C::CloseTravelCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.CloseTravelCapsule");

	ABB_Train_Base_C_CloseTravelCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_Base.BB_Train_Base_C.ExecuteUbergraph_BB_Train_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_Base_C::ExecuteUbergraph_BB_Train_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ExecuteUbergraph_BB_Train_Base");

	ABB_Train_Base_C_ExecuteUbergraph_BB_Train_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
