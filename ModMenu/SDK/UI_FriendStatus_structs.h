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
	 * UserDefinedStruct UI_FriendStatus.UI_FriendStatus
	 * Size -> 0x0012
	 */
	struct FUI_FriendStatus
	{
	public:
		class FString                                              DisplayName_6_1FDB3E09443E0D3267E9DD8686886900;          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       InvitePending_3_DD2A97D842E78B0B90F4679D0CDF9650;        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Online_5_A0354120472A4276CF0BDFA8B2CDF0A8;               // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
