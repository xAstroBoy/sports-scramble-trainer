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
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TN_SportMgr_UnbindEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::TN_SportMgr_UnbindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TN_SportMgr_UnbindEvents");
		
		AChallenge_ScramSportManager_TN_C_TN_SportMgr_UnbindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SpawnChallengeLocalHelper
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseScoreboard                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::SpawnChallengeLocalHelper(bool UseScoreboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SpawnChallengeLocalHelper");
		
		AChallenge_ScramSportManager_TN_C_SpawnChallengeLocalHelper_Params params {};
		params.UseScoreboard = UseScoreboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindExistingServeLocationIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::BindExistingServeLocationIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindExistingServeLocationIndicator");
		
		AChallenge_ScramSportManager_TN_C_BindExistingServeLocationIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnRep_ServeLocationIndicator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::OnRep_ServeLocationIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnRep_ServeLocationIndicator");
		
		AChallenge_ScramSportManager_TN_C_OnRep_ServeLocationIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindNewServeLocationIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::BindNewServeLocationIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindNewServeLocationIndicator");
		
		AChallenge_ScramSportManager_TN_C_BindNewServeLocationIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ShowDebugInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::ShowDebugInfo(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ShowDebugInfo");
		
		AChallenge_ScramSportManager_TN_C_ShowDebugInfo_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateServeLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::CreateServeLocation(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateServeLocation");
		
		AChallenge_ScramSportManager_TN_C_CreateServeLocation_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.AllowAIServe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::AllowAIServe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.AllowAIServe");
		
		AChallenge_ScramSportManager_TN_C_AllowAIServe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateReceiveLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::CreateReceiveLocation(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateReceiveLocation");
		
		AChallenge_ScramSportManager_TN_C_CreateReceiveLocation_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetGameStatus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StatusText                                                 (Parm, OutParm)
	 */
	void AChallenge_ScramSportManager_TN_C::GetGameStatus(class FText* StatusText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetGameStatus");
		
		AChallenge_ScramSportManager_TN_C_GetGameStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusText != nullptr)
			*StatusText = params.StatusText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetPointType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PointType                                                  (Parm, OutParm)
	 */
	void AChallenge_ScramSportManager_TN_C::GetPointType(class FText* PointType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetPointType");
		
		AChallenge_ScramSportManager_TN_C_GetPointType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointType != nullptr)
			*PointType = params.PointType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ResetResultBools
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::ResetResultBools()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ResetResultBools");
		
		AChallenge_ScramSportManager_TN_C_ResetResultBools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Cleanup");
		
		AChallenge_ScramSportManager_TN_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Initialize");
		
		AChallenge_ScramSportManager_TN_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.UserConstructionScript");
		
		AChallenge_ScramSportManager_TN_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8");
		
		AChallenge_ScramSportManager_TN_C_OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_C4FE474944769B8438FACDAFB40F4516
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::OnLoaded_C4FE474944769B8438FACDAFB40F4516(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_C4FE474944769B8438FACDAFB40F4516");
		
		AChallenge_ScramSportManager_TN_C_OnLoaded_C4FE474944769B8438FACDAFB40F4516_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C");
		
		AChallenge_ScramSportManager_TN_C_OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveBeginPlay");
		
		AChallenge_ScramSportManager_TN_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TennisEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETennisEvent                                       TennisEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::TennisEvent(int32_t Player, ETennisEvent TennisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TennisEvent");
		
		AChallenge_ScramSportManager_TN_C_TennisEvent_Params params {};
		params.Player = Player;
		params.TennisEvent = TennisEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveEndPlay");
		
		AChallenge_ScramSportManager_TN_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointMade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            P1Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::PointMade(int32_t P1Score, int32_t P2Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointMade");
		
		AChallenge_ScramSportManager_TN_C_PointMade_Params params {};
		params.P1Score = P1Score;
		params.P2Score = P2Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LET
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::LET()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LET");
		
		AChallenge_ScramSportManager_TN_C_LET_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.WaitForOpponentServe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::WaitForOpponentServe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.WaitForOpponentServe");
		
		AChallenge_ScramSportManager_TN_C_WaitForOpponentServe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.InPlay
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::InPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.InPlay");
		
		AChallenge_ScramSportManager_TN_C_InPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Fault
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::Fault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Fault");
		
		AChallenge_ScramSportManager_TN_C_Fault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PrePareServe
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::PrePareServe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PrePareServe");
		
		AChallenge_ScramSportManager_TN_C_PrePareServe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallGrabbed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::BallGrabbed(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallGrabbed");
		
		AChallenge_ScramSportManager_TN_C_BallGrabbed_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallSpawned
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::BallSpawned(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallSpawned");
		
		AChallenge_ScramSportManager_TN_C_BallSpawned_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SendDebugString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      S                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::SendDebugString(const class FString& S)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SendDebugString");
		
		AChallenge_ScramSportManager_TN_C_SendDebugString_Params params {};
		params.S = S;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateDebugButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::CreateDebugButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateDebugButton");
		
		AChallenge_ScramSportManager_TN_C_CreateDebugButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ToggleDebug
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::ToggleDebug(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ToggleDebug");
		
		AChallenge_ScramSportManager_TN_C_ToggleDebug_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayDoubleFaultSFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::PlayDoubleFaultSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayDoubleFaultSFX");
		
		AChallenge_ScramSportManager_TN_C_PlayDoubleFaultSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_DisplayPointResults
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PointType                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            P1Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Winner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TextOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::MC_DisplayPointResults(const class FText& PointType, int32_t P1Score, int32_t P2Score, bool Player1Winner, bool TextOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_DisplayPointResults");
		
		AChallenge_ScramSportManager_TN_C_MC_DisplayPointResults_Params params {};
		params.PointType = PointType;
		params.P1Score = P1Score;
		params.P2Score = P2Score;
		params.Player1Winner = Player1Winner;
		params.TextOnly = TextOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_MatchComplete
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OC5Demo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            P1GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::MC_MatchComplete(bool OC5Demo, int32_t P1GamesWon, int32_t P2GamesWon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_MatchComplete");
		
		AChallenge_ScramSportManager_TN_C_MC_MatchComplete_Params params {};
		params.OC5Demo = OC5Demo;
		params.P1GamesWon = P1GamesWon;
		params.P2GamesWon = P2GamesWon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_GameComplete
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GameCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P1GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::MC_GameComplete(int32_t GameCount, int32_t P1GamesWon, int32_t P2GamesWon, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_GameComplete");
		
		AChallenge_ScramSportManager_TN_C_MC_GameComplete_Params params {};
		params.GameCount = GameCount;
		params.P1GamesWon = P1GamesWon;
		params.P2GamesWon = P2GamesWon;
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_ShowPreServeInfo
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        GameStatusText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::MC_ShowPreServeInfo(const class FText& GameStatusText, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_ShowPreServeInfo");
		
		AChallenge_ScramSportManager_TN_C_MC_ShowPreServeInfo_Params params {};
		params.GameStatusText = GameStatusText;
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_CreateStandLocations
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::MC_CreateStandLocations(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_CreateStandLocations");
		
		AChallenge_ScramSportManager_TN_C_MC_CreateStandLocations_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseUmpVox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::PlayPoint(bool UseUmpVox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayPoint");
		
		AChallenge_ScramSportManager_TN_C_PlayPoint_Params params {};
		params.UseUmpVox = UseUmpVox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ExecuteUbergraph_Challenge_ScramSportManager_TN
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::ExecuteUbergraph_Challenge_ScramSportManager_TN(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ExecuteUbergraph_Challenge_ScramSportManager_TN");
		
		AChallenge_ScramSportManager_TN_C_ExecuteUbergraph_Challenge_ScramSportManager_TN_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.FaultServeResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::FaultServeResult__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.FaultServeResult__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_FaultServeResult__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LetServeResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::LetServeResult__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LetServeResult__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_LetServeResult__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PreServeStart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallenge_ScramSportManager_TN_C::PreServeStart__DelegateSignature(int32_t Game, int32_t Point, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PreServeStart__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_PreServeStart__DelegateSignature_Params params {};
		params.Game = Game;
		params.Point = Point;
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallInPlay__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::BallInPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallInPlay__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_BallInPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::PointComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointComplete__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_PointComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ServeReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::ServeReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ServeReady__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_ServeReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GameComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AChallenge_ScramSportManager_TN_C::GameComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GameComplete__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_GameComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MatchComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallenge_ScramSportManager_TN_C::MatchComplete__DelegateSignature(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MatchComplete__DelegateSignature");
		
		AChallenge_ScramSportManager_TN_C_MatchComplete__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChallenge_ScramSportManager_TN_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChallenge_ScramSportManager_TN_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C");
		return ptr;
	}

}


