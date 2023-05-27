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
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Choice                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              ButtonPressed                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnChooseSportMenu(const class FScriptDelegate& Choice, const class FScriptDelegate& ButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportMenu");
		
		ASelectionDetailsMenu_C_SpawnChooseSportMenu_Params params {};
		params.Choice = Choice;
		params.ButtonPressed = ButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetArrayFromRefs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          Images                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ASelectionDetailsMenu_C::GetArrayFromRefs(TArray<class UTexture2D*>* Images)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetArrayFromRefs");
		
		ASelectionDetailsMenu_C_GetArrayFromRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Images != nullptr)
			*Images = params.Images;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAnnouncerButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnAnnouncerButton(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAnnouncerButton");
		
		ASelectionDetailsMenu_C_SpawnAnnouncerButton_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailsafeDoubleMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FailsafeDoubleMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailsafeDoubleMenu");
		
		ASelectionDetailsMenu_C_FailsafeDoubleMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnConfirmationMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OverrideText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnConfirmationMenu(const class FName& LocText, const class FText& OverrideText, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnConfirmationMenu");
		
		ASelectionDetailsMenu_C_SpawnConfirmationMenu_Params params {};
		params.LocText = LocText;
		params.OverrideText = OverrideText;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnJoinInviteMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              JoinEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              DismissEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnJoinInviteMenu(const class FScriptDelegate& JoinEvent, const class FScriptDelegate& DismissEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnJoinInviteMenu");
		
		ASelectionDetailsMenu_C_SpawnJoinInviteMenu_Params params {};
		params.JoinEvent = JoinEvent;
		params.DismissEvent = DismissEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              EditEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              SpawnNavEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class AMenu_QpDetails_C*                           Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnQpDetailsMenu(const class FScriptDelegate& EditEvent, const class FScriptDelegate& SpawnNavEvent, class AMenu_QpDetails_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsMenu");
		
		ASelectionDetailsMenu_C_SpawnQpDetailsMenu_Params params {};
		params.EditEvent = EditEvent;
		params.SpawnNavEvent = SpawnNavEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTeamColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::UpdateTeamColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTeamColor");
		
		ASelectionDetailsMenu_C_UpdateTeamColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnEditAvatarMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnEditAvatarMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnEditAvatarMenu");
		
		ASelectionDetailsMenu_C_SpawnEditAvatarMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAvatarButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              AvatarEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnAvatarButton(const class FScriptDelegate& AvatarEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAvatarButton");
		
		ASelectionDetailsMenu_C_SpawnAvatarButton_Params params {};
		params.AvatarEvent = AvatarEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInfoButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnInfoButton(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInfoButton");
		
		ASelectionDetailsMenu_C_SpawnInfoButton_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptionsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              MenuLoaded                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnTrainingOptionsMenu(const class FScriptDelegate& MenuLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptionsMenu");
		
		ASelectionDetailsMenu_C_SpawnTrainingOptionsMenu_Params params {};
		params.MenuLoaded = MenuLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendListMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FScramFriend>                        FriendsList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FScramGameInvite>                    InviteList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FScriptDelegate                              InviteEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              JoinEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              FailEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnFriendListMenu(TArray<struct FScramFriend>* FriendsList, TArray<struct FScramGameInvite>* InviteList, const class FScriptDelegate& InviteEvent, const class FScriptDelegate& JoinEvent, const class FScriptDelegate& FailEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendListMenu");
		
		ASelectionDetailsMenu_C_SpawnFriendListMenu_Params params {};
		params.InviteEvent = InviteEvent;
		params.JoinEvent = JoinEvent;
		params.FailEvent = FailEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsList != nullptr)
			*FriendsList = params.FriendsList;
		if (InviteList != nullptr)
			*InviteList = params.InviteList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnMessageMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimerDisplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnMessageMenu(const class FText& Message, int32_t TimerDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnMessageMenu");
		
		ASelectionDetailsMenu_C_SpawnMessageMenu_Params params {};
		params.Message = Message;
		params.TimerDisplay = TimerDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              UpdateButtonEvent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnChooseSportsMenu(const class FScriptDelegate& UpdateButtonEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportsMenu");
		
		ASelectionDetailsMenu_C_SpawnChooseSportsMenu_Params params {};
		params.UpdateButtonEvent = UpdateButtonEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.Spawn3DImageButtonMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                LocTextNames                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class UTexture2D*>                          ImagesL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class UTexture2D*>                          ImagesR                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::Spawn3DImageButtonMenu(TArray<class FName>* LocTextNames, TArray<class UTexture2D*>* ImagesL, TArray<class UTexture2D*>* ImagesR, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Spawn3DImageButtonMenu");
		
		ASelectionDetailsMenu_C_Spawn3DImageButtonMenu_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocTextNames != nullptr)
			*LocTextNames = params.LocTextNames;
		if (ImagesL != nullptr)
			*ImagesL = params.ImagesL;
		if (ImagesR != nullptr)
			*ImagesR = params.ImagesR;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.AwardsEarned?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AwardWaiting                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::AwardsEarned(bool* AwardWaiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.AwardsEarned?");
		
		ASelectionDetailsMenu_C_AwardsEarned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AwardWaiting != nullptr)
			*AwardWaiting = params.AwardWaiting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrophyAvatarNotification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              AwardReadyEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnTrophyAvatarNotification(const class FScriptDelegate& AwardReadyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrophyAvatarNotification");
		
		ASelectionDetailsMenu_C_SpawnTrophyAvatarNotification_Params params {};
		params.AwardReadyEvent = AwardReadyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnResultsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              ResultsCompleteEvent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnResultsMenu(const class FScriptDelegate& ResultsCompleteEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnResultsMenu");
		
		ASelectionDetailsMenu_C_SpawnResultsMenu_Params params {};
		params.ResultsCompleteEvent = ResultsCompleteEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameDetailsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModeTypes                                     Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AMenu_GameDetails_C*                         Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnGameDetailsMenu(EGameModeTypes Mode, class AMenu_GameDetails_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameDetailsMenu");
		
		ASelectionDetailsMenu_C_SpawnGameDetailsMenu_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMenu_SportOptions_C*                        Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnSportOptionsMenu(class AMenu_SportOptions_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionsMenu");
		
		ASelectionDetailsMenu_C_SpawnSportOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPnpWinner
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnPnpWinner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPnpWinner");
		
		ASelectionDetailsMenu_C_SpawnPnpWinner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTextTwoMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocText0                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LocText1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class AMenu_TextTwo_C*                             Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnTextTwoMenu(const class FName& LocText0, const class FName& LocText1, const class FScriptDelegate& Event, class AMenu_TextTwo_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTextTwoMenu");
		
		ASelectionDetailsMenu_C_SpawnTextTwoMenu_Params params {};
		params.LocText0 = LocText0;
		params.LocText1 = LocText1;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetAllPnpGameData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          ImageList                                                  (Parm, OutParm, ZeroConstructor)
	 * 		TArray<class FText>                                TitleList                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ASelectionDetailsMenu_C::GetAllPnpGameData(TArray<class UTexture2D*>* ImageList, TArray<class FText>* TitleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetAllPnpGameData");
		
		ASelectionDetailsMenu_C_GetAllPnpGameData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImageList != nullptr)
			*ImageList = params.ImageList;
		if (TitleList != nullptr)
			*TitleList = params.TitleList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFeatherMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture*>                            Textures                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FText>                                Texts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            StartIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class AMenu_Feathered_C*                           Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnFeatherMenu(TArray<class UTexture*>* Textures, TArray<class FText>* Texts, int32_t StartIndex, const class FScriptDelegate& Event, class AMenu_Feathered_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFeatherMenu");
		
		ASelectionDetailsMenu_C_SpawnFeatherMenu_Params params {};
		params.StartIndex = StartIndex;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Textures != nullptr)
			*Textures = params.Textures;
		if (Texts != nullptr)
			*Texts = params.Texts;
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPlayerCountMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnPlayerCountMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPlayerCountMenu");
		
		ASelectionDetailsMenu_C_SpawnPlayerCountMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.EnableActiveMenuInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::EnableActiveMenuInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.EnableActiveMenuInput");
		
		ASelectionDetailsMenu_C_EnableActiveMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.DisableActiveMenuInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::DisableActiveMenuInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DisableActiveMenuInput");
		
		ASelectionDetailsMenu_C_DisableActiveMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnHeader
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              FirstMenu                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnHeader(const class FScriptDelegate& FirstMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnHeader");
		
		ASelectionDetailsMenu_C_SpawnHeader_Params params {};
		params.FirstMenu = FirstMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetNextGame
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NextGame                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::GetNextGame(class FName* NextGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetNextGame");
		
		ASelectionDetailsMenu_C_GetNextGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextGame != nullptr)
			*NextGame = params.NextGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnbindFromPause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::UnbindFromPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnbindFromPause");
		
		ASelectionDetailsMenu_C_UnbindFromPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowMenus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ShowMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowMenus");
		
		ASelectionDetailsMenu_C_ShowMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.HideMenus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::HideMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HideMenus");
		
		ASelectionDetailsMenu_C_HideMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ProcessResultsData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ExitedEarly                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::ProcessResultsData(bool* ExitedEarly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ProcessResultsData");
		
		ASelectionDetailsMenu_C_ProcessResultsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExitedEarly != nullptr)
			*ExitedEarly = params.ExitedEarly;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.HasOptionsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Game                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasOptionMenu                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::HasOptionsMenu(const class FName& Game, bool* HasOptionMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HasOptionsMenu");
		
		ASelectionDetailsMenu_C_HasOptionsMenu_Params params {};
		params.Game = Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasOptionMenu != nullptr)
			*HasOptionMenu = params.HasOptionMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetSpawnOverride
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SpawnOverride                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::GetSpawnOverride(class FName* SpawnOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetSpawnOverride");
		
		ASelectionDetailsMenu_C_GetSpawnOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnOverride != nullptr)
			*SpawnOverride = params.SpawnOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnIndexButtonMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModeTypes                                     Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Link                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class AMenu_IndexSelection_C*                      Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnIndexButtonMenu(EGameModeTypes Mode, EScramSport Sport, const class FScriptDelegate& Link, class AMenu_IndexSelection_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnIndexButtonMenu");
		
		ASelectionDetailsMenu_C_SpawnIndexButtonMenu_Params params {};
		params.Mode = Mode;
		params.Sport = Sport;
		params.Link = Link;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::NextMenu(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenu");
		
		ASelectionDetailsMenu_C_NextMenu_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnImageButtonMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                LocTextNames                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class UTexture2D*>                          Images                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class AMenu_PanelImages_C*                         MenuActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnImageButtonMenu(TArray<class FName>* LocTextNames, TArray<class UTexture2D*>* Images, const class FScriptDelegate& Event, class AMenu_PanelImages_C** MenuActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnImageButtonMenu");
		
		ASelectionDetailsMenu_C_SpawnImageButtonMenu_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocTextNames != nullptr)
			*LocTextNames = params.LocTextNames;
		if (Images != nullptr)
			*Images = params.Images;
		if (MenuActor != nullptr)
			*MenuActor = params.MenuActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TypicalButtonSetup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Back                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Replay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Ok                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WideSpacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              LeftEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              RightEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              NextEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Home                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::TypicalButtonSetup(bool Back, bool Replay, bool Ok, bool Play, bool Next, bool WideSpacing, const class FScriptDelegate& LeftEvent, const class FScriptDelegate& RightEvent, const class FScriptDelegate& NextEvent, bool Home, bool Trophy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TypicalButtonSetup");
		
		ASelectionDetailsMenu_C_TypicalButtonSetup_Params params {};
		params.Back = Back;
		params.Replay = Replay;
		params.Ok = Ok;
		params.Play = Play;
		params.Next = Next;
		params.WideSpacing = WideSpacing;
		params.LeftEvent = LeftEvent;
		params.RightEvent = RightEvent;
		params.NextEvent = NextEvent;
		params.Home = Home;
		params.Trophy = Trophy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveNavigationButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::RemoveNavigationButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveNavigationButtons");
		
		ASelectionDetailsMenu_C_RemoveNavigationButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Cleanup");
		
		ASelectionDetailsMenu_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnNavigationButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        LeftButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        RightButtonText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               WideSpacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Replay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              LeftEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              RightEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              NextEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Home                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SpawnNavigationButtons(bool Left, bool Right, const class FText& LeftButtonText, const class FText& RightButtonText, bool WideSpacing, bool Replay, const class FScriptDelegate& LeftEvent, const class FScriptDelegate& RightEvent, const class FScriptDelegate& NextEvent, bool Home, bool Next, bool Trophy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnNavigationButtons");
		
		ASelectionDetailsMenu_C_SpawnNavigationButtons_Params params {};
		params.Left = Left;
		params.Right = Right;
		params.LeftButtonText = LeftButtonText;
		params.RightButtonText = RightButtonText;
		params.WideSpacing = WideSpacing;
		params.Replay = Replay;
		params.LeftEvent = LeftEvent;
		params.RightEvent = RightEvent;
		params.NextEvent = NextEvent;
		params.Home = Home;
		params.Next = Next;
		params.Trophy = Trophy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTitleText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ASelectionDetailsMenu_C::UpdateTitleText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTitleText");
		
		ASelectionDetailsMenu_C_UpdateTitleText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Initialize");
		
		ASelectionDetailsMenu_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UserConstructionScript");
		
		ASelectionDetailsMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::Timeline_MenuScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__FinishedFunc");
		
		ASelectionDetailsMenu_C_Timeline_MenuScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::Timeline_MenuScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__UpdateFunc");
		
		ASelectionDetailsMenu_C_Timeline_MenuScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583046C6A27
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB35583046C6A27()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583046C6A27");
		
		ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB35583046C6A27_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583046C6A27
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB35583046C6A27()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583046C6A27");
		
		ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB35583046C6A27_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A046AC96DF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A046AC96DF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A046AC96DF");
		
		ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A046AC96DF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A046AC96DF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A046AC96DF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A046AC96DF");
		
		ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A046AC96DF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583866C1CE2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB35583866C1CE2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583866C1CE2");
		
		ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB35583866C1CE2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583866C1CE2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB35583866C1CE2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583866C1CE2");
		
		ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB35583866C1CE2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A");
		
		ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A");
		
		ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB3558304ED0BB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB3558304ED0BB9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB3558304ED0BB9");
		
		ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB3558304ED0BB9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB3558304ED0BB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB3558304ED0BB9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB3558304ED0BB9");
		
		ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB3558304ED0BB9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnCancel_D21648FA4F7680E39E435BB326E4A1A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnCancel_D21648FA4F7680E39E435BB326E4A1A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnCancel_D21648FA4F7680E39E435BB326E4A1A7");
		
		ASelectionDetailsMenu_C_OnCancel_D21648FA4F7680E39E435BB326E4A1A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnTimeout_D21648FA4F7680E39E435BB326E4A1A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnTimeout_D21648FA4F7680E39E435BB326E4A1A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnTimeout_D21648FA4F7680E39E435BB326E4A1A7");
		
		ASelectionDetailsMenu_C_OnTimeout_D21648FA4F7680E39E435BB326E4A1A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D21648FA4F7680E39E435BB326E4A1A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_D21648FA4F7680E39E435BB326E4A1A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D21648FA4F7680E39E435BB326E4A1A7");
		
		ASelectionDetailsMenu_C_OnFailure_D21648FA4F7680E39E435BB326E4A1A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7");
		
		ASelectionDetailsMenu_C_OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7");
		
		ASelectionDetailsMenu_C_OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_B603128B47FD5879018CB5924F266D10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_B603128B47FD5879018CB5924F266D10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_B603128B47FD5879018CB5924F266D10");
		
		ASelectionDetailsMenu_C_OnFailure_B603128B47FD5879018CB5924F266D10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_B603128B47FD5879018CB5924F266D10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_B603128B47FD5879018CB5924F266D10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_B603128B47FD5879018CB5924F266D10");
		
		ASelectionDetailsMenu_C_OnSuccess_B603128B47FD5879018CB5924F266D10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FC682A0844206A0687EAD6A05F2DED23
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_FC682A0844206A0687EAD6A05F2DED23()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FC682A0844206A0687EAD6A05F2DED23");
		
		ASelectionDetailsMenu_C_OnFailure_FC682A0844206A0687EAD6A05F2DED23_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FC682A0844206A0687EAD6A05F2DED23
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_FC682A0844206A0687EAD6A05F2DED23()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FC682A0844206A0687EAD6A05F2DED23");
		
		ASelectionDetailsMenu_C_OnSuccess_FC682A0844206A0687EAD6A05F2DED23_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F");
		
		ASelectionDetailsMenu_C_OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F");
		
		ASelectionDetailsMenu_C_OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_CD8BB87247F0975EE92B268E277A296F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::OnLoaded_CD8BB87247F0975EE92B268E277A296F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_CD8BB87247F0975EE92B268E277A296F");
		
		ASelectionDetailsMenu_C_OnLoaded_CD8BB87247F0975EE92B268E277A296F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC");
		
		ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC");
		
		ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A028C7872D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A028C7872D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A028C7872D");
		
		ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A028C7872D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A028C7872D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A028C7872D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A028C7872D");
		
		ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A028C7872D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_72F3684D43843E50F6BE3EB232D6B11C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::OnLoaded_72F3684D43843E50F6BE3EB232D6B11C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_72F3684D43843E50F6BE3EB232D6B11C");
		
		ASelectionDetailsMenu_C_OnLoaded_72F3684D43843E50F6BE3EB232D6B11C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355838CBBFA14
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB355838CBBFA14()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355838CBBFA14");
		
		ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB355838CBBFA14_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355838CBBFA14
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB355838CBBFA14()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355838CBBFA14");
		
		ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB355838CBBFA14_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21");
		
		ASelectionDetailsMenu_C_OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355836A077BD5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB355836A077BD5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355836A077BD5");
		
		ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB355836A077BD5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355836A077BD5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB355836A077BD5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355836A077BD5");
		
		ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB355836A077BD5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0462DF741
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A0462DF741()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0462DF741");
		
		ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0462DF741_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0462DF741
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A0462DF741()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0462DF741");
		
		ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0462DF741_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61");
		
		ASelectionDetailsMenu_C_OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_67060BA04A461053627A9E84D1A971B1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::OnLoaded_67060BA04A461053627A9E84D1A971B1(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_67060BA04A461053627A9E84D1A971B1");
		
		ASelectionDetailsMenu_C_OnLoaded_67060BA04A461053627A9E84D1A971B1_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsOnline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateResultsOnline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsOnline");
		
		ASelectionDetailsMenu_C_CreateResultsOnline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateOnlineMatchTypeMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateOnlineMatchTypeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateOnlineMatchTypeMenu");
		
		ASelectionDetailsMenu_C_CreateOnlineMatchTypeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackFromOnlineMatchType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackFromOnlineMatchType(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackFromOnlineMatchType");
		
		ASelectionDetailsMenu_C_BackFromOnlineMatchType_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineGameTypeChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::OnlineGameTypeChosen(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineGameTypeChosen");
		
		ASelectionDetailsMenu_C_OnlineGameTypeChosen_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFindMatchChooseSport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnFindMatchChooseSport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFindMatchChooseSport");
		
		ASelectionDetailsMenu_C_SpawnFindMatchChooseSport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnCheckingForFriendsMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnCheckingForFriendsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnCheckingForFriendsMenu");
		
		ASelectionDetailsMenu_C_SpawnCheckingForFriendsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineMatchTypeReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OnlineMatchTypeReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineMatchTypeReady");
		
		ASelectionDetailsMenu_C_OnlineMatchTypeReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchMenuReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FindMatchMenuReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchMenuReady");
		
		ASelectionDetailsMenu_C_FindMatchMenuReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayWithFriendsReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PlayWithFriendsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayWithFriendsReady");
		
		ASelectionDetailsMenu_C_PlayWithFriendsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateNextButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::UpdateNextButton(bool EnableButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateNextButton");
		
		ASelectionDetailsMenu_C_UpdateNextButton_Params params {};
		params.EnableButton = EnableButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateCheckingForPlayers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateCheckingForPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateCheckingForPlayers");
		
		ASelectionDetailsMenu_C_CreateCheckingForPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartFindMatchMatchmaking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::StartFindMatchMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartFindMatchMatchmaking");
		
		ASelectionDetailsMenu_C_StartFindMatchMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendsListMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnFriendsListMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendsListMenu");
		
		ASelectionDetailsMenu_C_SpawnFriendsListMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteFriendSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramFriend                                InvitePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ASelectionDetailsMenu_C::InviteFriendSelected(const struct FScramFriend& InvitePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteFriendSelected");
		
		ASelectionDetailsMenu_C_InviteFriendSelected_Params params {};
		params.InvitePlayer = InvitePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinFriendSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramGameInvite                            JoinPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ASelectionDetailsMenu_C::JoinFriendSelected(const struct FScramGameInvite& JoinPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinFriendSelected");
		
		ASelectionDetailsMenu_C_JoinFriendSelected_Params params {};
		params.JoinPlayer = JoinPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FriendsListDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FriendsListDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FriendsListDisplayed");
		
		ASelectionDetailsMenu_C_FriendsListDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailedConnection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FailedConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailedConnection");
		
		ASelectionDetailsMenu_C_FailedConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchFailedMessageReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FindMatchFailedMessageReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchFailedMessageReady");
		
		ASelectionDetailsMenu_C_FindMatchFailedMessageReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnGetFriends
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramFriend>                        friends                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASelectionDetailsMenu_C::OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnGetFriends");
		
		ASelectionDetailsMenu_C_OnGetFriends_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.friends = friends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesChecked
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramGameInvite>                    invites                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASelectionDetailsMenu_C::InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesChecked");
		
		ASelectionDetailsMenu_C_InvitesChecked_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.invites = invites;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingFriendMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::InvitingFriendMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingFriendMessage");
		
		ASelectionDetailsMenu_C_InvitingFriendMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingMessageDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::InvitingMessageDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingMessageDisplayed");
		
		ASelectionDetailsMenu_C_InvitingMessageDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowJoiningMatchMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ShowJoiningMatchMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowJoiningMatchMessage");
		
		ASelectionDetailsMenu_C_ShowJoiningMatchMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchMenuReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::JoinMatchMenuReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchMenuReady");
		
		ASelectionDetailsMenu_C_JoinMatchMenuReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PreparingJoinFindMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PreparingJoinFindMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PreparingJoinFindMatch");
		
		ASelectionDetailsMenu_C_PreparingJoinFindMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientJoinFriend
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ClientJoinFriend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientJoinFriend");
		
		ASelectionDetailsMenu_C_ClientJoinFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExitFailMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ExitFailMessage(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExitFailMessage");
		
		ASelectionDetailsMenu_C_ExitFailMessage_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelInvite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::CancelInvite(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelInvite");
		
		ASelectionDetailsMenu_C_CancelInvite_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelFindMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::CancelFindMatch(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelFindMatch");
		
		ASelectionDetailsMenu_C_CancelFindMatch_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToChooseOnlineType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToChooseOnlineType(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToChooseOnlineType");
		
		ASelectionDetailsMenu_C_BackToChooseOnlineType_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportsPoolSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SportsPoolSelected(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportsPoolSelected");
		
		ASelectionDetailsMenu_C_SportsPoolSelected_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TimedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOut");
		
		ASelectionDetailsMenu_C_TimedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.RefreshFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::RefreshFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RefreshFailed");
		
		ASelectionDetailsMenu_C_RefreshFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateJoinInviteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateJoinInviteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateJoinInviteMenu");
		
		ASelectionDetailsMenu_C_CreateJoinInviteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesDismissed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::InvitesDismissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesDismissed");
		
		ASelectionDetailsMenu_C_InvitesDismissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::QuickMatchTurnAround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAround");
		
		ASelectionDetailsMenu_C_QuickMatchTurnAround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQuickMatchTurnAround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnQuickMatchTurnAround(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQuickMatchTurnAround");
		
		ASelectionDetailsMenu_C_SpawnQuickMatchTurnAround_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAroundCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::QuickMatchTurnAroundCompleted(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAroundCompleted");
		
		ASelectionDetailsMenu_C_QuickMatchTurnAroundCompleted_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundHostFriend
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TurnAroundHostFriend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundHostFriend");
		
		ASelectionDetailsMenu_C_TurnAroundHostFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundHostFriend
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnTurnAroundHostFriend(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundHostFriend");
		
		ASelectionDetailsMenu_C_SpawnTurnAroundHostFriend_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.HostFriendTurnAroundComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::HostFriendTurnAroundComplete(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HostFriendTurnAroundComplete");
		
		ASelectionDetailsMenu_C_HostFriendTurnAroundComplete_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundJoinMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TurnAroundJoinMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundJoinMatch");
		
		ASelectionDetailsMenu_C_TurnAroundJoinMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundJoinMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SpawnTurnAroundJoinMatch(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundJoinMatch");
		
		ASelectionDetailsMenu_C_SpawnTurnAroundJoinMatch_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchTurnAroundComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::JoinMatchTurnAroundComplete(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchTurnAroundComplete");
		
		ASelectionDetailsMenu_C_JoinMatchTurnAroundComplete_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOutSelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::TimedOutSelectionMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOutSelectionMade");
		
		ASelectionDetailsMenu_C_TimedOutSelectionMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInviteCancelledMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnInviteCancelledMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInviteCancelledMessage");
		
		ASelectionDetailsMenu_C_SpawnInviteCancelledMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteCancelledMessageDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::InviteCancelledMessageDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteCancelledMessageDisplayed");
		
		ASelectionDetailsMenu_C_InviteCancelledMessageDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoInternet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::NoInternet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoInternet");
		
		ASelectionDetailsMenu_C_NoInternet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::NewInviteReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteReceived");
		
		ASelectionDetailsMenu_C_NewInviteReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteCollected
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramGameInvite>                    invites                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASelectionDetailsMenu_C::NewInviteCollected(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteCollected");
		
		ASelectionDetailsMenu_C_NewInviteCollected_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.invites = invites;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientInviteJoinFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramPendingGameFailure                           failureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ClientInviteJoinFailed(EScramPendingGameFailure failureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientInviteJoinFailed");
		
		ASelectionDetailsMenu_C_ClientInviteJoinFailed_Params params {};
		params.failureType = failureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientUnrealJoinFailedMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ClientUnrealJoinFailedMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientUnrealJoinFailedMenu");
		
		ASelectionDetailsMenu_C_ClientUnrealJoinFailedMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerInviteJoinFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramPendingGameFailure                           failureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ServerInviteJoinFailed(EScramPendingGameFailure failureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerInviteJoinFailed");
		
		ASelectionDetailsMenu_C_ServerInviteJoinFailed_Params params {};
		params.failureType = failureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramPendingGameFailure                           FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::UnrealConnectionFailed(EScramPendingGameFailure FailureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailed");
		
		ASelectionDetailsMenu_C_UnrealConnectionFailed_Params params {};
		params.FailureType = FailureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailedMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::UnrealConnectionFailedMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailedMessage");
		
		ASelectionDetailsMenu_C_UnrealConnectionFailedMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectedFailedExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::UnrealConnectedFailedExit(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectedFailedExit");
		
		ASelectionDetailsMenu_C_UnrealConnectedFailedExit_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerUnrealJoinFailedMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ServerUnrealJoinFailedMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerUnrealJoinFailedMenu");
		
		ASelectionDetailsMenu_C_ServerUnrealJoinFailedMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoFriends
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::NoFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoFriends");
		
		ASelectionDetailsMenu_C_NoFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerMatchmakingTimeout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ServerMatchmakingTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerMatchmakingTimeout");
		
		ASelectionDetailsMenu_C_ServerMatchmakingTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnNewPlayerJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::OnNewPlayerJoin(class APlayerController* NewPlayer, bool IsSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnNewPlayerJoin");
		
		ASelectionDetailsMenu_C_OnNewPlayerJoin_Params params {};
		params.NewPlayer = NewPlayer;
		params.IsSpectator = IsSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.DeferredInvite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::DeferredInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DeferredInvite");
		
		ASelectionDetailsMenu_C_DeferredInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnpQuickPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateResultsPnpQuickPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnpQuickPlay");
		
		ASelectionDetailsMenu_C_CreateResultsPnpQuickPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnPTournament
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateResultsPnPTournament()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnPTournament");
		
		ASelectionDetailsMenu_C_CreateResultsPnPTournament_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpPlayerCountMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreatePnpPlayerCountMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpPlayerCountMenu");
		
		ASelectionDetailsMenu_C_CreatePnpPlayerCountMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnPGameType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreatePnPGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnPGameType");
		
		ASelectionDetailsMenu_C_CreatePnPGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpTournamentCountMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreatePnpTournamentCountMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpTournamentCountMenu");
		
		ASelectionDetailsMenu_C_CreatePnpTournamentCountMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlayGameSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PnpQuickPlayGameSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlayGameSelection");
		
		ASelectionDetailsMenu_C_PnpQuickPlayGameSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTournament
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::StartTournament(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTournament");
		
		ASelectionDetailsMenu_C_StartTournament_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnPStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PnPStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnPStart");
		
		ASelectionDetailsMenu_C_PnPStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.tempEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::tempEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.tempEvent");
		
		ASelectionDetailsMenu_C_tempEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PvpMenuReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PvpMenuReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PvpMenuReady");
		
		ASelectionDetailsMenu_C_PvpMenuReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PnpGameTypeReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeReady");
		
		ASelectionDetailsMenu_C_PnpGameTypeReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TournamentCountReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TournamentCountReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TournamentCountReady");
		
		ASelectionDetailsMenu_C_TournamentCountReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpSelectionReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PnpSelectionReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpSelectionReady");
		
		ASelectionDetailsMenu_C_PnpSelectionReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlaySelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::PnpQuickPlaySelectionMade(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlaySelectionMade");
		
		ASelectionDetailsMenu_C_PnpQuickPlaySelectionMade_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::PnpGameTypeChosen(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeChosen");
		
		ASelectionDetailsMenu_C_PnpGameTypeChosen_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpResultsDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::PnpResultsDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpResultsDisplayed");
		
		ASelectionDetailsMenu_C_PnpResultsDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPlayerCountMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToPlayerCountMenu(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPlayerCountMenu");
		
		ASelectionDetailsMenu_C_BackToPlayerCountMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPnpGameType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToPnpGameType(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPnpGameType");
		
		ASelectionDetailsMenu_C_BackToPnpGameType_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToMultiplayerMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToMultiplayerMode(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToMultiplayerMode");
		
		ASelectionDetailsMenu_C_BackToMultiplayerMode_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerCountComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::PlayerCountComplete(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerCountComplete");
		
		ASelectionDetailsMenu_C_PlayerCountComplete_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateSportModeMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateSportModeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateSportModeMenu");
		
		ASelectionDetailsMenu_C_CreateSportModeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsSportQuickplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateResultsSportQuickplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsSportQuickplay");
		
		ASelectionDetailsMenu_C_CreateResultsSportQuickplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsTraining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateResultsTraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsTraining");
		
		ASelectionDetailsMenu_C_CreateResultsTraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsChallenge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateResultsChallenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsChallenge");
		
		ASelectionDetailsMenu_C_CreateResultsChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SportModeSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeSelected");
		
		ASelectionDetailsMenu_C_SportModeSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpInfoMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnQpInfoMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpInfoMenu");
		
		ASelectionDetailsMenu_C_SpawnQpInfoMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingSelectionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnTrainingSelectionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingSelectionMenu");
		
		ASelectionDetailsMenu_C_SpawnTrainingSelectionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChallengesSelectionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnChallengesSelectionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChallengesSelectionMenu");
		
		ASelectionDetailsMenu_C_SpawnChallengesSelectionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameInfoScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnGameInfoScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameInfoScreen");
		
		ASelectionDetailsMenu_C_SpawnGameInfoScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnTrainingOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptions");
		
		ASelectionDetailsMenu_C_SpawnTrainingOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportMenuModeReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SportMenuModeReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportMenuModeReady");
		
		ASelectionDetailsMenu_C_SportMenuModeReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SelectionMenuReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuReady");
		
		ASelectionDetailsMenu_C_SelectionMenuReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickPlaySetupReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::QuickPlaySetupReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickPlaySetupReady");
		
		ASelectionDetailsMenu_C_QuickPlaySetupReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::GameInfoReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoReady");
		
		ASelectionDetailsMenu_C_GameInfoReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsReady");
		
		ASelectionDetailsMenu_C_TrainingOptionsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        GameName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::GameSelected(int32_t ID, const class FName& GameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameSelected");
		
		ASelectionDetailsMenu_C_GameSelected_Params params {};
		params.ID = ID;
		params.GameName = GameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishTrainingOrChallenge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FinishTrainingOrChallenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishTrainingOrChallenge");
		
		ASelectionDetailsMenu_C_FinishTrainingOrChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishQuickplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FinishQuickplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishQuickplay");
		
		ASelectionDetailsMenu_C_FinishQuickplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ToggleChallengeInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ToggleChallengeInfo(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ToggleChallengeInfo");
		
		ASelectionDetailsMenu_C_ToggleChallengeInfo_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToSportModeMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToSportModeMenu(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToSportModeMenu");
		
		ASelectionDetailsMenu_C_BackToSportModeMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayQuickPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::PlayQuickPlay(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayQuickPlay");
		
		ASelectionDetailsMenu_C_PlayQuickPlay_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToSportOptionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ReturnToSportOptionMenu(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToSportOptionMenu");
		
		ASelectionDetailsMenu_C_ReturnToSportOptionMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToGameSelection(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameSelection");
		
		ASelectionDetailsMenu_C_BackToGameSelection_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTrainingOrChallenge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::StartTrainingOrChallenge(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTrainingOrChallenge");
		
		ASelectionDetailsMenu_C_StartTrainingOrChallenge_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameInfoScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToGameInfoScreen(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameInfoScreen");
		
		ASelectionDetailsMenu_C_BackToGameInfoScreen_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsSet(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsSet");
		
		ASelectionDetailsMenu_C_TrainingOptionsSet_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WideNextButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::ResultsReady(bool WideNextButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsReady");
		
		ASelectionDetailsMenu_C_ResultsReady_Params params {};
		params.WideNextButton = WideNextButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsDisplayComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WideNextButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::ResultsDisplayComplete(bool WideNextButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsDisplayComplete");
		
		ASelectionDetailsMenu_C_ResultsDisplayComplete_Params params {};
		params.WideNextButton = WideNextButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FadeToThemeMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FadeToThemeMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FadeToThemeMusic");
		
		ASelectionDetailsMenu_C_FadeToThemeMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionAvatarButtonUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SportOptionAvatarButtonUsed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionAvatarButtonUsed");
		
		ASelectionDetailsMenu_C_SportOptionAvatarButtonUsed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SportOptionEditAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatar");
		
		ASelectionDetailsMenu_C_SportOptionEditAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SportOptionEditAvatarOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarOpened");
		
		ASelectionDetailsMenu_C_SportOptionEditAvatarOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SportOptionEditAvatarComplete(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarComplete");
		
		ASelectionDetailsMenu_C_SportOptionEditAvatarComplete_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeAvatarButtonUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SportModeAvatarButtonUsed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeAvatarButtonUsed");
		
		ASelectionDetailsMenu_C_SportModeAvatarButtonUsed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SportModeEditAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatar");
		
		ASelectionDetailsMenu_C_SportModeEditAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SportModeEditAvatarOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarOpened");
		
		ASelectionDetailsMenu_C_SportModeEditAvatarOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SportModeEditAvatarComplete(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarComplete");
		
		ASelectionDetailsMenu_C_SportModeEditAvatarComplete_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuAvatarButtonUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SelectionMenuAvatarButtonUsed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuAvatarButtonUsed");
		
		ASelectionDetailsMenu_C_SelectionMenuAvatarButtonUsed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SelectionMenuEditAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatar");
		
		ASelectionDetailsMenu_C_SelectionMenuEditAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SelectionMenuEditAvatarOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarOpened");
		
		ASelectionDetailsMenu_C_SelectionMenuEditAvatarOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::SelectionMenuEditAvatarComplete(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarComplete");
		
		ASelectionDetailsMenu_C_SelectionMenuEditAvatarComplete_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoAvatarButtonUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::GameInfoAvatarButtonUsed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoAvatarButtonUsed");
		
		ASelectionDetailsMenu_C_GameInfoAvatarButtonUsed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::GameInfoEditAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatar");
		
		ASelectionDetailsMenu_C_GameInfoEditAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::GameInfoEditAvatarOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarOpened");
		
		ASelectionDetailsMenu_C_GameInfoEditAvatarOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::GameInfoEditAvatarComplete(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarComplete");
		
		ASelectionDetailsMenu_C_GameInfoEditAvatarComplete_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsAvatarButtonUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsAvatarButtonUsed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsAvatarButtonUsed");
		
		ASelectionDetailsMenu_C_TrainingOptionsAvatarButtonUsed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsEditAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatar");
		
		ASelectionDetailsMenu_C_TrainingOptionsEditAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsEditAvatarOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarOptions");
		
		ASelectionDetailsMenu_C_TrainingOptionsEditAvatarOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsEditAvatarComplete(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarComplete");
		
		ASelectionDetailsMenu_C_TrainingOptionsEditAvatarComplete_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.EditSportOptionsSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::EditSportOptionsSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.EditSportOptionsSelected");
		
		ASelectionDetailsMenu_C_EditSportOptionsSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsNavButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnQpDetailsNavButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsNavButtons");
		
		ASelectionDetailsMenu_C_SpawnQpDetailsNavButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SpawnSportOptionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionMenu");
		
		ASelectionDetailsMenu_C_SpawnSportOptionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToQpInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::BackToQpInfo(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToQpInfo");
		
		ASelectionDetailsMenu_C_BackToQpInfo_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.AnnouncerbuttonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::AnnouncerbuttonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.AnnouncerbuttonPressed");
		
		ASelectionDetailsMenu_C_AnnouncerbuttonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TrainingOptionsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsLoaded");
		
		ASelectionDetailsMenu_C_TrainingOptionsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveBeginPlay");
		
		ASelectionDetailsMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OpenFirstMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OpenFirstMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OpenFirstMenu");
		
		ASelectionDetailsMenu_C_OpenFirstMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InitialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::InitialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InitialMenu");
		
		ASelectionDetailsMenu_C_InitialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               QuitButtonPressed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::CloseMenu(bool QuitButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenu");
		
		ASelectionDetailsMenu_C_CloseMenu_Params params {};
		params.QuitButtonPressed = QuitButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateMultiplayerModeMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateMultiplayerModeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateMultiplayerModeMenu");
		
		ASelectionDetailsMenu_C_CreateMultiplayerModeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::MultiplayerModeSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeSelected");
		
		ASelectionDetailsMenu_C_MultiplayerModeSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToCenter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ReturnToCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToCenter");
		
		ASelectionDetailsMenu_C_ReturnToCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CapsuleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CapsuleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CapsuleOn");
		
		ASelectionDetailsMenu_C_CapsuleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveTick");
		
		ASelectionDetailsMenu_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GamePaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::GamePaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GamePaused");
		
		ASelectionDetailsMenu_C_GamePaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameUnpaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::GameUnpaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameUnpaused");
		
		ASelectionDetailsMenu_C_GameUnpaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.HeaderDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::HeaderDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HeaderDestroyed");
		
		ASelectionDetailsMenu_C_HeaderDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleUpMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ScaleUpMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleUpMenu");
		
		ASelectionDetailsMenu_C_ScaleUpMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleDownMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ScaleDownMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleDownMenu");
		
		ASelectionDetailsMenu_C_ScaleDownMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ButtonPressed");
		
		ASelectionDetailsMenu_C_ButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::MultiplayerModeReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeReady");
		
		ASelectionDetailsMenu_C_MultiplayerModeReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveLastMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::RemoveLastMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveLastMenu");
		
		ASelectionDetailsMenu_C_RemoveLastMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinalShutdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::FinalShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinalShutdown");
		
		ASelectionDetailsMenu_C_FinalShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllAwardsComplete                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::TrophyComplete(bool AllAwardsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyComplete");
		
		ASelectionDetailsMenu_C_TrophyComplete_Params params {};
		params.AllAwardsComplete = AllAwardsComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateTrophyMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CreateTrophyMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateTrophyMenu");
		
		ASelectionDetailsMenu_C_CreateTrophyMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::TrophyLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyLoop");
		
		ASelectionDetailsMenu_C_TrophyLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenuWithHeaderHandoff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::CloseMenuWithHeaderHandoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenuWithHeaderHandoff");
		
		ASelectionDetailsMenu_C_CloseMenuWithHeaderHandoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.DestroyMenuWithHandoff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::DestroyMenuWithHandoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DestroyMenuWithHandoff");
		
		ASelectionDetailsMenu_C_DestroyMenuWithHandoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SkipResults
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::SkipResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SkipResults");
		
		ASelectionDetailsMenu_C_SkipResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::QuitButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitButtonPressed");
		
		ASelectionDetailsMenu_C_QuitButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyReadyToSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::TrophyReadyToSpawn(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyReadyToSpawn");
		
		ASelectionDetailsMenu_C_TrophyReadyToSpawn_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenuEarlyExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::NextMenuEarlyExit(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenuEarlyExit");
		
		ASelectionDetailsMenu_C_NextMenuEarlyExit_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerTurnedAround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::PlayerTurnedAround(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerTurnedAround");
		
		ASelectionDetailsMenu_C_PlayerTurnedAround_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.RecenterMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::RecenterMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RecenterMenu");
		
		ASelectionDetailsMenu_C_RecenterMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::DemoMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoMenu");
		
		ASelectionDetailsMenu_C_DemoMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteUpdateComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramGameInvite>                    invites                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASelectionDetailsMenu_C::InviteUpdateComplete(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteUpdateComplete");
		
		ASelectionDetailsMenu_C_InviteUpdateComplete_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.invites = invites;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.WaitForInvitesUpdateComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::WaitForInvitesUpdateComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.WaitForInvitesUpdateComplete");
		
		ASelectionDetailsMenu_C_WaitForInvitesUpdateComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ChoseSportOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::ChoseSportOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ChoseSportOpened");
		
		ASelectionDetailsMenu_C_ChoseSportOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoSportChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::DemoSportChosen(EScramSport Sport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoSportChosen");
		
		ASelectionDetailsMenu_C_DemoSportChosen_Params params {};
		params.Sport = Sport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.RiftTurnAroundComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::RiftTurnAroundComplete(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RiftTurnAroundComplete");
		
		ASelectionDetailsMenu_C_RiftTurnAroundComplete_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayChooseSportAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::PlayChooseSportAudio(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayChooseSportAudio");
		
		ASelectionDetailsMenu_C_PlayChooseSportAudio_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExecuteUbergraph_SelectionDetailsMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASelectionDetailsMenu_C::ExecuteUbergraph_SelectionDetailsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExecuteUbergraph_SelectionDetailsMenu");
		
		ASelectionDetailsMenu_C_ExecuteUbergraph_SelectionDetailsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::InvitesUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesUpdated__DelegateSignature");
		
		ASelectionDetailsMenu_C_InvitesUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.MenuOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::MenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.MenuOpened__DelegateSignature");
		
		ASelectionDetailsMenu_C_MenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SinglePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASelectionDetailsMenu_C::SelectionComplete__DelegateSignature(EScramSport Sport, bool SinglePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionComplete__DelegateSignature");
		
		ASelectionDetailsMenu_C_SelectionComplete__DelegateSignature_Params params {};
		params.Sport = Sport;
		params.SinglePlayer = SinglePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.OldMenuClear__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::OldMenuClear__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OldMenuClear__DelegateSignature");
		
		ASelectionDetailsMenu_C_OldMenuClear__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitToMainMenu__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASelectionDetailsMenu_C::QuitToMainMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitToMainMenu__DelegateSignature");
		
		ASelectionDetailsMenu_C_QuitToMainMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASelectionDetailsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASelectionDetailsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SelectionDetailsMenu.SelectionDetailsMenu_C");
		return ptr;
	}

}


