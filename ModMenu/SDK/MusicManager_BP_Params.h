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
	 * Function MusicManager_BP.MusicManager_BP_C.UserConstructionScript
	 */
	struct AMusicManager_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MusicManager_BP.MusicManager_BP_C.ReceiveBeginPlay
	 */
	struct AMusicManager_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MusicManager_BP.MusicManager_BP_C.LeveLoaded
	 */
	struct AMusicManager_BP_C_LeveLoaded_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MusicManager_BP.MusicManager_BP_C.PlayEntry
	 */
	struct AMusicManager_BP_C_PlayEntry_Params
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeTime;                                                // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MusicManager_BP.MusicManager_BP_C.ExecuteUbergraph_MusicManager_BP
	 */
	struct AMusicManager_BP_C_ExecuteUbergraph_MusicManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGXL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
