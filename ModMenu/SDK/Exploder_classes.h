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

// BlueprintGeneratedClass Exploder.Exploder_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExploder_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Exploder.Exploder_C");
		return ptr;
	}



	void TryExplode(bool Force, bool* Success);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
