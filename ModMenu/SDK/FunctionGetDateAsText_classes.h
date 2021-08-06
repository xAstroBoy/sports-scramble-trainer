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

// BlueprintGeneratedClass FunctionGetDateAsText.FunctionGetDateAsText_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFunctionGetDateAsText_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionGetDateAsText.FunctionGetDateAsText_C");
		return ptr;
	}



	void STATIC_GetDateAsText(const struct FDateTime& date, class UObject* __WorldContext, struct FText* Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
