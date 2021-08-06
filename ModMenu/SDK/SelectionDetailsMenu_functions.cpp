// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Choice                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         ButtonPressed                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnChooseSportMenu(const struct FScriptDelegate& Choice, const struct FScriptDelegate& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportMenu");

	ASelectionDetailsMenu_C_SpawnChooseSportMenu_Params params;
	params.Choice = Choice;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetArrayFromRefs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Images                         (Parm, OutParm, ZeroConstructor)
void ASelectionDetailsMenu_C::GetArrayFromRefs(TArray<class UTexture2D*>* Images)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetArrayFromRefs");

	ASelectionDetailsMenu_C_GetArrayFromRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Images != nullptr)
		*Images = params.Images;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAnnouncerButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnAnnouncerButton(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAnnouncerButton");

	ASelectionDetailsMenu_C_SpawnAnnouncerButton_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailsafeDoubleMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FailsafeDoubleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailsafeDoubleMenu");

	ASelectionDetailsMenu_C_FailsafeDoubleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnConfirmationMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   OverrideText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnConfirmationMenu(const struct FName& LocText, const struct FText& OverrideText, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnConfirmationMenu");

	ASelectionDetailsMenu_C_SpawnConfirmationMenu_Params params;
	params.LocText = LocText;
	params.OverrideText = OverrideText;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnJoinInviteMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         JoinEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         DismissEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnJoinInviteMenu(const struct FScriptDelegate& JoinEvent, const struct FScriptDelegate& DismissEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnJoinInviteMenu");

	ASelectionDetailsMenu_C_SpawnJoinInviteMenu_Params params;
	params.JoinEvent = JoinEvent;
	params.DismissEvent = DismissEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         EditEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         SpawnNavEvent                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class AMenu_QpDetails_C*       Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnQpDetailsMenu(const struct FScriptDelegate& EditEvent, const struct FScriptDelegate& SpawnNavEvent, class AMenu_QpDetails_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsMenu");

	ASelectionDetailsMenu_C_SpawnQpDetailsMenu_Params params;
	params.EditEvent = EditEvent;
	params.SpawnNavEvent = SpawnNavEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTeamColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::UpdateTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTeamColor");

	ASelectionDetailsMenu_C_UpdateTeamColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnEditAvatarMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnEditAvatarMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnEditAvatarMenu");

	ASelectionDetailsMenu_C_SpawnEditAvatarMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAvatarButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         AvatarEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnAvatarButton(const struct FScriptDelegate& AvatarEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAvatarButton");

	ASelectionDetailsMenu_C_SpawnAvatarButton_Params params;
	params.AvatarEvent = AvatarEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInfoButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnInfoButton(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInfoButton");

	ASelectionDetailsMenu_C_SpawnInfoButton_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptionsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         MenuLoaded                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnTrainingOptionsMenu(const struct FScriptDelegate& MenuLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptionsMenu");

	ASelectionDetailsMenu_C_SpawnTrainingOptionsMenu_Params params;
	params.MenuLoaded = MenuLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendListMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FScramFriend>    FriendsList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FScramGameInvite> InviteList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         InviteEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         JoinEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         FailEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnFriendListMenu(TArray<struct FScramFriend>* FriendsList, TArray<struct FScramGameInvite>* InviteList, const struct FScriptDelegate& InviteEvent, const struct FScriptDelegate& JoinEvent, const struct FScriptDelegate& FailEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendListMenu");

	ASelectionDetailsMenu_C_SpawnFriendListMenu_Params params;
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


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnMessageMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            TimerDisplay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnMessageMenu(const struct FText& Message, int TimerDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnMessageMenu");

	ASelectionDetailsMenu_C_SpawnMessageMenu_Params params;
	params.Message = Message;
	params.TimerDisplay = TimerDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         UpdateButtonEvent              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnChooseSportsMenu(const struct FScriptDelegate& UpdateButtonEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportsMenu");

	ASelectionDetailsMenu_C_SpawnChooseSportsMenu_Params params;
	params.UpdateButtonEvent = UpdateButtonEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.Spawn3DImageButtonMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LocTextNames                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      ImagesL                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      ImagesR                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::Spawn3DImageButtonMenu(TArray<struct FName>* LocTextNames, TArray<class UTexture2D*>* ImagesL, TArray<class UTexture2D*>* ImagesR, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Spawn3DImageButtonMenu");

	ASelectionDetailsMenu_C_Spawn3DImageButtonMenu_Params params;
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


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.AwardsEarned?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AwardWaiting                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::AwardsEarned_(bool* AwardWaiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.AwardsEarned?");

	ASelectionDetailsMenu_C_AwardsEarned__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AwardWaiting != nullptr)
		*AwardWaiting = params.AwardWaiting;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrophyAvatarNotification
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         AwardReadyEvent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnTrophyAvatarNotification(const struct FScriptDelegate& AwardReadyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrophyAvatarNotification");

	ASelectionDetailsMenu_C_SpawnTrophyAvatarNotification_Params params;
	params.AwardReadyEvent = AwardReadyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnResultsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         ResultsCompleteEvent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnResultsMenu(const struct FScriptDelegate& ResultsCompleteEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnResultsMenu");

	ASelectionDetailsMenu_C_SpawnResultsMenu_Params params;
	params.ResultsCompleteEvent = ResultsCompleteEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameDetailsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameModeTypes_EGameModeTypes> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMenu_GameDetails_C*     Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnGameDetailsMenu(TEnumAsByte<GameModeTypes_EGameModeTypes> Mode, class AMenu_GameDetails_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameDetailsMenu");

	ASelectionDetailsMenu_C_SpawnGameDetailsMenu_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenu_SportOptions_C*    Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnSportOptionsMenu(class AMenu_SportOptions_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionsMenu");

	ASelectionDetailsMenu_C_SpawnSportOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPnpWinner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnPnpWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPnpWinner");

	ASelectionDetailsMenu_C_SpawnPnpWinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTextTwoMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocText0                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   LocText1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class AMenu_TextTwo_C*         Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnTextTwoMenu(const struct FName& LocText0, const struct FName& LocText1, const struct FScriptDelegate& Event, class AMenu_TextTwo_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTextTwoMenu");

	ASelectionDetailsMenu_C_SpawnTextTwoMenu_Params params;
	params.LocText0 = LocText0;
	params.LocText1 = LocText1;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetAllPnpGameData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      ImageList                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           TitleList                      (Parm, OutParm, ZeroConstructor)
void ASelectionDetailsMenu_C::GetAllPnpGameData(TArray<class UTexture2D*>* ImageList, TArray<struct FText>* TitleList)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetAllPnpGameData");

	ASelectionDetailsMenu_C_GetAllPnpGameData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ImageList != nullptr)
		*ImageList = params.ImageList;
	if (TitleList != nullptr)
		*TitleList = params.TitleList;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFeatherMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture*>        Textures                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Texts                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class AMenu_Feathered_C*       Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnFeatherMenu(TArray<class UTexture*>* Textures, TArray<struct FText>* Texts, int StartIndex, const struct FScriptDelegate& Event, class AMenu_Feathered_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFeatherMenu");

	ASelectionDetailsMenu_C_SpawnFeatherMenu_Params params;
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


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPlayerCountMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnPlayerCountMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPlayerCountMenu");

	ASelectionDetailsMenu_C_SpawnPlayerCountMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.EnableActiveMenuInput
// (Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::EnableActiveMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.EnableActiveMenuInput");

	ASelectionDetailsMenu_C_EnableActiveMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.DisableActiveMenuInput
// (Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::DisableActiveMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DisableActiveMenuInput");

	ASelectionDetailsMenu_C_DisableActiveMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnHeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         FirstMenu                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::SpawnHeader(const struct FScriptDelegate& FirstMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnHeader");

	ASelectionDetailsMenu_C_SpawnHeader_Params params;
	params.FirstMenu = FirstMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetNextGame
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NextGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::GetNextGame(struct FName* NextGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetNextGame");

	ASelectionDetailsMenu_C_GetNextGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextGame != nullptr)
		*NextGame = params.NextGame;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnbindFromPause
// (Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::UnbindFromPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnbindFromPause");

	ASelectionDetailsMenu_C_UnbindFromPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowMenus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ShowMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowMenus");

	ASelectionDetailsMenu_C_ShowMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.HideMenus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::HideMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HideMenus");

	ASelectionDetailsMenu_C_HideMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ProcessResultsData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExitedEarly                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::ProcessResultsData(bool* ExitedEarly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ProcessResultsData");

	ASelectionDetailsMenu_C_ProcessResultsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExitedEarly != nullptr)
		*ExitedEarly = params.ExitedEarly;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.HasOptionsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasOptionMenu                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::HasOptionsMenu(const struct FName& Game, bool* HasOptionMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HasOptionsMenu");

	ASelectionDetailsMenu_C_HasOptionsMenu_Params params;
	params.Game = Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasOptionMenu != nullptr)
		*HasOptionMenu = params.HasOptionMenu;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetSpawnOverride
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SpawnOverride                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::GetSpawnOverride(struct FName* SpawnOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetSpawnOverride");

	ASelectionDetailsMenu_C_GetSpawnOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnOverride != nullptr)
		*SpawnOverride = params.SpawnOverride;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnIndexButtonMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameModeTypes_EGameModeTypes> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Link                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class AMenu_IndexSelection_C*  Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnIndexButtonMenu(TEnumAsByte<GameModeTypes_EGameModeTypes> Mode, SportsScramble_EScramSport Sport, const struct FScriptDelegate& Link, class AMenu_IndexSelection_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnIndexButtonMenu");

	ASelectionDetailsMenu_C_SpawnIndexButtonMenu_Params params;
	params.Mode = Mode;
	params.Sport = Sport;
	params.Link = Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void ASelectionDetailsMenu_C::NextMenu(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenu");

	ASelectionDetailsMenu_C_NextMenu_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnImageButtonMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LocTextNames                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      Images                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class AMenu_PanelImages_C*     MenuActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnImageButtonMenu(TArray<struct FName>* LocTextNames, TArray<class UTexture2D*>* Images, const struct FScriptDelegate& Event, class AMenu_PanelImages_C** MenuActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnImageButtonMenu");

	ASelectionDetailsMenu_C_SpawnImageButtonMenu_Params params;
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


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TypicalButtonSetup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Back                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Replay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Ok                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WideSpacing                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptDelegate         LeftEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         RightEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         NextEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::TypicalButtonSetup(bool Back, bool Replay, bool Ok, bool Play, bool Next, bool WideSpacing, const struct FScriptDelegate& LeftEvent, const struct FScriptDelegate& RightEvent, const struct FScriptDelegate& NextEvent, bool Home, bool Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TypicalButtonSetup");

	ASelectionDetailsMenu_C_TypicalButtonSetup_Params params;
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


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveNavigationButtons
// (Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::RemoveNavigationButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveNavigationButtons");

	ASelectionDetailsMenu_C_RemoveNavigationButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Cleanup");

	ASelectionDetailsMenu_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnNavigationButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   LeftButtonText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RightButtonText                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           WideSpacing                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Replay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptDelegate         LeftEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         RightEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         NextEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::SpawnNavigationButtons(bool Left, bool Right, const struct FText& LeftButtonText, const struct FText& RightButtonText, bool WideSpacing, bool Replay, const struct FScriptDelegate& LeftEvent, const struct FScriptDelegate& RightEvent, const struct FScriptDelegate& NextEvent, bool Home, bool Next, bool Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnNavigationButtons");

	ASelectionDetailsMenu_C_SpawnNavigationButtons_Params params;
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


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ASelectionDetailsMenu_C::UpdateTitleText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTitleText");

	ASelectionDetailsMenu_C_UpdateTitleText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Initialize");

	ASelectionDetailsMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UserConstructionScript");

	ASelectionDetailsMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__FinishedFunc
// (BlueprintEvent)
void ASelectionDetailsMenu_C::Timeline_MenuScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__FinishedFunc");

	ASelectionDetailsMenu_C_Timeline_MenuScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__UpdateFunc
// (BlueprintEvent)
void ASelectionDetailsMenu_C::Timeline_MenuScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__UpdateFunc");

	ASelectionDetailsMenu_C_Timeline_MenuScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583046C6A27
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB35583046C6A27()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583046C6A27");

	ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB35583046C6A27_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583046C6A27
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB35583046C6A27()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583046C6A27");

	ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB35583046C6A27_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A046AC96DF
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A046AC96DF()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A046AC96DF");

	ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A046AC96DF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A046AC96DF
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A046AC96DF()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A046AC96DF");

	ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A046AC96DF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583866C1CE2
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB35583866C1CE2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583866C1CE2");

	ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB35583866C1CE2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583866C1CE2
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB35583866C1CE2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583866C1CE2");

	ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB35583866C1CE2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A");

	ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A");

	ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB3558304ED0BB9
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB3558304ED0BB9()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB3558304ED0BB9");

	ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB3558304ED0BB9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB3558304ED0BB9
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB3558304ED0BB9()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB3558304ED0BB9");

	ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB3558304ED0BB9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnCancel_D21648FA4F7680E39E435BB326E4A1A7
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnCancel_D21648FA4F7680E39E435BB326E4A1A7()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnCancel_D21648FA4F7680E39E435BB326E4A1A7");

	ASelectionDetailsMenu_C_OnCancel_D21648FA4F7680E39E435BB326E4A1A7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnTimeout_D21648FA4F7680E39E435BB326E4A1A7
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnTimeout_D21648FA4F7680E39E435BB326E4A1A7()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnTimeout_D21648FA4F7680E39E435BB326E4A1A7");

	ASelectionDetailsMenu_C_OnTimeout_D21648FA4F7680E39E435BB326E4A1A7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D21648FA4F7680E39E435BB326E4A1A7
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_D21648FA4F7680E39E435BB326E4A1A7()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D21648FA4F7680E39E435BB326E4A1A7");

	ASelectionDetailsMenu_C_OnFailure_D21648FA4F7680E39E435BB326E4A1A7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7");

	ASelectionDetailsMenu_C_OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7");

	ASelectionDetailsMenu_C_OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_B603128B47FD5879018CB5924F266D10
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_B603128B47FD5879018CB5924F266D10()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_B603128B47FD5879018CB5924F266D10");

	ASelectionDetailsMenu_C_OnFailure_B603128B47FD5879018CB5924F266D10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_B603128B47FD5879018CB5924F266D10
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_B603128B47FD5879018CB5924F266D10()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_B603128B47FD5879018CB5924F266D10");

	ASelectionDetailsMenu_C_OnSuccess_B603128B47FD5879018CB5924F266D10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FC682A0844206A0687EAD6A05F2DED23
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_FC682A0844206A0687EAD6A05F2DED23()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FC682A0844206A0687EAD6A05F2DED23");

	ASelectionDetailsMenu_C_OnFailure_FC682A0844206A0687EAD6A05F2DED23_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FC682A0844206A0687EAD6A05F2DED23
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_FC682A0844206A0687EAD6A05F2DED23()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FC682A0844206A0687EAD6A05F2DED23");

	ASelectionDetailsMenu_C_OnSuccess_FC682A0844206A0687EAD6A05F2DED23_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F");

	ASelectionDetailsMenu_C_OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F");

	ASelectionDetailsMenu_C_OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_CD8BB87247F0975EE92B268E277A296F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::OnLoaded_CD8BB87247F0975EE92B268E277A296F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_CD8BB87247F0975EE92B268E277A296F");

	ASelectionDetailsMenu_C_OnLoaded_CD8BB87247F0975EE92B268E277A296F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC");

	ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC");

	ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A028C7872D
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A028C7872D()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A028C7872D");

	ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A028C7872D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A028C7872D
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A028C7872D()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A028C7872D");

	ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A028C7872D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_72F3684D43843E50F6BE3EB232D6B11C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::OnLoaded_72F3684D43843E50F6BE3EB232D6B11C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_72F3684D43843E50F6BE3EB232D6B11C");

	ASelectionDetailsMenu_C_OnLoaded_72F3684D43843E50F6BE3EB232D6B11C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355838CBBFA14
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB355838CBBFA14()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355838CBBFA14");

	ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB355838CBBFA14_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355838CBBFA14
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB355838CBBFA14()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355838CBBFA14");

	ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB355838CBBFA14_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21");

	ASelectionDetailsMenu_C_OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355836A077BD5
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_FE43AE584DB619A31AB355836A077BD5()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355836A077BD5");

	ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB355836A077BD5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355836A077BD5
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_FE43AE584DB619A31AB355836A077BD5()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355836A077BD5");

	ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB355836A077BD5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0462DF741
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnFailure_CB7A18C444F2E804805EC3A0462DF741()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0462DF741");

	ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0462DF741_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0462DF741
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnSuccess_CB7A18C444F2E804805EC3A0462DF741()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0462DF741");

	ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0462DF741_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61");

	ASelectionDetailsMenu_C_OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_67060BA04A461053627A9E84D1A971B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::OnLoaded_67060BA04A461053627A9E84D1A971B1(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_67060BA04A461053627A9E84D1A971B1");

	ASelectionDetailsMenu_C_OnLoaded_67060BA04A461053627A9E84D1A971B1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsOnline
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateResultsOnline()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsOnline");

	ASelectionDetailsMenu_C_CreateResultsOnline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateOnlineMatchTypeMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateOnlineMatchTypeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateOnlineMatchTypeMenu");

	ASelectionDetailsMenu_C_CreateOnlineMatchTypeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackFromOnlineMatchType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackFromOnlineMatchType(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackFromOnlineMatchType");

	ASelectionDetailsMenu_C_BackFromOnlineMatchType_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineGameTypeChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::OnlineGameTypeChosen(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineGameTypeChosen");

	ASelectionDetailsMenu_C_OnlineGameTypeChosen_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFindMatchChooseSport
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnFindMatchChooseSport()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFindMatchChooseSport");

	ASelectionDetailsMenu_C_SpawnFindMatchChooseSport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnCheckingForFriendsMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnCheckingForFriendsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnCheckingForFriendsMenu");

	ASelectionDetailsMenu_C_SpawnCheckingForFriendsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineMatchTypeReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OnlineMatchTypeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineMatchTypeReady");

	ASelectionDetailsMenu_C_OnlineMatchTypeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchMenuReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FindMatchMenuReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchMenuReady");

	ASelectionDetailsMenu_C_FindMatchMenuReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayWithFriendsReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PlayWithFriendsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayWithFriendsReady");

	ASelectionDetailsMenu_C_PlayWithFriendsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateNextButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::UpdateNextButton(bool EnableButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateNextButton");

	ASelectionDetailsMenu_C_UpdateNextButton_Params params;
	params.EnableButton = EnableButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateCheckingForPlayers
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateCheckingForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateCheckingForPlayers");

	ASelectionDetailsMenu_C_CreateCheckingForPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartFindMatchMatchmaking
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::StartFindMatchMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartFindMatchMatchmaking");

	ASelectionDetailsMenu_C_StartFindMatchMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendsListMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnFriendsListMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendsListMenu");

	ASelectionDetailsMenu_C_SpawnFriendsListMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteFriendSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramFriend            InvitePlayer                   (BlueprintVisible, BlueprintReadOnly, Parm)
void ASelectionDetailsMenu_C::InviteFriendSelected(const struct FScramFriend& InvitePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteFriendSelected");

	ASelectionDetailsMenu_C_InviteFriendSelected_Params params;
	params.InvitePlayer = InvitePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinFriendSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramGameInvite        JoinPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm)
void ASelectionDetailsMenu_C::JoinFriendSelected(const struct FScramGameInvite& JoinPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinFriendSelected");

	ASelectionDetailsMenu_C_JoinFriendSelected_Params params;
	params.JoinPlayer = JoinPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FriendsListDisplayed
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FriendsListDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FriendsListDisplayed");

	ASelectionDetailsMenu_C_FriendsListDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailedConnection
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FailedConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailedConnection");

	ASelectionDetailsMenu_C_FailedConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchFailedMessageReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FindMatchFailedMessageReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchFailedMessageReady");

	ASelectionDetailsMenu_C_FindMatchFailedMessageReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnGetFriends
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramFriend>    friends                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASelectionDetailsMenu_C::OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnGetFriends");

	ASelectionDetailsMenu_C_OnGetFriends_Params params;
	params.wasSuccessful = wasSuccessful;
	params.friends = friends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesChecked
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramGameInvite> invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASelectionDetailsMenu_C::InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesChecked");

	ASelectionDetailsMenu_C_InvitesChecked_Params params;
	params.wasSuccessful = wasSuccessful;
	params.invites = invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingFriendMessage
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::InvitingFriendMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingFriendMessage");

	ASelectionDetailsMenu_C_InvitingFriendMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingMessageDisplayed
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::InvitingMessageDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingMessageDisplayed");

	ASelectionDetailsMenu_C_InvitingMessageDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowJoiningMatchMessage
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ShowJoiningMatchMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowJoiningMatchMessage");

	ASelectionDetailsMenu_C_ShowJoiningMatchMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchMenuReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::JoinMatchMenuReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchMenuReady");

	ASelectionDetailsMenu_C_JoinMatchMenuReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PreparingJoinFindMatch
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PreparingJoinFindMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PreparingJoinFindMatch");

	ASelectionDetailsMenu_C_PreparingJoinFindMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientJoinFriend
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ClientJoinFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientJoinFriend");

	ASelectionDetailsMenu_C_ClientJoinFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExitFailMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ExitFailMessage(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExitFailMessage");

	ASelectionDetailsMenu_C_ExitFailMessage_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::CancelInvite(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelInvite");

	ASelectionDetailsMenu_C_CancelInvite_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelFindMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::CancelFindMatch(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelFindMatch");

	ASelectionDetailsMenu_C_CancelFindMatch_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToChooseOnlineType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToChooseOnlineType(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToChooseOnlineType");

	ASelectionDetailsMenu_C_BackToChooseOnlineType_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportsPoolSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SportsPoolSelected(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportsPoolSelected");

	ASelectionDetailsMenu_C_SportsPoolSelected_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOut
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOut");

	ASelectionDetailsMenu_C_TimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.RefreshFailed
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::RefreshFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RefreshFailed");

	ASelectionDetailsMenu_C_RefreshFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateJoinInviteMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateJoinInviteMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateJoinInviteMenu");

	ASelectionDetailsMenu_C_CreateJoinInviteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesDismissed
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::InvitesDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesDismissed");

	ASelectionDetailsMenu_C_InvitesDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAround
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::QuickMatchTurnAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAround");

	ASelectionDetailsMenu_C_QuickMatchTurnAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQuickMatchTurnAround
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnQuickMatchTurnAround(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQuickMatchTurnAround");

	ASelectionDetailsMenu_C_SpawnQuickMatchTurnAround_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAroundCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::QuickMatchTurnAroundCompleted(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAroundCompleted");

	ASelectionDetailsMenu_C_QuickMatchTurnAroundCompleted_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundHostFriend
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TurnAroundHostFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundHostFriend");

	ASelectionDetailsMenu_C_TurnAroundHostFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundHostFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnTurnAroundHostFriend(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundHostFriend");

	ASelectionDetailsMenu_C_SpawnTurnAroundHostFriend_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.HostFriendTurnAroundComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::HostFriendTurnAroundComplete(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HostFriendTurnAroundComplete");

	ASelectionDetailsMenu_C_HostFriendTurnAroundComplete_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundJoinMatch
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TurnAroundJoinMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundJoinMatch");

	ASelectionDetailsMenu_C_TurnAroundJoinMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundJoinMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SpawnTurnAroundJoinMatch(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundJoinMatch");

	ASelectionDetailsMenu_C_SpawnTurnAroundJoinMatch_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchTurnAroundComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::JoinMatchTurnAroundComplete(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchTurnAroundComplete");

	ASelectionDetailsMenu_C_JoinMatchTurnAroundComplete_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOutSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::TimedOutSelectionMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOutSelectionMade");

	ASelectionDetailsMenu_C_TimedOutSelectionMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInviteCancelledMessage
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnInviteCancelledMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInviteCancelledMessage");

	ASelectionDetailsMenu_C_SpawnInviteCancelledMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteCancelledMessageDisplayed
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::InviteCancelledMessageDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteCancelledMessageDisplayed");

	ASelectionDetailsMenu_C_InviteCancelledMessageDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoInternet
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::NoInternet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoInternet");

	ASelectionDetailsMenu_C_NoInternet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteReceived
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::NewInviteReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteReceived");

	ASelectionDetailsMenu_C_NewInviteReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteCollected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramGameInvite> invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASelectionDetailsMenu_C::NewInviteCollected(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteCollected");

	ASelectionDetailsMenu_C_NewInviteCollected_Params params;
	params.wasSuccessful = wasSuccessful;
	params.invites = invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientInviteJoinFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramPendingGameFailure failureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ClientInviteJoinFailed(SportsScramble_EScramPendingGameFailure failureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientInviteJoinFailed");

	ASelectionDetailsMenu_C_ClientInviteJoinFailed_Params params;
	params.failureType = failureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientUnrealJoinFailedMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ClientUnrealJoinFailedMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientUnrealJoinFailedMenu");

	ASelectionDetailsMenu_C_ClientUnrealJoinFailedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerInviteJoinFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramPendingGameFailure failureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ServerInviteJoinFailed(SportsScramble_EScramPendingGameFailure failureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerInviteJoinFailed");

	ASelectionDetailsMenu_C_ServerInviteJoinFailed_Params params;
	params.failureType = failureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramPendingGameFailure Failure_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::UnrealConnectionFailed(SportsScramble_EScramPendingGameFailure Failure_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailed");

	ASelectionDetailsMenu_C_UnrealConnectionFailed_Params params;
	params.Failure_Type = Failure_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailedMessage
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::UnrealConnectionFailedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailedMessage");

	ASelectionDetailsMenu_C_UnrealConnectionFailedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectedFailedExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::UnrealConnectedFailedExit(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectedFailedExit");

	ASelectionDetailsMenu_C_UnrealConnectedFailedExit_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerUnrealJoinFailedMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ServerUnrealJoinFailedMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerUnrealJoinFailedMenu");

	ASelectionDetailsMenu_C_ServerUnrealJoinFailedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoFriends
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::NoFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoFriends");

	ASelectionDetailsMenu_C_NoFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerMatchmakingTimeout
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ServerMatchmakingTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerMatchmakingTimeout");

	ASelectionDetailsMenu_C_ServerMatchmakingTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnNewPlayerJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSpectator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::OnNewPlayerJoin(class APlayerController* NewPlayer, bool IsSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnNewPlayerJoin");

	ASelectionDetailsMenu_C_OnNewPlayerJoin_Params params;
	params.NewPlayer = NewPlayer;
	params.IsSpectator = IsSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.DeferredInvite
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::DeferredInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DeferredInvite");

	ASelectionDetailsMenu_C_DeferredInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnpQuickPlay
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateResultsPnpQuickPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnpQuickPlay");

	ASelectionDetailsMenu_C_CreateResultsPnpQuickPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnPTournament
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateResultsPnPTournament()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnPTournament");

	ASelectionDetailsMenu_C_CreateResultsPnPTournament_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpPlayerCountMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreatePnpPlayerCountMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpPlayerCountMenu");

	ASelectionDetailsMenu_C_CreatePnpPlayerCountMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnPGameType
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreatePnPGameType()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnPGameType");

	ASelectionDetailsMenu_C_CreatePnPGameType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpTournamentCountMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreatePnpTournamentCountMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpTournamentCountMenu");

	ASelectionDetailsMenu_C_CreatePnpTournamentCountMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlayGameSelection
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PnpQuickPlayGameSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlayGameSelection");

	ASelectionDetailsMenu_C_PnpQuickPlayGameSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTournament
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::StartTournament(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTournament");

	ASelectionDetailsMenu_C_StartTournament_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnPStart
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PnPStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnPStart");

	ASelectionDetailsMenu_C_PnPStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.tempEvent
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::tempEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.tempEvent");

	ASelectionDetailsMenu_C_tempEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PvpMenuReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PvpMenuReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PvpMenuReady");

	ASelectionDetailsMenu_C_PvpMenuReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PnpGameTypeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeReady");

	ASelectionDetailsMenu_C_PnpGameTypeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TournamentCountReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TournamentCountReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TournamentCountReady");

	ASelectionDetailsMenu_C_TournamentCountReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpSelectionReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PnpSelectionReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpSelectionReady");

	ASelectionDetailsMenu_C_PnpSelectionReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlaySelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::PnpQuickPlaySelectionMade(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlaySelectionMade");

	ASelectionDetailsMenu_C_PnpQuickPlaySelectionMade_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::PnpGameTypeChosen(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeChosen");

	ASelectionDetailsMenu_C_PnpGameTypeChosen_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpResultsDisplayed
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::PnpResultsDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpResultsDisplayed");

	ASelectionDetailsMenu_C_PnpResultsDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPlayerCountMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToPlayerCountMenu(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPlayerCountMenu");

	ASelectionDetailsMenu_C_BackToPlayerCountMenu_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPnpGameType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToPnpGameType(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPnpGameType");

	ASelectionDetailsMenu_C_BackToPnpGameType_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToMultiplayerMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToMultiplayerMode(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToMultiplayerMode");

	ASelectionDetailsMenu_C_BackToMultiplayerMode_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerCountComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::PlayerCountComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerCountComplete");

	ASelectionDetailsMenu_C_PlayerCountComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateSportModeMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateSportModeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateSportModeMenu");

	ASelectionDetailsMenu_C_CreateSportModeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsSportQuickplay
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateResultsSportQuickplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsSportQuickplay");

	ASelectionDetailsMenu_C_CreateResultsSportQuickplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsTraining
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateResultsTraining()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsTraining");

	ASelectionDetailsMenu_C_CreateResultsTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsChallenge
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateResultsChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsChallenge");

	ASelectionDetailsMenu_C_CreateResultsChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SportModeSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeSelected");

	ASelectionDetailsMenu_C_SportModeSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpInfoMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnQpInfoMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpInfoMenu");

	ASelectionDetailsMenu_C_SpawnQpInfoMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnTrainingSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingSelectionMenu");

	ASelectionDetailsMenu_C_SpawnTrainingSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChallengesSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnChallengesSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChallengesSelectionMenu");

	ASelectionDetailsMenu_C_SpawnChallengesSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameInfoScreen
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnGameInfoScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameInfoScreen");

	ASelectionDetailsMenu_C_SpawnGameInfoScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptions
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnTrainingOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptions");

	ASelectionDetailsMenu_C_SpawnTrainingOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportMenuModeReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SportMenuModeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportMenuModeReady");

	ASelectionDetailsMenu_C_SportMenuModeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SelectionMenuReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuReady");

	ASelectionDetailsMenu_C_SelectionMenuReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickPlaySetupReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::QuickPlaySetupReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickPlaySetupReady");

	ASelectionDetailsMenu_C_QuickPlaySetupReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::GameInfoReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoReady");

	ASelectionDetailsMenu_C_GameInfoReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TrainingOptionsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsReady");

	ASelectionDetailsMenu_C_TrainingOptionsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   GameName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::GameSelected(int ID, const struct FName& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameSelected");

	ASelectionDetailsMenu_C_GameSelected_Params params;
	params.ID = ID;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishTrainingOrChallenge
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FinishTrainingOrChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishTrainingOrChallenge");

	ASelectionDetailsMenu_C_FinishTrainingOrChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishQuickplay
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FinishQuickplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishQuickplay");

	ASelectionDetailsMenu_C_FinishQuickplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ToggleChallengeInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ToggleChallengeInfo(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ToggleChallengeInfo");

	ASelectionDetailsMenu_C_ToggleChallengeInfo_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToSportModeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToSportModeMenu(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToSportModeMenu");

	ASelectionDetailsMenu_C_BackToSportModeMenu_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayQuickPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::PlayQuickPlay(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayQuickPlay");

	ASelectionDetailsMenu_C_PlayQuickPlay_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToSportOptionMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ReturnToSportOptionMenu(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToSportOptionMenu");

	ASelectionDetailsMenu_C_ReturnToSportOptionMenu_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToGameSelection(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameSelection");

	ASelectionDetailsMenu_C_BackToGameSelection_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTrainingOrChallenge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::StartTrainingOrChallenge(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTrainingOrChallenge");

	ASelectionDetailsMenu_C_StartTrainingOrChallenge_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameInfoScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToGameInfoScreen(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameInfoScreen");

	ASelectionDetailsMenu_C_BackToGameInfoScreen_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::TrainingOptionsSet(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsSet");

	ASelectionDetailsMenu_C_TrainingOptionsSet_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WideNextButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::ResultsReady(bool WideNextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsReady");

	ASelectionDetailsMenu_C_ResultsReady_Params params;
	params.WideNextButton = WideNextButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsDisplayComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WideNextButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::ResultsDisplayComplete(bool WideNextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsDisplayComplete");

	ASelectionDetailsMenu_C_ResultsDisplayComplete_Params params;
	params.WideNextButton = WideNextButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FadeToThemeMusic
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FadeToThemeMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FadeToThemeMusic");

	ASelectionDetailsMenu_C_FadeToThemeMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionAvatarButtonUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SportOptionAvatarButtonUsed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionAvatarButtonUsed");

	ASelectionDetailsMenu_C_SportOptionAvatarButtonUsed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatar
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SportOptionEditAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatar");

	ASelectionDetailsMenu_C_SportOptionEditAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarOpened
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SportOptionEditAvatarOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarOpened");

	ASelectionDetailsMenu_C_SportOptionEditAvatarOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SportOptionEditAvatarComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarComplete");

	ASelectionDetailsMenu_C_SportOptionEditAvatarComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeAvatarButtonUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SportModeAvatarButtonUsed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeAvatarButtonUsed");

	ASelectionDetailsMenu_C_SportModeAvatarButtonUsed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatar
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SportModeEditAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatar");

	ASelectionDetailsMenu_C_SportModeEditAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarOpened
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SportModeEditAvatarOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarOpened");

	ASelectionDetailsMenu_C_SportModeEditAvatarOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SportModeEditAvatarComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarComplete");

	ASelectionDetailsMenu_C_SportModeEditAvatarComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuAvatarButtonUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SelectionMenuAvatarButtonUsed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuAvatarButtonUsed");

	ASelectionDetailsMenu_C_SelectionMenuAvatarButtonUsed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatar
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SelectionMenuEditAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatar");

	ASelectionDetailsMenu_C_SelectionMenuEditAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarOpened
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SelectionMenuEditAvatarOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarOpened");

	ASelectionDetailsMenu_C_SelectionMenuEditAvatarOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::SelectionMenuEditAvatarComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarComplete");

	ASelectionDetailsMenu_C_SelectionMenuEditAvatarComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoAvatarButtonUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::GameInfoAvatarButtonUsed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoAvatarButtonUsed");

	ASelectionDetailsMenu_C_GameInfoAvatarButtonUsed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatar
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::GameInfoEditAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatar");

	ASelectionDetailsMenu_C_GameInfoEditAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarOpened
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::GameInfoEditAvatarOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarOpened");

	ASelectionDetailsMenu_C_GameInfoEditAvatarOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::GameInfoEditAvatarComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarComplete");

	ASelectionDetailsMenu_C_GameInfoEditAvatarComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsAvatarButtonUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::TrainingOptionsAvatarButtonUsed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsAvatarButtonUsed");

	ASelectionDetailsMenu_C_TrainingOptionsAvatarButtonUsed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatar
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TrainingOptionsEditAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatar");

	ASelectionDetailsMenu_C_TrainingOptionsEditAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarOptions
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TrainingOptionsEditAvatarOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarOptions");

	ASelectionDetailsMenu_C_TrainingOptionsEditAvatarOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::TrainingOptionsEditAvatarComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarComplete");

	ASelectionDetailsMenu_C_TrainingOptionsEditAvatarComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.EditSportOptionsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::EditSportOptionsSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.EditSportOptionsSelected");

	ASelectionDetailsMenu_C_EditSportOptionsSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsNavButtons
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnQpDetailsNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsNavButtons");

	ASelectionDetailsMenu_C_SpawnQpDetailsNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SpawnSportOptionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionMenu");

	ASelectionDetailsMenu_C_SpawnSportOptionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToQpInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::BackToQpInfo(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToQpInfo");

	ASelectionDetailsMenu_C_BackToQpInfo_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.AnnouncerbuttonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::AnnouncerbuttonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.AnnouncerbuttonPressed");

	ASelectionDetailsMenu_C_AnnouncerbuttonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsLoaded
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TrainingOptionsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsLoaded");

	ASelectionDetailsMenu_C_TrainingOptionsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASelectionDetailsMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveBeginPlay");

	ASelectionDetailsMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OpenFirstMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OpenFirstMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OpenFirstMenu");

	ASelectionDetailsMenu_C_OpenFirstMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InitialMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::InitialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InitialMenu");

	ASelectionDetailsMenu_C_InitialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuitButtonPressed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::CloseMenu(bool QuitButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenu");

	ASelectionDetailsMenu_C_CloseMenu_Params params;
	params.QuitButtonPressed = QuitButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateMultiplayerModeMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateMultiplayerModeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateMultiplayerModeMenu");

	ASelectionDetailsMenu_C_CreateMultiplayerModeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::MultiplayerModeSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeSelected");

	ASelectionDetailsMenu_C_MultiplayerModeSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToCenter
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ReturnToCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToCenter");

	ASelectionDetailsMenu_C_ReturnToCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CapsuleOn
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CapsuleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CapsuleOn");

	ASelectionDetailsMenu_C_CapsuleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveTick");

	ASelectionDetailsMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GamePaused
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::GamePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GamePaused");

	ASelectionDetailsMenu_C_GamePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameUnpaused
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::GameUnpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameUnpaused");

	ASelectionDetailsMenu_C_GameUnpaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.HeaderDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::HeaderDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.HeaderDestroyed");

	ASelectionDetailsMenu_C_HeaderDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleUpMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ScaleUpMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleUpMenu");

	ASelectionDetailsMenu_C_ScaleUpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleDownMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ScaleDownMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleDownMenu");

	ASelectionDetailsMenu_C_ScaleDownMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ButtonPressed");

	ASelectionDetailsMenu_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeReady
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::MultiplayerModeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeReady");

	ASelectionDetailsMenu_C_MultiplayerModeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveLastMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::RemoveLastMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveLastMenu");

	ASelectionDetailsMenu_C_RemoveLastMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinalShutdown
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::FinalShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinalShutdown");

	ASelectionDetailsMenu_C_FinalShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllAwardsComplete              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::TrophyComplete(bool AllAwardsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyComplete");

	ASelectionDetailsMenu_C_TrophyComplete_Params params;
	params.AllAwardsComplete = AllAwardsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateTrophyMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CreateTrophyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateTrophyMenu");

	ASelectionDetailsMenu_C_CreateTrophyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyLoop
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::TrophyLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyLoop");

	ASelectionDetailsMenu_C_TrophyLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenuWithHeaderHandoff
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::CloseMenuWithHeaderHandoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenuWithHeaderHandoff");

	ASelectionDetailsMenu_C_CloseMenuWithHeaderHandoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.DestroyMenuWithHandoff
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::DestroyMenuWithHandoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DestroyMenuWithHandoff");

	ASelectionDetailsMenu_C_DestroyMenuWithHandoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SkipResults
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::SkipResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SkipResults");

	ASelectionDetailsMenu_C_SkipResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::QuitButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitButtonPressed");

	ASelectionDetailsMenu_C_QuitButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyReadyToSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::TrophyReadyToSpawn(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyReadyToSpawn");

	ASelectionDetailsMenu_C_TrophyReadyToSpawn_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenuEarlyExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::NextMenuEarlyExit(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenuEarlyExit");

	ASelectionDetailsMenu_C_NextMenuEarlyExit_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerTurnedAround
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::PlayerTurnedAround(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerTurnedAround");

	ASelectionDetailsMenu_C_PlayerTurnedAround_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.RecenterMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::RecenterMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RecenterMenu");

	ASelectionDetailsMenu_C_RecenterMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoMenu
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::DemoMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoMenu");

	ASelectionDetailsMenu_C_DemoMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteUpdateComplete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramGameInvite> invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASelectionDetailsMenu_C::InviteUpdateComplete(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteUpdateComplete");

	ASelectionDetailsMenu_C_InviteUpdateComplete_Params params;
	params.wasSuccessful = wasSuccessful;
	params.invites = invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.WaitForInvitesUpdateComplete
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::WaitForInvitesUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.WaitForInvitesUpdateComplete");

	ASelectionDetailsMenu_C_WaitForInvitesUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ChoseSportOpened
// (BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::ChoseSportOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ChoseSportOpened");

	ASelectionDetailsMenu_C_ChoseSportOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoSportChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::DemoSportChosen(SportsScramble_EScramSport Sport)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoSportChosen");

	ASelectionDetailsMenu_C_DemoSportChosen_Params params;
	params.Sport = Sport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.RiftTurnAroundComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::RiftTurnAroundComplete(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.RiftTurnAroundComplete");

	ASelectionDetailsMenu_C_RiftTurnAroundComplete_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayChooseSportAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::PlayChooseSportAudio(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayChooseSportAudio");

	ASelectionDetailsMenu_C_PlayChooseSportAudio_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExecuteUbergraph_SelectionDetailsMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASelectionDetailsMenu_C::ExecuteUbergraph_SelectionDetailsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExecuteUbergraph_SelectionDetailsMenu");

	ASelectionDetailsMenu_C_ExecuteUbergraph_SelectionDetailsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::InvitesUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesUpdated__DelegateSignature");

	ASelectionDetailsMenu_C_InvitesUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.MenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::MenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.MenuOpened__DelegateSignature");

	ASelectionDetailsMenu_C_MenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SinglePlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASelectionDetailsMenu_C::SelectionComplete__DelegateSignature(SportsScramble_EScramSport Sport, bool SinglePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionComplete__DelegateSignature");

	ASelectionDetailsMenu_C_SelectionComplete__DelegateSignature_Params params;
	params.Sport = Sport;
	params.SinglePlayer = SinglePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.OldMenuClear__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::OldMenuClear__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.OldMenuClear__DelegateSignature");

	ASelectionDetailsMenu_C_OldMenuClear__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitToMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASelectionDetailsMenu_C::QuitToMainMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitToMainMenu__DelegateSignature");

	ASelectionDetailsMenu_C_QuitToMainMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
