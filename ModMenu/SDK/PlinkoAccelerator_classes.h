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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PlinkoAccelerator.PlinkoAccelerator_C
	 * Size -> 0x0008 (FullSize[0x0380] - InheritedSize[0x0378])
	 */
	class APlinkoAccelerator_C : public ABowlingConveyor
	{
	public:
		class UBoxComponent*                                       Box;                                                     // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
