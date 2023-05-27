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
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound
	 */
	struct ABP_TrophyGrabbableBase_C_SpawnBounceSound_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility
	 */
	struct ABP_TrophyGrabbableBase_C_SetVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn
	 */
	struct ABP_TrophyGrabbableBase_C_ForceRespawn_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript
	 */
	struct ABP_TrophyGrabbableBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc
	 */
	struct ABP_TrophyGrabbableBase_C_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc
	 */
	struct ABP_TrophyGrabbableBase_C_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc
	 */
	struct ABP_TrophyGrabbableBase_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc
	 */
	struct ABP_TrophyGrabbableBase_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc
	 */
	struct ABP_TrophyGrabbableBase_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc
	 */
	struct ABP_TrophyGrabbableBase_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn
	 */
	struct ABP_TrophyGrabbableBase_C_FXRespawn_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX
	 */
	struct ABP_TrophyGrabbableBase_C_SpawnFX_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy
	 */
	struct ABP_TrophyGrabbableBase_C_DestroyTrophy_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit
	 */
	struct ABP_TrophyGrabbableBase_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2X25[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX
	 */
	struct ABP_TrophyGrabbableBase_C_Play_Grab_SFX_Params
	{	};

	/**
	 * Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase
	 */
	struct ABP_TrophyGrabbableBase_C_ExecuteUbergraph_BP_TrophyGrabbableBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
