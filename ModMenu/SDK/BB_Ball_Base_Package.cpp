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
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.UpdateMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.UpdateMesh");
		
		ABB_Ball_Base_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopPitchVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopPitchVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopPitchVFX");
		
		ABB_Ball_Base_C_StopPitchVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopRollingFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopRollingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopRollingFX");
		
		ABB_Ball_Base_C_StopRollingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlayPitchVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlayPitchVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlayPitchVFX");
		
		ABB_Ball_Base_C_PlayPitchVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopAllShotTypeFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopAllShotTypeFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopAllShotTypeFX");
		
		ABB_Ball_Base_C_StopAllShotTypeFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopChargedSliceFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopChargedSliceFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopChargedSliceFX");
		
		ABB_Ball_Base_C_StopChargedSliceFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlayChargedSliceFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlayChargedSliceFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlayChargedSliceFX");
		
		ABB_Ball_Base_C_PlayChargedSliceFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopSliceFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopSliceFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopSliceFX");
		
		ABB_Ball_Base_C_StopSliceFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlaySliceFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlaySliceFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlaySliceFX");
		
		ABB_Ball_Base_C_PlaySliceFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopChargedFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopChargedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopChargedFX");
		
		ABB_Ball_Base_C_StopChargedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlayChargedFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlayChargedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlayChargedFX");
		
		ABB_Ball_Base_C_PlayChargedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.StopImbuedFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::StopImbuedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.StopImbuedFX");
		
		ABB_Ball_Base_C_StopImbuedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlayImbuedFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlayImbuedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlayImbuedFX");
		
		ABB_Ball_Base_C_PlayImbuedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlayDespawnFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlayDespawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlayDespawnFX");
		
		ABB_Ball_Base_C_PlayDespawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PlaySpawnFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PlaySpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PlaySpawnFX");
		
		ABB_Ball_Base_C_PlaySpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.SetTrail
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballShotType                                  ShotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::SetTrail(EBaseballShotType ShotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.SetTrail");
		
		ABB_Ball_Base_C_SetTrail_Params params {};
		params.ShotType = ShotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.ClearTrail
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               snap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Ball_Base_C::ClearTrail(bool snap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.ClearTrail");
		
		ABB_Ball_Base_C_ClearTrail_Params params {};
		params.snap = snap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.UserConstructionScript");
		
		ABB_Ball_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Ball_Base_C::Timeline_GrowTrail__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__FinishedFunc");
		
		ABB_Ball_Base_C_Timeline_GrowTrail__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Ball_Base_C::Timeline_GrowTrail__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__UpdateFunc");
		
		ABB_Ball_Base_C_Timeline_GrowTrail__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.ReceiveBeginPlay");
		
		ABB_Ball_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.ReceiveEndPlay");
		
		ABB_Ball_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.Ball Hit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.Ball Hit");
		
		ABB_Ball_Base_C_BallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.BallGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.BallGrabbed");
		
		ABB_Ball_Base_C_BallGrabbed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.BaseballHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::BaseballHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.BaseballHit");
		
		ABB_Ball_Base_C_BaseballHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.OnShotChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::OnShotChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.OnShotChanged");
		
		ABB_Ball_Base_C_OnShotChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.DestroyPrimitive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::DestroyPrimitive(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.DestroyPrimitive");
		
		ABB_Ball_Base_C_DestroyPrimitive_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.PitcherThrewBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::PitcherThrewBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.PitcherThrewBall");
		
		ABB_Ball_Base_C_PitcherThrewBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.OnFloorResultChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFloorResult                                       newFloorResult                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::OnFloorResultChanged(EFloorResult newFloorResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.OnFloorResultChanged");
		
		ABB_Ball_Base_C_OnFloorResultChanged_Params params {};
		params.newFloorResult = newFloorResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.BackWallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::BackWallHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.BackWallHit");
		
		ABB_Ball_Base_C_BackWallHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.OnImbuedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABB_Ball_Base_C::OnImbuedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.OnImbuedChanged");
		
		ABB_Ball_Base_C_OnImbuedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.Net_ChangeImbueVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowVFX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Ball_Base_C::Net_ChangeImbueVFX(bool ShowVFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.Net_ChangeImbueVFX");
		
		ABB_Ball_Base_C_Net_ChangeImbueVFX_Params params {};
		params.ShowVFX = ShowVFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Ball_Base.BB_Ball_Base_C.ExecuteUbergraph_BB_Ball_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Ball_Base_C::ExecuteUbergraph_BB_Ball_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Ball_Base.BB_Ball_Base_C.ExecuteUbergraph_BB_Ball_Base");
		
		ABB_Ball_Base_C_ExecuteUbergraph_BB_Ball_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Ball_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Ball_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Ball_Base.BB_Ball_Base_C");
		return ptr;
	}

}


