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
	 * Function TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility
	 */
	struct ATrophyProp_Base_C_SetWidgetVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.InitializeColors
	 */
	struct ATrophyProp_Base_C_InitializeColors_Params
	{	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray
	 */
	struct ATrophyProp_Base_C_InitializeMaterialArray_Params
	{	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials
	 */
	struct ATrophyProp_Base_C_ChangeMaterials_Params
	{	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility
	 */
	struct ATrophyProp_Base_C_SetInstanceVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GDZC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.SetupCollision
	 */
	struct ATrophyProp_Base_C_SetupCollision_Params
	{	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript
	 */
	struct ATrophyProp_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay
	 */
	struct ATrophyProp_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base
	 */
	struct ATrophyProp_Base_C_ExecuteUbergraph_TrophyProp_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
