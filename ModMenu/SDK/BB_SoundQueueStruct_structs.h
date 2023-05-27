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
	 * UserDefinedStruct BB_SoundQueueStruct.BB_SoundQueueStruct
	 * Size -> 0x002D
	 */
	struct FBB_SoundQueueStruct
	{
	public:
		unsigned char                                              Sound_19_7ABA3136455CC13A8811AC885F8DE03E[0x28];         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BB_SoundQueueStruct.BB_SoundQueueStruct.Sound_19_7ABA3136455CC13A8811AC885F8DE03E
		float                                                      Duration_10_745D5FB84F322DBA847EF9BF99BB7021;            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Queued_15_9BFB0FFB408475EC0E25DEBC6A7B2508;              // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
