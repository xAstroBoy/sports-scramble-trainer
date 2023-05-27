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
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TravelTubeCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::TravelTubeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TravelTubeCheck");
		
		ABaseballAICatcher_Blueprint_C_TravelTubeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ApplyMittMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::ApplyMittMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ApplyMittMaterial");
		
		ABaseballAICatcher_Blueprint_C_ApplyMittMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.OnRep_MittMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::OnRep_MittMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.OnRep_MittMaterial");
		
		ABaseballAICatcher_Blueprint_C_OnRep_MittMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.OnRep_Material
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::OnRep_Material()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.OnRep_Material");
		
		ABaseballAICatcher_Blueprint_C_OnRep_Material_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ApplyMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::ApplyMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ApplyMaterial");
		
		ABaseballAICatcher_Blueprint_C_ApplyMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.SetMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           CatcherMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           MittMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAICatcher_Blueprint_C::SetMaterial(class UMaterialInstance* CatcherMaterial, class UMaterialInstance* MittMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.SetMaterial");
		
		ABaseballAICatcher_Blueprint_C_SetMaterial_Params params {};
		params.CatcherMaterial = CatcherMaterial;
		params.MittMaterial = MittMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.UserConstructionScript");
		
		ABaseballAICatcher_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineSpawnIn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::TimelineSpawnIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineSpawnIn__FinishedFunc");
		
		ABaseballAICatcher_Blueprint_C_TimelineSpawnIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineSpawnIn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::TimelineSpawnIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineSpawnIn__UpdateFunc");
		
		ABaseballAICatcher_Blueprint_C_TimelineSpawnIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineDespawn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::TimelineDespawn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineDespawn__FinishedFunc");
		
		ABaseballAICatcher_Blueprint_C_TimelineDespawn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineDespawn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::TimelineDespawn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineDespawn__UpdateFunc");
		
		ABaseballAICatcher_Blueprint_C_TimelineDespawn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Timeline_ScaleGlove__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::Timeline_ScaleGlove__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Timeline_ScaleGlove__FinishedFunc");
		
		ABaseballAICatcher_Blueprint_C_Timeline_ScaleGlove__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Timeline_ScaleGlove__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::Timeline_ScaleGlove__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Timeline_ScaleGlove__UpdateFunc");
		
		ABaseballAICatcher_Blueprint_C_Timeline_ScaleGlove__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.BallCaught
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBaseballBallType                                  BallType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Imbued                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballAICatcher_Blueprint_C::BallCaught(class AActor* Ball, const struct FVector& Position, EBaseballBallType BallType, bool Imbued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.BallCaught");
		
		ABaseballAICatcher_Blueprint_C_BallCaught_Params params {};
		params.Ball = Ball;
		params.Position = Position;
		params.BallType = BallType;
		params.Imbued = Imbued;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ReceiveBeginPlay");
		
		ABaseballAICatcher_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.DespawnCatcher
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::DespawnCatcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.DespawnCatcher");
		
		ABaseballAICatcher_Blueprint_C_DespawnCatcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Caught Net Caster
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBaseballBallType                                  BallType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Imbued                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballAICatcher_Blueprint_C::CaughtNetCaster(class AActor* Ball, const struct FVector& Position, EBaseballBallType BallType, bool Imbued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Caught Net Caster");
		
		ABaseballAICatcher_Blueprint_C_CaughtNetCaster_Params params {};
		params.Ball = Ball;
		params.Position = Position;
		params.BallType = BallType;
		params.Imbued = Imbued;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.RevealMitt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAICatcher_Blueprint_C::RevealMitt(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.RevealMitt");
		
		ABaseballAICatcher_Blueprint_C_RevealMitt_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ShowMitt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::ShowMitt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ShowMitt");
		
		ABaseballAICatcher_Blueprint_C_ShowMitt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.HideMitt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::HideMitt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.HideMitt");
		
		ABaseballAICatcher_Blueprint_C_HideMitt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ExecuteUbergraph_BaseballAICatcher_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAICatcher_Blueprint_C::ExecuteUbergraph_BaseballAICatcher_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ExecuteUbergraph_BaseballAICatcher_Blueprint");
		
		ABaseballAICatcher_Blueprint_C_ExecuteUbergraph_BaseballAICatcher_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.CatcherCaughtBall__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAICatcher_Blueprint_C::CatcherCaughtBall__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.CatcherCaughtBall__DelegateSignature");
		
		ABaseballAICatcher_Blueprint_C_CatcherCaughtBall__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballAICatcher_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAICatcher_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C");
		return ptr;
	}

}


