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
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetGloveColor
	 */
	struct ABaseballAIPitcher_Blueprint_C_SetGloveColor_Params
	{
	public:
		bool                                                       Home;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetLook
	 */
	struct ABaseballAIPitcher_Blueprint_C_SetLook_Params
	{	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.RandomizeLook
	 */
	struct ABaseballAIPitcher_Blueprint_C_RandomizeLook_Params
	{	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.GetScrambleBallClass
	 */
	struct ABaseballAIPitcher_Blueprint_C_GetScrambleBallClass_Params
	{
	public:
		class UClass*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetTeamColor
	 */
	struct ABaseballAIPitcher_Blueprint_C_SetTeamColor_Params
	{
	public:
		bool                                                       Home;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.UserConstructionScript
	 */
	struct ABaseballAIPitcher_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.PlayMittSound
	 */
	struct ABaseballAIPitcher_Blueprint_C_PlayMittSound_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ReceiveBeginPlay
	 */
	struct ABaseballAIPitcher_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ExecuteUbergraph_BaseballAIPitcher_Blueprint
	 */
	struct ABaseballAIPitcher_Blueprint_C_ExecuteUbergraph_BaseballAIPitcher_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M73L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.LookRandomized__DelegateSignature
	 */
	struct ABaseballAIPitcher_Blueprint_C_LookRandomized__DelegateSignature_Params
	{
	public:
		struct FAvatarLook                                         AvatarLook;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
