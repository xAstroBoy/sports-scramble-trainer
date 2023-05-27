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
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.CheckTrophyCompletion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyRoomTrophy_C::CheckTrophyCompletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.CheckTrophyCompletion");
		
		AScramTrophyRoomTrophy_C_CheckTrophyCompletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyRoomTrophy_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.Initialize");
		
		AScramTrophyRoomTrophy_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyRoomTrophy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.UserConstructionScript");
		
		AScramTrophyRoomTrophy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramTrophyRoomTrophy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveBeginPlay");
		
		AScramTrophyRoomTrophy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerLookAtTrophy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyRoomTrophy_C::OnPlayerLookAtTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerLookAtTrophy");
		
		AScramTrophyRoomTrophy_C_OnPlayerLookAtTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerStopLookAtTrophy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyRoomTrophy_C::OnPlayerStopLookAtTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerStopLookAtTrophy");
		
		AScramTrophyRoomTrophy_C_OnPlayerStopLookAtTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyRoomTrophy_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveEndPlay");
		
		AScramTrophyRoomTrophy_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ExecuteUbergraph_ScramTrophyRoomTrophy
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyRoomTrophy_C::ExecuteUbergraph_ScramTrophyRoomTrophy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ExecuteUbergraph_ScramTrophyRoomTrophy");
		
		AScramTrophyRoomTrophy_C_ExecuteUbergraph_ScramTrophyRoomTrophy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrophyRoomTrophy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrophyRoomTrophy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C");
		return ptr;
	}

}


