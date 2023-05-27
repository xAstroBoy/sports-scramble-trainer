#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FunctionLibrary.FunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PlayThemeMusic(bool PlayIntro, float FadeTime, class UObject* __WorldContext);
		void STATIC_GetPlayerNames(class UObject* WorldContextObject, int32_t MaxLength, class UObject* __WorldContext, class FText* Player1, class FText* Player2);
		void STATIC_GetBaseballInstrumentProperties(TArray<EBaseballInstrumentType> InstrumentTypes, class UObject* __WorldContext, TArray<struct FBaseballInstrumentEntryProperties>* Properties);
		void STATIC_GetBaseballBallProperties(TArray<EBaseballBallType> BallTypes, class UObject* __WorldContext, TArray<struct FBaseballBallScrambleProperties>* Properties);
		void STATIC_IsButtonTouchActor(class AActor* Actor, class UObject* __WorldContext, bool* ReturnValue);
		void STATIC_RemoveAllFireAndForgetActors(bool Instant, class UObject* __WorldContext);
		void STATIC_GetLocText(const class FName& LocTextName, class UObject* __WorldContext, class FText* Text);
		void STATIC_DestroyAllGrabbables(class AScramPlayer* Player, class UObject* __WorldContext);
		bool STATIC_CheckMatchFromClasses(class UClass* InstrumentClass, class UClass* BallClass, class UObject* __WorldContext);
		void STATIC_GetMatchesFromBallClasses(TArray<class UClass*>* BallClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* RacketClasses);
		void STATIC_GetMatchesFromRacketClasses(TArray<class UClass*>* RacketClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* BallClasses);
		void STATIC_GetActiveTennisBallClass(class UObject* __WorldContext, class UClass** BallClass);
		void STATIC_GetActiveTennisRacketClasses(class UObject* __WorldContext, TArray<class UClass*>* RacketClasses);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
