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
	 * 		Name   -> Function BattingTee.BattingTee_C.OnRep_AutoActivateDeactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::OnRep_AutoActivateDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.OnRep_AutoActivateDeactivate");
		
		ABattingTee_C_OnRep_AutoActivateDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Initialize");
		
		ABattingTee_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.RemoveInstructions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::RemoveInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.RemoveInstructions");
		
		ABattingTee_C_RemoveInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.SpawnInstructions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::SpawnInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.SpawnInstructions");
		
		ABattingTee_C_SpawnInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.HideBallUnderFloor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::HideBallUnderFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.HideBallUnderFloor");
		
		ABattingTee_C_HideBallUnderFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.OnRep_Ball
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::OnRep_Ball()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.OnRep_Ball");
		
		ABattingTee_C_OnRep_Ball_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.UserConstructionScript");
		
		ABattingTee_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_2_Rise__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Pole_2_Rise__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_2_Rise__FinishedFunc");
		
		ABattingTee_C_Pole_2_Rise__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_2_Rise__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Pole_2_Rise__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_2_Rise__UpdateFunc");
		
		ABattingTee_C_Pole_2_Rise__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_1_Rise__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Pole_1_Rise__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_1_Rise__FinishedFunc");
		
		ABattingTee_C_Pole_1_Rise__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_1_Rise__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Pole_1_Rise__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_1_Rise__UpdateFunc");
		
		ABattingTee_C_Pole_1_Rise__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Base_Rise__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Base_Rise__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Base_Rise__FinishedFunc");
		
		ABattingTee_C_Base_Rise__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Base_Rise__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Base_Rise__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Base_Rise__UpdateFunc");
		
		ABattingTee_C_Base_Rise__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.HomePlateAnimate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::HomePlateAnimate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.HomePlateAnimate__FinishedFunc");
		
		ABattingTee_C_HomePlateAnimate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.HomePlateAnimate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::HomePlateAnimate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.HomePlateAnimate__UpdateFunc");
		
		ABattingTee_C_HomePlateAnimate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Timeline_FakeBallAppear__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Timeline_FakeBallAppear__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Timeline_FakeBallAppear__FinishedFunc");
		
		ABattingTee_C_Timeline_FakeBallAppear__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Timeline_FakeBallAppear__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABattingTee_C::Timeline_FakeBallAppear__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Timeline_FakeBallAppear__UpdateFunc");
		
		ABattingTee_C_Timeline_FakeBallAppear__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.MoveBallUnderHomeplate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AutoActivateAndDeactivate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABattingTee_C::MoveBallUnderHomeplate(class AScramBall* Ball, bool AutoActivateAndDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.MoveBallUnderHomeplate");
		
		ABattingTee_C_MoveBallUnderHomeplate_Params params {};
		params.Ball = Ball;
		params.AutoActivateAndDeactivate = AutoActivateAndDeactivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.BallGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattingTee_C::BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.BallGrabbed");
		
		ABattingTee_C_BallGrabbed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.ReleaseBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::ReleaseBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.ReleaseBall");
		
		ABattingTee_C_ReleaseBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABattingTee_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.ReceiveBeginPlay");
		
		ABattingTee_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.TeedBallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattingTee_C::TeedBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.TeedBallHit");
		
		ABattingTee_C_TeedBallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.BallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattingTee_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.BallHit");
		
		ABattingTee_C_BallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.AllowHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::AllowHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.AllowHit");
		
		ABattingTee_C_AllowHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_2_Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::Pole_2_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_2_Up");
		
		ABattingTee_C_Pole_2_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.DeactivateTee
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::DeactivateTee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.DeactivateTee");
		
		ABattingTee_C_DeactivateTee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_1_Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::Pole_1_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_1_Up");
		
		ABattingTee_C_Pole_1_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Pole_1_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::Pole_1_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Pole_1_Down");
		
		ABattingTee_C_Pole_1_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Base_Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::Base_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Base_Up");
		
		ABattingTee_C_Base_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.Base_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::Base_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.Base_Down");
		
		ABattingTee_C_Base_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.ActivateTee
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::ActivateTee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.ActivateTee");
		
		ABattingTee_C_ActivateTee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.HomePlate_Close
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::HomePlate_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.HomePlate_Close");
		
		ABattingTee_C_HomePlate_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.GenerateBattingTeeBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScramBallClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AutoActivateAndDeactivate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABattingTee_C::GenerateBattingTeeBall(class UClass* ScramBallClass, bool AutoActivateAndDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.GenerateBattingTeeBall");
		
		ABattingTee_C_GenerateBattingTeeBall_Params params {};
		params.ScramBallClass = ScramBallClass;
		params.AutoActivateAndDeactivate = AutoActivateAndDeactivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.RegisterBallBindings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::RegisterBallBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.RegisterBallBindings");
		
		ABattingTee_C_RegisterBallBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.FakeBallAppear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::FakeBallAppear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.FakeBallAppear");
		
		ABattingTee_C_FakeBallAppear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.ExecuteUbergraph_BattingTee
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattingTee_C::ExecuteUbergraph_BattingTee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.ExecuteUbergraph_BattingTee");
		
		ABattingTee_C_ExecuteUbergraph_BattingTee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.TeeDeactivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABattingTee_C::TeeDeactivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.TeeDeactivated__DelegateSignature");
		
		ABattingTee_C_TeeDeactivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.TeeBallAwaitingHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattingTee_C::TeeBallAwaitingHit__DelegateSignature(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.TeeBallAwaitingHit__DelegateSignature");
		
		ABattingTee_C_TeeBallAwaitingHit__DelegateSignature_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BattingTee.BattingTee_C.TeeBallHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattingTee_C::TeeBallHit__DelegateSignature(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattingTee.BattingTee_C.TeeBallHit__DelegateSignature");
		
		ABattingTee_C_TeeBallHit__DelegateSignature_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABattingTee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABattingTee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BattingTee.BattingTee_C");
		return ptr;
	}

}


