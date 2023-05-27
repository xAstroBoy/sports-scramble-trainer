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
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.BallHitRacket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADB_Instrument_Base_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.BallHitRacket");
		
		ADB_Instrument_Base_C_BallHitRacket_Params params {};
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
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.SetSFXOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HardHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADB_Instrument_Base_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.SetSFXOverride");
		
		ADB_Instrument_Base_C_SetSFXOverride_Params params {};
		params.BallClass = BallClass;
		params.HardHit = HardHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.PlayBallHitSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADB_Instrument_Base_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.PlayBallHitSound");
		
		ADB_Instrument_Base_C_PlayBallHitSound_Params params {};
		params.BallSpeed = BallSpeed;
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.InitInstrument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::InitInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.InitInstrument");
		
		ADB_Instrument_Base_C_InitInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.UserConstructionScript");
		
		ADB_Instrument_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::Grow__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__FinishedFunc");
		
		ADB_Instrument_Base_C_Grow__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::Grow__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__UpdateFunc");
		
		ADB_Instrument_Base_C_Grow__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::Shrink__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__FinishedFunc");
		
		ADB_Instrument_Base_C_Shrink__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::Shrink__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__UpdateFunc");
		
		ADB_Instrument_Base_C_Shrink__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.ShowInstrument
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::ShowInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ShowInstrument");
		
		ADB_Instrument_Base_C_ShowInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.ShrinkRemoveInstrument
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::ShrinkRemoveInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ShrinkRemoveInstrument");
		
		ADB_Instrument_Base_C_ShrinkRemoveInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADB_Instrument_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ReceiveBeginPlay");
		
		ADB_Instrument_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.InstrumentReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADB_Instrument_Base_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.InstrumentReleased");
		
		ADB_Instrument_Base_C_InstrumentReleased_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.DestroyPrimitive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADB_Instrument_Base_C::DestroyPrimitive(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.DestroyPrimitive");
		
		ADB_Instrument_Base_C_DestroyPrimitive_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DB_Instrument_Base.DB_Instrument_Base_C.ExecuteUbergraph_DB_Instrument_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADB_Instrument_Base_C::ExecuteUbergraph_DB_Instrument_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ExecuteUbergraph_DB_Instrument_Base");
		
		ADB_Instrument_Base_C_ExecuteUbergraph_DB_Instrument_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADB_Instrument_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADB_Instrument_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DB_Instrument_Base.DB_Instrument_Base_C");
		return ptr;
	}

}


