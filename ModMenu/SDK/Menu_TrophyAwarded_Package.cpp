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
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.EnableMenuInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_TrophyAwarded_C::EnableMenuInput(bool* InputEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.EnableMenuInput");
		
		AMenu_TrophyAwarded_C_EnableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputEnabled != nullptr)
			*InputEnabled = params.InputEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DisableMenuInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputDisabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_TrophyAwarded_C::DisableMenuInput(bool* InputDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DisableMenuInput");
		
		AMenu_TrophyAwarded_C_DisableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputDisabled != nullptr)
			*InputDisabled = params.InputDisabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RemoveSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_TrophyAwarded_C::RemoveSubMenu(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RemoveSubMenu");
		
		AMenu_TrophyAwarded_C_RemoveSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.HideSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MenuHidden                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_TrophyAwarded_C::HideSubMenu(bool* MenuHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.HideSubMenu");
		
		AMenu_TrophyAwarded_C_HideSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuHidden != nullptr)
			*MenuHidden = params.MenuHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RestoreSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MenuShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_TrophyAwarded_C::RestoreSubMenu(bool* MenuShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RestoreSubMenu");
		
		AMenu_TrophyAwarded_C_RestoreSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuShown != nullptr)
			*MenuShown = params.MenuShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnHairPack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::SpawnHairPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnHairPack");
		
		AMenu_TrophyAwarded_C_SpawnHairPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnSkinPack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::SpawnSkinPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnSkinPack");
		
		AMenu_TrophyAwarded_C_SpawnSkinPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugHairPackData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::DebugHairPackData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugHairPackData");
		
		AMenu_TrophyAwarded_C_DebugHairPackData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugSkinPackData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::DebugSkinPackData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugSkinPackData");
		
		AMenu_TrophyAwarded_C_DebugSkinPackData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugAvatarData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::DebugAvatarData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugAvatarData");
		
		AMenu_TrophyAwarded_C_DebugAvatarData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.GetDate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::GetDate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.GetDate");
		
		AMenu_TrophyAwarded_C_GetDate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnAvatar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::SpawnAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnAvatar");
		
		AMenu_TrophyAwarded_C_SpawnAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnTrophy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::SpawnTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnTrophy");
		
		AMenu_TrophyAwarded_C_SpawnTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Initialize");
		
		AMenu_TrophyAwarded_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.UserConstructionScript");
		
		AMenu_TrophyAwarded_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_MoveTitle__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_MoveTitle__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_MoveTitle__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_MoveTitle__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_ScaleIcon__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_ScaleIcon__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_ScaleIcon__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_ScaleIcon__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_ScaleModels__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_ScaleModels__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_ScaleModels__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_ScaleModels__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_ScaleInfo__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_ScaleInfo__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_ScaleInfo__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_ScaleInfo__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_SpinIcon__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_SpinIcon__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_SpinIcon__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_SpinIcon__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_HideIcon__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_HideIcon__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_HideIcon__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_HideIcon__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_MoveModel__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_MoveModel__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_MoveModel__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_MoveModel__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_RotatePacks__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__FinishedFunc");
		
		AMenu_TrophyAwarded_C_Timeline_RotatePacks__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::Timeline_RotatePacks__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__UpdateFunc");
		
		AMenu_TrophyAwarded_C_Timeline_RotatePacks__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveBeginPlay");
		
		AMenu_TrophyAwarded_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_TrophyAwarded_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveTick");
		
		AMenu_TrophyAwarded_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_TrophyAwarded_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveEndPlay");
		
		AMenu_TrophyAwarded_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyMenuGo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::TrophyMenuGo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyMenuGo");
		
		AMenu_TrophyAwarded_C_TrophyMenuGo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RevealIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::RevealIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RevealIcon");
		
		AMenu_TrophyAwarded_C_RevealIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpinIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::SpinIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpinIcon");
		
		AMenu_TrophyAwarded_C_SpinIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowModels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::ShowModels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowModels");
		
		AMenu_TrophyAwarded_C_ShowModels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::ShowInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowInfo");
		
		AMenu_TrophyAwarded_C_ShowInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.MoveRewardMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::MoveRewardMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.MoveRewardMesh");
		
		AMenu_TrophyAwarded_C_MoveRewardMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RotatePacks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_TrophyAwarded_C::RotatePacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RotatePacks");
		
		AMenu_TrophyAwarded_C_RotatePacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ExecuteUbergraph_Menu_TrophyAwarded
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_TrophyAwarded_C::ExecuteUbergraph_Menu_TrophyAwarded(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ExecuteUbergraph_Menu_TrophyAwarded");
		
		AMenu_TrophyAwarded_C_ExecuteUbergraph_Menu_TrophyAwarded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyAwardComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllAwardsComplete                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_TrophyAwarded_C::TrophyAwardComplete__DelegateSignature(bool AllAwardsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyAwardComplete__DelegateSignature");
		
		AMenu_TrophyAwarded_C_TrophyAwardComplete__DelegateSignature_Params params {};
		params.AllAwardsComplete = AllAwardsComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenu_TrophyAwarded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenu_TrophyAwarded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Menu_TrophyAwarded.Menu_TrophyAwarded_C");
		return ptr;
	}

}


