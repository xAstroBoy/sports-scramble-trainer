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
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneTimeScales
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinMaxFloat                                PopFlyTimeScale                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FMinMaxFloat                                SweetSpotTimeScale                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FMinMaxFloat                                LineDriveTimeScale                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FMinMaxFloat                                GroundBallTimeScale                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABB_Challenge_06_3rdBase_C::SetZoneTimeScales(const struct FMinMaxFloat& PopFlyTimeScale, const struct FMinMaxFloat& SweetSpotTimeScale, const struct FMinMaxFloat& LineDriveTimeScale, const struct FMinMaxFloat& GroundBallTimeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneTimeScales");
		
		ABB_Challenge_06_3rdBase_C_SetZoneTimeScales_Params params {};
		params.PopFlyTimeScale = PopFlyTimeScale;
		params.SweetSpotTimeScale = SweetSpotTimeScale;
		params.LineDriveTimeScale = LineDriveTimeScale;
		params.GroundBallTimeScale = GroundBallTimeScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GetNextBallClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      NextBallClass                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::GetNextBallClass(class UClass** NextBallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GetNextBallClass");
		
		ABB_Challenge_06_3rdBase_C_GetNextBallClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextBallClass != nullptr)
			*NextBallClass = params.NextBallClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetupInfoText");
		
		ABB_Challenge_06_3rdBase_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneChances
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PopFlyChance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SweetSpotChance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LineDriveChance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GroundBallChance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::SetZoneChances(float PopFlyChance, float SweetSpotChance, float LineDriveChance, float GroundBallChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneChances");
		
		ABB_Challenge_06_3rdBase_C_SetZoneChances_Params params {};
		params.PopFlyChance = PopFlyChance;
		params.SweetSpotChance = SweetSpotChance;
		params.LineDriveChance = LineDriveChance;
		params.GroundBallChance = GroundBallChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetParameters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeBetweenBalls                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BombChance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GoldenBallChance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::SetParameters(float TimeBetweenBalls, float BombChance, float GoldenBallChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetParameters");
		
		ABB_Challenge_06_3rdBase_C_SetParameters_Params params {};
		params.TimeBetweenBalls = TimeBetweenBalls;
		params.BombChance = BombChance;
		params.GoldenBallChance = GoldenBallChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Initialized3rdBase
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::Initialized3rdBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Initialized3rdBase");
		
		ABB_Challenge_06_3rdBase_C_Initialized3rdBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Cleanup");
		
		ABB_Challenge_06_3rdBase_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.UserConstructionScript");
		
		ABB_Challenge_06_3rdBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_25CCB05E4E04939CC232B8BB23AB186B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::OnLoaded_25CCB05E4E04939CC232B8BB23AB186B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_25CCB05E4E04939CC232B8BB23AB186B");
		
		ABB_Challenge_06_3rdBase_C_OnLoaded_25CCB05E4E04939CC232B8BB23AB186B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_70510E9640399C2A919A79A38EF129A0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::OnLoaded_70510E9640399C2A919A79A38EF129A0(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_70510E9640399C2A919A79A38EF129A0");
		
		ABB_Challenge_06_3rdBase_C_OnLoaded_70510E9640399C2A919A79A38EF129A0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_32444B0A4E135437E255DFAB39579AF8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::OnLoaded_32444B0A4E135437E255DFAB39579AF8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_32444B0A4E135437E255DFAB39579AF8");
		
		ABB_Challenge_06_3rdBase_C_OnLoaded_32444B0A4E135437E255DFAB39579AF8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_49C6C46244429E83F6C5859C5D9D417C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::OnLoaded_49C6C46244429E83F6C5859C5D9D417C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_49C6C46244429E83F6C5859C5D9D417C");
		
		ABB_Challenge_06_3rdBase_C_OnLoaded_49C6C46244429E83F6C5859C5D9D417C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::AnnouncerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPaused");
		
		ABB_Challenge_06_3rdBase_C_AnnouncerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPresenting");
		
		ABB_Challenge_06_3rdBase_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPlayingSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::AnnouncerPlayingSequence(const class FName& SequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPlayingSequence");
		
		ABB_Challenge_06_3rdBase_C_AnnouncerPlayingSequence_Params params {};
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveBeginPlay");
		
		ABB_Challenge_06_3rdBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.NotifyChallengeContinue");
		
		ABB_Challenge_06_3rdBase_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BallHit");
		
		ABB_Challenge_06_3rdBase_C_BallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveEndPlay");
		
		ABB_Challenge_06_3rdBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BaseballEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BaseballEvent");
		
		ABB_Challenge_06_3rdBase_C_BaseballEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.FireLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::FireLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.FireLoop");
		
		ABB_Challenge_06_3rdBase_C_FireLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Start_Challenge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::Start_Challenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Start_Challenge");
		
		ABB_Challenge_06_3rdBase_C_Start_Challenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerExitSequenceComplete");
		
		ABB_Challenge_06_3rdBase_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BB_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::BB_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BB_TriggerCountdown");
		
		ABB_Challenge_06_3rdBase_C_BB_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GameEnd");
		
		ABB_Challenge_06_3rdBase_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_06_3rdBase_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Shortcut");
		
		ABB_Challenge_06_3rdBase_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ExecuteUbergraph_BB_Challenge_06_3rdBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_06_3rdBase_C::ExecuteUbergraph_BB_Challenge_06_3rdBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ExecuteUbergraph_BB_Challenge_06_3rdBase");
		
		ABB_Challenge_06_3rdBase_C_ExecuteUbergraph_BB_Challenge_06_3rdBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Challenge_06_3rdBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Challenge_06_3rdBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C");
		return ptr;
	}

}


