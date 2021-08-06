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

// BlueprintGeneratedClass TennisScramble_GolfBall.TennisScramble_GolfBall_C
// 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
class ATennisScramble_GolfBall_C : public AScrambleEvent_Base_C
{
public:
	class AScramSportManagerTennis_Blueprint_C*        SportManager;                                              // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TennisScramble_GolfBall.TennisScramble_GolfBall_C");
		return ptr;
	}



	class UClass* GetNewBallType();
	void GetRandomBall(class UClass* BallClass, class UClass** NewBall);
	void ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
