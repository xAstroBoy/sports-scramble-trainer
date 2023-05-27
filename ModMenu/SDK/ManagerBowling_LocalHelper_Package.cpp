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
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayCountdown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACountdown_C*                                CountdownActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayCountdown(class ACountdown_C** CountdownActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayCountdown");
		
		AManagerBowling_LocalHelper_C_DisplayCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountdownActor != nullptr)
			*CountdownActor = params.CountdownActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayInfo(const class FText& DisplayText, float DisplayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayInfo");
		
		AManagerBowling_LocalHelper_C_DisplayInfo_Params params {};
		params.DisplayText = DisplayText;
		params.DisplayTime = DisplayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Cleanup");
		
		AManagerBowling_LocalHelper_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Initialize");
		
		AManagerBowling_LocalHelper_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.UserConstructionScript");
		
		AManagerBowling_LocalHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_906AE94D4F152913F520DB9BC9980BB7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::OnLoaded_906AE94D4F152913F520DB9BC9980BB7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_906AE94D4F152913F520DB9BC9980BB7");
		
		AManagerBowling_LocalHelper_C_OnLoaded_906AE94D4F152913F520DB9BC9980BB7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7");
		
		AManagerBowling_LocalHelper_C_OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAudienceDisappointed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::PlayAudienceDisappointed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAudienceDisappointed");
		
		AManagerBowling_LocalHelper_C_PlayAudienceDisappointed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.CrowdApplause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::CrowdApplause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.CrowdApplause");
		
		AManagerBowling_LocalHelper_C_CrowdApplause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveEndPlay");
		
		AManagerBowling_LocalHelper_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfMatchInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GamesToWin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayStartOfMatchInfo(int32_t GamesToWin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfMatchInfo");
		
		AManagerBowling_LocalHelper_C_DisplayStartOfMatchInfo_Params params {};
		params.GamesToWin = GamesToWin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayNextGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PreviousGameWinner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayNextGame(int32_t PreviousGameWinner, int32_t Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayNextGame");
		
		AManagerBowling_LocalHelper_C_DisplayNextGame_Params params {};
		params.PreviousGameWinner = PreviousGameWinner;
		params.Game = Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayMatchOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        GameResult                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayMatchOver(EGameResult GameResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayMatchOver");
		
		AManagerBowling_LocalHelper_C_DisplayMatchOver_Params params {};
		params.GameResult = GameResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerBallChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::PlayAnnouncerBallChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerBallChange");
		
		AManagerBowling_LocalHelper_C_PlayAnnouncerBallChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::PlayAnnouncerVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerVO");
		
		AManagerBowling_LocalHelper_C_PlayAnnouncerVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AManagerBowling_LocalHelper_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveBeginPlay");
		
		AManagerBowling_LocalHelper_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlinkoLaunchSFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::PlinkoLaunchSFX(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlinkoLaunchSFX");
		
		AManagerBowling_LocalHelper_C_PlinkoLaunchSFX_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayAlternateMatchInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GamesToWin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayAlternateMatchInfo(int32_t GamesToWin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayAlternateMatchInfo");
		
		AManagerBowling_LocalHelper_C_DisplayAlternateMatchInfo_Params params {};
		params.GamesToWin = GamesToWin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayPlayerTurnStart(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnStart");
		
		AManagerBowling_LocalHelper_C_DisplayPlayerTurnStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayPlayerTurnEnd(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnEnd");
		
		AManagerBowling_LocalHelper_C_DisplayPlayerTurnEnd_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfTraditionalMatchInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Frames                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::DisplayStartOfTraditionalMatchInfo(int32_t Frames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfTraditionalMatchInfo");
		
		AManagerBowling_LocalHelper_C_DisplayStartOfTraditionalMatchInfo_Params params {};
		params.Frames = Frames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ExecuteUbergraph_ManagerBowling_LocalHelper
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AManagerBowling_LocalHelper_C::ExecuteUbergraph_ManagerBowling_LocalHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ExecuteUbergraph_ManagerBowling_LocalHelper");
		
		AManagerBowling_LocalHelper_C_ExecuteUbergraph_ManagerBowling_LocalHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AManagerBowling_LocalHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AManagerBowling_LocalHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C");
		return ptr;
	}

}


