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
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.BallHitRacket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Instrument_Base_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.BallHitRacket");
		
		ABB_Instrument_Base_C_BallHitRacket_Params params {};
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
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.UpdateMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.UpdateMesh");
		
		ABB_Instrument_Base_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.SelectRandomReplacement
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::SelectRandomReplacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.SelectRandomReplacement");
		
		ABB_Instrument_Base_C_SelectRandomReplacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.PlaySpawnFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::PlaySpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.PlaySpawnFX");
		
		ABB_Instrument_Base_C_PlaySpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.SetSFXOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HardHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Instrument_Base_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.SetSFXOverride");
		
		ABB_Instrument_Base_C_SetSFXOverride_Params params {};
		params.BallClass = BallClass;
		params.HardHit = HardHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.PlayBallHitSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.PlayBallHitSound");
		
		ABB_Instrument_Base_C_PlayBallHitSound_Params params {};
		params.BallSpeed = BallSpeed;
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.InitInstrument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::InitInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InitInstrument");
		
		ABB_Instrument_Base_C_InitInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.UserConstructionScript");
		
		ABB_Instrument_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::Grow__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__FinishedFunc");
		
		ABB_Instrument_Base_C_Grow__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::Grow__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__UpdateFunc");
		
		ABB_Instrument_Base_C_Grow__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::Shrink__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__FinishedFunc");
		
		ABB_Instrument_Base_C_Shrink__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::Shrink__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__UpdateFunc");
		
		ABB_Instrument_Base_C_Shrink__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.OnLoaded_427B66CA4A4B8B64A37F659956E60B75
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::OnLoaded_427B66CA4A4B8B64A37F659956E60B75(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.OnLoaded_427B66CA4A4B8B64A37F659956E60B75");
		
		ABB_Instrument_Base_C_OnLoaded_427B66CA4A4B8B64A37F659956E60B75_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.ShowInstrument
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::ShowInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ShowInstrument");
		
		ABB_Instrument_Base_C_ShowInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.ShrinkRemoveInstrument
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::ShrinkRemoveInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ShrinkRemoveInstrument");
		
		ABB_Instrument_Base_C_ShrinkRemoveInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ReceiveBeginPlay");
		
		ABB_Instrument_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentReleased");
		
		ABB_Instrument_Base_C_InstrumentReleased_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.DestroyPrimitive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::DestroyPrimitive(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.DestroyPrimitive");
		
		ABB_Instrument_Base_C_DestroyPrimitive_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::InstrumentSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentSelected");
		
		ABB_Instrument_Base_C_InstrumentSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.SpawnEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.SpawnEffect");
		
		ABB_Instrument_Base_C_SpawnEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.DisableSpawnFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Instrument_Base_C::DisableSpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.DisableSpawnFX");
		
		ABB_Instrument_Base_C_DisableSpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::InstrumentHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentHit");
		
		ABB_Instrument_Base_C_InstrumentHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Instrument_Base.BB_Instrument_Base_C.ExecuteUbergraph_BB_Instrument_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Instrument_Base_C::ExecuteUbergraph_BB_Instrument_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ExecuteUbergraph_BB_Instrument_Base");
		
		ABB_Instrument_Base_C_ExecuteUbergraph_BB_Instrument_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Instrument_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Instrument_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Instrument_Base.BB_Instrument_Base_C");
		return ptr;
	}

}


