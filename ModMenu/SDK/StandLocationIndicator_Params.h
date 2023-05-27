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
	 * Function StandLocationIndicator.StandLocationIndicator_C.UserConstructionScript
	 */
	struct AStandLocationIndicator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.OnLoaded_2D56AD694220C712056ABE8A85609617
	 */
	struct AStandLocationIndicator_C_OnLoaded_2D56AD694220C712056ABE8A85609617_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.ReceiveBeginPlay
	 */
	struct AStandLocationIndicator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.Show
	 */
	struct AStandLocationIndicator_C_Show_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.Hide
	 */
	struct AStandLocationIndicator_C_Hide_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.OnPlayerEnter
	 */
	struct AStandLocationIndicator_C_OnPlayerEnter_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.OnPlayerExit
	 */
	struct AStandLocationIndicator_C_OnPlayerExit_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.DestroySelf
	 */
	struct AStandLocationIndicator_C_DestroySelf_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.SystemFinished
	 */
	struct AStandLocationIndicator_C_SystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.AttractLoop
	 */
	struct AStandLocationIndicator_C_AttractLoop_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.StopAttract
	 */
	struct AStandLocationIndicator_C_StopAttract_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.ReceiveTick
	 */
	struct AStandLocationIndicator_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.ReceiveEndPlay
	 */
	struct AStandLocationIndicator_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.ExecuteUbergraph_StandLocationIndicator
	 */
	struct AStandLocationIndicator_C_ExecuteUbergraph_StandLocationIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ACC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.PlayerLeftPosition__DelegateSignature
	 */
	struct AStandLocationIndicator_C_PlayerLeftPosition__DelegateSignature_Params
	{	};

	/**
	 * Function StandLocationIndicator.StandLocationIndicator_C.PlayerReachedPosition__DelegateSignature
	 */
	struct AStandLocationIndicator_C_PlayerReachedPosition__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
