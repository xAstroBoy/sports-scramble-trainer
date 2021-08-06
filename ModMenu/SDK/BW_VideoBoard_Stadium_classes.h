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

// BlueprintGeneratedClass BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C
// 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
class ABW_VideoBoard_Stadium_C : public ABW_VideoBoard_Training_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C");
		return ptr;
	}



	void PlayDefaultMovie(bool* Playing);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
