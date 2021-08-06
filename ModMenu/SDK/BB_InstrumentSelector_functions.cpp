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

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_InstrumentSelector_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.Initialize");

	ABB_InstrumentSelector_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_InstrumentSelector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.UserConstructionScript");

	ABB_InstrumentSelector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABB_InstrumentSelector_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__FinishedFunc");

	ABB_InstrumentSelector_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABB_InstrumentSelector_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__UpdateFunc");

	ABB_InstrumentSelector_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.InstrumentGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_InstrumentSelector_C::InstrumentGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.InstrumentGrabbed");

	ABB_InstrumentSelector_C_InstrumentGrabbed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Grow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballInstrument*     Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*         SpawnAudio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_InstrumentSelector_C::Grow(class ABaseballInstrument* Instrument, class UAudioComponent* SpawnAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.Grow");

	ABB_InstrumentSelector_C_Grow_Params params;
	params.Instrument = Instrument;
	params.SpawnAudio = SpawnAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Shrink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballInstrument*     Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*         DespawnAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_InstrumentSelector_C::Shrink(class ABaseballInstrument* Instrument, class UAudioComponent* DespawnAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.Shrink");

	ABB_InstrumentSelector_C_Shrink_Params params;
	params.Instrument = Instrument;
	params.DespawnAudio = DespawnAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.ShowInstruments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramSportManagerBaseball_Blueprint_C* ScramSportManager              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_InstrumentSelector_C::ShowInstruments(class AScramSportManagerBaseball_Blueprint_C* ScramSportManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.ShowInstruments");

	ABB_InstrumentSelector_C_ShowInstruments_Params params;
	params.ScramSportManager = ScramSportManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_InstrumentSelector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.ReceiveBeginPlay");

	ABB_InstrumentSelector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_InstrumentSelector.BB_InstrumentSelector_C.ExecuteUbergraph_BB_InstrumentSelector
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_InstrumentSelector_C::ExecuteUbergraph_BB_InstrumentSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_InstrumentSelector.BB_InstrumentSelector_C.ExecuteUbergraph_BB_InstrumentSelector");

	ABB_InstrumentSelector_C_ExecuteUbergraph_BB_InstrumentSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
