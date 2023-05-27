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
	 * 		Name   -> Function BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Equipment_Set_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript");
		
		ABB_Equipment_Set_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Equipment_Set_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay");
		
		ABB_Equipment_Set_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveGrabbable*                    DominantHandSpawnedEquipment                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AScramPrimitiveGrabbable*                    OffHandSpawnedEquipment                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Equipment_Set_C::PostEquipmentSpawn(class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, class AScramPrimitiveGrabbable* OffHandSpawnedEquipment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn");
		
		ABB_Equipment_Set_C_PostEquipmentSpawn_Params params {};
		params.DominantHandSpawnedEquipment = DominantHandSpawnedEquipment;
		params.OffHandSpawnedEquipment = OffHandSpawnedEquipment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Equipment_Set_C::ExecuteUbergraph_BB_Equipment_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set");
		
		ABB_Equipment_Set_C_ExecuteUbergraph_BB_Equipment_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABB_Mitt_C*                                  Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Equipment_Set_C::EquipmentGrabbed__DelegateSignature(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature");
		
		ABB_Equipment_Set_C_EquipmentGrabbed__DelegateSignature_Params params {};
		params.DominantHand = DominantHand;
		params.Mitt = Mitt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Equipment_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Equipment_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Equipment_Set.BB_Equipment_Set_C");
		return ptr;
	}

}


