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
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetMusicRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  AudioRef                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::GetMusicRef(class USoundBase** AudioRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetMusicRef");
		
		AScramSportManagerBowling_Blueprint_C_GetMusicRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioRef != nullptr)
			*AudioRef = params.AudioRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SaveBowlingState
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingScrambleState                       ScrambleState                                              (Parm, OutParm)
	 * 		TArray<struct FBowlingFrameSet>                    TraditionalFrameSets                                       (Parm, OutParm, ZeroConstructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::SaveBowlingState(struct FBowlingScrambleState* ScrambleState, TArray<struct FBowlingFrameSet>* TraditionalFrameSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SaveBowlingState");
		
		AScramSportManagerBowling_Blueprint_C_SaveBowlingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrambleState != nullptr)
			*ScrambleState = params.ScrambleState;
		if (TraditionalFrameSets != nullptr)
			*TraditionalFrameSets = params.TraditionalFrameSets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateMatchScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::NetUpdateMatchScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateMatchScore");
		
		AScramSportManagerBowling_Blueprint_C_NetUpdateMatchScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetRelativeScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RelativeScore                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::GetRelativeScore(int32_t* RelativeScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetRelativeScore");
		
		AScramSportManagerBowling_Blueprint_C_GetRelativeScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RelativeScore != nullptr)
			*RelativeScore = params.RelativeScore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetHideScoreCards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::NetHideScoreCards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetHideScoreCards");
		
		AScramSportManagerBowling_Blueprint_C_NetHideScoreCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetPrepareScoreCards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::NetPrepareScoreCards(int32_t NumFrames, int32_t NumPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetPrepareScoreCards");
		
		AScramSportManagerBowling_Blueprint_C_NetPrepareScoreCards_Params params {};
		params.NumFrames = NumFrames;
		params.NumPlayers = NumPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateTraditionalScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::NetUpdateTraditionalScore(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateTraditionalScore");
		
		AScramSportManagerBowling_Blueprint_C_NetUpdateTraditionalScore_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BuildScoreString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::BuildScoreString(int32_t Player, class FString* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BuildScoreString");
		
		AScramSportManagerBowling_Blueprint_C_BuildScoreString_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.FilterLaneTypes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                LanesIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               Randomize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FName>                                LanesOut                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::FilterLaneTypes(TArray<class FName>* LanesIn, bool Randomize, TArray<class FName>* LanesOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.FilterLaneTypes");
		
		AScramSportManagerBowling_Blueprint_C_FilterLaneTypes_Params params {};
		params.Randomize = Randomize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LanesIn != nullptr)
			*LanesIn = params.LanesIn;
		if (LanesOut != nullptr)
			*LanesOut = params.LanesOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateScrambleLists
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::UpdateScrambleLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateScrambleLists");
		
		AScramSportManagerBowling_Blueprint_C_UpdateScrambleLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SpawnAI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::SpawnAI(bool Player1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SpawnAI");
		
		AScramSportManagerBowling_Blueprint_C_SpawnAI_Params params {};
		params.Player1 = Player1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Score0                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::UpdateResults(int32_t Score0, int32_t Score1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateResults");
		
		AScramSportManagerBowling_Blueprint_C_UpdateResults_Params params {};
		params.Score0 = Score0;
		params.Score1 = Score1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetVideoBoard
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABW_VideoBoard_Training_C*                   VideoBoard                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::GetVideoBoard(class ABW_VideoBoard_Training_C** VideoBoard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetVideoBoard");
		
		AScramSportManagerBowling_Blueprint_C_GetVideoBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VideoBoard != nullptr)
			*VideoBoard = params.VideoBoard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Cleanup");
		
		AScramSportManagerBowling_Blueprint_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Initialize");
		
		AScramSportManagerBowling_Blueprint_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UserConstructionScript");
		
		AScramSportManagerBowling_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_F44468EB4040BF2A0703018CD06BD38B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::OnLoaded_F44468EB4040BF2A0703018CD06BD38B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_F44468EB4040BF2A0703018CD06BD38B");
		
		AScramSportManagerBowling_Blueprint_C_OnLoaded_F44468EB4040BF2A0703018CD06BD38B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_DDE06F4D473B8945A2362CB797C3F835
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::OnLoaded_DDE06F4D473B8945A2362CB797C3F835(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_DDE06F4D473B8945A2362CB797C3F835");
		
		AScramSportManagerBowling_Blueprint_C_OnLoaded_DDE06F4D473B8945A2362CB797C3F835_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_7650529845E7E25F135EACAAD84131AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::OnLoaded_7650529845E7E25F135EACAAD84131AF(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_7650529845E7E25F135EACAAD84131AF");
		
		AScramSportManagerBowling_Blueprint_C_OnLoaded_7650529845E7E25F135EACAAD84131AF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveBeginPlay");
		
		AScramSportManagerBowling_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveEndPlay");
		
		AScramSportManagerBowling_Blueprint_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BowlingEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBowlingEvent                                      BowlingEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::BowlingEvent(int32_t Player, EBowlingEvent BowlingEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BowlingEvent");
		
		AScramSportManagerBowling_Blueprint_C_BowlingEvent_Params params {};
		params.Player = Player;
		params.BowlingEvent = BowlingEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PregameStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::PregameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PregameStart");
		
		AScramSportManagerBowling_Blueprint_C_PregameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeRemaining                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::MatchStart(float TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchStart");
		
		AScramSportManagerBowling_Blueprint_C_MatchStart_Params params {};
		params.TimeRemaining = TimeRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::BeginGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginGame");
		
		AScramSportManagerBowling_Blueprint_C_BeginGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::EndOfGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfGame");
		
		AScramSportManagerBowling_Blueprint_C_EndOfGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NextGame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PreviousGameWinner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::NextGame(int32_t PreviousGameWinner, int32_t Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NextGame");
		
		AScramSportManagerBowling_Blueprint_C_NextGame_Params params {};
		params.PreviousGameWinner = PreviousGameWinner;
		params.Game = Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchOver
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::MatchOver(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchOver");
		
		AScramSportManagerBowling_Blueprint_C_MatchOver_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::ShowPauseInfo(bool IsPaused, bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseInfo");
		
		AScramSportManagerBowling_Blueprint_C_ShowPauseInfo_Params params {};
		params.IsPaused = IsPaused;
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseBubble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::ShowPauseBubble(bool IsPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseBubble");
		
		AScramSportManagerBowling_Blueprint_C_ShowPauseBubble_Params params {};
		params.IsPaused = IsPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameResume
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::OnGameResume(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameResume");
		
		AScramSportManagerBowling_Blueprint_C_OnGameResume_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGamePause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::OnGamePause(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGamePause");
		
		AScramSportManagerBowling_Blueprint_C_OnGamePause_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Three
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::Three()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Three");
		
		AScramSportManagerBowling_Blueprint_C_Three_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Two
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::Two()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Two");
		
		AScramSportManagerBowling_Blueprint_C_Two_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndingHorn
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::EndingHorn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndingHorn");
		
		AScramSportManagerBowling_Blueprint_C_EndingHorn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PreTraditionalGameStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::PreTraditionalGameStart(int32_t NumFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PreTraditionalGameStart");
		
		AScramSportManagerBowling_Blueprint_C_PreTraditionalGameStart_Params params {};
		params.NumFrames = NumFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::TraditionalMatchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchStart");
		
		AScramSportManagerBowling_Blueprint_C_TraditionalMatchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginTraditionalGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::BeginTraditionalGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginTraditionalGame");
		
		AScramSportManagerBowling_Blueprint_C_BeginTraditionalGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfTraditionalGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::EndOfTraditionalGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfTraditionalGame");
		
		AScramSportManagerBowling_Blueprint_C_EndOfTraditionalGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchOver
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::TraditionalMatchOver(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchOver");
		
		AScramSportManagerBowling_Blueprint_C_TraditionalMatchOver_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateTraditionalScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Pins                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::UpdateTraditionalScore(int32_t ID, int32_t Pins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateTraditionalScore");
		
		AScramSportManagerBowling_Blueprint_C_UpdateTraditionalScore_Params params {};
		params.ID = ID;
		params.Pins = Pins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::TraditionalFrameStart(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameStart");
		
		AScramSportManagerBowling_Blueprint_C_TraditionalFrameStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isLastFrame                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBowling_Blueprint_C::TraditionalFrameEnd(int32_t Player, bool isLastFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameEnd");
		
		AScramSportManagerBowling_Blueprint_C_TraditionalFrameEnd_Params params {};
		params.Player = Player;
		params.isLastFrame = isLastFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SetGameTimeRemaining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::SetGameTimeRemaining(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SetGameTimeRemaining");
		
		AScramSportManagerBowling_Blueprint_C_SetGameTimeRemaining_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::GameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameOver");
		
		AScramSportManagerBowling_Blueprint_C_GameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SyncTimer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeRemaining                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::SyncTimer(float TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SyncTimer");
		
		AScramSportManagerBowling_Blueprint_C_SyncTimer_Params params {};
		params.TimeRemaining = TimeRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.LoadBowlingState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingScrambleState                       ScrambleState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FBowlingFrameSet>                    TraditionalFrameSets                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScramSportManagerBowling_Blueprint_C::LoadBowlingState(const struct FBowlingScrambleState& ScrambleState, TArray<struct FBowlingFrameSet> TraditionalFrameSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.LoadBowlingState");
		
		AScramSportManagerBowling_Blueprint_C_LoadBowlingState_Params params {};
		params.ScrambleState = ScrambleState;
		params.TraditionalFrameSets = TraditionalFrameSets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ServerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::ServerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ServerReady");
		
		AScramSportManagerBowling_Blueprint_C_ServerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameDone
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::OnGameDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameDone");
		
		AScramSportManagerBowling_Blueprint_C_OnGameDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PlayBonusBallAudio
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::PlayBonusBallAudio(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PlayBonusBallAudio");
		
		AScramSportManagerBowling_Blueprint_C_PlayBonusBallAudio_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndGameDisablePause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::EndGameDisablePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndGameDisablePause");
		
		AScramSportManagerBowling_Blueprint_C_EndGameDisablePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ExecuteUbergraph_ScramSportManagerBowling_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::ExecuteUbergraph_ScramSportManagerBowling_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ExecuteUbergraph_ScramSportManagerBowling_Blueprint");
		
		AScramSportManagerBowling_Blueprint_C_ExecuteUbergraph_ScramSportManagerBowling_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameTimeEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::GameTimeEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameTimeEnded__DelegateSignature");
		
		AScramSportManagerBowling_Blueprint_C_GameTimeEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BWGameEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        MatchResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBowling_Blueprint_C::BWGameEnd__DelegateSignature(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BWGameEnd__DelegateSignature");
		
		AScramSportManagerBowling_Blueprint_C_BWGameEnd__DelegateSignature_Params params {};
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
	 * 		Name   -> Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBowling_Blueprint_C::MatchComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchComplete__DelegateSignature");
		
		AScramSportManagerBowling_Blueprint_C_MatchComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerBowling_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerBowling_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C");
		return ptr;
	}

}


