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
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.Initialize
	 */
	struct ABB_InstrumentSelector_C_Initialize_Params
	{	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.UserConstructionScript
	 */
	struct ABB_InstrumentSelector_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__FinishedFunc
	 */
	struct ABB_InstrumentSelector_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.Timeline_0__UpdateFunc
	 */
	struct ABB_InstrumentSelector_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.InstrumentGrabbed
	 */
	struct ABB_InstrumentSelector_C_InstrumentGrabbed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.Grow
	 */
	struct ABB_InstrumentSelector_C_Grow_Params
	{
	public:
		class ABaseballInstrument*                                 Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     SpawnAudio;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.Shrink
	 */
	struct ABB_InstrumentSelector_C_Shrink_Params
	{
	public:
		class ABaseballInstrument*                                 Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     DespawnAudio;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.ShowInstruments
	 */
	struct ABB_InstrumentSelector_C_ShowInstruments_Params
	{
	public:
		class AScramSportManagerBaseball_Blueprint_C*              ScramSportManager;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.ReceiveBeginPlay
	 */
	struct ABB_InstrumentSelector_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_InstrumentSelector.BB_InstrumentSelector_C.ExecuteUbergraph_BB_InstrumentSelector
	 */
	struct ABB_InstrumentSelector_C_ExecuteUbergraph_BB_InstrumentSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I6PJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
