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

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.Initialize
struct AInstrumentSelectionObject_C_Initialize_Params
{
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.UserConstructionScript
struct AInstrumentSelectionObject_C_UserConstructionScript_Params
{
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.ReceiveBeginPlay
struct AInstrumentSelectionObject_C_ReceiveBeginPlay_Params
{
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedTN
struct AInstrumentSelectionObject_C_GrabbedTN_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.NotSelected
struct AInstrumentSelectionObject_C_NotSelected_Params
{
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.DestroySelf
struct AInstrumentSelectionObject_C_DestroySelf_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.DisableNotSelected
struct AInstrumentSelectionObject_C_DisableNotSelected_Params
{
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedBB
struct AInstrumentSelectionObject_C_GrabbedBB_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedDB
struct AInstrumentSelectionObject_C_GrabbedDB_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.ExecuteUbergraph_InstrumentSelectionObject
struct AInstrumentSelectionObject_C_ExecuteUbergraph_InstrumentSelectionObject_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InstrumentSelectionObject.InstrumentSelectionObject_C.InstrumentSelected__DelegateSignature
struct AInstrumentSelectionObject_C_InstrumentSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
