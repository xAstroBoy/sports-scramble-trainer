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
	 * Function FunctionLibraryLite.FunctionLibraryLite_C.GetPlayerNamesLite
	 */
	struct UFunctionLibraryLite_C_GetPlayerNamesLite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxLength;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WZYS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Player1;                                                 // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                Player2;                                                 // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function FunctionLibraryLite.FunctionLibraryLite_C.GetLocTextLite
	 */
	struct UFunctionLibraryLite_C_GetLocTextLite_Params
	{
	public:
		class FName                                                LocTextName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
