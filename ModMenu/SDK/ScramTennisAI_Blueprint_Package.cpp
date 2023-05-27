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
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UpdateHandVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTennisAI_Blueprint_C::UpdateHandVisibility(bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UpdateHandVisibility");
		
		AScramTennisAI_Blueprint_C_UpdateHandVisibility_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.RandomizeLook
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::RandomizeLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.RandomizeLook");
		
		AScramTennisAI_Blueprint_C_RandomizeLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Initialize");
		
		AScramTennisAI_Blueprint_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayHitSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTennisAI_Blueprint_C::PlayHitSound(class UClass* BallClass, float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayHitSound");
		
		AScramTennisAI_Blueprint_C_PlayHitSound_Params params {};
		params.BallClass = BallClass;
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ChangeRacket
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InstrumentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoFX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTennisAI_Blueprint_C::ChangeRacket(class UClass* InstrumentClass, bool NoFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ChangeRacket");
		
		AScramTennisAI_Blueprint_C_ChangeRacket_Params params {};
		params.InstrumentClass = InstrumentClass;
		params.NoFX = NoFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UserConstructionScript");
		
		AScramTennisAI_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::Timeline_ScaleUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__FinishedFunc");
		
		AScramTennisAI_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::Timeline_ScaleUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__UpdateFunc");
		
		AScramTennisAI_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveBeginPlay");
		
		AScramTennisAI_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTennisAI_Blueprint_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveEndPlay");
		
		AScramTennisAI_Blueprint_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayRacquetSound
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisBall*                                 Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTennisAI_Blueprint_C::PlayRacquetSound(class ATennisBall* Ball, float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayRacquetSound");
		
		AScramTennisAI_Blueprint_C_PlayRacquetSound_Params params {};
		params.Ball = Ball;
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlaySwingFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::PlaySwingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlaySwingFX");
		
		AScramTennisAI_Blueprint_C_PlaySwingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramTennisAI_Blueprint_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ScaleUp");
		
		AScramTennisAI_Blueprint_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ExecuteUbergraph_ScramTennisAI_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTennisAI_Blueprint_C::ExecuteUbergraph_ScramTennisAI_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ExecuteUbergraph_ScramTennisAI_Blueprint");
		
		AScramTennisAI_Blueprint_C_ExecuteUbergraph_ScramTennisAI_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.AI_Hit_Ball__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisBall*                                 Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTennisAI_Blueprint_C::AI_Hit_Ball__DelegateSignature(class ATennisBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.AI_Hit_Ball__DelegateSignature");
		
		AScramTennisAI_Blueprint_C_AI_Hit_Ball__DelegateSignature_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTennisAI_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTennisAI_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C");
		return ptr;
	}

}


