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
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.UpdateColor
	 */
	struct ACMN_Trail_Base_C_UpdateColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.DestroyTrailHead
	 */
	struct ACMN_Trail_Base_C_DestroyTrailHead_Params
	{	};

	/**
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.Setup
	 */
	struct ACMN_Trail_Base_C_Setup_Params
	{
	public:
		class AActor*                                              Parent;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.FadeOut
	 */
	struct ACMN_Trail_Base_C_FadeOut_Params
	{
	public:
		bool                                                       snap;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.UserConstructionScript
	 */
	struct ACMN_Trail_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.ReceiveBeginPlay
	 */
	struct ACMN_Trail_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CMN_Trail_Base.CMN_Trail_Base_C.ExecuteUbergraph_CMN_Trail_Base
	 */
	struct ACMN_Trail_Base_C_ExecuteUbergraph_CMN_Trail_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
