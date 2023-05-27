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
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SaveTennisState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      player1Instrument                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      player2Instrument                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      activeArenaScramble                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::SaveTennisState(class UClass** Ball, class UClass** player1Instrument, class UClass** player2Instrument, class UClass** activeArenaScramble)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SaveTennisState");
		
		AScramSportManagerTennis_Blueprint_C_SaveTennisState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ball != nullptr)
			*Ball = params.Ball;
		if (player1Instrument != nullptr)
			*player1Instrument = params.player1Instrument;
		if (player2Instrument != nullptr)
			*player2Instrument = params.player2Instrument;
		if (activeArenaScramble != nullptr)
			*activeArenaScramble = params.activeArenaScramble;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InitializeSpectator
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::InitializeSpectator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InitializeSpectator");
		
		AScramSportManagerTennis_Blueprint_C_InitializeSpectator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetActiveScrambles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::ResetActiveScrambles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetActiveScrambles");
		
		AScramSportManagerTennis_Blueprint_C_ResetActiveScrambles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindExistingServeLocationIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::BindExistingServeLocationIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindExistingServeLocationIndicator");
		
		AScramSportManagerTennis_Blueprint_C_BindExistingServeLocationIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnRep_ServeLocationIndicator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnRep_ServeLocationIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnRep_ServeLocationIndicator");
		
		AScramSportManagerTennis_Blueprint_C_OnRep_ServeLocationIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindNewServeLocationIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::BindNewServeLocationIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindNewServeLocationIndicator");
		
		AScramSportManagerTennis_Blueprint_C_BindNewServeLocationIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ShowDebugInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::ShowDebugInfo(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ShowDebugInfo");
		
		AScramSportManagerTennis_Blueprint_C_ShowDebugInfo_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateServeLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::CreateServeLocation(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateServeLocation");
		
		AScramSportManagerTennis_Blueprint_C_CreateServeLocation_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.AllowAIServe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::AllowAIServe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.AllowAIServe");
		
		AScramSportManagerTennis_Blueprint_C_AllowAIServe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateReceiveLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::CreateReceiveLocation(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateReceiveLocation");
		
		AScramSportManagerTennis_Blueprint_C_CreateReceiveLocation_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetGameStatus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StatusText                                                 (Parm, OutParm)
	 */
	void AScramSportManagerTennis_Blueprint_C::GetGameStatus(class FText* StatusText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetGameStatus");
		
		AScramSportManagerTennis_Blueprint_C_GetGameStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusText != nullptr)
			*StatusText = params.StatusText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetPointType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PointType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::GetPointType(class FName* PointType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetPointType");
		
		AScramSportManagerTennis_Blueprint_C_GetPointType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointType != nullptr)
			*PointType = params.PointType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetResultBools
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::ResetResultBools()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetResultBools");
		
		AScramSportManagerTennis_Blueprint_C_ResetResultBools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Cleanup");
		
		AScramSportManagerTennis_Blueprint_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Initialize");
		
		AScramSportManagerTennis_Blueprint_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UserConstructionScript");
		
		AScramSportManagerTennis_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::Timeline_Fade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__FinishedFunc");
		
		AScramSportManagerTennis_Blueprint_C_Timeline_Fade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::Timeline_Fade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__UpdateFunc");
		
		AScramSportManagerTennis_Blueprint_C_Timeline_Fade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_38F84231481C3446BB8F2BBBF214C4CE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnLoaded_38F84231481C3446BB8F2BBBF214C4CE(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_38F84231481C3446BB8F2BBBF214C4CE");
		
		AScramSportManagerTennis_Blueprint_C_OnLoaded_38F84231481C3446BB8F2BBBF214C4CE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_A90B74D8415A762510668AB9493CBDF6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnLoaded_A90B74D8415A762510668AB9493CBDF6(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_A90B74D8415A762510668AB9493CBDF6");
		
		AScramSportManagerTennis_Blueprint_C_OnLoaded_A90B74D8415A762510668AB9493CBDF6_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_0D0A114843992570557A2E82FF9BA28B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnLoaded_0D0A114843992570557A2E82FF9BA28B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_0D0A114843992570557A2E82FF9BA28B");
		
		AScramSportManagerTennis_Blueprint_C_OnLoaded_0D0A114843992570557A2E82FF9BA28B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveBeginPlay");
		
		AScramSportManagerTennis_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.TennisEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETennisEvent                                       TennisEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::TennisEvent(int32_t Player, ETennisEvent TennisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.TennisEvent");
		
		AScramSportManagerTennis_Blueprint_C_TennisEvent_Params params {};
		params.Player = Player;
		params.TennisEvent = TennisEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveEndPlay");
		
		AScramSportManagerTennis_Blueprint_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointMade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            P1Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::PointMade(int32_t P1Score, int32_t P2Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointMade");
		
		AScramSportManagerTennis_Blueprint_C_PointMade_Params params {};
		params.P1Score = P1Score;
		params.P2Score = P2Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LET
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::LET()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LET");
		
		AScramSportManagerTennis_Blueprint_C_LET_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.WaitForOpponentServe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::WaitForOpponentServe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.WaitForOpponentServe");
		
		AScramSportManagerTennis_Blueprint_C_WaitForOpponentServe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InPlay
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::InPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InPlay");
		
		AScramSportManagerTennis_Blueprint_C_InPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Fault
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::Fault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Fault");
		
		AScramSportManagerTennis_Blueprint_C_Fault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PrePareServe
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::PrePareServe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PrePareServe");
		
		AScramSportManagerTennis_Blueprint_C_PrePareServe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StartOrgan
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::StartOrgan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StartOrgan");
		
		AScramSportManagerTennis_Blueprint_C_StartOrgan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StopOrgan
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::StopOrgan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StopOrgan");
		
		AScramSportManagerTennis_Blueprint_C_StopOrgan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallGrabbed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::BallGrabbed(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallGrabbed");
		
		AScramSportManagerTennis_Blueprint_C_BallGrabbed_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::BallSpawned(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned");
		
		AScramSportManagerTennis_Blueprint_C_BallSpawned_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SendDebugString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      S                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::SendDebugString(const class FString& S)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SendDebugString");
		
		AScramSportManagerTennis_Blueprint_C_SendDebugString_Params params {};
		params.S = S;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameIntroSequence
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::GameIntroSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameIntroSequence");
		
		AScramSportManagerTennis_Blueprint_C_GameIntroSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayDoubleFaultSFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::PlayDoubleFaultSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayDoubleFaultSFX");
		
		AScramSportManagerTennis_Blueprint_C_PlayDoubleFaultSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayOutSFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::PlayOutSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayOutSFX");
		
		AScramSportManagerTennis_Blueprint_C_PlayOutSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeSwitch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::ServeSwitch(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeSwitch");
		
		AScramSportManagerTennis_Blueprint_C_ServeSwitch_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoopOrgan
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::LoopOrgan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoopOrgan");
		
		AScramSportManagerTennis_Blueprint_C_LoopOrgan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_DisplayPointResults
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PointType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P1Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Winner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TextOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::MC_DisplayPointResults(const class FName& PointType, int32_t P1Score, int32_t P2Score, bool Player1Winner, bool TextOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_DisplayPointResults");
		
		AScramSportManagerTennis_Blueprint_C_MC_DisplayPointResults_Params params {};
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
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_MatchComplete
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OC5Demo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            P1GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::MC_MatchComplete(bool OC5Demo, int32_t P1GamesWon, int32_t P2GamesWon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_MatchComplete");
		
		AScramSportManagerTennis_Blueprint_C_MC_MatchComplete_Params params {};
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
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_GameComplete
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GameCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P1GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2GamesWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::MC_GameComplete(int32_t GameCount, int32_t P1GamesWon, int32_t P2GamesWon, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_GameComplete");
		
		AScramSportManagerTennis_Blueprint_C_MC_GameComplete_Params params {};
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
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_ShowPreServeInfo
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        GameStatusText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::MC_ShowPreServeInfo(const class FText& GameStatusText, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_ShowPreServeInfo");
		
		AScramSportManagerTennis_Blueprint_C_MC_ShowPreServeInfo_Params params {};
		params.GameStatusText = GameStatusText;
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_CreateStandLocations
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::MC_CreateStandLocations(bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_CreateStandLocations");
		
		AScramSportManagerTennis_Blueprint_C_MC_CreateStandLocations_Params params {};
		params.Player1Serve = Player1Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeChangeCommunicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::ServeChangeCommunicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeChangeCommunicated");
		
		AScramSportManagerTennis_Blueprint_C_ServeChangeCommunicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::UpdatePauseInfo(bool IsPaused, bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseInfo");
		
		AScramSportManagerTennis_Blueprint_C_UpdatePauseInfo_Params params {};
		params.IsPaused = IsPaused;
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseBubble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::UpdatePauseBubble(bool IsPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseBubble");
		
		AScramSportManagerTennis_Blueprint_C_UpdatePauseBubble_Params params {};
		params.IsPaused = IsPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameResume
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnGameResume(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameResume");
		
		AScramSportManagerTennis_Blueprint_C_OnGameResume_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGamePause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnGamePause(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGamePause");
		
		AScramSportManagerTennis_Blueprint_C_OnGamePause_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoadTennisState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      player1Instrument                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      player2Instrument                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      activeArenaScramble                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::LoadTennisState(class UClass* Ball, class UClass* player1Instrument, class UClass* player2Instrument, class UClass* activeArenaScramble)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoadTennisState");
		
		AScramSportManagerTennis_Blueprint_C_LoadTennisState_Params params {};
		params.Ball = Ball;
		params.player1Instrument = player1Instrument;
		params.player2Instrument = player2Instrument;
		params.activeArenaScramble = activeArenaScramble;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Multi_RestoreState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            P1Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            P2Score                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player1Games                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2Games                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Player2Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::Multi_RestoreState(int32_t P1Score, int32_t P2Score, int32_t Player1Games, int32_t Player2Games, bool Player1Serve, bool Player2Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Multi_RestoreState");
		
		AScramSportManagerTennis_Blueprint_C_Multi_RestoreState_Params params {};
		params.P1Score = P1Score;
		params.P2Score = P2Score;
		params.Player1Games = Player1Games;
		params.Player2Games = Player2Games;
		params.Player1Serve = Player1Serve;
		params.Player2Serve = Player2Serve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::ServerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServerReady");
		
		AScramSportManagerTennis_Blueprint_C_ServerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameDone
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::OnGameDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameDone");
		
		AScramSportManagerTennis_Blueprint_C_OnGameDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.NetDisablePause
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::NetDisablePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.NetDisablePause");
		
		AScramSportManagerTennis_Blueprint_C_NetDisablePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseUmpVox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::PlayPoint(bool UseUmpVox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayPoint");
		
		AScramSportManagerTennis_Blueprint_C_PlayPoint_Params params {};
		params.UseUmpVox = UseUmpVox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ExecuteUbergraph_ScramSportManagerTennis_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::ExecuteUbergraph_ScramSportManagerTennis_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ExecuteUbergraph_ScramSportManagerTennis_Blueprint");
		
		AScramSportManagerTennis_Blueprint_C_ExecuteUbergraph_ScramSportManagerTennis_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.FaultServeResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::FaultServeResult__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.FaultServeResult__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_FaultServeResult__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LetServeResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::LetServeResult__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LetServeResult__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_LetServeResult__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PreServeStart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerTennis_Blueprint_C::PreServeStart__DelegateSignature(int32_t Game, int32_t Point, bool Player1Serve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PreServeStart__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_PreServeStart__DelegateSignature_Params params {};
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
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallInPlay__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::BallInPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallInPlay__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_BallInPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::PointComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointComplete__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_PointComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::ServeReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeReady__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_ServeReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerTennis_Blueprint_C::GameComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameComplete__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_GameComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MatchComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerTennis_Blueprint_C::MatchComplete__DelegateSignature(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MatchComplete__DelegateSignature");
		
		AScramSportManagerTennis_Blueprint_C_MatchComplete__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerTennis_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerTennis_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C");
		return ptr;
	}

}


