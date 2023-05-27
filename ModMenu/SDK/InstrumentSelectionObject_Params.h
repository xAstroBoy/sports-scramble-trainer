#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.Initialize
	 */
	struct AInstrumentSelectionObject_C_Initialize_Params
	{	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.UserConstructionScript
	 */
	struct AInstrumentSelectionObject_C_UserConstructionScript_Params
	{	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.ReceiveBeginPlay
	 */
	struct AInstrumentSelectionObject_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedTN
	 */
	struct AInstrumentSelectionObject_C_GrabbedTN_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.NotSelected
	 */
	struct AInstrumentSelectionObject_C_NotSelected_Params
	{	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.DestroySelf
	 */
	struct AInstrumentSelectionObject_C_DestroySelf_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.DisableNotSelected
	 */
	struct AInstrumentSelectionObject_C_DisableNotSelected_Params
	{	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedBB
	 */
	struct AInstrumentSelectionObject_C_GrabbedBB_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.GrabbedDB
	 */
	struct AInstrumentSelectionObject_C_GrabbedDB_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.ExecuteUbergraph_InstrumentSelectionObject
	 */
	struct AInstrumentSelectionObject_C_ExecuteUbergraph_InstrumentSelectionObject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelectionObject.InstrumentSelectionObject_C.InstrumentSelected__DelegateSignature
	 */
	struct AInstrumentSelectionObject_C_InstrumentSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
