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

// BlueprintGeneratedClass BowlingAI_Blueprint.BowlingAI_Blueprint_C
// 0x000A (FullSize[0x054A] - InheritedSize[0x0540])
class ABowlingAI_Blueprint_C : public AScramBowlingAI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Player1;                                                   // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               RandomizeAvatar;                                           // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BowlingAI_Blueprint.BowlingAI_Blueprint_C");
		return ptr;
	}



	void RandomizeLook();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BowlingAI_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
