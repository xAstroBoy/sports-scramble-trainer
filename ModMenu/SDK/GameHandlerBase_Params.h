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
	 * Function GameHandlerBase.GameHandlerBase_C.PreMenuCleanup
	 */
	struct AGameHandlerBase_C_PreMenuCleanup_Params
	{
	public:
		bool                                                       emptyreturn;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z9XT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GameHandlerBase.GameHandlerBase_C.QuitGame
	 */
	struct AGameHandlerBase_C_QuitGame_Params
	{	};

	/**
	 * Function GameHandlerBase.GameHandlerBase_C.UserConstructionScript
	 */
	struct AGameHandlerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GameHandlerBase.GameHandlerBase_C.TeleportThePlayArea__DelegateSignature
	 */
	struct AGameHandlerBase_C_TeleportThePlayArea__DelegateSignature_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TrainingLevel;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3FOG[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                LevelOverride;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerBase.GameHandlerBase_C.GameOver__DelegateSignature
	 */
	struct AGameHandlerBase_C_GameOver__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
