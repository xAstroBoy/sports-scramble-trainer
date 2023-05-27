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
	 * Function PauseCapsule.PauseCapsule_C.Cleanup
	 */
	struct APauseCapsule_C_Cleanup_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.SpawnPauseMenu
	 */
	struct APauseCapsule_C_SpawnPauseMenu_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.Initialize
	 */
	struct APauseCapsule_C_Initialize_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.UserConstructionScript
	 */
	struct APauseCapsule_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__FinishedFunc
	 */
	struct APauseCapsule_C_Timeline_BlackPulse__FinishedFunc_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__UpdateFunc
	 */
	struct APauseCapsule_C_Timeline_BlackPulse__UpdateFunc_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.ReceiveBeginPlay
	 */
	struct APauseCapsule_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.ShowCapsule
	 */
	struct APauseCapsule_C_ShowCapsule_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.Unpause
	 */
	struct APauseCapsule_C_Unpause_Params
	{
	public:
		bool                                                       KeepCapsule;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.ReceiveEndPlay
	 */
	struct APauseCapsule_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.BlackPulse
	 */
	struct APauseCapsule_C_BlackPulse_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.BlackPulseOff
	 */
	struct APauseCapsule_C_BlackPulseOff_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.CreateCapsule
	 */
	struct APauseCapsule_C_CreateCapsule_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.RemoveCapsule
	 */
	struct APauseCapsule_C_RemoveCapsule_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.ReceiveTick
	 */
	struct APauseCapsule_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.RemoveThisActor
	 */
	struct APauseCapsule_C_RemoveThisActor_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.DemoUnpause
	 */
	struct APauseCapsule_C_DemoUnpause_Params
	{
	public:
		bool                                                       KeepCapsule;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReenablePause;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.BeginUnpause
	 */
	struct APauseCapsule_C_BeginUnpause_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.QueuedRemoveCapsule
	 */
	struct APauseCapsule_C_QueuedRemoveCapsule_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.ExecuteUbergraph_PauseCapsule
	 */
	struct APauseCapsule_C_ExecuteUbergraph_PauseCapsule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.PulseEnd__DelegateSignature
	 */
	struct APauseCapsule_C_PulseEnd__DelegateSignature_Params
	{	};

	/**
	 * Function PauseCapsule.PauseCapsule_C.TransitionReady__DelegateSignature
	 */
	struct APauseCapsule_C_TransitionReady__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
