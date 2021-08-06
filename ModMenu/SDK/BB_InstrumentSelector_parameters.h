#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Initialize
struct ABB_InstrumentSelector_C_Initialize_Params
{
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.UserConstructionScript
struct ABB_InstrumentSelector_C_UserConstructionScript_Params
{
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__FinishedFunc
struct ABB_InstrumentSelector_C_Timeline_0__FinishedFunc_Params
{
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__UpdateFunc
struct ABB_InstrumentSelector_C_Timeline_0__UpdateFunc_Params
{
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.InstrumentGrabbed
struct ABB_InstrumentSelector_C_InstrumentGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Grow
struct ABB_InstrumentSelector_C_Grow_Params
{
	class ABaseballInstrument*                         Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SpawnAudio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.Shrink
struct ABB_InstrumentSelector_C_Shrink_Params
{
	class ABaseballInstrument*                         Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             DespawnAudio;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.ShowInstruments
struct ABB_InstrumentSelector_C_ShowInstruments_Params
{
	class AScramSportManagerBaseball_Blueprint_C*      ScramSportManager;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.ReceiveBeginPlay
struct ABB_InstrumentSelector_C_ReceiveBeginPlay_Params
{
};

// Function BB_InstrumentSelector.BB_InstrumentSelector_C.ExecuteUbergraph_BB_InstrumentSelector
struct ABB_InstrumentSelector_C_ExecuteUbergraph_BB_InstrumentSelector_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
