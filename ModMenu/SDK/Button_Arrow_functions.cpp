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

// Function Button_Arrow.Button_Arrow_C.SetVisualStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AButton_Arrow_C::SetVisualStatus(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.SetVisualStatus");

	AButton_Arrow_C_SetVisualStatus_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.PlayHaptics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerHand_BP_C*   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::PlayHaptics(class AScramPlayerHand_BP_C* Hand, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.PlayHaptics");

	AButton_Arrow_C_PlayHaptics_Params params;
	params.Hand = Hand;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.SetButtonStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableTouch                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AButton_Arrow_C::SetButtonStatus(bool DisableTouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.SetButtonStatus");

	AButton_Arrow_C_SetButtonStatus_Params params;
	params.DisableTouch = DisableTouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Initialize");

	AButton_Arrow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.UserConstructionScript");

	AButton_Arrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Timeline_Scale__FinishedFunc
// (BlueprintEvent)
void AButton_Arrow_C::Timeline_Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Timeline_Scale__FinishedFunc");

	AButton_Arrow_C_Timeline_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Timeline_Scale__UpdateFunc
// (BlueprintEvent)
void AButton_Arrow_C::Timeline_Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Timeline_Scale__UpdateFunc");

	AButton_Arrow_C_Timeline_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__FinishedFunc
// (BlueprintEvent)
void AButton_Arrow_C::Timeline_ButtonMove__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__FinishedFunc");

	AButton_Arrow_C_Timeline_ButtonMove__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__UpdateFunc
// (BlueprintEvent)
void AButton_Arrow_C::Timeline_ButtonMove__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__UpdateFunc");

	AButton_Arrow_C_Timeline_ButtonMove__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__FinishedFunc
// (BlueprintEvent)
void AButton_Arrow_C::Timeline_SpinScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__FinishedFunc");

	AButton_Arrow_C_Timeline_SpinScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__UpdateFunc
// (BlueprintEvent)
void AButton_Arrow_C::Timeline_SpinScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__UpdateFunc");

	AButton_Arrow_C_Timeline_SpinScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	AButton_Arrow_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ReceiveTick");

	AButton_Arrow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.FillStart
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::FillStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.FillStart");

	AButton_Arrow_C_FillStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.FillStop
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::FillStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.FillStop");

	AButton_Arrow_C_FillStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AButton_Arrow_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AButton_Arrow_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ScaleUp");

	AButton_Arrow_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ScaleDown");

	AButton_Arrow_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.PushButton
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::PushButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.PushButton");

	AButton_Arrow_C_PushButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ReleaseButton
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::ReleaseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ReleaseButton");

	AButton_Arrow_C_ReleaseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.DestroyButton
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::DestroyButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.DestroyButton");

	AButton_Arrow_C_DestroyButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AButton_Arrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ReceiveBeginPlay");

	AButton_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.SpinScaleUp
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::SpinScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.SpinScaleUp");

	AButton_Arrow_C_SpinScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.SpinScaleDown
// (BlueprintCallable, BlueprintEvent)
void AButton_Arrow_C::SpinScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.SpinScaleDown");

	AButton_Arrow_C_SpinScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ExternalButtonActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HandActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::ExternalButtonActivate(class AActor* HandActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ExternalButtonActivate");

	AButton_Arrow_C_ExternalButtonActivate_Params params;
	params.HandActor = HandActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ExternalButtonDeactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HandActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::ExternalButtonDeactivate(class AActor* HandActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ExternalButtonDeactivate");

	AButton_Arrow_C_ExternalButtonDeactivate_Params params;
	params.HandActor = HandActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ReceiveEndPlay");

	AButton_Arrow_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  pInteractor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature(class AActor* pInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature");

	AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params params;
	params.pInteractor = pInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  pInteractor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature(class AActor* pInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature");

	AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature_Params params;
	params.pInteractor = pInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  pInteractor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature(class AActor* pInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature");

	AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature_Params params;
	params.pInteractor = pInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  pInteractor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature(class AActor* pInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature");

	AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature_Params params;
	params.pInteractor = pInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.DoHaptic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::DoHaptic(class AActor* Hand, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.DoHaptic");

	AButton_Arrow_C_DoHaptic_Params params;
	params.Hand = Hand;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ExecuteUbergraph_Button_Arrow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::ExecuteUbergraph_Button_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ExecuteUbergraph_Button_Arrow");

	AButton_Arrow_C_ExecuteUbergraph_Button_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Arrow.Button_Arrow_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Arrow_C::ButtonPressed__DelegateSignature(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Arrow.Button_Arrow_C.ButtonPressed__DelegateSignature");

	AButton_Arrow_C_ButtonPressed__DelegateSignature_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
