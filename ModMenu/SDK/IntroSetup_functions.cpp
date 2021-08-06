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

// Function IntroSetup.IntroSetup_C.SpawnCompleteButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::SpawnCompleteButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.SpawnCompleteButton");

	AIntroSetup_C_SpawnCompleteButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.SpawnAvatarMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::SpawnAvatarMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.SpawnAvatarMenu");

	AIntroSetup_C_SpawnAvatarMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.PlayVoiceSelectionMade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::PlayVoiceSelectionMade(int Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.PlayVoiceSelectionMade");

	AIntroSetup_C_PlayVoiceSelectionMade_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.PlayVoiceMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::PlayVoiceMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.PlayVoiceMenuOpen");

	AIntroSetup_C_PlayVoiceMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.UpdateChoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::UpdateChoice(int Choice, int Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.UpdateChoice");

	AIntroSetup_C_UpdateChoice_Params params;
	params.Choice = Choice;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.SpawnButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::SpawnButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.SpawnButtons");

	AIntroSetup_C_SpawnButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.SpawnHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::SpawnHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.SpawnHeader");

	AIntroSetup_C_SpawnHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.MenuVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AIntroSetup_C::MenuVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.MenuVisibility");

	AIntroSetup_C_MenuVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.Initialize");

	AIntroSetup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.UserConstructionScript");

	AIntroSetup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.Timeline_MenuScale__FinishedFunc
// (BlueprintEvent)
void AIntroSetup_C::Timeline_MenuScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.Timeline_MenuScale__FinishedFunc");

	AIntroSetup_C_Timeline_MenuScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.Timeline_MenuScale__UpdateFunc
// (BlueprintEvent)
void AIntroSetup_C::Timeline_MenuScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.Timeline_MenuScale__UpdateFunc");

	AIntroSetup_C_Timeline_MenuScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_4E178D054C9768A0BCED61AFD58B3A39
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_4E178D054C9768A0BCED61AFD58B3A39(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_4E178D054C9768A0BCED61AFD58B3A39");

	AIntroSetup_C_OnLoaded_4E178D054C9768A0BCED61AFD58B3A39_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_F8A0EDC54CC06C1740724DA97E25564D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_F8A0EDC54CC06C1740724DA97E25564D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_F8A0EDC54CC06C1740724DA97E25564D");

	AIntroSetup_C_OnLoaded_F8A0EDC54CC06C1740724DA97E25564D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED");

	AIntroSetup_C_OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C");

	AIntroSetup_C_OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_717C72CD421866AB659C9E89CE31CF32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_717C72CD421866AB659C9E89CE31CF32(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_717C72CD421866AB659C9E89CE31CF32");

	AIntroSetup_C_OnLoaded_717C72CD421866AB659C9E89CE31CF32_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A");

	AIntroSetup_C_OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC");

	AIntroSetup_C_OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AIntroSetup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.ReceiveBeginPlay");

	AIntroSetup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::SelectionMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.SelectionMade");

	AIntroSetup_C_SelectionMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.CloseMenu");

	AIntroSetup_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.ReceiveTick");

	AIntroSetup_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.ButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::ButtonSwapped(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.ButtonSwapped");

	AIntroSetup_C_ButtonSwapped_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.OpenMenu
// (BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::OpenMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.OpenMenu");

	AIntroSetup_C_OpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.HeaderDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::HeaderDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.HeaderDestroyed");

	AIntroSetup_C_HeaderDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.DelayedChoiceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::DelayedChoiceEffect(int Choice, int Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.DelayedChoiceEffect");

	AIntroSetup_C_DelayedChoiceEffect_Params params;
	params.Choice = Choice;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.PlayDelayedVoice
// (BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::PlayDelayedVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.PlayDelayedVoice");

	AIntroSetup_C_PlayDelayedVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.CompleteButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::CompleteButtonSwapped(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.CompleteButtonSwapped");

	AIntroSetup_C_CompleteButtonSwapped_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.AvatarSetupAnimComplete
// (BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::AvatarSetupAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.AvatarSetupAnimComplete");

	AIntroSetup_C_AvatarSetupAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.AsyncPlayMenuOpen
// (BlueprintCallable, BlueprintEvent)
void AIntroSetup_C::AsyncPlayMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.AsyncPlayMenuOpen");

	AIntroSetup_C_AsyncPlayMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.AsyncPlaySelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::AsyncPlaySelectionMade(int Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.AsyncPlaySelectionMade");

	AIntroSetup_C_AsyncPlaySelectionMade_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.ExecuteUbergraph_IntroSetup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::ExecuteUbergraph_IntroSetup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.ExecuteUbergraph_IntroSetup");

	AIntroSetup_C_ExecuteUbergraph_IntroSetup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IntroSetup.IntroSetup_C.ChoiceMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroSetup_C::ChoiceMade__DelegateSignature(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroSetup.IntroSetup_C.ChoiceMade__DelegateSignature");

	AIntroSetup_C_ChoiceMade__DelegateSignature_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
