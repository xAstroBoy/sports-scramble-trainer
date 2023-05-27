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
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.ServerForceUpdateDormancy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramGameMode_BP_C::ServerForceUpdateDormancy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ServerForceUpdateDormancy");
		
		AScramGameMode_BP_C_ServerForceUpdateDormancy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramGameMode_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.UserConstructionScript");
		
		AScramGameMode_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.K2_OnLogout
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameMode_BP_C::K2_OnLogout(class AController* ExitingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.K2_OnLogout");
		
		AScramGameMode_BP_C_K2_OnLogout_Params params {};
		params.ExitingController = ExitingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramGameMode_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ReceiveBeginPlay");
		
		AScramGameMode_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.StartOnlineMatchOfType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        SportType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameMode_BP_C::StartOnlineMatchOfType(EScramSport SportType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.StartOnlineMatchOfType");
		
		AScramGameMode_BP_C_StartOnlineMatchOfType_Params params {};
		params.SportType = SportType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.ClientSportPreferencesReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramGameMode_BP_C::ClientSportPreferencesReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ClientSportPreferencesReceived");
		
		AScramGameMode_BP_C_ClientSportPreferencesReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.K2_PostLogin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameMode_BP_C::K2_PostLogin(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.K2_PostLogin");
		
		AScramGameMode_BP_C_K2_PostLogin_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.SpawnOnlineGameHandler
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramGameMode_BP_C::SpawnOnlineGameHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.SpawnOnlineGameHandler");
		
		AScramGameMode_BP_C_SpawnOnlineGameHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.ExecuteUbergraph_ScramGameMode_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameMode_BP_C::ExecuteUbergraph_ScramGameMode_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ExecuteUbergraph_ScramGameMode_BP");
		
		AScramGameMode_BP_C_ExecuteUbergraph_ScramGameMode_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.ClientPlayerExit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 ExitingPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramGameMode_BP_C::ClientPlayerExit__DelegateSignature(class AController* ExitingPlayer, bool IsSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ClientPlayerExit__DelegateSignature");
		
		AScramGameMode_BP_C_ClientPlayerExit__DelegateSignature_Params params {};
		params.ExitingPlayer = ExitingPlayer;
		params.IsSpectator = IsSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameMode_BP.ScramGameMode_BP_C.NewPlayerJoin__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramGameMode_BP_C::NewPlayerJoin__DelegateSignature(class APlayerController* NewPlayer, bool IsSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.NewPlayerJoin__DelegateSignature");
		
		AScramGameMode_BP_C_NewPlayerJoin__DelegateSignature_Params params {};
		params.NewPlayer = NewPlayer;
		params.IsSpectator = IsSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramGameMode_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramGameMode_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramGameMode_BP.ScramGameMode_BP_C");
		return ptr;
	}

}


