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

// BlueprintGeneratedClass TennisScramble_SpecificRacket.TennisScramble_SpecificRacket_C
// 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
class ATennisScramble_SpecificRacket_C : public AScrambleEvent_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TennisScramble_SpecificRacket.TennisScramble_SpecificRacket_C");
		return ptr;
	}



	void RacquetChanged(class AActor* Player, class ATN_Instrument_Base_C* Instrument);
	void ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
