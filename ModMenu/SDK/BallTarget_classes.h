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
	 * BlueprintGeneratedClass BallTarget.BallTarget_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBallTarget_C : public UInterface
	{
	public:
		void ShowBallTarget(bool Instant, bool* Callback);
		void HideBallTarget(bool Instant, bool* Callback);
		void FlashScore(int32_t score, const struct FSlateColor& Color, bool* ScoreFlashed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
