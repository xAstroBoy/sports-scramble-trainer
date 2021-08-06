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

// BlueprintGeneratedClass TennisPlayByPlay_Blueprint.TennisPlayByPlay_Blueprint_C
// 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
class ATennisPlayByPlay_Blueprint_C : public APlayByPlayTennis
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TennisPlayByPlay_Blueprint.TennisPlayByPlay_Blueprint_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
