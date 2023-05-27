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
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.RemoveGameElement
	 */
	struct AFloorLightUpGroup_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.PlayInSound
	 */
	struct AFloorLightUpGroup_C_PlayInSound_Params
	{	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.PlayOutSound
	 */
	struct AFloorLightUpGroup_C_PlayOutSound_Params
	{	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.Initialize
	 */
	struct AFloorLightUpGroup_C_Initialize_Params
	{	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.UserConstructionScript
	 */
	struct AFloorLightUpGroup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.ReceiveBeginPlay
	 */
	struct AFloorLightUpGroup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHit
	 */
	struct AFloorLightUpGroup_C_TargetHit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHitToggleSound
	 */
	struct AFloorLightUpGroup_C_TargetHitToggleSound_Params
	{
	public:
		float                                                      LocationX;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationZ;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.ToggleFloorFX
	 */
	struct AFloorLightUpGroup_C_ToggleFloorFX_Params
	{
	public:
		bool                                                       ShowVFX;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FloorLightUpGroup.FloorLightUpGroup_C.ExecuteUbergraph_FloorLightUpGroup
	 */
	struct AFloorLightUpGroup_C_ExecuteUbergraph_FloorLightUpGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
