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

// BlueprintGeneratedClass TennisScramble_ChargedShot.TennisScramble_ChargedShot_C
// 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
class ATennisScramble_ChargedShot_C : public AScrambleEvent_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TennisScramble_ChargedShot.TennisScramble_ChargedShot_C");
		return ptr;
	}



	class UClass* GetNewBallType();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
