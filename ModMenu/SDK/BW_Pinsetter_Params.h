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
	 * Function BW_Pinsetter.BW_Pinsetter_C.SetPinPhysicsEnabled
	 */
	struct ABW_Pinsetter_C_SetPinPhysicsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MOGX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.Initialize
	 */
	struct ABW_Pinsetter_C_Initialize_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.GetRollScore
	 */
	struct ABW_Pinsetter_C_GetRollScore_Params
	{
	public:
		int32_t                                                    PinsKnockedDown;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BF4O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.Cleanup
	 */
	struct ABW_Pinsetter_C_Cleanup_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.SpawnAllPins
	 */
	struct ABW_Pinsetter_C_SpawnAllPins_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.UserConstructionScript
	 */
	struct ABW_Pinsetter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__FinishedFunc
	 */
	struct ABW_Pinsetter_C_Timeline_PinReset__FinishedFunc_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__UpdateFunc
	 */
	struct ABW_Pinsetter_C_Timeline_PinReset__UpdateFunc_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.ReceiveBeginPlay
	 */
	struct ABW_Pinsetter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.ReceiveEndPlay
	 */
	struct ABW_Pinsetter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.ResetPins
	 */
	struct ABW_Pinsetter_C_ResetPins_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.RaisePinsetter
	 */
	struct ABW_Pinsetter_C_RaisePinsetter_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.LaneChangeComplete
	 */
	struct ABW_Pinsetter_C_LaneChangeComplete_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.ClearPins
	 */
	struct ABW_Pinsetter_C_ClearPins_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.ExecuteUbergraph_BW_Pinsetter
	 */
	struct ABW_Pinsetter_C_ExecuteUbergraph_BW_Pinsetter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.PindeckHidden__DelegateSignature
	 */
	struct ABW_Pinsetter_C_PindeckHidden__DelegateSignature_Params
	{	};

	/**
	 * Function BW_Pinsetter.BW_Pinsetter_C.PinResetComplete__DelegateSignature
	 */
	struct ABW_Pinsetter_C_PinResetComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
