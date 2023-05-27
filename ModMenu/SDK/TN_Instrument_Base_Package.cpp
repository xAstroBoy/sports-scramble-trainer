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
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.BallHitRacket
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Instrument_Base_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.BallHitRacket");
		
		ATN_Instrument_Base_C_BallHitRacket_Params params {};
		params.BallSpeed = BallSpeed;
		params.BallClass = BallClass;
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.UpdateMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.UpdateMesh");
		
		ATN_Instrument_Base_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.InitializeColors&Material
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::InitializeColorsMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.InitializeColors&Material");
		
		ATN_Instrument_Base_C_InitializeColorsMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.PrepareMotionBlur
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::PrepareMotionBlur()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PrepareMotionBlur");
		
		ATN_Instrument_Base_C_PrepareMotionBlur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.PlaySpawnFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::PlaySpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PlaySpawnFX");
		
		ATN_Instrument_Base_C_PlaySpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.SetSFXOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HardHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Instrument_Base_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.SetSFXOverride");
		
		ATN_Instrument_Base_C_SetSFXOverride_Params params {};
		params.BallClass = BallClass;
		params.HardHit = HardHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.PlayBallHitSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Instrument_Base_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PlayBallHitSound");
		
		ATN_Instrument_Base_C_PlayBallHitSound_Params params {};
		params.BallSpeed = BallSpeed;
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.InitInstrument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::InitInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.InitInstrument");
		
		ATN_Instrument_Base_C_InitInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.UserConstructionScript");
		
		ATN_Instrument_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::Grow__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__FinishedFunc");
		
		ATN_Instrument_Base_C_Grow__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::Grow__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__UpdateFunc");
		
		ATN_Instrument_Base_C_Grow__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::Shrink__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__FinishedFunc");
		
		ATN_Instrument_Base_C_Shrink__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::Shrink__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__UpdateFunc");
		
		ATN_Instrument_Base_C_Shrink__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::Timeline_Emissive__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__FinishedFunc");
		
		ATN_Instrument_Base_C_Timeline_Emissive__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::Timeline_Emissive__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__UpdateFunc");
		
		ATN_Instrument_Base_C_Timeline_Emissive__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.ShowInstrument
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::ShowInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ShowInstrument");
		
		ATN_Instrument_Base_C_ShowInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.ShrinkRemoveInstrument
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::ShrinkRemoveInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ShrinkRemoveInstrument");
		
		ATN_Instrument_Base_C_ShrinkRemoveInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ReceiveBeginPlay");
		
		ATN_Instrument_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.InstrumentReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Instrument_Base_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.InstrumentReleased");
		
		ATN_Instrument_Base_C_InstrumentReleased_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.DestroyPrimitive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Instrument_Base_C::DestroyPrimitive(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.DestroyPrimitive");
		
		ATN_Instrument_Base_C_DestroyPrimitive_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.SpawnEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Instrument_Base_C::SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.SpawnEffect");
		
		ATN_Instrument_Base_C_SpawnEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.DisableSpawnFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::DisableSpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.DisableSpawnFX");
		
		ATN_Instrument_Base_C_DisableSpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.PlayHitShaderFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETennisShotType                                    ShotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETennisBallType                                    BallType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Instrument_Base_C::PlayHitShaderFX(ETennisShotType ShotType, ETennisBallType BallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PlayHitShaderFX");
		
		ATN_Instrument_Base_C_PlayHitShaderFX_Params params {};
		params.ShotType = ShotType;
		params.BallType = BallType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarSwingVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::TN_PlayAvatarSwingVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarSwingVFX");
		
		ATN_Instrument_Base_C_TN_PlayAvatarSwingVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarHitVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Instrument_Base_C::TN_PlayAvatarHitVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarHitVFX");
		
		ATN_Instrument_Base_C_TN_PlayAvatarHitVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Instrument_Base.TN_Instrument_Base_C.ExecuteUbergraph_TN_Instrument_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Instrument_Base_C::ExecuteUbergraph_TN_Instrument_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ExecuteUbergraph_TN_Instrument_Base");
		
		ATN_Instrument_Base_C_ExecuteUbergraph_TN_Instrument_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Instrument_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Instrument_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Instrument_Base.TN_Instrument_Base_C");
		return ptr;
	}

}


