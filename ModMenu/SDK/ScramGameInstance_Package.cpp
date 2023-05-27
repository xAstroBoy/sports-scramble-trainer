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
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.SpawnErrorMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UScramGameInstance_C::SpawnErrorMessage(const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.SpawnErrorMessage");
		
		UScramGameInstance_C_SpawnErrorMessage_Params params {};
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.LoadReflectionLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::LoadReflectionLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.LoadReflectionLevel");
		
		UScramGameInstance_C_LoadReflectionLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.UnloadLevels
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::UnloadLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.UnloadLevels");
		
		UScramGameInstance_C_UnloadLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.SetAnchorToArena
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHost                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::SetAnchorToArena(const class FName& RowName, bool IsHost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.SetAnchorToArena");
		
		UScramGameInstance_C_SetAnchorToArena_Params params {};
		params.RowName = RowName;
		params.IsHost = IsHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CreateTravelCapsuleNoTeleport
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  OverrideTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverrideTransform                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StartRed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ATravelcapsule_C*                            TravelCapsule                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AlreadyExisted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::CreateTravelCapsuleNoTeleport(const struct FTransform& OverrideTransform, bool UseOverrideTransform, bool Instant, bool StartRed, class ATravelcapsule_C** TravelCapsule, bool* AlreadyExisted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CreateTravelCapsuleNoTeleport");
		
		UScramGameInstance_C_CreateTravelCapsuleNoTeleport_Params params {};
		params.OverrideTransform = OverrideTransform;
		params.UseOverrideTransform = UseOverrideTransform;
		params.Instant = Instant;
		params.StartRed = StartRed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TravelCapsule != nullptr)
			*TravelCapsule = params.TravelCapsule;
		if (AlreadyExisted != nullptr)
			*AlreadyExisted = params.AlreadyExisted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CheckIsSpectator
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSpectator                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::CheckIsSpectator(bool* IsSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CheckIsSpectator");
		
		UScramGameInstance_C_CheckIsSpectator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpectator != nullptr)
			*IsSpectator = params.IsSpectator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.PrepareInstrumentReinit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::PrepareInstrumentReinit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.PrepareInstrumentReinit");
		
		UScramGameInstance_C_PrepareInstrumentReinit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.SetSportType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               KeepInstruments                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::SetSportType(EScramSport Sport, bool KeepInstruments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.SetSportType");
		
		UScramGameInstance_C_SetSportType_Params params {};
		params.Sport = Sport;
		params.KeepInstruments = KeepInstruments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.EnableMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::EnableMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.EnableMusic");
		
		UScramGameInstance_C_EnableMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.DisableMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::DisableMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.DisableMusic");
		
		UScramGameInstance_C_DisableMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ForceChangeInstrument
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewInstrumentClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropOldInstrument                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AScramPlayerHand*                            HandActorOptional                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseHandedness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AScramInstrument*                            NewInstrument                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::ForceChangeInstrument(class UClass* NewInstrumentClass, bool DropOldInstrument, class AScramPlayerHand* HandActorOptional, bool UseHandedness, class AScramInstrument** NewInstrument)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ForceChangeInstrument");
		
		UScramGameInstance_C_ForceChangeInstrument_Params params {};
		params.NewInstrumentClass = NewInstrumentClass;
		params.DropOldInstrument = DropOldInstrument;
		params.HandActorOptional = HandActorOptional;
		params.UseHandedness = UseHandedness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInstrument != nullptr)
			*NewInstrument = params.NewInstrument;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.DisplayDebugString
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DebugString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Durtation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::DisplayDebugString(const class FString& DebugString, float Durtation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.DisplayDebugString");
		
		UScramGameInstance_C_DisplayDebugString_Params params {};
		params.DebugString = DebugString;
		params.Durtation = Durtation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A160D238
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_A6825E2046D1EE4480D53F85A160D238()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A160D238");
		
		UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A160D238_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A160D238
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_A6825E2046D1EE4480D53F85A160D238()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A160D238");
		
		UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A160D238_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB79AE5A05D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_E218766E479159D426108DB79AE5A05D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB79AE5A05D");
		
		UScramGameInstance_C_OnFailure_E218766E479159D426108DB79AE5A05D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB79AE5A05D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_E218766E479159D426108DB79AE5A05D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB79AE5A05D");
		
		UScramGameInstance_C_OnSuccess_E218766E479159D426108DB79AE5A05D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85CD6B33B6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_A6825E2046D1EE4480D53F85CD6B33B6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85CD6B33B6");
		
		UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85CD6B33B6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6");
		
		UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7F6EE41D3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_E218766E479159D426108DB7F6EE41D3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7F6EE41D3");
		
		UScramGameInstance_C_OnFailure_E218766E479159D426108DB7F6EE41D3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7F6EE41D3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_E218766E479159D426108DB7F6EE41D3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7F6EE41D3");
		
		UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7F6EE41D3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A91F0ECD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_A6825E2046D1EE4480D53F85A91F0ECD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A91F0ECD");
		
		UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A91F0ECD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD");
		
		UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7929A7CA8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_E218766E479159D426108DB7929A7CA8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7929A7CA8");
		
		UScramGameInstance_C_OnFailure_E218766E479159D426108DB7929A7CA8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7929A7CA8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_E218766E479159D426108DB7929A7CA8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7929A7CA8");
		
		UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7929A7CA8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_195EB2254E8E108525A7CCA39EDA45EB
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnFailure_195EB2254E8E108525A7CCA39EDA45EB(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_195EB2254E8E108525A7CCA39EDA45EB");
		
		UScramGameInstance_C_OnFailure_195EB2254E8E108525A7CCA39EDA45EB_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_195EB2254E8E108525A7CCA39EDA45EB
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnSuccess_195EB2254E8E108525A7CCA39EDA45EB(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_195EB2254E8E108525A7CCA39EDA45EB");
		
		UScramGameInstance_C_OnSuccess_195EB2254E8E108525A7CCA39EDA45EB_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_2068A73A4E27B76D6515A3A4308C2A02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_2068A73A4E27B76D6515A3A4308C2A02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_2068A73A4E27B76D6515A3A4308C2A02");
		
		UScramGameInstance_C_OnFailure_2068A73A4E27B76D6515A3A4308C2A02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2068A73A4E27B76D6515A3A4308C2A02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_2068A73A4E27B76D6515A3A4308C2A02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2068A73A4E27B76D6515A3A4308C2A02");
		
		UScramGameInstance_C_OnSuccess_2068A73A4E27B76D6515A3A4308C2A02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_FFC99656425C039A8BCC99955A3E5515
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnFailure_FFC99656425C039A8BCC99955A3E5515(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_FFC99656425C039A8BCC99955A3E5515");
		
		UScramGameInstance_C_OnFailure_FFC99656425C039A8BCC99955A3E5515_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_FFC99656425C039A8BCC99955A3E5515
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnSuccess_FFC99656425C039A8BCC99955A3E5515(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_FFC99656425C039A8BCC99955A3E5515");
		
		UScramGameInstance_C_OnSuccess_FFC99656425C039A8BCC99955A3E5515_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B");
		
		UScramGameInstance_C_OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B");
		
		UScramGameInstance_C_OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4");
		
		UScramGameInstance_C_OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4");
		
		UScramGameInstance_C_OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_2E9EF70F49117325F129FCAEC8708411
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnFailure_2E9EF70F49117325F129FCAEC8708411(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_2E9EF70F49117325F129FCAEC8708411");
		
		UScramGameInstance_C_OnFailure_2E9EF70F49117325F129FCAEC8708411_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2E9EF70F49117325F129FCAEC8708411
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnSuccess_2E9EF70F49117325F129FCAEC8708411(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2E9EF70F49117325F129FCAEC8708411");
		
		UScramGameInstance_C_OnSuccess_2E9EF70F49117325F129FCAEC8708411_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_28C0B15B470A9AA54E923CAC6773937B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_28C0B15B470A9AA54E923CAC6773937B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_28C0B15B470A9AA54E923CAC6773937B");
		
		UScramGameInstance_C_OnFailure_28C0B15B470A9AA54E923CAC6773937B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_28C0B15B470A9AA54E923CAC6773937B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_28C0B15B470A9AA54E923CAC6773937B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_28C0B15B470A9AA54E923CAC6773937B");
		
		UScramGameInstance_C_OnSuccess_28C0B15B470A9AA54E923CAC6773937B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_1933FE3C43C128FAB9B71398D3ED0723
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnFailure_1933FE3C43C128FAB9B71398D3ED0723()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_1933FE3C43C128FAB9B71398D3ED0723");
		
		UScramGameInstance_C_OnFailure_1933FE3C43C128FAB9B71398D3ED0723_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_1933FE3C43C128FAB9B71398D3ED0723
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnSuccess_1933FE3C43C128FAB9B71398D3ED0723()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_1933FE3C43C128FAB9B71398D3ED0723");
		
		UScramGameInstance_C_OnSuccess_1933FE3C43C128FAB9B71398D3ED0723_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnFailure_B64C966143C1313AC5BD979ACFAE5B69
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnFailure_B64C966143C1313AC5BD979ACFAE5B69(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnFailure_B64C966143C1313AC5BD979ACFAE5B69");
		
		UScramGameInstance_C_OnFailure_B64C966143C1313AC5BD979ACFAE5B69_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnSuccess_B64C966143C1313AC5BD979ACFAE5B69
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::OnSuccess_B64C966143C1313AC5BD979ACFAE5B69(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnSuccess_B64C966143C1313AC5BD979ACFAE5B69");
		
		UScramGameInstance_C_OnSuccess_B64C966143C1313AC5BD979ACFAE5B69_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnLoaded_A155B1A0419914351D88EF9C6B11F64C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::OnLoaded_A155B1A0419914351D88EF9C6B11F64C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnLoaded_A155B1A0419914351D88EF9C6B11F64C");
		
		UScramGameInstance_C_OnLoaded_A155B1A0419914351D88EF9C6B11F64C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.LoadArena
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoRender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::LoadArena(const class FName& Level, bool NoRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.LoadArena");
		
		UScramGameInstance_C_LoadArena_Params params {};
		params.Level = Level;
		params.NoRender = NoRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.GeoLevelLoadComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::GeoLevelLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.GeoLevelLoadComplete");
		
		UScramGameInstance_C_GeoLevelLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelLoadComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::PrimaryLevelLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelLoadComplete");
		
		UScramGameInstance_C_PrimaryLevelLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.SetLevelVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::SetLevelVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.SetLevelVisibility");
		
		UScramGameInstance_C_SetLevelVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.LoadArenaGameplayAndGeo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Training                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::LoadArenaGameplayAndGeo(EScramSport Sport, bool Training)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.LoadArenaGameplayAndGeo");
		
		UScramGameInstance_C_LoadArenaGameplayAndGeo_Params params {};
		params.Sport = Sport;
		params.Training = Training;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.LoadArenaGeo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::LoadArenaGeo(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.LoadArenaGeo");
		
		UScramGameInstance_C_LoadArenaGeo_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.GeoLevelShown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::GeoLevelShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.GeoLevelShown");
		
		UScramGameInstance_C_GeoLevelShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.TeleportPlayArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PlayAreaTransformLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    PlayAreaTransformRotation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseTransitionDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TransitionDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBox                                        minPlayArea                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBox                                        maxPlayArea                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBox                                        maxHazardArea                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::TeleportPlayArea(const struct FVector& PlayAreaTransformLocation, const struct FRotator& PlayAreaTransformRotation, bool UseTransitionDuration, float TransitionDuration, const struct FBox& minPlayArea, const struct FBox& maxPlayArea, const struct FBox& maxHazardArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.TeleportPlayArea");
		
		UScramGameInstance_C_TeleportPlayArea_Params params {};
		params.PlayAreaTransformLocation = PlayAreaTransformLocation;
		params.PlayAreaTransformRotation = PlayAreaTransformRotation;
		params.UseTransitionDuration = UseTransitionDuration;
		params.TransitionDuration = TransitionDuration;
		params.minPlayArea = minPlayArea;
		params.maxPlayArea = maxPlayArea;
		params.maxHazardArea = maxHazardArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.TeleportReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::TeleportReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.TeleportReady");
		
		UScramGameInstance_C_TeleportReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.TeleportComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::TeleportComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.TeleportComplete");
		
		UScramGameInstance_C_TeleportComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.HidePlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::HidePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.HidePlayer");
		
		UScramGameInstance_C_HidePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.Host_Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LAN                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::Host_Game(bool LAN, const class FName& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.Host_Game");
		
		UScramGameInstance_C_Host_Game_Params params {};
		params.LAN = LAN;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.GetSessions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LAN                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::GetSessions(bool LAN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.GetSessions");
		
		UScramGameInstance_C_GetSessions_Params params {};
		params.LAN = LAN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.JoinMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               LAN                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::JoinMatch(const class FString& ServerName, bool LAN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.JoinMatch");
		
		UScramGameInstance_C_JoinMatch_Params params {};
		params.ServerName = ServerName;
		params.LAN = LAN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.EndMultiplayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::EndMultiplayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.EndMultiplayer");
		
		UScramGameInstance_C_EndMultiplayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ShowDebugMessage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		float                                              LifeTime                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::ShowDebugMessage(const class FString& Message, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ShowDebugMessage");
		
		UScramGameInstance_C_ShowDebugMessage_Params params {};
		params.Message = Message;
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OCDemo_FindSession
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OCDemo_FindSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OCDemo_FindSession");
		
		UScramGameInstance_C_OCDemo_FindSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OCDemo_Host
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Absolute                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::OCDemo_Host(const class FName& LevelName, bool Absolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OCDemo_Host");
		
		UScramGameInstance_C_OCDemo_Host_Params params {};
		params.LevelName = LevelName;
		params.Absolute = Absolute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OCDemo_Join
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OCDemo_Join()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OCDemo_Join");
		
		UScramGameInstance_C_OCDemo_Join_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.DebugOCDemoServerList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::DebugOCDemoServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.DebugOCDemoServerList");
		
		UScramGameInstance_C_DebugOCDemoServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.FindAndJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::FindAndJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.FindAndJoin");
		
		UScramGameInstance_C_FindAndJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.AttemptToJoin
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              SessionsFound                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::AttemptToJoin(TArray<class FString>* SessionsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.AttemptToJoin");
		
		UScramGameInstance_C_AttemptToJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionsFound != nullptr)
			*SessionsFound = params.SessionsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.SelfSessionsUnbind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::SelfSessionsUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.SelfSessionsUnbind");
		
		UScramGameInstance_C_SelfSessionsUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.TryAnother
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::TryAnother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.TryAnother");
		
		UScramGameInstance_C_TryAnother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CheckConnection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::CheckConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CheckConnection");
		
		UScramGameInstance_C_CheckConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CheckSessionFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::CheckSessionFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CheckSessionFailed");
		
		UScramGameInstance_C_CheckSessionFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CheckSessionFound
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              SessionsFound                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::CheckSessionFound(TArray<class FString>* SessionsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CheckSessionFound");
		
		UScramGameInstance_C_CheckSessionFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionsFound != nullptr)
			*SessionsFound = params.SessionsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CheckSessionSuccessNoValid
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::CheckSessionSuccessNoValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CheckSessionSuccessNoValid");
		
		UScramGameInstance_C_CheckSessionSuccessNoValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.HandleTravelError
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETravelFailure                                     failureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::HandleTravelError(ETravelFailure failureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.HandleTravelError");
		
		UScramGameInstance_C_HandleTravelError_Params params {};
		params.failureType = failureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.HandleNetworkError
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ENetworkFailure                                    failureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsServer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::HandleNetworkError(ENetworkFailure failureType, bool bIsServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.HandleNetworkError");
		
		UScramGameInstance_C_HandleNetworkError_Params params {};
		params.failureType = failureType;
		params.bIsServer = bIsServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ReceiveInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ReceiveInit");
		
		UScramGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.AppWillEnterBackground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::AppWillEnterBackground(bool LocalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.AppWillEnterBackground");
		
		UScramGameInstance_C_AppWillEnterBackground_Params params {};
		params.LocalEvent = LocalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.AppHasEnteredForeground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::AppHasEnteredForeground(bool LocalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.AppHasEnteredForeground");
		
		UScramGameInstance_C_AppHasEnteredForeground_Params params {};
		params.LocalEvent = LocalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.AppWillDeactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::AppWillDeactivate(bool LocalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.AppWillDeactivate");
		
		UScramGameInstance_C_AppWillDeactivate_Params params {};
		params.LocalEvent = LocalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.AppHasReactivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::AppHasReactivated(bool LocalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.AppHasReactivated");
		
		UScramGameInstance_C_AppHasReactivated_Params params {};
		params.LocalEvent = LocalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.AppWillTerminate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::AppWillTerminate(bool LocalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.AppWillTerminate");
		
		UScramGameInstance_C_AppWillTerminate_Params params {};
		params.LocalEvent = LocalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.SetAvatarLook
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UScramGameInstance_C::SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.SetAvatarLook");
		
		UScramGameInstance_C_SetAvatarLook_Params params {};
		params.pPlayer = pPlayer;
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.BroadcastLocalAvatarLook
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::BroadcastLocalAvatarLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.BroadcastLocalAvatarLook");
		
		UScramGameInstance_C_BroadcastLocalAvatarLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.GameInvitePing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            pingCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::GameInvitePing(int32_t pingCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.GameInvitePing");
		
		UScramGameInstance_C_GameInvitePing_Params params {};
		params.pingCount = pingCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ClearDebugMessages
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance_C::ClearDebugMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ClearDebugMessages");
		
		UScramGameInstance_C_ClearDebugMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnShellInviteAccepted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramGameInvite                            GameInvite                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UScramGameInstance_C::OnShellInviteAccepted(const struct FScramGameInvite& GameInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnShellInviteAccepted");
		
		UScramGameInstance_C_OnShellInviteAccepted_Params params {};
		params.GameInvite = GameInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.BindShellInviteAcceptedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::BindShellInviteAcceptedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.BindShellInviteAcceptedEvent");
		
		UScramGameInstance_C_BindShellInviteAcceptedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnControllerConnectionChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsConnected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::OnControllerConnectionChanged(bool IsConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnControllerConnectionChanged");
		
		UScramGameInstance_C_OnControllerConnectionChanged_Params params {};
		params.IsConnected = IsConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnHeadsetReconnected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnHeadsetReconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnHeadsetReconnected");
		
		UScramGameInstance_C_OnHeadsetReconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnHeadsetDisconnected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnHeadsetDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnHeadsetDisconnected");
		
		UScramGameInstance_C_OnHeadsetDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnInputFocusLost
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnInputFocusLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnInputFocusLost");
		
		UScramGameInstance_C_OnInputFocusLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OnInputFocusReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance_C::OnInputFocusReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OnInputFocusReceived");
		
		UScramGameInstance_C_OnInputFocusReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.Focus Recieved PauseEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::FocusRecievedPauseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.Focus Recieved PauseEvent");
		
		UScramGameInstance_C_FocusRecievedPauseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.Focus Lost PauseEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::FocusLostPauseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.Focus Lost PauseEvent");
		
		UScramGameInstance_C_FocusLostPauseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.PreliminaryConnectionCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::PreliminaryConnectionCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.PreliminaryConnectionCheck");
		
		UScramGameInstance_C_PreliminaryConnectionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ShowErrorMessageOnSpectatorScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::ShowErrorMessageOnSpectatorScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ShowErrorMessageOnSpectatorScreen");
		
		UScramGameInstance_C_ShowErrorMessageOnSpectatorScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.HideSpectatorMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::HideSpectatorMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.HideSpectatorMessage");
		
		UScramGameInstance_C_HideSpectatorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ExecuteUbergraph_ScramGameInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::ExecuteUbergraph_ScramGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ExecuteUbergraph_ScramGameInstance");
		
		UScramGameInstance_C_ExecuteUbergraph_ScramGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ControllerConnectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsConnected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::ControllerConnectionChanged__DelegateSignature(bool IsConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ControllerConnectionChanged__DelegateSignature");
		
		UScramGameInstance_C_ControllerConnectionChanged__DelegateSignature_Params params {};
		params.IsConnected = IsConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.HeadsetStatusChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Disconnected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::HeadsetStatusChanged__DelegateSignature(bool Disconnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.HeadsetStatusChanged__DelegateSignature");
		
		UScramGameInstance_C_HeadsetStatusChanged__DelegateSignature_Params params {};
		params.Disconnected = Disconnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.LevelsUnloaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::LevelsUnloaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.LevelsUnloaded__DelegateSignature");
		
		UScramGameInstance_C_LevelsUnloaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.CheckConnectionResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConnectionOk                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScramGameInstance_C::CheckConnectionResult__DelegateSignature(bool ConnectionOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.CheckConnectionResult__DelegateSignature");
		
		UScramGameInstance_C_CheckConnectionResult__DelegateSignature_Params params {};
		params.ConnectionOk = ConnectionOk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.FindSessionsFailed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::FindSessionsFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.FindSessionsFailed__DelegateSignature");
		
		UScramGameInstance_C_FindSessionsFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.HostingFailed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::HostingFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.HostingFailed__DelegateSignature");
		
		UScramGameInstance_C_HostingFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.JoinFailedAll__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::JoinFailedAll__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.JoinFailedAll__DelegateSignature");
		
		UScramGameInstance_C_JoinFailedAll__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.ExistingTeleportTransitionReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::ExistingTeleportTransitionReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.ExistingTeleportTransitionReady__DelegateSignature");
		
		UScramGameInstance_C_ExistingTeleportTransitionReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.LevelBPDispatch__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DispatchId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::LevelBPDispatch__DelegateSignature(int32_t DispatchId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.LevelBPDispatch__DelegateSignature");
		
		UScramGameInstance_C_LevelBPDispatch__DelegateSignature_Params params {};
		params.DispatchId = DispatchId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionNotFound__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::OCDemoSessionNotFound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionNotFound__DelegateSignature");
		
		UScramGameInstance_C_OCDemoSessionNotFound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionFound__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UScramGameInstance_C::OCDemoSessionFound__DelegateSignature(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionFound__DelegateSignature");
		
		UScramGameInstance_C_OCDemoSessionFound__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.GeoLevelChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewGeoLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::GeoLevelChanged__DelegateSignature(const class FName& NewGeoLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.GeoLevelChanged__DelegateSignature");
		
		UScramGameInstance_C_GeoLevelChanged__DelegateSignature_Params params {};
		params.NewGeoLevel = NewGeoLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScramGameInstance_C::PrimaryLevelChanged__DelegateSignature(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelChanged__DelegateSignature");
		
		UScramGameInstance_C_PrimaryLevelChanged__DelegateSignature_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::TeleportTransitionComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionComplete__DelegateSignature");
		
		UScramGameInstance_C_TeleportTransitionComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::TeleportTransitionReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionReady__DelegateSignature");
		
		UScramGameInstance_C_TeleportTransitionReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.JoinSuccess__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::JoinSuccess__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.JoinSuccess__DelegateSignature");
		
		UScramGameInstance_C_JoinSuccess__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.JoinFailed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::JoinFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.JoinFailed__DelegateSignature");
		
		UScramGameInstance_C_JoinFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.NoSessionsFound__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance_C::NoSessionsFound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.NoSessionsFound__DelegateSignature");
		
		UScramGameInstance_C_NoSessionsFound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameInstance.ScramGameInstance_C.MultiplayerSessionsFound__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              SessionsFound                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UScramGameInstance_C::MultiplayerSessionsFound__DelegateSignature(TArray<class FString>* SessionsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameInstance.ScramGameInstance_C.MultiplayerSessionsFound__DelegateSignature");
		
		UScramGameInstance_C_MultiplayerSessionsFound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionsFound != nullptr)
			*SessionsFound = params.SessionsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramGameInstance.ScramGameInstance_C");
		return ptr;
	}

}


