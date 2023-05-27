/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.PlayThemeMusic
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayIntro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FadeTime                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_C::STATIC_PlayThemeMusic(bool PlayIntro, float FadeTime, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.PlayThemeMusic");
		
		UFunctionLibrary_C_PlayThemeMusic_Params params {};
		params.PlayIntro = PlayIntro;
		params.FadeTime = FadeTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetPlayerNames
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Player1                                                    (Parm, OutParm)
	 * 		class FText                                        Player2                                                    (Parm, OutParm)
	 */
	void UFunctionLibrary_C::STATIC_GetPlayerNames(class UObject* WorldContextObject, int32_t MaxLength, class UObject* __WorldContext, class FText* Player1, class FText* Player2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetPlayerNames");
		
		UFunctionLibrary_C_GetPlayerNames_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetBaseballInstrumentProperties
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<EBaseballInstrumentType>                    InstrumentTypes                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FBaseballInstrumentEntryProperties>  Properties                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UFunctionLibrary_C::STATIC_GetBaseballInstrumentProperties(TArray<EBaseballInstrumentType> InstrumentTypes, class UObject* __WorldContext, TArray<struct FBaseballInstrumentEntryProperties>* Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetBaseballInstrumentProperties");
		
		UFunctionLibrary_C_GetBaseballInstrumentProperties_Params params {};
		params.InstrumentTypes = InstrumentTypes;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Properties != nullptr)
			*Properties = params.Properties;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetBaseballBallProperties
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<EBaseballBallType>                          BallTypes                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FBaseballBallScrambleProperties>     Properties                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UFunctionLibrary_C::STATIC_GetBaseballBallProperties(TArray<EBaseballBallType> BallTypes, class UObject* __WorldContext, TArray<struct FBaseballBallScrambleProperties>* Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetBaseballBallProperties");
		
		UFunctionLibrary_C_GetBaseballBallProperties_Params params {};
		params.BallTypes = BallTypes;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Properties != nullptr)
			*Properties = params.Properties;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.IsButtonTouchActor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_C::STATIC_IsButtonTouchActor(class AActor* Actor, class UObject* __WorldContext, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.IsButtonTouchActor");
		
		UFunctionLibrary_C_IsButtonTouchActor_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.RemoveAllFireAndForgetActors
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_C::STATIC_RemoveAllFireAndForgetActors(bool Instant, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.RemoveAllFireAndForgetActors");
		
		UFunctionLibrary_C_RemoveAllFireAndForgetActors_Params params {};
		params.Instant = Instant;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetLocText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocTextName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UFunctionLibrary_C::STATIC_GetLocText(const class FName& LocTextName, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetLocText");
		
		UFunctionLibrary_C_GetLocText_Params params {};
		params.LocTextName = LocTextName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.DestroyAllGrabbables
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_C::STATIC_DestroyAllGrabbables(class AScramPlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.DestroyAllGrabbables");
		
		UFunctionLibrary_C_DestroyAllGrabbables_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.CheckMatchFromClasses
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InstrumentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFunctionLibrary_C::STATIC_CheckMatchFromClasses(class UClass* InstrumentClass, class UClass* BallClass, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.CheckMatchFromClasses");
		
		UFunctionLibrary_C_CheckMatchFromClasses_Params params {};
		params.InstrumentClass = InstrumentClass;
		params.BallClass = BallClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromBallClasses
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              BallClasses                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               UseScramblerExclusions                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              RacketClasses                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UFunctionLibrary_C::STATIC_GetMatchesFromBallClasses(TArray<class UClass*>* BallClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* RacketClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromBallClasses");
		
		UFunctionLibrary_C_GetMatchesFromBallClasses_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromRacketClasses
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              RacketClasses                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               UseScramblerExclusions                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              BallClasses                                                (Parm, OutParm, ZeroConstructor)
	 */
	void UFunctionLibrary_C::STATIC_GetMatchesFromRacketClasses(TArray<class UClass*>* RacketClasses, bool UseScramblerExclusions, class UObject* __WorldContext, TArray<class UClass*>* BallClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromRacketClasses");
		
		UFunctionLibrary_C_GetMatchesFromRacketClasses_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisBallClass
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_C::STATIC_GetActiveTennisBallClass(class UObject* __WorldContext, class UClass** BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisBallClass");
		
		UFunctionLibrary_C_GetActiveTennisBallClass_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BallClass != nullptr)
			*BallClass = params.BallClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisRacketClasses
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              RacketClasses                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UFunctionLibrary_C::STATIC_GetActiveTennisRacketClasses(class UObject* __WorldContext, TArray<class UClass*>* RacketClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisRacketClasses");
		
		UFunctionLibrary_C_GetActiveTennisRacketClasses_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RacketClasses != nullptr)
			*RacketClasses = params.RacketClasses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary.FunctionLibrary_C");
		return ptr;
	}

}


