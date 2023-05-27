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
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.RemoveTrophy
	 */
	struct ABP_TrophyGlove_C_RemoveTrophy_Params
	{	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.HideGlove
	 */
	struct ABP_TrophyGlove_C_HideGlove_Params
	{
	public:
		bool                                                       shouldHide;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUHP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.SetMenuInstrumentVisibility
	 */
	struct ABP_TrophyGlove_C_SetMenuInstrumentVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.SpawnFX
	 */
	struct ABP_TrophyGlove_C_SpawnFX_Params
	{	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.ToggleEnable
	 */
	struct ABP_TrophyGlove_C_ToggleEnable_Params
	{
	public:
		bool                                                       canGrab;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       hasTrophy;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOCS[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.SetRotation
	 */
	struct ABP_TrophyGlove_C_SetRotation_Params
	{
	public:
		float                                                      LerpIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HQU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATrophyGrabbable*                                    Trophy;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.SetTrophyPosition
	 */
	struct ABP_TrophyGlove_C_SetTrophyPosition_Params
	{
	public:
		float                                                      LerpIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G1ZE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATrophyGrabbable*                                    Trophy;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.SetScale
	 */
	struct ABP_TrophyGlove_C_SetScale_Params
	{
	public:
		float                                                      LerpIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GXET[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATrophyGrabbable*                                    Trophy;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.UserConstructionScript
	 */
	struct ABP_TrophyGlove_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.ReceiveBeginPlay
	 */
	struct ABP_TrophyGlove_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.OnShouldGrab
	 */
	struct ABP_TrophyGlove_C_OnShouldGrab_Params
	{
	public:
		class ATrophyGrabbable*                                    Trophy;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyGlove.BP_TrophyGlove_C.ExecuteUbergraph_BP_TrophyGlove
	 */
	struct ABP_TrophyGlove_C_ExecuteUbergraph_BP_TrophyGlove_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0X1D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
