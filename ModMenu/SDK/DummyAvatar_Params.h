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
	 * Function DummyAvatar.DummyAvatar_C.SetLook
	 */
	struct ADummyAvatar_C_SetLook_Params
	{
	public:
		struct FAvatarLook                                         AvatarLook;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function DummyAvatar.DummyAvatar_C.UserConstructionScript
	 */
	struct ADummyAvatar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DummyAvatar.DummyAvatar_C.ReceiveBeginPlay
	 */
	struct ADummyAvatar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DummyAvatar.DummyAvatar_C.ExecuteUbergraph_DummyAvatar
	 */
	struct ADummyAvatar_C_ExecuteUbergraph_DummyAvatar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
