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
	 * 		Name   -> Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_GoldenGlove_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.UserConstructionScript");
		
		ABP_Trophy_BB_GoldenGlove_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.GrabbedBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_GoldenGlove_C::GrabbedBall(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.GrabbedBall");
		
		ABP_Trophy_BB_GoldenGlove_C_GrabbedBall_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Trophy_BB_GoldenGlove_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ReceiveBeginPlay");
		
		ABP_Trophy_BB_GoldenGlove_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.CatchEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FielderPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_GoldenGlove_C::CatchEvent(const struct FVector& FielderPosition, class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.CatchEvent");
		
		ABP_Trophy_BB_GoldenGlove_C_CatchEvent_Params params {};
		params.FielderPosition = FielderPosition;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ExecuteUbergraph_BP_Trophy_BB_GoldenGlove
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_GoldenGlove_C::ExecuteUbergraph_BP_Trophy_BB_GoldenGlove(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ExecuteUbergraph_BP_Trophy_BB_GoldenGlove");
		
		ABP_Trophy_BB_GoldenGlove_C_ExecuteUbergraph_BP_Trophy_BB_GoldenGlove_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Trophy_BB_GoldenGlove_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Trophy_BB_GoldenGlove_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C");
		return ptr;
	}

}


