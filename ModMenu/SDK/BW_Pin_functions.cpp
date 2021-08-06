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

// Function BW_Pin.BW_Pin_C.Exploded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LinearImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 AngularImpulse                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           VelChange                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Pin_C::Exploded(class AActor* Instigator, const struct FVector& LinearImpulse, const struct FVector& AngularImpulse, bool VelChange, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.Exploded");

	ABW_Pin_C_Exploded_Params params;
	params.Instigator = Instigator;
	params.LinearImpulse = LinearImpulse;
	params.AngularImpulse = AngularImpulse;
	params.VelChange = VelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function BW_Pin.BW_Pin_C.TrySetInstigatingBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::TrySetInstigatingBall(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.TrySetInstigatingBall");

	ABW_Pin_C_TrySetInstigatingBall_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Pin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.UserConstructionScript");

	ABW_Pin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.Timeline_Shrink__FinishedFunc
// (BlueprintEvent)
void ABW_Pin_C::Timeline_Shrink__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.Timeline_Shrink__FinishedFunc");

	ABW_Pin_C_Timeline_Shrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.Timeline_Shrink__UpdateFunc
// (BlueprintEvent)
void ABW_Pin_C::Timeline_Shrink__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.Timeline_Shrink__UpdateFunc");

	ABW_Pin_C_Timeline_Shrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.SM_RemovePin
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::SM_RemovePin(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.SM_RemovePin");

	ABW_Pin_C_SM_RemovePin_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Pin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.ReceiveBeginPlay");

	ABW_Pin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.ReceiveEndPlay");

	ABW_Pin_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.PinHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::PinHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.PinHit");

	ABW_Pin_C_PinHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.BonusFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ModifiedScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Pin_C::BonusFX(const struct FVector& Location, int ModifiedScore, bool ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.BonusFX");

	ABW_Pin_C_BonusFX_Params params;
	params.Location = Location;
	params.ModifiedScore = ModifiedScore;
	params.ModifiedBonus = ModifiedBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.OnKnockedDown
// (Event, Protected, BlueprintEvent)
void ABW_Pin_C::OnKnockedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.OnKnockedDown");

	ABW_Pin_C_OnKnockedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.DestroyPrimitive");

	ABW_Pin_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.ServerBonusFX
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ModifiedScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Pin_C::ServerBonusFX(const struct FVector& Location, int ModifiedScore, bool ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.ServerBonusFX");

	ABW_Pin_C_ServerBonusFX_Params params;
	params.Location = Location;
	params.ModifiedScore = ModifiedScore;
	params.ModifiedBonus = ModifiedBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.Multi_RemovePin
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::Multi_RemovePin(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.Multi_RemovePin");

	ABW_Pin_C_Multi_RemovePin_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pin.BW_Pin_C.ExecuteUbergraph_BW_Pin
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pin_C::ExecuteUbergraph_BW_Pin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pin.BW_Pin_C.ExecuteUbergraph_BW_Pin");

	ABW_Pin_C_ExecuteUbergraph_BW_Pin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
