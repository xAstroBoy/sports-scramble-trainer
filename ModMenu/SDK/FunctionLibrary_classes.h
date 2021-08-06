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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibrary.FunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary.FunctionLibrary_C");
		return ptr;
	}



	void STATIC_PlayThemeMusic(bool PlayIntro, float FadeTime, class UObject* __WorldContext);
	void STATIC_GetPlayerNames(class UObject* WorldContextObject, int MaxLength, class UObject* __WorldContext, struct FText* Player1, struct FText* Player2);
	void STATIC_GetBaseballInstrumentProperties(TArray<SportsScramble_EBaseballInstrumentType> InstrumentTypes, class UObject* __WorldContext, TArray<struct FBaseballInstrumentEntryProperties>* Properties);
	void STATIC_GetBaseballBallProperties(TArray<SportsScramble_EBaseballBallType> BallTypes, class UObject* __WorldContext, TArray<struct FBaseballBallScrambleProperties>* Properties);
	void STATIC_IsButtonTouchActor(class AActor* Actor, class UObject* __WorldContext, bool* Return_Value);
	void STATIC_RemoveAllFireAndForgetActors(bool Instant, class UObject* __WorldContext);
	void STATIC_GetLocText(const struct FName& LocTextName, class UObject* __WorldContext, struct FText* Text);
	void STATIC_DestroyAllGrabbables(class AScramPlayer* Player, class UObject* __WorldContext);
	bool STATIC_CheckMatchFromClasses(class UClass* InstrumentClass, class UClass* BallClass, class UObject* __WorldContext);
	void STATIC_GetMatchesFromBallClasses(TArray<class UClass*>* BallClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* RacketClasses);
	void STATIC_GetMatchesFromRacketClasses(TArray<class UClass*>* RacketClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* BallClasses);
	void STATIC_GetActiveTennisBallClass(class UObject* __WorldContext, class UClass** BallClass);
	void STATIC_GetActiveTennisRacketClasses(class UObject* __WorldContext, TArray<class UClass*>* RacketClasses);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
