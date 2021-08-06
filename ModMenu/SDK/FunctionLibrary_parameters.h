#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FunctionLibrary.FunctionLibrary_C.PlayThemeMusic
struct UFunctionLibrary_C_PlayThemeMusic_Params
{
	bool                                               PlayIntro;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeTime;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary.FunctionLibrary_C.GetPlayerNames
struct UFunctionLibrary_C_GetPlayerNames_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Player1;                                                   // (Parm, OutParm)
	struct FText                                       Player2;                                                   // (Parm, OutParm)
};

// Function FunctionLibrary.FunctionLibrary_C.GetBaseballInstrumentProperties
struct UFunctionLibrary_C_GetBaseballInstrumentProperties_Params
{
	TArray<SportsScramble_EBaseballInstrumentType>     InstrumentTypes;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBaseballInstrumentEntryProperties>  Properties;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function FunctionLibrary.FunctionLibrary_C.GetBaseballBallProperties
struct UFunctionLibrary_C_GetBaseballBallProperties_Params
{
	TArray<SportsScramble_EBaseballBallType>           BallTypes;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBaseballBallScrambleProperties>     Properties;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function FunctionLibrary.FunctionLibrary_C.IsButtonTouchActor
struct UFunctionLibrary_C_IsButtonTouchActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FunctionLibrary.FunctionLibrary_C.RemoveAllFireAndForgetActors
struct UFunctionLibrary_C_RemoveAllFireAndForgetActors_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary.FunctionLibrary_C.GetLocText
struct UFunctionLibrary_C_GetLocText_Params
{
	struct FName                                       LocTextName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function FunctionLibrary.FunctionLibrary_C.DestroyAllGrabbables
struct UFunctionLibrary_C_DestroyAllGrabbables_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary.FunctionLibrary_C.CheckMatchFromClasses
struct UFunctionLibrary_C_CheckMatchFromClasses_Params
{
	class UClass*                                      InstrumentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromBallClasses
struct UFunctionLibrary_C_GetMatchesFromBallClasses_Params
{
	TArray<class UClass*>                              BallClasses;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               UseScramblerExclusions;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              RacketClasses;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromRacketClasses
struct UFunctionLibrary_C_GetMatchesFromRacketClasses_Params
{
	TArray<class UClass*>                              RacketClasses;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               UseScramblerExclusions;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              BallClasses;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisBallClass
struct UFunctionLibrary_C_GetActiveTennisBallClass_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisRacketClasses
struct UFunctionLibrary_C_GetActiveTennisRacketClasses_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              RacketClasses;                                             // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
