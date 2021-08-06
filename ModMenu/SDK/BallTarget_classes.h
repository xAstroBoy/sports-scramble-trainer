#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BallTarget.BallTarget_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBallTarget_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BallTarget.BallTarget_C");
		return ptr;
	}



	void ShowBallTarget(bool Instant, bool* Callback);
	void HideBallTarget(bool Instant, bool* Callback);
	void FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
