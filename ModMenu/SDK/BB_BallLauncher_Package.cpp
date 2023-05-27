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
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_BallLauncher_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RemoveGameElement");
		
		ABB_BallLauncher_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Initialize");
		
		ABB_BallLauncher_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.SimpleSetup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InitialHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InitialRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LaunchSpin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BounceSpin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELauncherAimingPreset                              AimPreset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreHeightChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_BallLauncher_C::SimpleSetup(float InitialHeight, const struct FVector& InitialRotation, float BallSpeed, const struct FVector& LaunchSpin, const struct FVector& BounceSpin, ELauncherAimingPreset AimPreset, bool IgnoreHeightChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.SimpleSetup");
		
		ABB_BallLauncher_C_SimpleSetup_Params params {};
		params.InitialHeight = InitialHeight;
		params.InitialRotation = InitialRotation;
		params.BallSpeed = BallSpeed;
		params.LaunchSpin = LaunchSpin;
		params.BounceSpin = BounceSpin;
		params.AimPreset = AimPreset;
		params.IgnoreHeightChange = IgnoreHeightChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.SetLaunchLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PositionY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::SetLaunchLocation(float Height, const struct FRotator& Rotation, float PositionY, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.SetLaunchLocation");
		
		ABB_BallLauncher_C_SetLaunchLocation_Params params {};
		params.Height = Height;
		params.Rotation = Rotation;
		params.PositionY = PositionY;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.UserConstructionScript");
		
		ABB_BallLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Height__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__FinishedFunc");
		
		ABB_BallLauncher_C_Timeline_Height__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Height__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Height__UpdateFunc");
		
		ABB_BallLauncher_C_Timeline_Height__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Rotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__FinishedFunc");
		
		ABB_BallLauncher_C_Timeline_Rotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Rotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Rotation__UpdateFunc");
		
		ABB_BallLauncher_C_Timeline_Rotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Pitch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__FinishedFunc");
		
		ABB_BallLauncher_C_Timeline_Pitch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Pitch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Pitch__UpdateFunc");
		
		ABB_BallLauncher_C_Timeline_Pitch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Movement__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__FinishedFunc");
		
		ABB_BallLauncher_C_Timeline_Movement__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_Movement__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_Movement__UpdateFunc");
		
		ABB_BallLauncher_C_Timeline_Movement__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_ScaleUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__FinishedFunc");
		
		ABB_BallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_ScaleUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_ScaleUp__UpdateFunc");
		
		ABB_BallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Spawn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Spawn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Spawn__FinishedFunc");
		
		ABB_BallLauncher_C_Spawn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Spawn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Spawn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Spawn__UpdateFunc");
		
		ABB_BallLauncher_C_Spawn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_RaiseHead__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__FinishedFunc");
		
		ABB_BallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Timeline_RaiseHead__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Timeline_RaiseHead__UpdateFunc");
		
		ABB_BallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SpeedMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpeedMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::RandomLaunch(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunch");
		
		ABB_BallLauncher_C_RandomLaunch_Params params {};
		params.SpeedMin = SpeedMin;
		params.SpeedMax = SpeedMax;
		params.MoveYMin = MoveYMin;
		params.MoveYMax = MoveYMax;
		params.MinHeight = MinHeight;
		params.MaxHeight = MaxHeight;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.FireSquence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeedMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BallSpeedMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::FireSquence(float BallSpeedMin, float BallSpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.FireSquence");
		
		ABB_BallLauncher_C_FireSquence_Params params {};
		params.BallSpeedMin = BallSpeedMin;
		params.BallSpeedMax = BallSpeedMax;
		params.MoveYMin = MoveYMin;
		params.MoveYMax = MoveYMax;
		params.MinHeight = MinHeight;
		params.MaxHeight = MaxHeight;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.LaunchSequenceUsingSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeedMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BallSpeedMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinSpeedChange                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinMoveDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CollapseSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MovementSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RaiseSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::LaunchSequenceUsingSpeed(float BallSpeedMin, float BallSpeedMax, float MinSpeedChange, float MoveYMin, float MoveYMax, float MinMoveDistance, float MinHeight, float MaxHeight, float CollapseSpeed, float MovementSpeed, float RaiseSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.LaunchSequenceUsingSpeed");
		
		ABB_BallLauncher_C_LaunchSequenceUsingSpeed_Params params {};
		params.BallSpeedMin = BallSpeedMin;
		params.BallSpeedMax = BallSpeedMax;
		params.MinSpeedChange = MinSpeedChange;
		params.MoveYMin = MoveYMin;
		params.MoveYMax = MoveYMax;
		params.MinMoveDistance = MinMoveDistance;
		params.MinHeight = MinHeight;
		params.MaxHeight = MaxHeight;
		params.CollapseSpeed = CollapseSpeed;
		params.MovementSpeed = MovementSpeed;
		params.RaiseSpeed = RaiseSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.QuickRecalc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::QuickRecalc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.QuickRecalc");
		
		ABB_BallLauncher_C_QuickRecalc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.SimpleFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::SimpleFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.SimpleFire");
		
		ABB_BallLauncher_C_SimpleFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunchWithTelegraph
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SpeedMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpeedMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveYMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinimumSpeedChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::RandomLaunchWithTelegraph(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time, float MinimumSpeedChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RandomLaunchWithTelegraph");
		
		ABB_BallLauncher_C_RandomLaunchWithTelegraph_Params params {};
		params.SpeedMin = SpeedMin;
		params.SpeedMax = SpeedMax;
		params.MoveYMin = MoveYMin;
		params.MoveYMax = MoveYMax;
		params.MinHeight = MinHeight;
		params.MaxHeight = MaxHeight;
		params.Time = Time;
		params.MinimumSpeedChange = MinimumSpeedChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ChangeHeight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::ChangeHeight(float NewHeight, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangeHeight");
		
		ABB_BallLauncher_C_ChangeHeight_Params params {};
		params.NewHeight = NewHeight;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ChangeRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::ChangeRotation(float NewRotation, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangeRotation");
		
		ABB_BallLauncher_C_ChangeRotation_Params params {};
		params.NewRotation = NewRotation;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ChangePitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewPitch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::ChangePitch(float NewPitch, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangePitch");
		
		ABB_BallLauncher_C_ChangePitch_Params params {};
		params.NewPitch = NewPitch;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ChangePosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewPositionY                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::ChangePosition(float NewPositionY, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ChangePosition");
		
		ABB_BallLauncher_C_ChangePosition_Params params {};
		params.NewPositionY = NewPositionY;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ScaleUp");
		
		ABB_BallLauncher_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ScaleDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::ScaleDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ScaleDown");
		
		ABB_BallLauncher_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ReceiveBeginPlay");
		
		ABB_BallLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.Telegraph
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::Telegraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.Telegraph");
		
		ABB_BallLauncher_C_Telegraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.PlaySpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::PlaySpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.PlaySpawn");
		
		ABB_BallLauncher_C_PlaySpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.RaiseHead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::RaiseHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.RaiseHead");
		
		ABB_BallLauncher_C_RaiseHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.ExecuteUbergraph_BB_BallLauncher
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BallLauncher_C::ExecuteUbergraph_BB_BallLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.ExecuteUbergraph_BB_BallLauncher");
		
		ABB_BallLauncher_C_ExecuteUbergraph_BB_BallLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BallLauncher.BB_BallLauncher_C.FinishedSpawnSequence__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BallLauncher_C::FinishedSpawnSequence__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BallLauncher.BB_BallLauncher_C.FinishedSpawnSequence__DelegateSignature");
		
		ABB_BallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_BallLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_BallLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_BallLauncher.BB_BallLauncher_C");
		return ptr;
	}

}


