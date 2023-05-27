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
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.GetTrophyID
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TrophyID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_05_EqualMatch_C::GetTrophyID(class FName* TrophyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.GetTrophyID");
		
		ABW_Challenge_05_EqualMatch_C_GetTrophyID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrophyID != nullptr)
			*TrophyID = params.TrophyID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.InitializeChallengeRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_05_EqualMatch_C::InitializeChallengeRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.InitializeChallengeRoom");
		
		ABW_Challenge_05_EqualMatch_C_InitializeChallengeRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_05_EqualMatch_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.SetupInfoText");
		
		ABW_Challenge_05_EqualMatch_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_05_EqualMatch_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.UserConstructionScript");
		
		ABW_Challenge_05_EqualMatch_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Challenge_05_EqualMatch_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ReceiveBeginPlay");
		
		ABW_Challenge_05_EqualMatch_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_05_EqualMatch_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.NotifyChallengeContinue");
		
		ABW_Challenge_05_EqualMatch_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_05_EqualMatch_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ReceiveEndPlay");
		
		ABW_Challenge_05_EqualMatch_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_05_EqualMatch_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.Shortcut");
		
		ABW_Challenge_05_EqualMatch_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.BW_CHG_SportManagerGameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        MatchResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_05_EqualMatch_C::BW_CHG_SportManagerGameEnd(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.BW_CHG_SportManagerGameEnd");
		
		ABW_Challenge_05_EqualMatch_C_BW_CHG_SportManagerGameEnd_Params params {};
		params.MatchResult = MatchResult;
		params.Player1GamesWon = Player1GamesWon;
		params.Player2GamesWon = Player2GamesWon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Challenge_05_EqualMatch_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.AnnouncerExitSequenceComplete");
		
		ABW_Challenge_05_EqualMatch_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.OnScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_05_EqualMatch_C::OnScore(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.OnScore");
		
		ABW_Challenge_05_EqualMatch_C_OnScore_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ExecuteUbergraph_BW_Challenge_05_EqualMatch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Challenge_05_EqualMatch_C::ExecuteUbergraph_BW_Challenge_05_EqualMatch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ExecuteUbergraph_BW_Challenge_05_EqualMatch");
		
		ABW_Challenge_05_EqualMatch_C_ExecuteUbergraph_BW_Challenge_05_EqualMatch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Challenge_05_EqualMatch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Challenge_05_EqualMatch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C");
		return ptr;
	}

}


