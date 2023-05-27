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
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyGrabbableBase_C::SpawnBounceSound(const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound");
		
		ABP_TrophyGrabbableBase_C_SpawnBounceSound_Params params {};
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrophyGrabbableBase_C::SetVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility");
		
		ABP_TrophyGrabbableBase_C_SetVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::ForceRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn");
		
		ABP_TrophyGrabbableBase_C_ForceRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript");
		
		ABP_TrophyGrabbableBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Scale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc");
		
		ABP_TrophyGrabbableBase_C_Scale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Scale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc");
		
		ABP_TrophyGrabbableBase_C_Scale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc");
		
		ABP_TrophyGrabbableBase_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc");
		
		ABP_TrophyGrabbableBase_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc");
		
		ABP_TrophyGrabbableBase_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc");
		
		ABP_TrophyGrabbableBase_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::FXRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn");
		
		ABP_TrophyGrabbableBase_C_FXRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrophyGrabbableBase_C::SpawnFX(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX");
		
		ABP_TrophyGrabbableBase_C_SpawnFX_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::DestroyTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy");
		
		ABP_TrophyGrabbableBase_C_DestroyTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_TrophyGrabbableBase_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit");
		
		ABP_TrophyGrabbableBase_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyGrabbableBase_C::Play_Grab_SFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX");
		
		ABP_TrophyGrabbableBase_C_Play_Grab_SFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyGrabbableBase_C::ExecuteUbergraph_BP_TrophyGrabbableBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase");
		
		ABP_TrophyGrabbableBase_C_ExecuteUbergraph_BP_TrophyGrabbableBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyGrabbableBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyGrabbableBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C");
		return ptr;
	}

}


