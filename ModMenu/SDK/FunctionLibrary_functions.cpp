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

// Function FunctionLibrary.FunctionLibrary_C.PlayThemeMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayIntro                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          FadeTime                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFunctionLibrary_C::STATIC_PlayThemeMusic(bool PlayIntro, float FadeTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.PlayThemeMusic");

	UFunctionLibrary_C_PlayThemeMusic_Params params;
	params.PlayIntro = PlayIntro;
	params.FadeTime = FadeTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionLibrary.FunctionLibrary_C.GetPlayerNames
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxLength                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Player1                        (Parm, OutParm)
// struct FText                   Player2                        (Parm, OutParm)
void UFunctionLibrary_C::STATIC_GetPlayerNames(class UObject* WorldContextObject, int MaxLength, class UObject* __WorldContext, struct FText* Player1, struct FText* Player2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetPlayerNames");

	UFunctionLibrary_C_GetPlayerNames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MaxLength = MaxLength;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player1 != nullptr)
		*Player1 = params.Player1;
	if (Player2 != nullptr)
		*Player2 = params.Player2;

}


// Function FunctionLibrary.FunctionLibrary_C.GetBaseballInstrumentProperties
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<SportsScramble_EBaseballInstrumentType> InstrumentTypes                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBaseballInstrumentEntryProperties> Properties                     (Parm, OutParm, ZeroConstructor)
void UFunctionLibrary_C::STATIC_GetBaseballInstrumentProperties(TArray<SportsScramble_EBaseballInstrumentType> InstrumentTypes, class UObject* __WorldContext, TArray<struct FBaseballInstrumentEntryProperties>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetBaseballInstrumentProperties");

	UFunctionLibrary_C_GetBaseballInstrumentProperties_Params params;
	params.InstrumentTypes = InstrumentTypes;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;

}


// Function FunctionLibrary.FunctionLibrary_C.GetBaseballBallProperties
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<SportsScramble_EBaseballBallType> BallTypes                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBaseballBallScrambleProperties> Properties                     (Parm, OutParm, ZeroConstructor)
void UFunctionLibrary_C::STATIC_GetBaseballBallProperties(TArray<SportsScramble_EBaseballBallType> BallTypes, class UObject* __WorldContext, TArray<struct FBaseballBallScrambleProperties>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetBaseballBallProperties");

	UFunctionLibrary_C_GetBaseballBallProperties_Params params;
	params.BallTypes = BallTypes;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;

}


// Function FunctionLibrary.FunctionLibrary_C.IsButtonTouchActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFunctionLibrary_C::STATIC_IsButtonTouchActor(class AActor* Actor, class UObject* __WorldContext, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.IsButtonTouchActor");

	UFunctionLibrary_C_IsButtonTouchActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function FunctionLibrary.FunctionLibrary_C.RemoveAllFireAndForgetActors
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFunctionLibrary_C::STATIC_RemoveAllFireAndForgetActors(bool Instant, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.RemoveAllFireAndForgetActors");

	UFunctionLibrary_C_RemoveAllFireAndForgetActors_Params params;
	params.Instant = Instant;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionLibrary.FunctionLibrary_C.GetLocText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocTextName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
void UFunctionLibrary_C::STATIC_GetLocText(const struct FName& LocTextName, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetLocText");

	UFunctionLibrary_C_GetLocText_Params params;
	params.LocTextName = LocTextName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function FunctionLibrary.FunctionLibrary_C.DestroyAllGrabbables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFunctionLibrary_C::STATIC_DestroyAllGrabbables(class AScramPlayer* Player, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.DestroyAllGrabbables");

	UFunctionLibrary_C_DestroyAllGrabbables_Params params;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionLibrary.FunctionLibrary_C.CheckMatchFromClasses
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UFunctionLibrary_C::STATIC_CheckMatchFromClasses(class UClass* InstrumentClass, class UClass* BallClass, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.CheckMatchFromClasses");

	UFunctionLibrary_C_CheckMatchFromClasses_Params params;
	params.InstrumentClass = InstrumentClass;
	params.BallClass = BallClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromBallClasses
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          BallClasses                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           UseScramblerExclusions         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          RacketClasses                  (Parm, OutParm, ZeroConstructor)
void UFunctionLibrary_C::STATIC_GetMatchesFromBallClasses(TArray<class UClass*>* BallClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* RacketClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromBallClasses");

	UFunctionLibrary_C_GetMatchesFromBallClasses_Params params;
	params.UseScramblerExclusions = UseScramblerExclusions;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BallClasses != nullptr)
		*BallClasses = params.BallClasses;
	if (RacketClasses != nullptr)
		*RacketClasses = params.RacketClasses;

}


// Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromRacketClasses
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          RacketClasses                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           UseScramblerExclusions         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          BallClasses                    (Parm, OutParm, ZeroConstructor)
void UFunctionLibrary_C::STATIC_GetMatchesFromRacketClasses(TArray<class UClass*>* RacketClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* BallClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromRacketClasses");

	UFunctionLibrary_C_GetMatchesFromRacketClasses_Params params;
	params.UseScramblerExclusions = UseScramblerExclusions;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RacketClasses != nullptr)
		*RacketClasses = params.RacketClasses;
	if (BallClasses != nullptr)
		*BallClasses = params.BallClasses;

}


// Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisBallClass
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFunctionLibrary_C::STATIC_GetActiveTennisBallClass(class UObject* __WorldContext, class UClass** BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisBallClass");

	UFunctionLibrary_C_GetActiveTennisBallClass_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BallClass != nullptr)
		*BallClass = params.BallClass;

}


// Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisRacketClasses
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          RacketClasses                  (Parm, OutParm, ZeroConstructor)
void UFunctionLibrary_C::STATIC_GetActiveTennisRacketClasses(class UObject* __WorldContext, TArray<class UClass*>* RacketClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisRacketClasses");

	UFunctionLibrary_C_GetActiveTennisRacketClasses_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RacketClasses != nullptr)
		*RacketClasses = params.RacketClasses;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
