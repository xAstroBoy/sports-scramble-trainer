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
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.EnableMenuInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_AvatarSetup_C::EnableMenuInput(bool* InputEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.EnableMenuInput");
		
		AMenu_AvatarSetup_C_EnableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputEnabled != nullptr)
			*InputEnabled = params.InputEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.DisableMenuInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputDisabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_AvatarSetup_C::DisableMenuInput(bool* InputDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.DisableMenuInput");
		
		AMenu_AvatarSetup_C_DisableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputDisabled != nullptr)
			*InputDisabled = params.InputDisabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.RemoveSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_AvatarSetup_C::RemoveSubMenu(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.RemoveSubMenu");
		
		AMenu_AvatarSetup_C_RemoveSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.HideSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MenuHidden                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_AvatarSetup_C::HideSubMenu(bool* MenuHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.HideSubMenu");
		
		AMenu_AvatarSetup_C_HideSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuHidden != nullptr)
			*MenuHidden = params.MenuHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.RestoreSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MenuShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_AvatarSetup_C::RestoreSubMenu(bool* MenuShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.RestoreSubMenu");
		
		AMenu_AvatarSetup_C_RestoreSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuShown != nullptr)
			*MenuShown = params.MenuShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatarText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::UpdateAvatarText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatarText");
		
		AMenu_AvatarSetup_C_UpdateAvatarText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.SetRed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::SetRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.SetRed");
		
		AMenu_AvatarSetup_C_SetRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Shutdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Shutdown");
		
		AMenu_AvatarSetup_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::UpdateAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatar");
		
		AMenu_AvatarSetup_C_UpdateAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateHairColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::UpdateHairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateHairColor");
		
		AMenu_AvatarSetup_C_UpdateHairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateSkinColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::UpdateSkinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateSkinColor");
		
		AMenu_AvatarSetup_C_UpdateSkinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.SaveAvatarLook
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::SaveAvatarLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.SaveAvatarLook");
		
		AMenu_AvatarSetup_C_SaveAvatarLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Initialize");
		
		AMenu_AvatarSetup_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UserConstructionScript");
		
		AMenu_AvatarSetup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_Rotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__FinishedFunc");
		
		AMenu_AvatarSetup_C_Timeline_Rotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_Rotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__UpdateFunc");
		
		AMenu_AvatarSetup_C_Timeline_Rotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_BackingScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__FinishedFunc");
		
		AMenu_AvatarSetup_C_Timeline_BackingScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_BackingScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__UpdateFunc");
		
		AMenu_AvatarSetup_C_Timeline_BackingScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_MoveAvatar__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__FinishedFunc");
		
		AMenu_AvatarSetup_C_Timeline_MoveAvatar__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_MoveAvatar__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__UpdateFunc");
		
		AMenu_AvatarSetup_C_Timeline_MoveAvatar__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_ScaleMesh__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__FinishedFunc");
		
		AMenu_AvatarSetup_C_Timeline_ScaleMesh__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_ScaleMesh__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__UpdateFunc");
		
		AMenu_AvatarSetup_C_Timeline_ScaleMesh__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_ScaleAvatar__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__FinishedFunc");
		
		AMenu_AvatarSetup_C_Timeline_ScaleAvatar__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Timeline_ScaleAvatar__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__UpdateFunc");
		
		AMenu_AvatarSetup_C_Timeline_ScaleAvatar__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveBeginPlay");
		
		AMenu_AvatarSetup_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveTick");
		
		AMenu_AvatarSetup_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveEndPlay");
		
		AMenu_AvatarSetup_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::PreviousAvatar(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousAvatar");
		
		AMenu_AvatarSetup_C_PreviousAvatar_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::NextAvatar(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextAvatar");
		
		AMenu_AvatarSetup_C_NextAvatar_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousSkin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::PreviousSkin(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousSkin");
		
		AMenu_AvatarSetup_C_PreviousSkin_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextSkin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::NextSkin(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextSkin");
		
		AMenu_AvatarSetup_C_NextSkin_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousHair
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::PreviousHair(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousHair");
		
		AMenu_AvatarSetup_C_PreviousHair_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextHair
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::NextHair(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextHair");
		
		AMenu_AvatarSetup_C_NextHair_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::InitialSetupComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupComplete");
		
		AMenu_AvatarSetup_C_InitialSetupComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.Play_SFX_Avatar_Intro
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::Play_SFX_Avatar_Intro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Play_SFX_Avatar_Intro");
		
		AMenu_AvatarSetup_C_Play_SFX_Avatar_Intro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.ExecuteUbergraph_Menu_AvatarSetup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_AvatarSetup_C::ExecuteUbergraph_Menu_AvatarSetup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ExecuteUbergraph_Menu_AvatarSetup");
		
		AMenu_AvatarSetup_C_ExecuteUbergraph_Menu_AvatarSetup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupAnimComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_AvatarSetup_C::InitialSetupAnimComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupAnimComplete__DelegateSignature");
		
		AMenu_AvatarSetup_C_InitialSetupAnimComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenu_AvatarSetup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenu_AvatarSetup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Menu_AvatarSetup.Menu_AvatarSetup_C");
		return ptr;
	}

}


