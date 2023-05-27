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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABallLauncher_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RemoveGameElement");
		
		ABallLauncher_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.UpdateRegionTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              horizontalVariance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              verticalVariance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FScramTrajectoryRegion                      TargetRegion                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABallLauncher_C::UpdateRegionTargeting(float horizontalVariance, float verticalVariance, const struct FScramTrajectoryRegion& TargetRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UpdateRegionTargeting");
		
		ABallLauncher_C_UpdateRegionTargeting_Params params {};
		params.horizontalVariance = horizontalVariance;
		params.verticalVariance = verticalVariance;
		params.TargetRegion = TargetRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Initialize");
		
		ABallLauncher_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.SimpleSetup
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
	void ABallLauncher_C::SimpleSetup(float InitialHeight, const struct FVector& InitialRotation, float BallSpeed, const struct FVector& LaunchSpin, const struct FVector& BounceSpin, ELauncherAimingPreset AimPreset, bool IgnoreHeightChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.SimpleSetup");
		
		ABallLauncher_C_SimpleSetup_Params params {};
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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.SetLaunchLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PositionY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::SetLaunchLocation(float Height, const struct FRotator& Rotation, float PositionY, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.SetLaunchLocation");
		
		ABallLauncher_C_SetLaunchLocation_Params params {};
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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UserConstructionScript");
		
		ABallLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Height__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Height__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Height__FinishedFunc");
		
		ABallLauncher_C_Timeline_Height__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Height__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Height__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Height__UpdateFunc");
		
		ABallLauncher_C_Timeline_Height__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Rotation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Rotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Rotation__FinishedFunc");
		
		ABallLauncher_C_Timeline_Rotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Rotation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Rotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Rotation__UpdateFunc");
		
		ABallLauncher_C_Timeline_Rotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Pitch__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Pitch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Pitch__FinishedFunc");
		
		ABallLauncher_C_Timeline_Pitch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Pitch__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Pitch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Pitch__UpdateFunc");
		
		ABallLauncher_C_Timeline_Pitch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Movement__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Movement__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Movement__FinishedFunc");
		
		ABallLauncher_C_Timeline_Movement__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_Movement__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_Movement__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_Movement__UpdateFunc");
		
		ABallLauncher_C_Timeline_Movement__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_MovementX__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_MovementX__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_MovementX__FinishedFunc");
		
		ABallLauncher_C_Timeline_MovementX__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_MovementX__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_MovementX__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_MovementX__UpdateFunc");
		
		ABallLauncher_C_Timeline_MovementX__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_RotateWheels__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__FinishedFunc");
		
		ABallLauncher_C_Timeline_RotateWheels__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_RotateWheels__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RotateWheels__UpdateFunc");
		
		ABallLauncher_C_Timeline_RotateWheels__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_ScaleUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__FinishedFunc");
		
		ABallLauncher_C_Timeline_ScaleUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_ScaleUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_ScaleUp__UpdateFunc");
		
		ABallLauncher_C_Timeline_ScaleUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Spawn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Spawn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Spawn__FinishedFunc");
		
		ABallLauncher_C_Spawn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Spawn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Spawn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Spawn__UpdateFunc");
		
		ABallLauncher_C_Spawn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_RaiseHead__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__FinishedFunc");
		
		ABallLauncher_C_Timeline_RaiseHead__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallLauncher_C::Timeline_RaiseHead__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Timeline_RaiseHead__UpdateFunc");
		
		ABallLauncher_C_Timeline_RaiseHead__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.RandomLaunch
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
	void ABallLauncher_C::RandomLaunch(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RandomLaunch");
		
		ABallLauncher_C_RandomLaunch_Params params {};
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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.FireSquence
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
	void ABallLauncher_C::FireSquence(float BallSpeedMin, float BallSpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FireSquence");
		
		ABallLauncher_C_FireSquence_Params params {};
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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.LaunchSequenceUsingSpeed
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
	void ABallLauncher_C::LaunchSequenceUsingSpeed(float BallSpeedMin, float BallSpeedMax, float MinSpeedChange, float MoveYMin, float MoveYMax, float MinMoveDistance, float MinHeight, float MaxHeight, float CollapseSpeed, float MovementSpeed, float RaiseSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.LaunchSequenceUsingSpeed");
		
		ABallLauncher_C_LaunchSequenceUsingSpeed_Params params {};
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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.QuickRecalc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::QuickRecalc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.QuickRecalc");
		
		ABallLauncher_C_QuickRecalc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.SimpleFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::SimpleFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.SimpleFire");
		
		ABallLauncher_C_SimpleFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.RandomLaunchWithTelegraph
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
	void ABallLauncher_C::RandomLaunchWithTelegraph(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time, float MinimumSpeedChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RandomLaunchWithTelegraph");
		
		ABallLauncher_C_RandomLaunchWithTelegraph_Params params {};
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
	 * 		Name   -> Function BallLauncher.BallLauncher_C.LaunchSequenceXY
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              horizontalVariance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              verticalVariance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FScramTrajectoryRegion                      trajectory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              NewXPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewYPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CollapseSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MovementSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RaiseSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PostShotRecenter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABallLauncher_C::LaunchSequenceXY(float BallSpeed, float horizontalVariance, float verticalVariance, const struct FScramTrajectoryRegion& trajectory, float NewXPosition, float NewYPosition, float Height, float CollapseSpeed, float MovementSpeed, float RaiseSpeed, bool PostShotRecenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.LaunchSequenceXY");
		
		ABallLauncher_C_LaunchSequenceXY_Params params {};
		params.BallSpeed = BallSpeed;
		params.horizontalVariance = horizontalVariance;
		params.verticalVariance = verticalVariance;
		params.trajectory = trajectory;
		params.NewXPosition = NewXPosition;
		params.NewYPosition = NewYPosition;
		params.Height = Height;
		params.CollapseSpeed = CollapseSpeed;
		params.MovementSpeed = MovementSpeed;
		params.RaiseSpeed = RaiseSpeed;
		params.PostShotRecenter = PostShotRecenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.MoveFBComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::MoveFBComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.MoveFBComplete");
		
		ABallLauncher_C_MoveFBComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ChangeHeight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::ChangeHeight(float NewHeight, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangeHeight");
		
		ABallLauncher_C_ChangeHeight_Params params {};
		params.NewHeight = NewHeight;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ChangeRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::ChangeRotation(float NewRotation, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangeRotation");
		
		ABallLauncher_C_ChangeRotation_Params params {};
		params.NewRotation = NewRotation;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ChangePitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewPitch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::ChangePitch(float NewPitch, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangePitch");
		
		ABallLauncher_C_ChangePitch_Params params {};
		params.NewPitch = NewPitch;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ChangePosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewPositionY                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::ChangePosition(float NewPositionY, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangePosition");
		
		ABallLauncher_C_ChangePosition_Params params {};
		params.NewPositionY = NewPositionY;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ChangePositionX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewPositionX                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CollapseSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::ChangePositionX(float NewPositionX, float MoveSpeed, float CollapseSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ChangePositionX");
		
		ABallLauncher_C_ChangePositionX_Params params {};
		params.NewPositionX = NewPositionX;
		params.MoveSpeed = MoveSpeed;
		params.CollapseSpeed = CollapseSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ScaleUp");
		
		ABallLauncher_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ScaleDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::ScaleDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ScaleDown");
		
		ABallLauncher_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABallLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ReceiveBeginPlay");
		
		ABallLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.Telegraph
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::Telegraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.Telegraph");
		
		ABallLauncher_C_Telegraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.PlaySpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::PlaySpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.PlaySpawn");
		
		ABallLauncher_C_PlaySpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.RaiseHead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::RaiseHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.RaiseHead");
		
		ABallLauncher_C_RaiseHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.UseLaunchTargeting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABallLauncher_C::UseLaunchTargeting(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UseLaunchTargeting");
		
		ABallLauncher_C_UseLaunchTargeting_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.UsePlayerAsLaunchTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::UsePlayerAsLaunchTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.UsePlayerAsLaunchTarget");
		
		ABallLauncher_C_UsePlayerAsLaunchTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.ExecuteUbergraph_BallLauncher
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallLauncher_C::ExecuteUbergraph_BallLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.ExecuteUbergraph_BallLauncher");
		
		ABallLauncher_C_ExecuteUbergraph_BallLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.FinishedAiming__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::FinishedAiming__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FinishedAiming__DelegateSignature");
		
		ABallLauncher_C_FinishedAiming__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.FinishedMoveForwardSequence__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::FinishedMoveForwardSequence__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FinishedMoveForwardSequence__DelegateSignature");
		
		ABallLauncher_C_FinishedMoveForwardSequence__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallLauncher.BallLauncher_C.FinishedSpawnSequence__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABallLauncher_C::FinishedSpawnSequence__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallLauncher.BallLauncher_C.FinishedSpawnSequence__DelegateSignature");
		
		ABallLauncher_C_FinishedSpawnSequence__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABallLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABallLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BallLauncher.BallLauncher_C");
		return ptr;
	}

}


