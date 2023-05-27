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
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ScrambleClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::SpawnIcon_Ball(const struct FTransform& Transform, int32_t ID, class UClass* ScrambleClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Ball_Params params {};
		params.Transform = Transform;
		params.ID = ID;
		params.ScrambleClass = ScrambleClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RemoveAllTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RemoveAllTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ScrambleClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::SpawnIcon_Instrument(const struct FTransform& Transform, int32_t ID, class UClass* ScrambleClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Instrument_Params params {};
		params.Transform = Transform;
		params.ID = ID;
		params.ScrambleClass = ScrambleClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.Initialize");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RotateBall__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RotateBall__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RotateBall__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RotateBall__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RotateInstrument__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RotateInstrument__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RotateBallIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RotateBallIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::RotateInstrumentIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_RotateInstrumentIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopBallIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::StopBallIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopBallIcon");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_StopBallIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::StopInstrumentIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_StopInstrumentIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_PassNPlay_ScrambleTargetGroup_C::ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup");
		
		ATN_PassNPlay_ScrambleTargetGroup_C_ExecuteUbergraph_TN_PassNPlay_ScrambleTargetGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_PassNPlay_ScrambleTargetGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_PassNPlay_ScrambleTargetGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_PassNPlay_ScrambleTargetGroup.TN_PassNPlay_ScrambleTargetGroup_C");
		return ptr;
	}

}


