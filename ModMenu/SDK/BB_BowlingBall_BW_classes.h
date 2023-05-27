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
	 * BlueprintGeneratedClass BB_BowlingBall_BW.BB_BowlingBall_BW_C
	 * Size -> 0x000F (FullSize[0x0F10] - InheritedSize[0x0F01])
	 */
	class ABB_BowlingBall_BW_C : public ABW_Ball_Base_C
	{
	public:
		unsigned char                                              UnknownData_D9K7[0x7];                                   // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0F08(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void UpdateMesh();
		void ExecuteUbergraph_BB_BowlingBall_BW(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
