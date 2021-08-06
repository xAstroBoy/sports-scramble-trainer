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

// BlueprintGeneratedClass ArenaScrambler.ArenaScrambler_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UArenaScrambler_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArenaScrambler.ArenaScrambler_C");
		return ptr;
	}



	void ArenaScrambleEnd(bool* Callback);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
