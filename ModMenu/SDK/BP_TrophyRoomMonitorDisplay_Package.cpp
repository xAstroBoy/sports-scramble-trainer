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
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.HideTrophyInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::HideTrophyInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.HideTrophyInfo");
		
		ABP_TrophyRoomMonitorDisplay_C_HideTrophyInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ShowTrophyInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TrophyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               WasEarned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      DateEarned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Requirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::ShowTrophyInfo(const class FName& TrophyName, const class FText& Description, bool WasEarned, const class FString& DateEarned, int32_t Progress, int32_t Requirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ShowTrophyInfo");
		
		ABP_TrophyRoomMonitorDisplay_C_ShowTrophyInfo_Params params {};
		params.TrophyName = TrophyName;
		params.Description = Description;
		params.WasEarned = WasEarned;
		params.DateEarned = DateEarned;
		params.Progress = Progress;
		params.Requirement = Requirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.UserConstructionScript");
		
		ABP_TrophyRoomMonitorDisplay_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::IconRotate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__FinishedFunc");
		
		ABP_TrophyRoomMonitorDisplay_C_IconRotate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::IconRotate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__UpdateFunc");
		
		ABP_TrophyRoomMonitorDisplay_C_IconRotate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ReceiveBeginPlay");
		
		ABP_TrophyRoomMonitorDisplay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ExecuteUbergraph_BP_TrophyRoomMonitorDisplay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyRoomMonitorDisplay_C::ExecuteUbergraph_BP_TrophyRoomMonitorDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ExecuteUbergraph_BP_TrophyRoomMonitorDisplay");
		
		ABP_TrophyRoomMonitorDisplay_C_ExecuteUbergraph_BP_TrophyRoomMonitorDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyRoomMonitorDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyRoomMonitorDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C");
		return ptr;
	}

}


